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
static void c13_Level1Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void c13_Level2Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber);
static const mxArray *c13_sf_marshall(void *chartInstanceVoid, void *c13_u);
static const mxArray *c13_b_sf_marshall(void *chartInstanceVoid, void *c13_u);
static const mxArray *c13_c_sf_marshall(void *chartInstanceVoid, void *c13_u);
static real_T c13_emlrt_marshallIn(SFc13_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c13_Setpoint, const char_T *c13_name);
static uint8_T c13_b_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_is_active_c13_BaseEngineController_A02, const char_T *c13_name);
static const mxArray *c13_c_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c13_b_setSimStateSideEffectsInfo, const char_T *c13_name);
static void init_test_point_addr_map
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static void **get_test_point_address_map
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance);
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
    _SFD_CC_CALL(CHART_ACTIVE_TAG,11);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_NoLimit) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level1Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level2Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level3Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c13_is_c13_BaseEngineController_A02 == c13_IN_Level4Limit)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  sf_debug_set_animation(c13_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c13_BaseEngineController_A02
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c13_st = NULL;
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
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c13_st)
{
  const mxArray *c13_u;
  real_T *c13_Setpoint;
  real_T *c13_State;
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_u = sf_mex_dup(c13_st);
  *c13_Setpoint = c13_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 0)), "Setpoint");
  *c13_State = c13_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 1)), "State");
  chartInstance->c13_is_active_c13_BaseEngineController_A02 =
    c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 2
    )), "is_active_c13_BaseEngineController_A02");
  chartInstance->c13_is_c13_BaseEngineController_A02 = c13_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c13_u, 3)),
     "is_c13_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c13_setSimStateSideEffectsInfo,
                c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u
     , 4)), "setSimStateSideEffectsInfo"));
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
  int32_T c13_previousEvent;
  boolean_T c13_temp;
  boolean_T c13_b_temp;
  real_T c13_d0;
  boolean_T *c13_Level4;
  real_T *c13_ETC;
  real_T *c13_PL_ETC;
  real_T *c13_MaxEngPower;
  real_T *c13_Setpoint;
  real_T *c13_State;
  real_T *c13_Level1Setpoint;
  real_T *c13_Level2Setpoint;
  real_T *c13_Level3Setpoint;
  real_T *c13_Level4Setpoint;
  boolean_T *c13_Level1;
  boolean_T *c13_Level2;
  boolean_T *c13_Level3;
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
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,11);
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
  c13_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,11);
  if ((int16_T)chartInstance->c13_is_active_c13_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,11);
    chartInstance->c13_is_active_c13_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c13_tp_NoLimit = 1U;
    *c13_Setpoint = *c13_MaxEngPower;
    _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
    *c13_State = 0.0;
    _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  } else {
    switch (chartInstance->c13_is_c13_BaseEngineController_A02) {
     case c13_IN_Level1Limit:
      CV_CHART_EVAL(11,0,1);
      c13_Level1Limit(chartInstance);
      break;

     case c13_IN_Level2Limit:
      CV_CHART_EVAL(11,0,2);
      c13_Level2Limit(chartInstance);
      break;

     case c13_IN_Level3Limit:
      CV_CHART_EVAL(11,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c13_Level4)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if ((!(*c13_Level3)) && (*c13_ETC < *c13_PL_ETC)) {
            transitionList[numTransitions] = 13;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c13_tp_Level3Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c13_tp_Level4Limit = 1U;
        *c13_Setpoint = *c13_Level4Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 4.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        c13_temp = !(_SFD_CCP_CALL(13,0,((*c13_Level3)!=0)) != 0);
        if (c13_temp) {
          c13_temp = (_SFD_CCP_CALL(13,1,((*c13_ETC < *c13_PL_ETC)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(13U, (int32_T)c13_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c13_tp_Level3Limit = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c13_tp_NoLimit = 1U;
          *c13_Setpoint = *c13_MaxEngPower;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 0.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c13_IN_Level4Limit:
      CV_CHART_EVAL(11,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
      c13_b_temp = !(_SFD_CCP_CALL(14,0,((*c13_Level4)!=0)) != 0);
      if (c13_b_temp) {
        c13_b_temp = (_SFD_CCP_CALL(14,1,((*c13_ETC < *c13_PL_ETC)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(14U, (int32_T)c13_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c13_tp_Level4Limit = 0U;
        chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
          c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c13_tp_NoLimit = 1U;
        *c13_Setpoint = *c13_MaxEngPower;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 0.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c13_IN_NoLimit:
      CV_CHART_EVAL(11,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c13_Level4)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[4];
          unsigned int numTransitions= 1;
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
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c13_tp_NoLimit = 0U;
        chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
          c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c13_tp_Level4Limit = 1U;
        *c13_Setpoint = *c13_Level4Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 4.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c13_Level3)!=0)))
            != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions= 1;
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
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c13_tp_NoLimit = 0U;
          chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
            c13_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c13_is_c13_BaseEngineController_A02 =
            c13_IN_Level3Limit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c13_tp_Level3Limit = 1U;
          *c13_Setpoint = *c13_Level3Setpoint;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 3.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          c13_d0 = *c13_State;
          sf_mex_printf("%s =\\n", "State");
          sf_mex_call_debug("disp", 0U, 1U, 6, c13_d0);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
          if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c13_Level2)!=
                 0))) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 5;
              sf_debug_transition_conflict_check_begin();
              if (*c13_Level1) {
                transitionList[numTransitions] = 1;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
            chartInstance->c13_tp_NoLimit = 0U;
            chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
              c13_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
            chartInstance->c13_is_c13_BaseEngineController_A02 =
              c13_IN_Level2Limit;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
            chartInstance->c13_tp_Level2Limit = 1U;
            *c13_Setpoint = *c13_Level2Setpoint;
            _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
            *c13_State = 2.0;
            _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
            if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c13_Level1)
                   !=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
              chartInstance->c13_tp_NoLimit = 0U;
              chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
                c13_IN_NO_ACTIVE_CHILD;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
              chartInstance->c13_is_c13_BaseEngineController_A02 =
                c13_IN_Level1Limit;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
              chartInstance->c13_tp_Level1Limit = 1U;
              *c13_Setpoint = *c13_Level1Setpoint;
              _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
              *c13_State = 1.0;
              _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
            }
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(11,0,0);
      chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
        c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
  _sfEvent_ = c13_previousEvent;
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
}

static void c13_Level1Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  real_T c13_d1;
  boolean_T c13_temp;
  boolean_T *c13_Level4;
  boolean_T *c13_Level3;
  boolean_T *c13_Level2;
  boolean_T *c13_Level1;
  real_T *c13_ETC;
  real_T *c13_PL_ETC;
  real_T *c13_Level2Setpoint;
  real_T *c13_Setpoint;
  real_T *c13_State;
  real_T *c13_MaxEngPower;
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
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
  if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,((*c13_Level4)!=0))) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[4];
      unsigned int numTransitions= 1;
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

      if ((!(*c13_Level1)) && (*c13_ETC < *c13_PL_ETC)) {
        transitionList[numTransitions] = 11;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c13_tp_Level1Limit = 0U;
    chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
      c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c13_tp_Level4Limit = 1U;
    *c13_Setpoint = *c13_Level4Setpoint;
    _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
    *c13_State = 4.0;
    _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
    if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c13_Level3)!=0)))
        != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 8;
        sf_debug_transition_conflict_check_begin();
        if (*c13_Level2) {
          transitionList[numTransitions] = 2;
          numTransitions++;
        }

        if ((!(*c13_Level1)) && (*c13_ETC < *c13_PL_ETC)) {
          transitionList[numTransitions] = 11;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c13_tp_Level1Limit = 0U;
      chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
        c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level3Limit;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c13_tp_Level3Limit = 1U;
      *c13_Setpoint = *c13_Level3Setpoint;
      _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
      *c13_State = 3.0;
      _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      c13_d1 = *c13_State;
      sf_mex_printf("%s =\\n", "State");
      sf_mex_call_debug("disp", 0U, 1U, 6, c13_d1);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c13_Level2)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((!(*c13_Level1)) && (*c13_ETC < *c13_PL_ETC)) {
            transitionList[numTransitions] = 11;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c13_tp_Level1Limit = 0U;
        chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
          c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level2Limit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c13_tp_Level2Limit = 1U;
        *c13_Setpoint = *c13_Level2Setpoint;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 2.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
        c13_temp = !(_SFD_CCP_CALL(11,0,((*c13_Level1)!=0)) != 0);
        if (c13_temp) {
          c13_temp = (_SFD_CCP_CALL(11,1,((*c13_ETC < *c13_PL_ETC)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(11U, (int32_T)c13_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c13_tp_Level1Limit = 0U;
          chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
            c13_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c13_tp_NoLimit = 1U;
          *c13_Setpoint = *c13_MaxEngPower;
          _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
          *c13_State = 0.0;
          _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c13_Level2Limit(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  real_T c13_d2;
  boolean_T c13_temp;
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
  c13_PL_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c13_Level4 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c13_Level3 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_Level2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_Setpoint = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Level4Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_Level3Setpoint = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_MaxEngPower = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_ETC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c13_State = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
  if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,((*c13_Level4)!=0)))
      != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 10;
      sf_debug_transition_conflict_check_begin();
      if (*c13_Level3) {
        transitionList[numTransitions] = 3;
        numTransitions++;
      }

      if ((!(*c13_Level2)) && (*c13_ETC < *c13_PL_ETC)) {
        transitionList[numTransitions] = 12;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c13_tp_Level2Limit = 0U;
    chartInstance->c13_is_c13_BaseEngineController_A02 = (uint8_T)
      c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level4Limit;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c13_tp_Level4Limit = 1U;
    *c13_Setpoint = *c13_Level4Setpoint;
    _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
    *c13_State = 4.0;
    _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c13_Level3)!=0)))
        != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 3;
        sf_debug_transition_conflict_check_begin();
        if ((!(*c13_Level2)) && (*c13_ETC < *c13_PL_ETC)) {
          transitionList[numTransitions] = 12;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c13_tp_Level2Limit = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_Level3Limit;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c13_tp_Level3Limit = 1U;
      *c13_Setpoint = *c13_Level3Setpoint;
      _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
      *c13_State = 3.0;
      _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      c13_d2 = *c13_State;
      sf_mex_printf("%s =\\n", "State");
      sf_mex_call_debug("disp", 0U, 1U, 6, c13_d2);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
      c13_temp = !(_SFD_CCP_CALL(12,0,((*c13_Level2)!=0)) != 0);
      if (c13_temp) {
        c13_temp = (_SFD_CCP_CALL(12,1,((*c13_ETC < *c13_PL_ETC)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(12U, (int32_T)c13_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c13_tp_Level2Limit = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c13_is_c13_BaseEngineController_A02 = c13_IN_NoLimit;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c13_tp_NoLimit = 1U;
        *c13_Setpoint = *c13_MaxEngPower;
        _SFD_DATA_RANGE_CHECK(*c13_Setpoint, 7U);
        *c13_State = 0.0;
        _SFD_DATA_RANGE_CHECK(*c13_State, 0U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
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

static const mxArray *c13_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  uint8_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((uint8_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static const mxArray *c13_b_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  boolean_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((boolean_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static const mxArray *c13_c_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  real_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((real_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static real_T c13_emlrt_marshallIn(SFc13_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c13_Setpoint, const
  char_T *c13_name)
{
  real_T c13_y;
  real_T c13_d3;
  sf_mex_import(c13_name, sf_mex_dup(c13_Setpoint), &c13_d3, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d3;
  sf_mex_destroy(&c13_Setpoint);
  return c13_y;
}

static uint8_T c13_b_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c13_b_is_active_c13_BaseEngineController_A02, const char_T *c13_name)
{
  uint8_T c13_y;
  uint8_T c13_u0;
  sf_mex_import(c13_name, sf_mex_dup
                (c13_b_is_active_c13_BaseEngineController_A02), &c13_u0, 1, 3,
                0U, 0, 0U, 0);
  c13_y = c13_u0;
  sf_mex_destroy(&c13_b_is_active_c13_BaseEngineController_A02);
  return c13_y;
}

static const mxArray *c13_c_emlrt_marshallIn
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c13_b_setSimStateSideEffectsInfo, const char_T *c13_name)
{
  const mxArray *c13_y = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_duplicatearraysafe
                (&c13_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c13_b_setSimStateSideEffectsInfo);
  return c13_y;
}

static void init_test_point_addr_map
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  chartInstance->c13_testPointAddrMap[0] = &chartInstance->c13_tp_Level1Limit;
  chartInstance->c13_testPointAddrMap[1] = &chartInstance->c13_tp_Level2Limit;
  chartInstance->c13_testPointAddrMap[2] = &chartInstance->c13_tp_Level3Limit;
  chartInstance->c13_testPointAddrMap[3] = &chartInstance->c13_tp_Level4Limit;
  chartInstance->c13_testPointAddrMap[4] = &chartInstance->c13_tp_NoLimit;
}

static void **get_test_point_address_map
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c13_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc13_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c13_testPointMappingInfo;
}

static void init_dsm_address_info(SFc13_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c13_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1367945864U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2211737793U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2241413394U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2223582274U);
}

mxArray *sf_c13_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3723505058U);
    pr[1] = (double)(1573543724U);
    pr[2] = (double)(2017725567U);
    pr[3] = (double)(771312469U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c13_BaseEngineController_A02(void)
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
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"State",0,
                              (MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ETC",0,
                              (MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "MaxEngPower",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Level1Setpoint",0,(MexFcnForType)
                              c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Level2Setpoint",0,(MexFcnForType)
                              c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Level3Setpoint",0,(MexFcnForType)
                              c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Level4Setpoint",0,(MexFcnForType)
                              c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Setpoint",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Level1",0,
                              (MexFcnForType)c13_b_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Level2",0,
                              (MexFcnForType)c13_b_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Level3",
                              0,(MexFcnForType)c13_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Level4",
                              0,(MexFcnForType)c13_b_sf_marshall);
          _SFD_SET_DATA_PROPS(12,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"PL_ETC",
                              0,(MexFcnForType)c13_c_sf_marshall);
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

static mxArray* sf_internal_get_sim_state_c13_BaseEngineController_A02(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c13_BaseEngineController_A02
    ((SFc13_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c13_BaseEngineController_A02();/* state var info */
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

static void sf_internal_set_sim_state_c13_BaseEngineController_A02(SimStruct* S,
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

static mxArray* sf_opaque_get_sim_state_c13_BaseEngineController_A02(SimStruct*
  S)
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
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
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
      (int_T)sf_is_chart_inlinable("BaseEngineController_A02",
      "BaseEngineController_A02",13);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
                "BaseEngineController_A02",13,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
      "BaseEngineController_A02",13,"gatewayCannotBeInlinedMultipleTimes"));
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
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3241415646U));
  ssSetChecksum1(S,(3782710537U));
  ssSetChecksum2(S,(412080416U));
  ssSetChecksum3(S,(4273548107U));
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
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info(chartInstance);
  }

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
  { 0, 0, "StateflowChart/Level1Limit", "Level1Limit", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Level2Limit", "Level2Limit", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Level3Limit", "Level3Limit", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Level4Limit", "Level4Limit", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/NoLimit", "NoLimit", 0, 0, 0, 0, 0 } };

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
  SFc13_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc13_BaseEngineController_A02InstanceStruct *)
    ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
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
