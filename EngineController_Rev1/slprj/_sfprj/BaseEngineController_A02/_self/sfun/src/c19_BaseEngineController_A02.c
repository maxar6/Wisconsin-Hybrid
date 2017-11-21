/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c19_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c19_IN_NO_ACTIVE_CHILD         (0U)
#define c19_IN_Stall                   (2U)
#define c19_IN_CrankRun                (1U)
#define c19_IN_StallDelay              (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void c19_update_debugger_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_st);
static void c19_set_sim_state_side_effects_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber);
static const mxArray *c19_sf_marshall(void *chartInstanceVoid, void *c19_u);
static const mxArray *c19_b_sf_marshall(void *chartInstanceVoid, void *c19_u);
static const mxArray *c19_c_sf_marshall(void *chartInstanceVoid, void *c19_u);
static boolean_T c19_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_Enable, const char_T *c19_name);
static real_T c19_b_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_Timer, const char_T *c19_name);
static uint8_T c19_c_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_b_is_active_c19_BaseEngineController_A02, const char_T *c19_name);
static const mxArray *c19_d_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_b_setSimStateSideEffectsInfo, const char_T *c19_name);
static void init_test_point_addr_map
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void **get_test_point_address_map
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc19_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c19_Timer;
  boolean_T *c19_Enable;
  c19_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Timer = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c19_doSetSimStateSideEffects = 0U;
  chartInstance->c19_setSimStateSideEffectsInfo = NULL;
  chartInstance->c19_tp_CrankRun = 0U;
  chartInstance->c19_tp_Stall = 0U;
  chartInstance->c19_tp_StallDelay = 0U;
  chartInstance->c19_is_active_c19_BaseEngineController_A02 = 0U;
  chartInstance->c19_is_c19_BaseEngineController_A02 = 0U;
  chartInstance->c19_TOld = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c19_Timer = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c19_Enable = FALSE;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,12);
  chartInstance->c19_is_active_c19_BaseEngineController_A02 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,12);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
  chartInstance->c19_is_c19_BaseEngineController_A02 = c19_IN_Stall;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  chartInstance->c19_tp_Stall = 1U;
  *c19_Enable = TRUE;
  _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
}

static void initialize_params_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c19_update_debugger_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c19_prevAniVal;
  c19_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c19_is_active_c19_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,12);
  }

  if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_Stall) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_CrankRun) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_StallDelay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c19_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c19_st = NULL;
  const mxArray *c19_y = NULL;
  boolean_T c19_hoistedGlobal;
  boolean_T c19_u;
  const mxArray *c19_b_y = NULL;
  real_T c19_b_hoistedGlobal;
  real_T c19_b_u;
  const mxArray *c19_c_y = NULL;
  real_T c19_c_hoistedGlobal;
  real_T c19_c_u;
  const mxArray *c19_d_y = NULL;
  uint8_T c19_d_hoistedGlobal;
  uint8_T c19_d_u;
  const mxArray *c19_e_y = NULL;
  uint8_T c19_e_hoistedGlobal;
  uint8_T c19_e_u;
  const mxArray *c19_f_y = NULL;
  boolean_T *c19_Enable;
  real_T *c19_Timer;
  c19_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Timer = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellarray(5));
  c19_hoistedGlobal = *c19_Enable;
  c19_u = c19_hoistedGlobal;
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_b_hoistedGlobal = *c19_Timer;
  c19_b_u = c19_b_hoistedGlobal;
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", &c19_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c19_y, 1, c19_c_y);
  c19_c_hoistedGlobal = chartInstance->c19_TOld;
  c19_c_u = c19_c_hoistedGlobal;
  c19_d_y = NULL;
  sf_mex_assign(&c19_d_y, sf_mex_create("y", &c19_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c19_y, 2, c19_d_y);
  c19_d_hoistedGlobal =
    chartInstance->c19_is_active_c19_BaseEngineController_A02;
  c19_d_u = c19_d_hoistedGlobal;
  c19_e_y = NULL;
  sf_mex_assign(&c19_e_y, sf_mex_create("y", &c19_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c19_y, 3, c19_e_y);
  c19_e_hoistedGlobal = chartInstance->c19_is_c19_BaseEngineController_A02;
  c19_e_u = c19_e_hoistedGlobal;
  c19_f_y = NULL;
  sf_mex_assign(&c19_f_y, sf_mex_create("y", &c19_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c19_y, 4, c19_f_y);
  sf_mex_assign(&c19_st, c19_y);
  return c19_st;
}

static void set_sim_state_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c19_st)
{
  const mxArray *c19_u;
  boolean_T *c19_Enable;
  real_T *c19_Timer;
  c19_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Timer = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c19_doneDoubleBufferReInit = TRUE;
  c19_u = sf_mex_dup(c19_st);
  *c19_Enable = c19_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 0)), "Enable");
  *c19_Timer = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 1)), "Timer");
  chartInstance->c19_TOld = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c19_u, 2)), "TOld");
  chartInstance->c19_is_active_c19_BaseEngineController_A02 =
    c19_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 3
    )), "is_active_c19_BaseEngineController_A02");
  chartInstance->c19_is_c19_BaseEngineController_A02 = c19_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 4)),
     "is_c19_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c19_setSimStateSideEffectsInfo,
                c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u
     , 5)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c19_u);
  chartInstance->c19_doSetSimStateSideEffects = 1U;
  c19_update_debugger_state_c19_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c19_st);
}

static void c19_set_sim_state_side_effects_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c19_doSetSimStateSideEffects != 0) {
    if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_CrankRun) {
      chartInstance->c19_tp_CrankRun = 1U;
    } else {
      chartInstance->c19_tp_CrankRun = 0U;
    }

    if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_Stall) {
      chartInstance->c19_tp_Stall = 1U;
    } else {
      chartInstance->c19_tp_Stall = 0U;
    }

    if (chartInstance->c19_is_c19_BaseEngineController_A02 == c19_IN_StallDelay)
    {
      chartInstance->c19_tp_StallDelay = 1U;
    } else {
      chartInstance->c19_tp_StallDelay = 0U;
    }

    chartInstance->c19_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c19_setSimStateSideEffectsInfo);
}

static void sf_c19_BaseEngineController_A02
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  int32_T c19_previousEvent;
  uint8_T *c19_EngineState;
  real_T *c19_Timer;
  real_T *c19_TimeThresh;
  real_T *c19_dT;
  boolean_T *c19_Enable;
  c19_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_Timer = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_dT = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c19_TimeThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c19_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c19_set_sim_state_side_effects_c19_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,12);
  _SFD_DATA_RANGE_CHECK((real_T)*c19_EngineState, 0U);
  _SFD_DATA_RANGE_CHECK(*c19_TimeThresh, 1U);
  _SFD_DATA_RANGE_CHECK(*c19_dT, 2U);
  _SFD_DATA_RANGE_CHECK(*c19_Timer, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c19_TOld, 5U);
  c19_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,12);
  switch (chartInstance->c19_is_c19_BaseEngineController_A02) {
   case c19_IN_CrankRun:
    CV_CHART_EVAL(12,0,1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,(((int16_T)
            *c19_EngineState == 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c19_tp_CrankRun = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c19_is_c19_BaseEngineController_A02 = c19_IN_StallDelay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c19_tp_StallDelay = 1U;
      *c19_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
      *c19_Timer = 0.0;
      _SFD_DATA_RANGE_CHECK(*c19_Timer, 3U);
      chartInstance->c19_TOld = 0.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c19_TOld, 5U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    break;

   case c19_IN_Stall:
    CV_CHART_EVAL(12,0,2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((int16_T)
            *c19_EngineState > 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c19_tp_Stall = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c19_is_c19_BaseEngineController_A02 = c19_IN_CrankRun;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c19_tp_CrankRun = 1U;
      *c19_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    break;

   case c19_IN_StallDelay:
    CV_CHART_EVAL(12,0,3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
    if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,(((int16_T)
            *c19_EngineState > 1)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 4;
        sf_debug_transition_conflict_check_begin();
        if ((((int16_T)*c19_EngineState == 1) & (*c19_Timer > *c19_TimeThresh))
            != 0) {
          transitionList[numTransitions] = 3;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c19_tp_StallDelay = 0U;
      chartInstance->c19_is_c19_BaseEngineController_A02 = (uint8_T)
        c19_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      chartInstance->c19_is_c19_BaseEngineController_A02 = c19_IN_CrankRun;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c19_tp_CrankRun = 1U;
      *c19_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((((int16_T)
               *c19_EngineState == 1) & (*c19_Timer > *c19_TimeThresh))!=0))) !=
          0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c19_tp_StallDelay = 0U;
        chartInstance->c19_is_c19_BaseEngineController_A02 = (uint8_T)
          c19_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c19_is_c19_BaseEngineController_A02 = c19_IN_Stall;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c19_tp_Stall = 1U;
        *c19_Enable = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c19_Enable, 4U);
      } else {
        *c19_Timer = chartInstance->c19_TOld + *c19_dT;
        _SFD_DATA_RANGE_CHECK(*c19_Timer, 3U);
        chartInstance->c19_TOld = *c19_Timer;
        _SFD_DATA_RANGE_CHECK(chartInstance->c19_TOld, 5U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    break;

   default:
    CV_CHART_EVAL(12,0,0);
    chartInstance->c19_is_c19_BaseEngineController_A02 = (uint8_T)
      c19_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
  _sfEvent_ = c19_previousEvent;
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
}

static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber)
{
}

const mxArray *sf_c19_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  sf_mex_assign(&c19_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c19_nameCaptureInfo;
}

static const mxArray *c19_sf_marshall(void *chartInstanceVoid, void *c19_u)
{
  const mxArray *c19_y = NULL;
  uint8_T c19_b_u;
  const mxArray *c19_b_y = NULL;
  SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c19_y = NULL;
  c19_b_u = *((uint8_T *)c19_u);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c19_y, c19_b_y);
  return c19_y;
}

static const mxArray *c19_b_sf_marshall(void *chartInstanceVoid, void *c19_u)
{
  const mxArray *c19_y = NULL;
  boolean_T c19_b_u;
  const mxArray *c19_b_y = NULL;
  SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c19_y = NULL;
  c19_b_u = *((boolean_T *)c19_u);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c19_y, c19_b_y);
  return c19_y;
}

static const mxArray *c19_c_sf_marshall(void *chartInstanceVoid, void *c19_u)
{
  const mxArray *c19_y = NULL;
  real_T c19_b_u;
  const mxArray *c19_b_y = NULL;
  SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c19_y = NULL;
  c19_b_u = *((real_T *)c19_u);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c19_y, c19_b_y);
  return c19_y;
}

static boolean_T c19_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_Enable, const
   char_T *c19_name)
{
  boolean_T c19_y;
  boolean_T c19_b0;
  sf_mex_import(c19_name, sf_mex_dup(c19_Enable), &c19_b0, 1, 11, 0U, 0, 0U, 0);
  c19_y = c19_b0;
  sf_mex_destroy(&c19_Enable);
  return c19_y;
}

static real_T c19_b_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c19_Timer, const
   char_T *c19_name)
{
  real_T c19_y;
  real_T c19_d0;
  sf_mex_import(c19_name, sf_mex_dup(c19_Timer), &c19_d0, 1, 0, 0U, 0, 0U, 0);
  c19_y = c19_d0;
  sf_mex_destroy(&c19_Timer);
  return c19_y;
}

static uint8_T c19_c_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c19_b_is_active_c19_BaseEngineController_A02, const char_T *c19_name)
{
  uint8_T c19_y;
  uint8_T c19_u0;
  sf_mex_import(c19_name, sf_mex_dup
                (c19_b_is_active_c19_BaseEngineController_A02), &c19_u0, 1, 3,
                0U, 0, 0U, 0);
  c19_y = c19_u0;
  sf_mex_destroy(&c19_b_is_active_c19_BaseEngineController_A02);
  return c19_y;
}

static const mxArray *c19_d_emlrt_marshallIn
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c19_b_setSimStateSideEffectsInfo, const char_T *c19_name)
{
  const mxArray *c19_y = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_duplicatearraysafe
                (&c19_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c19_b_setSimStateSideEffectsInfo);
  return c19_y;
}

static void init_test_point_addr_map
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  chartInstance->c19_testPointAddrMap[0] = &chartInstance->c19_TOld;
  chartInstance->c19_testPointAddrMap[1] = &chartInstance->c19_tp_CrankRun;
  chartInstance->c19_testPointAddrMap[2] = &chartInstance->c19_tp_Stall;
  chartInstance->c19_testPointAddrMap[3] = &chartInstance->c19_tp_StallDelay;
}

static void **get_test_point_address_map
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c19_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc19_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c19_testPointMappingInfo;
}

static void init_dsm_address_info(SFc19_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c19_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3584601842U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(411605542U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1954067879U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3392669723U);
}

mxArray *sf_c19_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(102163165U);
    pr[1] = (double)(1443554872U);
    pr[2] = (double)(85874699U);
    pr[3] = (double)(2022004201U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c19_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[13],T\"Enable\",},{M[1],M[12],T\"Timer\",},{M[3],M[14],T\"TOld\",},{M[8],M[0],T\"is_active_c19_BaseEngineController_A02\",},{M[9],M[0],T\"is_c19_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           19,
           3,
           5,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "EngineState",0,(MexFcnForType)c19_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "TimeThresh",0,(MexFcnForType)c19_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"dT",0,
                              (MexFcnForType)c19_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Timer",0,
                              (MexFcnForType)c19_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Enable",0,
                              (MexFcnForType)c19_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"TOld",0,
                              (MexFcnForType)c19_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 32 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 32 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          uint8_T *c19_EngineState;
          real_T *c19_TimeThresh;
          real_T *c19_dT;
          real_T *c19_Timer;
          boolean_T *c19_Enable;
          c19_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c19_Timer = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c19_dT = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c19_TimeThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c19_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c19_EngineState);
          _SFD_SET_DATA_VALUE_PTR(1U, c19_TimeThresh);
          _SFD_SET_DATA_VALUE_PTR(2U, c19_dT);
          _SFD_SET_DATA_VALUE_PTR(3U, c19_Timer);
          _SFD_SET_DATA_VALUE_PTR(4U, c19_Enable);
          _SFD_SET_DATA_VALUE_PTR(5U, &chartInstance->c19_TOld);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c19_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc19_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c19_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c19_BaseEngineController_A02(void
  *chartInstanceVar)
{
  disable_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c19_BaseEngineController_A02(void
  *chartInstanceVar)
{
  sf_c19_BaseEngineController_A02((SFc19_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c19_BaseEngineController_A02(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c19_BaseEngineController_A02();/* state var info */
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

static void sf_internal_set_sim_state_c19_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c19_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c19_BaseEngineController_A02
    ((SFc19_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c19_BaseEngineController_A02(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c19_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c19_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c19_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c19_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c19_BaseEngineController_A02
      ((SFc19_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_BaseEngineController_A02
      ((SFc19_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c19_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BaseEngineController_A02",
      "BaseEngineController_A02",19);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
                "BaseEngineController_A02",19,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
      "BaseEngineController_A02",19,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",19,3);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",19,2);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",19);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
    ssSetCallsOutputInInitFcn(S,1);
  }

  ssSetChecksum0(S,(3825492707U));
  ssSetChecksum1(S,(2517449449U));
  ssSetChecksum2(S,(1323125604U));
  ssSetChecksum3(S,(1774711872U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c19_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",19);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c19_BaseEngineController_A02(SimStruct *S)
{
  SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc19_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc19_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c19_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c19_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c19_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c19_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c19_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c19_BaseEngineController_A02;
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

void c19_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c19_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_BaseEngineController_A02_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/TOld", "TOld", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/CrankRun", "CrankRun", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/Stall", "Stall", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/StallDelay", "StallDelay", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    4                                  /* Num Block IO signals */
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
  SFc19_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc19_BaseEngineController_A02InstanceStruct *)
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
