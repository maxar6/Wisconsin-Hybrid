/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c13_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c13_IN_NO_ACTIVE_CHILD         (0U)
#define c13_IN_NoLimit                 (5U)
#define c13_IN_Level1Limit             (1U)
#define c13_IN_Level2Limit             (2U)
#define c13_IN_Level3Limit             (3U)
#define c13_IN_Level4Limit             (4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void c13_update_debugger_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_st);
static void c13_set_sim_state_side_effects_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void c13_chartstep_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void c13_Level1Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber);
static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static int32_T c13_emlrt_marshallIn(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static uint8_T c13_b_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_tp_NoLimit, const char_T *c13_identifier);
static uint8_T c13_c_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static real_T c13_d_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_State, const char_T *c13_identifier);
static real_T c13_e_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static const mxArray *c13_f_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_setSimStateSideEffectsInfo, const char_T *c13_identifier);
static const mxArray *c13_g_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void init_dsm_address_info(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c13_State;
  real_T *c13_Setpoint;
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c13_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c13_doSetSimStateSideEffects = 0U;
  chartInstance->c13_setSimStateSideEffectsInfo = NULL;
  chartInstance->c13_tp_Level1Limit = 0U;
  chartInstance->c13_tp_Level2Limit = 0U;
  chartInstance->c13_tp_Level3Limit = 0U;
  chartInstance->c13_tp_Level4Limit = 0U;
  chartInstance->c13_tp_NoLimit = 0U;
  chartInstance->c13_is_active_c13_BaseEngineController_A02 = 0U;
  chartInstance->c13_is_c13_BaseEngineController_A02 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c13_State = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c13_Setpoint = 0.0;
  }
}

static void initialize_params_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c13_update_debugger_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c13_prevAniVal;
  c13_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c13_is_active_c13_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 11U, chartInstance->c13_sfEvent);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_NoLimit) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level1Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level2Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level3Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level4Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
  }

  sf_debug_set_animation(c13_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c13_st;
  const mxArray *c13_y = NULL;
  real_T c13_hoistedGlobal;
  real_T c13_u;
  const mxArray *c13_b_y = NULL;
  real_T c13_b_hoistedGlobal;
  real_T c13_b_u;
  const mxArray *c13_c_y = NULL;
  uint8_T c13_c_hoistedGlobal;
  uint8_T c13_c_u;
  const mxArray *c13_d_y = NULL;
  uint8_T c13_d_hoistedGlobal;
  uint8_T c13_d_u;
  const mxArray *c13_e_y = NULL;
  real_T *c13_Setpoint;
  real_T *c13_State;
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_st = NULL;
  c13_st = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_createcellarray(4));
  c13_hoistedGlobal = *c13_Setpoint;
  c13_u = c13_hoistedGlobal;
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 0, c13_b_y);
  c13_b_hoistedGlobal = *c13_State;
  c13_b_u = c13_b_hoistedGlobal;
  c13_c_y = NULL;
  sf_mex_assign(&c13_c_y, sf_mex_create("y", &c13_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 1, c13_c_y);
  c13_c_hoistedGlobal =
    chartInstance->c13_is_active_c13_BaseEngineController_A02;
  c13_c_u = c13_c_hoistedGlobal;
  c13_d_y = NULL;
  sf_mex_assign(&c13_d_y, sf_mex_create("y", &c13_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 2, c13_d_y);
  c13_d_hoistedGlobal = chartInstance->c13_is_c13_BaseEngineController_A02;
  c13_d_u = c13_d_hoistedGlobal;
  c13_e_y = NULL;
  sf_mex_assign(&c13_e_y, sf_mex_create("y", &c13_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 3, c13_e_y);
  sf_mex_assign(&c13_st, c13_y);
  return c13_st;
}

static void set_sim_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_st)
{
  const mxArray *c13_u;
  real_T *c13_Setpoint;
  real_T *c13_State;
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_u = sf_mex_dup(c13_st);
  *c13_Setpoint = c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c13_u, 0)), "Setpoint");
  *c13_State = c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 1)), "State");
  chartInstance->c13_is_active_c13_BaseEngineController_A02 =
    c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 2)),
    "is_active_c13_BaseEngineController_A02");
  chartInstance->c13_is_c13_BaseEngineController_A02 = c13_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 3)),
     "is_c13_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c13_setSimStateSideEffectsInfo,
                c13_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c13_u);
  chartInstance->c13_doSetSimStateSideEffects = 1U;
  c13_update_debugger_state_c13_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c13_st);
}

static void c13_set_sim_state_side_effects_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c13_doSetSimStateSideEffects != 0) {
    if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level1Limit)
    {
      chartInstance->c13_tp_Level1Limit = 1U;
    } else {
      chartInstance->c13_tp_Level1Limit = 0U;
    }

    if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level2Limit)
    {
      chartInstance->c13_tp_Level2Limit = 1U;
    } else {
      chartInstance->c13_tp_Level2Limit = 0U;
    }

    if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level3Limit)
    {
      chartInstance->c13_tp_Level3Limit = 1U;
    } else {
      chartInstance->c13_tp_Level3Limit = 0U;
    }

    if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level4Limit)
    {
      chartInstance->c13_tp_Level4Limit = 1U;
    } else {
      chartInstance->c13_tp_Level4Limit = 0U;
    }

    if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_NoLimit) {
      chartInstance->c13_tp_NoLimit = 1U;
    } else {
      chartInstance->c13_tp_NoLimit = 0U;
    }

    chartInstance->c13_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c13_setSimStateSideEffectsInfo);
}

static void sf_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c13_State;
  real_T *c13_ETC;
  real_T *c13_MaxEngPower;
  real_T *c13_Level1Setpoint;
  real_T *c13_Level2Setpoint;
  real_T *c13_Level3Setpoint;
  real_T *c13_Level4Setpoint;
  real_T *c13_Setpoint;
  boolean_T *c13_Level1;
  boolean_T *c13_Level2;
  boolean_T *c13_Level3;
  boolean_T *c13_Level4;
  real_T *c13_PL_ETC;
  c13_PL_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c13_Level4 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c13_Level3 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_Level2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_Level1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Level4Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_Level3Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_Level2Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_Level1Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_MaxEngPower = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_set_sim_state_side_effects_c13_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 11U, chartInstance->c13_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  _SFD_DATA_RANGE_CHECK(*c13_ETC, 1U);
  _SFD_DATA_RANGE_CHECK(*c13_MaxEngPower, 2U);
  _SFD_DATA_RANGE_CHECK(*c13_Level1Setpoint, 3U);
  _SFD_DATA_RANGE_CHECK(*c13_Level2Setpoint, 4U);
  _SFD_DATA_RANGE_CHECK(*c13_Level3Setpoint, 5U);
  _SFD_DATA_RANGE_CHECK(*c13_Level4Setpoint, 6U);
  _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_Level1, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_Level2, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_Level3, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_Level4, 11U);
  _SFD_DATA_RANGE_CHECK(*c13_PL_ETC, 12U);
  chartInstance->c13_sfEvent = CALL_EVENT;
  c13_chartstep_c13_BaseEngineController_A02(chartInstance);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c13_chartstep_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T c13_d0;
  boolean_T c13_temp;
  boolean_T c13_b_temp;
  boolean_T c13_c_temp;
  real_T c13_d1;
  boolean_T *c13_Level4;
  boolean_T *c13_Level3;
  boolean_T *c13_Level2;
  real_T *c13_ETC;
  real_T *c13_PL_ETC;
  real_T *c13_MaxEngPower;
  real_T *c13_Setpoint;
  real_T *c13_State;
  real_T *c13_Level3Setpoint;
  real_T *c13_Level4Setpoint;
  boolean_T *c13_Level1;
  real_T *c13_Level1Setpoint;
  real_T *c13_Level2Setpoint;
  c13_PL_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c13_Level4 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c13_Level3 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_Level2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_Level1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Level4Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_Level3Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_Level2Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_Level1Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_MaxEngPower = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 11U, chartInstance->c13_sfEvent);
  if ((int16_T)chartInstance->c13_is_active_c13_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 11U, chartInstance->c13_sfEvent);
    chartInstance->c13_is_active_c13_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
    chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
    chartInstance->c13_tp_NoLimit = 1U;
    *c13_Setpoint = *c13_MaxEngPower;
    _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
    *c13_State = 0.0;
    _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  } else {
    switch (chartInstance->c13_is_c13_BaseEngineController_A02) {
     case c13_IN_Level1Limit:
      CV_CHART_EVAL(11, 0, 1);
      c13_Level1Limit(chartInstance);
      break;

     case c13_IN_Level2Limit:
      CV_CHART_EVAL(11, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c13_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   chartInstance->c13_sfEvent);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0, *c13_Level4 !=
            0U, chartInstance->c13_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions = 1;
          transitionList[0] = 10;
          sf_debug_transition_conflict_check_begin();
          if (*c13_Level3) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          if ((!*c13_Level2) && (*c13_ETC < *c13_PL_ETC)) {
            transitionList[numTransitions] = 12;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level2Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level4Limit = 1U;
        *c13_Setpoint = *c13_Level4Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 4.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c13_sfEvent);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c13_Level3 !=
              0U, chartInstance->c13_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 3;
            sf_debug_transition_conflict_check_begin();
            if ((!*c13_Level2) && (*c13_ETC < *c13_PL_ETC)) {
              transitionList[numTransitions] = 12;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_Level2Limit = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
          chartInstance->c13_is_c13_BaseEngineController_A02 =
            c13_IN_Level3Limit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_Level3Limit = 1U;
          *c13_Setpoint = *c13_Level3Setpoint;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 3.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          c13_d0 = *c13_State;
          sf_mex_printf("%s =\\n", "State");
          sf_mex_call_debug("disp", 0U, 1U, 6, c13_d0);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                       chartInstance->c13_sfEvent);
          c13_temp = !(_SFD_CCP_CALL(12U, 0, *c13_Level2 != 0U,
            chartInstance->c13_sfEvent) != 0);
          if (c13_temp) {
            c13_temp = (_SFD_CCP_CALL(12U, 1, *c13_ETC < *c13_PL_ETC != 0U,
              chartInstance->c13_sfEvent) != 0);
          }

          if (CV_TRANSITION_EVAL(12U, (int32_T)c13_temp)) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c13_sfEvent);
            chartInstance->c13_tp_Level2Limit = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
            chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
            chartInstance->c13_tp_NoLimit = 1U;
            *c13_Setpoint = *c13_MaxEngPower;
            _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
            *c13_State = 0.0;
            _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c13_sfEvent);
      break;

     case c13_IN_Level3Limit:
      CV_CHART_EVAL(11, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c13_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c13_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c13_Level4 != 0U,
            chartInstance->c13_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if ((!*c13_Level3) && (*c13_ETC < *c13_PL_ETC)) {
            transitionList[numTransitions] = 13;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level3Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level4Limit = 1U;
        *c13_Setpoint = *c13_Level4Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 4.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     chartInstance->c13_sfEvent);
        c13_b_temp = !(_SFD_CCP_CALL(13U, 0, *c13_Level3 != 0U,
          chartInstance->c13_sfEvent) != 0);
        if (c13_b_temp) {
          c13_b_temp = (_SFD_CCP_CALL(13U, 1, *c13_ETC < *c13_PL_ETC != 0U,
            chartInstance->c13_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(13U, (int32_T)c13_b_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_Level3Limit = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
          chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_NoLimit = 1U;
          *c13_Setpoint = *c13_MaxEngPower;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 0.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c13_sfEvent);
      break;

     case c13_IN_Level4Limit:
      CV_CHART_EVAL(11, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c13_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   chartInstance->c13_sfEvent);
      c13_c_temp = !(_SFD_CCP_CALL(14U, 0, *c13_Level4 != 0U,
        chartInstance->c13_sfEvent) != 0);
      if (c13_c_temp) {
        c13_c_temp = (_SFD_CCP_CALL(14U, 1, *c13_ETC < *c13_PL_ETC != 0U,
          chartInstance->c13_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(14U, (int32_T)c13_c_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level4Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_NoLimit = 1U;
        *c13_Setpoint = *c13_MaxEngPower;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 0.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c13_sfEvent);
      break;

     case c13_IN_NoLimit:
      CV_CHART_EVAL(11, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c13_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c13_sfEvent);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c13_Level4 != 0U,
            chartInstance->c13_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[4];
          unsigned int numTransitions = 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if (*c13_Level3) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          if (*c13_Level2) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          if (*c13_Level1) {
            transitionList[numTransitions] = 1;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_NoLimit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level4Limit = 1U;
        *c13_Setpoint = *c13_Level4Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 4.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     chartInstance->c13_sfEvent);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c13_Level3 !=
              0U, chartInstance->c13_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions = 1;
            transitionList[0] = 6;
            sf_debug_transition_conflict_check_begin();
            if (*c13_Level2) {
              transitionList[numTransitions] = 5;
              numTransitions++;
            }

            if (*c13_Level1) {
              transitionList[numTransitions] = 1;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_NoLimit = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
          chartInstance->c13_is_c13_BaseEngineController_A02 =
            c13_IN_Level3Limit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_Level3Limit = 1U;
          *c13_Setpoint = *c13_Level3Setpoint;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 3.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          c13_d1 = *c13_State;
          sf_mex_printf("%s =\\n", "State");
          sf_mex_call_debug("disp", 0U, 1U, 6, c13_d1);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       chartInstance->c13_sfEvent);
          if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c13_Level2
                != 0U, chartInstance->c13_sfEvent))) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions = 1;
              transitionList[0] = 5;
              sf_debug_transition_conflict_check_begin();
              if (*c13_Level1) {
                transitionList[numTransitions] = 1;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions > 1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c13_sfEvent);
            chartInstance->c13_tp_NoLimit = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
            chartInstance->c13_is_c13_BaseEngineController_A02 =
              c13_IN_Level2Limit;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
            chartInstance->c13_tp_Level2Limit = 1U;
            *c13_Setpoint = *c13_Level2Setpoint;
            _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
            *c13_State = 2.0;
            _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                         chartInstance->c13_sfEvent);
            if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c13_Level1
                  != 0U, chartInstance->c13_sfEvent))) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
              chartInstance->c13_tp_NoLimit = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
              chartInstance->c13_is_c13_BaseEngineController_A02 =
                c13_IN_Level1Limit;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
              chartInstance->c13_tp_Level1Limit = 1U;
              *c13_Setpoint = *c13_Level1Setpoint;
              _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
              *c13_State = 1.0;
              _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
            }
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c13_sfEvent);
      break;

     default:
      CV_CHART_EVAL(11, 0, 0);
      chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
        c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c13_sfEvent);
}

static void initSimStructsc13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void c13_Level1Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  real_T c13_d2;
  boolean_T c13_temp;
  boolean_T *c13_Level4;
  boolean_T *c13_Level3;
  boolean_T *c13_Level2;
  boolean_T *c13_Level1;
  real_T *c13_ETC;
  real_T *c13_PL_ETC;
  real_T *c13_MaxEngPower;
  real_T *c13_Setpoint;
  real_T *c13_State;
  real_T *c13_Level2Setpoint;
  real_T *c13_Level3Setpoint;
  real_T *c13_Level4Setpoint;
  c13_PL_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c13_Level4 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c13_Level3 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_Level2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_Level1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Level4Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_Level3Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_Level2Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_MaxEngPower = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c13_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c13_sfEvent);
  if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0, *c13_Level4 != 0U,
        chartInstance->c13_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[4];
      unsigned int numTransitions = 1;
      transitionList[0] = 9;
      sf_debug_transition_conflict_check_begin();
      if (*c13_Level3) {
        transitionList[numTransitions] = 8;
        numTransitions++;
      }

      if (*c13_Level2) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      if ((!*c13_Level1) && (*c13_ETC < *c13_PL_ETC)) {
        transitionList[numTransitions] = 11;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c13_sfEvent);
    chartInstance->c13_tp_Level1Limit = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
    chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c13_sfEvent);
    chartInstance->c13_tp_Level4Limit = 1U;
    *c13_Setpoint = *c13_Level4Setpoint;
    _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
    *c13_State = 4.0;
    _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 chartInstance->c13_sfEvent);
    if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0, *c13_Level3 != 0U,
          chartInstance->c13_sfEvent))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 8;
        sf_debug_transition_conflict_check_begin();
        if (*c13_Level2) {
          transitionList[numTransitions] = 2;
          numTransitions++;
        }

        if ((!*c13_Level1) && (*c13_ETC < *c13_PL_ETC)) {
          transitionList[numTransitions] = 11;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c13_sfEvent);
      chartInstance->c13_tp_Level1Limit = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
      chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level3Limit;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
      chartInstance->c13_tp_Level3Limit = 1U;
      *c13_Setpoint = *c13_Level3Setpoint;
      _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
      *c13_State = 3.0;
      _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      c13_d2 = *c13_State;
      sf_mex_printf("%s =\\n", "State");
      sf_mex_call_debug("disp", 0U, 1U, 6, c13_d2);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c13_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c13_Level2 != 0U,
            chartInstance->c13_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((!*c13_Level1) && (*c13_ETC < *c13_PL_ETC)) {
            transitionList[numTransitions] = 11;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level1Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level2Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c13_sfEvent);
        chartInstance->c13_tp_Level2Limit = 1U;
        *c13_Setpoint = *c13_Level2Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 2.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                     chartInstance->c13_sfEvent);
        c13_temp = !(_SFD_CCP_CALL(11U, 0, *c13_Level1 != 0U,
          chartInstance->c13_sfEvent) != 0);
        if (c13_temp) {
          c13_temp = (_SFD_CCP_CALL(11U, 1, *c13_ETC < *c13_PL_ETC != 0U,
            chartInstance->c13_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(11U, (int32_T)c13_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_Level1Limit = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c13_sfEvent);
          chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c13_sfEvent);
          chartInstance->c13_tp_NoLimit = 1U;
          *c13_Setpoint = *c13_MaxEngPower;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 0.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c13_sfEvent);
}

static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber)
{
}

const mxArray *sf_c13_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c13_nameCaptureInfo = NULL;
  c13_nameCaptureInfo = NULL;
  sf_mex_assign(&c13_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c13_nameCaptureInfo;
}

static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData = NULL;
  int32_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_u = *(int32_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_mxArrayOutData, c13_y);
  return c13_mxArrayOutData;
}

static int32_T c13_emlrt_marshallIn(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  int32_T c13_y;
  int32_T c13_i0;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_i0, 1, 6, 0U, 0, 0U, 0);
  c13_y = c13_i0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_sfEvent;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  int32_T c13_y;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_b_sfEvent = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_y = c13_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_sfEvent),
    &c13_thisId);
  sf_mex_destroy(&c13_b_sfEvent);
  *(int32_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData = NULL;
  uint8_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_u = *(uint8_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_mxArrayOutData, c13_y);
  return c13_mxArrayOutData;
}

static uint8_T c13_b_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_tp_NoLimit, const char_T *c13_identifier)
{
  uint8_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_y = c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_tp_NoLimit),
    &c13_thisId);
  sf_mex_destroy(&c13_b_tp_NoLimit);
  return c13_y;
}

static uint8_T c13_c_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  uint8_T c13_y;
  uint8_T c13_u0;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_u0, 1, 3, 0U, 0, 0U, 0);
  c13_y = c13_u0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_tp_NoLimit;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  uint8_T c13_y;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_b_tp_NoLimit = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_y = c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_tp_NoLimit),
    &c13_thisId);
  sf_mex_destroy(&c13_b_tp_NoLimit);
  *(uint8_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData = NULL;
  real_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_u = *(real_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_mxArrayOutData, c13_y);
  return c13_mxArrayOutData;
}

static real_T c13_d_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_State, const char_T *c13_identifier)
{
  real_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_y = c13_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_State),
    &c13_thisId);
  sf_mex_destroy(&c13_State);
  return c13_y;
}

static real_T c13_e_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  real_T c13_y;
  real_T c13_d3;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_d3, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d3;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_State;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  real_T c13_y;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_State = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_y = c13_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_State),
    &c13_thisId);
  sf_mex_destroy(&c13_State);
  *(real_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData = NULL;
  boolean_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_u = *(boolean_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_mxArrayOutData, c13_y);
  return c13_mxArrayOutData;
}

static const mxArray *c13_f_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_setSimStateSideEffectsInfo, const char_T *c13_identifier)
{
  const mxArray *c13_y = NULL;
  emlrtMsgIdentifier c13_thisId;
  c13_y = NULL;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  sf_mex_assign(&c13_y, c13_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c13_b_setSimStateSideEffectsInfo), &c13_thisId));
  sf_mex_destroy(&c13_b_setSimStateSideEffectsInfo);
  return c13_y;
}

static const mxArray *c13_g_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  const mxArray *c13_y = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_duplicatearraysafe(&c13_u));
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void init_dsm_address_info(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c13_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(946790252U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2508890179U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2770292032U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1136688198U);
}

mxArray *sf_c13_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2681378672U);
    pr[1] = (double)(920707318U);
    pr[2] = (double)(3268567468U);
    pr[3] = (double)(1795875937U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,11,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c13_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[28],T\"Setpoint\",},{M[1],M[21],T\"State\",},{M[8],M[0],T\"is_active_c13_BaseEngineController_A02\",},{M[9],M[0],T\"is_c13_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c13_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           13,
           5,
           15,
           13,
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
          init_script_number_translation(_BaseEngineController_A02MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
             1);
          sf_debug_set_chart_event_thresholds
            (_BaseEngineController_A02MachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"State");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ETC");
          _SFD_SET_DATA_PROPS(2,1,1,0,"MaxEngPower");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Level1Setpoint");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Level2Setpoint");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Level3Setpoint");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Level4Setpoint");
          _SFD_SET_DATA_PROPS(7,2,0,1,"Setpoint");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Level1");
          _SFD_SET_DATA_PROPS(9,1,1,0,"Level2");
          _SFD_SET_DATA_PROPS(10,1,1,0,"Level3");
          _SFD_SET_DATA_PROPS(11,1,1,0,"Level4");
          _SFD_SET_DATA_PROPS(12,1,1,0,"PL_ETC");
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

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(12,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
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

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 10 };

          static unsigned int sEndGuardMap[] = { 8, 20 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)
          c13_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)
          c13_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c13_State;
          real_T *c13_ETC;
          real_T *c13_MaxEngPower;
          real_T *c13_Level1Setpoint;
          real_T *c13_Level2Setpoint;
          real_T *c13_Level3Setpoint;
          real_T *c13_Level4Setpoint;
          real_T *c13_Setpoint;
          boolean_T *c13_Level1;
          boolean_T *c13_Level2;
          boolean_T *c13_Level3;
          boolean_T *c13_Level4;
          real_T *c13_PL_ETC;
          c13_PL_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c13_Level4 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c13_Level3 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c13_Level2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c13_Level1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c13_Level4Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c13_Level3Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c13_Level2Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c13_Level1Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c13_MaxEngPower = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c13_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c13_State);
          _SFD_SET_DATA_VALUE_PTR(1U, c13_ETC);
          _SFD_SET_DATA_VALUE_PTR(2U, c13_MaxEngPower);
          _SFD_SET_DATA_VALUE_PTR(3U, c13_Level1Setpoint);
          _SFD_SET_DATA_VALUE_PTR(4U, c13_Level2Setpoint);
          _SFD_SET_DATA_VALUE_PTR(5U, c13_Level3Setpoint);
          _SFD_SET_DATA_VALUE_PTR(6U, c13_Level4Setpoint);
          _SFD_SET_DATA_VALUE_PTR(7U, c13_Setpoint);
          _SFD_SET_DATA_VALUE_PTR(8U, c13_Level1);
          _SFD_SET_DATA_VALUE_PTR(9U, c13_Level2);
          _SFD_SET_DATA_VALUE_PTR(10U, c13_Level3);
          _SFD_SET_DATA_VALUE_PTR(11U, c13_Level4);
          _SFD_SET_DATA_VALUE_PTR(12U, c13_PL_ETC);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c13_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc13_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c13_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c13_BaseEngineController_A02(void
  *chartInstanceVar)
{
  disable_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c13_BaseEngineController_A02(void
  *chartInstanceVar)
{
  sf_c13_BaseEngineController_A02((SFc13_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c13_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c13_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c13_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c13_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c13_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c13_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c13_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c13_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c13_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc13_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c13_BaseEngineController_A02
      ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c13_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c13_BaseEngineController_A02
      ((SFc13_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c13_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",13);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",13,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",13,
      "gatewayCannotBeInlinedMultipleTimes"));
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
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",13,11);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",13,2);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",13);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1022640144U));
  ssSetChecksum1(S,(2810912789U));
  ssSetChecksum2(S,(1323171971U));
  ssSetChecksum3(S,(3151058428U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c13_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",13);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c13_BaseEngineController_A02(SimStruct *S)
{
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc13_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc13_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c13_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c13_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c13_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c13_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c13_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c13_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c13_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c13_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c13_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c13_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c13_BaseEngineController_A02;
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

void c13_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c13_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c13_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c13_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c13_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
