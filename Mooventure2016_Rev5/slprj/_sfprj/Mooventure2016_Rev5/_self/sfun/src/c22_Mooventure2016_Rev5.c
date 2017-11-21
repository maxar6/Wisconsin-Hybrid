/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c22_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c22_IN_NO_ACTIVE_CHILD         (0U)
#define c22_IN_Normal                  (3U)
#define c22_IN_Solid                   (4U)
#define c22_IN_FlashOn                 (2U)
#define c22_IN_FlashOff                (1U)
#define c22_IN_Wait                    (5U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c22_update_debugger_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c22_st);
static void c22_set_sim_state_side_effects_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c22_Mooventure2016_Rev5(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c22_chartstep_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c22_machineNumber, uint32_T
  c22_chartNumber);
static const mxArray *c22_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData);
static int32_T c22_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static void c22_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData);
static const mxArray *c22_b_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData);
static uint8_T c22_b_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_b_tp_Normal, const char_T *c22_identifier);
static uint8_T c22_c_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static void c22_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData);
static const mxArray *c22_c_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData);
static real_T c22_d_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_engTemp, const char_T *c22_identifier);
static real_T c22_e_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId);
static void c22_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData);
static const mxArray *c22_d_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData);
static const mxArray *c22_f_emlrt_marshallIn
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c22_b_setSimStateSideEffectsInfo, const char_T *c22_identifier);
static const mxArray *c22_g_emlrt_marshallIn
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c22_u,
   const emlrtMsgIdentifier *c22_parentId);
static void init_dsm_address_info(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c22_engTemp;
  real_T *c22_transTemp;
  real_T *c22_timerOut;
  c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c22_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c22_doSetSimStateSideEffects = 0U;
  chartInstance->c22_setSimStateSideEffectsInfo = NULL;
  chartInstance->c22_tp_FlashOff = 0U;
  chartInstance->c22_tp_FlashOn = 0U;
  chartInstance->c22_tp_Normal = 0U;
  chartInstance->c22_tp_Solid = 0U;
  chartInstance->c22_tp_Wait = 0U;
  chartInstance->c22_is_active_c22_Mooventure2016_Rev5 = 0U;
  chartInstance->c22_is_c22_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c22_engTemp = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c22_transTemp = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c22_timerOut = 0.0;
  }
}

static void initialize_params_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c22_update_debugger_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c22_prevAniVal;
  c22_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c22_is_active_c22_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 21U, chartInstance->c22_sfEvent);
  }

  if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Normal) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
  }

  if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Solid) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c22_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c22_sfEvent);
  }

  if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_FlashOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
  }

  if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_FlashOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
  }

  if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c22_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c22_sfEvent);
  }

  sf_debug_set_animation(c22_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c22_st;
  const mxArray *c22_y = NULL;
  real_T c22_hoistedGlobal;
  real_T c22_u;
  const mxArray *c22_b_y = NULL;
  real_T c22_b_hoistedGlobal;
  real_T c22_b_u;
  const mxArray *c22_c_y = NULL;
  real_T c22_c_hoistedGlobal;
  real_T c22_c_u;
  const mxArray *c22_d_y = NULL;
  uint8_T c22_d_hoistedGlobal;
  uint8_T c22_d_u;
  const mxArray *c22_e_y = NULL;
  uint8_T c22_e_hoistedGlobal;
  uint8_T c22_e_u;
  const mxArray *c22_f_y = NULL;
  real_T *c22_engTemp;
  real_T *c22_timerOut;
  real_T *c22_transTemp;
  c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c22_st = NULL;
  c22_st = NULL;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_createcellarray(5));
  c22_hoistedGlobal = *c22_engTemp;
  c22_u = c22_hoistedGlobal;
  c22_b_y = NULL;
  sf_mex_assign(&c22_b_y, sf_mex_create("y", &c22_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 0, c22_b_y);
  c22_b_hoistedGlobal = *c22_timerOut;
  c22_b_u = c22_b_hoistedGlobal;
  c22_c_y = NULL;
  sf_mex_assign(&c22_c_y, sf_mex_create("y", &c22_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 1, c22_c_y);
  c22_c_hoistedGlobal = *c22_transTemp;
  c22_c_u = c22_c_hoistedGlobal;
  c22_d_y = NULL;
  sf_mex_assign(&c22_d_y, sf_mex_create("y", &c22_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 2, c22_d_y);
  c22_d_hoistedGlobal = chartInstance->c22_is_active_c22_Mooventure2016_Rev5;
  c22_d_u = c22_d_hoistedGlobal;
  c22_e_y = NULL;
  sf_mex_assign(&c22_e_y, sf_mex_create("y", &c22_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 3, c22_e_y);
  c22_e_hoistedGlobal = chartInstance->c22_is_c22_Mooventure2016_Rev5;
  c22_e_u = c22_e_hoistedGlobal;
  c22_f_y = NULL;
  sf_mex_assign(&c22_f_y, sf_mex_create("y", &c22_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c22_y, 4, c22_f_y);
  sf_mex_assign(&c22_st, c22_y);
  return c22_st;
}

static void set_sim_state_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c22_st)
{
  const mxArray *c22_u;
  real_T *c22_engTemp;
  real_T *c22_timerOut;
  real_T *c22_transTemp;
  c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c22_u = sf_mex_dup(c22_st);
  *c22_engTemp = c22_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c22_u, 0)), "engTemp");
  *c22_timerOut = c22_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c22_u, 1)), "timerOut");
  *c22_transTemp = c22_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c22_u, 2)), "transTemp");
  chartInstance->c22_is_active_c22_Mooventure2016_Rev5 = c22_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c22_u, 3)),
     "is_active_c22_Mooventure2016_Rev5");
  chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c22_u, 4)),
     "is_c22_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c22_setSimStateSideEffectsInfo,
                c22_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c22_u, 5)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c22_u);
  chartInstance->c22_doSetSimStateSideEffects = 1U;
  c22_update_debugger_state_c22_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c22_st);
}

static void c22_set_sim_state_side_effects_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c22_doSetSimStateSideEffects != 0) {
    if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_FlashOff) {
      chartInstance->c22_tp_FlashOff = 1U;
    } else {
      chartInstance->c22_tp_FlashOff = 0U;
    }

    if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_FlashOn) {
      chartInstance->c22_tp_FlashOn = 1U;
    } else {
      chartInstance->c22_tp_FlashOn = 0U;
    }

    if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Normal) {
      chartInstance->c22_tp_Normal = 1U;
    } else {
      chartInstance->c22_tp_Normal = 0U;
    }

    if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Solid) {
      chartInstance->c22_tp_Solid = 1U;
    } else {
      chartInstance->c22_tp_Solid = 0U;
    }

    if (chartInstance->c22_is_c22_Mooventure2016_Rev5 == c22_IN_Wait) {
      chartInstance->c22_tp_Wait = 1U;
    } else {
      chartInstance->c22_tp_Wait = 0U;
    }

    chartInstance->c22_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c22_setSimStateSideEffectsInfo);
}

static void sf_c22_Mooventure2016_Rev5(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T *c22_engTemp;
  real_T *c22_transTemp;
  real_T *c22_solid;
  real_T *c22_flash;
  boolean_T *c22_timerIn;
  real_T *c22_timerOut;
  c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c22_timerIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c22_flash = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c22_solid = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c22_set_sim_state_side_effects_c22_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 21U, chartInstance->c22_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c22_engTemp, 0U);
  _SFD_DATA_RANGE_CHECK(*c22_transTemp, 1U);
  _SFD_DATA_RANGE_CHECK(*c22_solid, 2U);
  _SFD_DATA_RANGE_CHECK(*c22_flash, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c22_timerIn, 4U);
  _SFD_DATA_RANGE_CHECK(*c22_timerOut, 5U);
  chartInstance->c22_sfEvent = CALL_EVENT;
  c22_chartstep_c22_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c22_chartstep_c22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c22_flash;
  real_T *c22_engTemp;
  real_T *c22_transTemp;
  real_T *c22_timerOut;
  real_T *c22_solid;
  boolean_T *c22_timerIn;
  c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c22_timerIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c22_flash = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c22_solid = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 21U, chartInstance->c22_sfEvent);
  if ((int16_T)chartInstance->c22_is_active_c22_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 21U, chartInstance->c22_sfEvent);
    chartInstance->c22_is_active_c22_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, chartInstance->c22_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c22_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
    chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Normal;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
    chartInstance->c22_tp_Normal = 1U;
  } else {
    switch (chartInstance->c22_is_c22_Mooventure2016_Rev5) {
     case c22_IN_FlashOff:
      CV_CHART_EVAL(21, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c22_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c22_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c22_flash == 0.0
            != 0U, chartInstance->c22_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_FlashOff = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
        chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Normal;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Normal = 1U;
      } else {
        *c22_engTemp = 23.0;
        _SFD_DATA_RANGE_CHECK(*c22_engTemp, 0U);
        *c22_transTemp = 23.0;
        _SFD_DATA_RANGE_CHECK(*c22_transTemp, 1U);
        *c22_timerOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c22_timerOut, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c22_sfEvent);
      break;

     case c22_IN_FlashOn:
      CV_CHART_EVAL(21, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c22_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c22_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c22_flash == 0.0
            != 0U, chartInstance->c22_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c22_engTemp == 200.0) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_FlashOn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
        chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Normal;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Normal = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     chartInstance->c22_sfEvent);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c22_engTemp ==
              200.0 != 0U, chartInstance->c22_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c22_sfEvent);
          chartInstance->c22_tp_FlashOn = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
          chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Wait;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c22_sfEvent);
          chartInstance->c22_tp_Wait = 1U;
        } else {
          *c22_engTemp = 200.0;
          _SFD_DATA_RANGE_CHECK(*c22_engTemp, 0U);
          *c22_transTemp = 200.0;
          _SFD_DATA_RANGE_CHECK(*c22_transTemp, 1U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c22_sfEvent);
      break;

     case c22_IN_Normal:
      CV_CHART_EVAL(21, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c22_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c22_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c22_solid == 1.0
            != 0U, chartInstance->c22_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if (*c22_flash == 1.0) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Normal = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
        chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Solid;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Solid = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c22_sfEvent);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c22_flash ==
              1.0 != 0U, chartInstance->c22_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c22_sfEvent);
          chartInstance->c22_tp_Normal = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
          chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_FlashOn;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c22_sfEvent);
          chartInstance->c22_tp_FlashOn = 1U;
        } else {
          *c22_engTemp = 23.0;
          _SFD_DATA_RANGE_CHECK(*c22_engTemp, 0U);
          *c22_transTemp = 23.0;
          _SFD_DATA_RANGE_CHECK(*c22_transTemp, 1U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c22_sfEvent);
      break;

     case c22_IN_Solid:
      CV_CHART_EVAL(21, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c22_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c22_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c22_solid == 0.0
            != 0U, chartInstance->c22_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Solid = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c22_sfEvent);
        chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_Normal;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Normal = 1U;
      } else {
        *c22_engTemp = 200.0;
        _SFD_DATA_RANGE_CHECK(*c22_engTemp, 0U);
        *c22_transTemp = 200.0;
        _SFD_DATA_RANGE_CHECK(*c22_transTemp, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c22_sfEvent);
      break;

     case c22_IN_Wait:
      CV_CHART_EVAL(21, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c22_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c22_sfEvent);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, (int16_T)
            *c22_timerIn == 1 != 0U, chartInstance->c22_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_Wait = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c22_sfEvent);
        chartInstance->c22_is_c22_Mooventure2016_Rev5 = c22_IN_FlashOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
        chartInstance->c22_tp_FlashOff = 1U;
      } else {
        *c22_timerOut = 1.0;
        _SFD_DATA_RANGE_CHECK(*c22_timerOut, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c22_sfEvent);
      break;

     default:
      CV_CHART_EVAL(21, 0, 0);
      chartInstance->c22_is_c22_Mooventure2016_Rev5 = (uint8_T)
        c22_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c22_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, chartInstance->c22_sfEvent);
}

static void initSimStructsc22_Mooventure2016_Rev5
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c22_machineNumber, uint32_T
  c22_chartNumber)
{
}

const mxArray *sf_c22_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c22_nameCaptureInfo = NULL;
  c22_nameCaptureInfo = NULL;
  sf_mex_assign(&c22_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c22_nameCaptureInfo;
}

static const mxArray *c22_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData)
{
  const mxArray *c22_mxArrayOutData = NULL;
  int32_T c22_u;
  const mxArray *c22_y = NULL;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_mxArrayOutData = NULL;
  c22_u = *(int32_T *)c22_inData;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_create("y", &c22_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_mxArrayOutData, c22_y);
  return c22_mxArrayOutData;
}

static int32_T c22_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  int32_T c22_y;
  int32_T c22_i0;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_i0, 1, 6, 0U, 0, 0U, 0);
  c22_y = c22_i0;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void c22_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData)
{
  const mxArray *c22_b_sfEvent;
  const char_T *c22_identifier;
  emlrtMsgIdentifier c22_thisId;
  int32_T c22_y;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_b_sfEvent = sf_mex_dup(c22_mxArrayInData);
  c22_identifier = c22_varName;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  c22_y = c22_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_b_sfEvent),
    &c22_thisId);
  sf_mex_destroy(&c22_b_sfEvent);
  *(int32_T *)c22_outData = c22_y;
  sf_mex_destroy(&c22_mxArrayInData);
}

static const mxArray *c22_b_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData)
{
  const mxArray *c22_mxArrayOutData = NULL;
  uint8_T c22_u;
  const mxArray *c22_y = NULL;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_mxArrayOutData = NULL;
  c22_u = *(uint8_T *)c22_inData;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_create("y", &c22_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_mxArrayOutData, c22_y);
  return c22_mxArrayOutData;
}

static uint8_T c22_b_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_b_tp_Normal, const char_T *c22_identifier)
{
  uint8_T c22_y;
  emlrtMsgIdentifier c22_thisId;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  c22_y = c22_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_b_tp_Normal),
    &c22_thisId);
  sf_mex_destroy(&c22_b_tp_Normal);
  return c22_y;
}

static uint8_T c22_c_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  uint8_T c22_y;
  uint8_T c22_u0;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_u0, 1, 3, 0U, 0, 0U, 0);
  c22_y = c22_u0;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void c22_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData)
{
  const mxArray *c22_b_tp_Normal;
  const char_T *c22_identifier;
  emlrtMsgIdentifier c22_thisId;
  uint8_T c22_y;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_b_tp_Normal = sf_mex_dup(c22_mxArrayInData);
  c22_identifier = c22_varName;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  c22_y = c22_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_b_tp_Normal),
    &c22_thisId);
  sf_mex_destroy(&c22_b_tp_Normal);
  *(uint8_T *)c22_outData = c22_y;
  sf_mex_destroy(&c22_mxArrayInData);
}

static const mxArray *c22_c_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData)
{
  const mxArray *c22_mxArrayOutData = NULL;
  real_T c22_u;
  const mxArray *c22_y = NULL;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_mxArrayOutData = NULL;
  c22_u = *(real_T *)c22_inData;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_create("y", &c22_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_mxArrayOutData, c22_y);
  return c22_mxArrayOutData;
}

static real_T c22_d_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_engTemp, const char_T *c22_identifier)
{
  real_T c22_y;
  emlrtMsgIdentifier c22_thisId;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  c22_y = c22_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_engTemp),
    &c22_thisId);
  sf_mex_destroy(&c22_engTemp);
  return c22_y;
}

static real_T c22_e_emlrt_marshallIn(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c22_u, const emlrtMsgIdentifier *c22_parentId)
{
  real_T c22_y;
  real_T c22_d0;
  sf_mex_import(c22_parentId, sf_mex_dup(c22_u), &c22_d0, 1, 0, 0U, 0, 0U, 0);
  c22_y = c22_d0;
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void c22_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c22_mxArrayInData, const char_T *c22_varName, void *c22_outData)
{
  const mxArray *c22_engTemp;
  const char_T *c22_identifier;
  emlrtMsgIdentifier c22_thisId;
  real_T c22_y;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_engTemp = sf_mex_dup(c22_mxArrayInData);
  c22_identifier = c22_varName;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  c22_y = c22_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c22_engTemp),
    &c22_thisId);
  sf_mex_destroy(&c22_engTemp);
  *(real_T *)c22_outData = c22_y;
  sf_mex_destroy(&c22_mxArrayInData);
}

static const mxArray *c22_d_sf_marshallOut(void *chartInstanceVoid, void
  *c22_inData)
{
  const mxArray *c22_mxArrayOutData = NULL;
  boolean_T c22_u;
  const mxArray *c22_y = NULL;
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c22_mxArrayOutData = NULL;
  c22_u = *(boolean_T *)c22_inData;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_create("y", &c22_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c22_mxArrayOutData, c22_y);
  return c22_mxArrayOutData;
}

static const mxArray *c22_f_emlrt_marshallIn
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c22_b_setSimStateSideEffectsInfo, const char_T *c22_identifier)
{
  const mxArray *c22_y = NULL;
  emlrtMsgIdentifier c22_thisId;
  c22_y = NULL;
  c22_thisId.fIdentifier = c22_identifier;
  c22_thisId.fParent = NULL;
  sf_mex_assign(&c22_y, c22_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c22_b_setSimStateSideEffectsInfo), &c22_thisId));
  sf_mex_destroy(&c22_b_setSimStateSideEffectsInfo);
  return c22_y;
}

static const mxArray *c22_g_emlrt_marshallIn
  (SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c22_u,
   const emlrtMsgIdentifier *c22_parentId)
{
  const mxArray *c22_y = NULL;
  c22_y = NULL;
  sf_mex_assign(&c22_y, sf_mex_duplicatearraysafe(&c22_u));
  sf_mex_destroy(&c22_u);
  return c22_y;
}

static void init_dsm_address_info(SFc22_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c22_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3137161759U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3660911397U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3680031804U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4078892429U);
}

mxArray *sf_c22_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2996120848U);
    pr[1] = (double)(2471589029U);
    pr[2] = (double)(113238847U);
    pr[3] = (double)(1503381188U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c22_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[15],T\"engTemp\",},{M[1],M[27],T\"timerOut\",},{M[1],M[16],T\"transTemp\",},{M[8],M[0],T\"is_active_c22_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c22_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c22_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           22,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"engTemp");
          _SFD_SET_DATA_PROPS(1,2,0,1,"transTemp");
          _SFD_SET_DATA_PROPS(2,1,1,0,"solid");
          _SFD_SET_DATA_PROPS(3,1,1,0,"flash");
          _SFD_SET_DATA_PROPS(4,1,1,0,"timerIn");
          _SFD_SET_DATA_PROPS(5,2,0,1,"timerOut");
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

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

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

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

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

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_c_sf_marshallOut,(MexInFcnForType)
          c22_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_c_sf_marshallOut,(MexInFcnForType)
          c22_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c22_c_sf_marshallOut,(MexInFcnForType)
          c22_c_sf_marshallIn);

        {
          real_T *c22_engTemp;
          real_T *c22_transTemp;
          real_T *c22_solid;
          real_T *c22_flash;
          boolean_T *c22_timerIn;
          real_T *c22_timerOut;
          c22_timerOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c22_timerIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c22_flash = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c22_solid = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c22_transTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c22_engTemp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c22_engTemp);
          _SFD_SET_DATA_VALUE_PTR(1U, c22_transTemp);
          _SFD_SET_DATA_VALUE_PTR(2U, c22_solid);
          _SFD_SET_DATA_VALUE_PTR(3U, c22_flash);
          _SFD_SET_DATA_VALUE_PTR(4U, c22_timerIn);
          _SFD_SET_DATA_VALUE_PTR(5U, c22_timerOut);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c22_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c22_Mooventure2016_Rev5
    ((SFc22_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c22_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c22_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c22_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c22_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c22_Mooventure2016_Rev5
    ((SFc22_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c22_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c22_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c22_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c22_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c22_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c22_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c22_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c22_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc22_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc22_Mooventure2016_Rev5((SFc22_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c22_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c22_Mooventure2016_Rev5
      ((SFc22_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c22_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      22);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",22,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",22,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",22,3);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",22,3);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",22);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3978194798U));
  ssSetChecksum1(S,(1904716766U));
  ssSetChecksum2(S,(1556498791U));
  ssSetChecksum3(S,(464287570U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c22_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",22);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c22_Mooventure2016_Rev5(SimStruct *S)
{
  SFc22_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc22_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc22_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc22_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c22_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c22_Mooventure2016_Rev5;
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

void c22_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c22_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c22_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c22_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c22_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
