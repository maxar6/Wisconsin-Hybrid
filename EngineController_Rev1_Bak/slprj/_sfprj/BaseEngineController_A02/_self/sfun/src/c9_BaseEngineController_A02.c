/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c9_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c9_IN_NO_ACTIVE_CHILD          (0U)
#define c9_IN_PassThrough              (3U)
#define c9_IN_LowAdapt                 (2U)
#define c9_IN_SpringTestSetpoint       (6U)
#define c9_IN_SpringTest               (4U)
#define c9_IN_SpringTestComplete       (5U)
#define c9_IN_ForcedShutdown           (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void c9_update_debugger_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_st);
static void c9_set_sim_state_side_effects_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void c9_chartstep_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance);
static void c9_LowAdapt(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData);
static int32_T c9_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static uint8_T c9_b_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_b_tp_PassThrough, const char_T
  *c9_identifier);
static uint8_T c9_c_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_c_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static real_T c9_d_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_TestTime, const char_T *c9_identifier);
static real_T c9_e_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_d_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static const mxArray *c9_e_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static int8_T c9_f_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_DC_Override, const char_T *c9_identifier);
static int8_T c9_g_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static boolean_T c9_h_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_TestComplete, const char_T *c9_identifier);
static boolean_T c9_i_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_j_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_b_setSimStateSideEffectsInfo, const char_T *c9_identifier);
static const mxArray *c9_k_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void init_dsm_address_info(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c9_TestTime;
  int8_T *c9_DC_Override;
  boolean_T *c9_TestComplete;
  int8_T *c9_SetpointMode;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_doSetSimStateSideEffects = 0U;
  chartInstance->c9_setSimStateSideEffectsInfo = NULL;
  chartInstance->c9_tp_ForcedShutdown = 0U;
  chartInstance->c9_tp_LowAdapt = 0U;
  chartInstance->c9_tp_PassThrough = 0U;
  chartInstance->c9_tp_SpringTest = 0U;
  chartInstance->c9_tp_SpringTestComplete = 0U;
  chartInstance->c9_tp_SpringTestSetpoint = 0U;
  chartInstance->c9_is_active_c9_BaseEngineController_A02 = 0U;
  chartInstance->c9_is_c9_BaseEngineController_A02 = 0U;
  chartInstance->c9_TimerOld = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c9_TestTime = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c9_DC_Override = 0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c9_TestComplete = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c9_SetpointMode = 0;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
  chartInstance->c9_is_active_c9_BaseEngineController_A02 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c9_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
  chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_PassThrough;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
  chartInstance->c9_tp_PassThrough = 1U;
  *c9_DC_Override = 0;
  _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
  *c9_TestComplete = FALSE;
  _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
  *c9_SetpointMode = 0;
  _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
  *c9_TestTime = 0.0;
  _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
}

static void initialize_params_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c9_prevAniVal;
  c9_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c9_is_active_c9_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 7U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_PassThrough) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_LowAdapt) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 ==
      c9_IN_SpringTestSetpoint) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_SpringTest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 ==
      c9_IN_SpringTestComplete) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_ForcedShutdown)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
  }

  sf_debug_set_animation(c9_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c9_st;
  const mxArray *c9_y = NULL;
  int8_T c9_hoistedGlobal;
  int8_T c9_u;
  const mxArray *c9_b_y = NULL;
  int8_T c9_b_hoistedGlobal;
  int8_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  boolean_T c9_c_hoistedGlobal;
  boolean_T c9_c_u;
  const mxArray *c9_d_y = NULL;
  real_T c9_d_hoistedGlobal;
  real_T c9_d_u;
  const mxArray *c9_e_y = NULL;
  real_T c9_e_hoistedGlobal;
  real_T c9_e_u;
  const mxArray *c9_f_y = NULL;
  uint8_T c9_f_hoistedGlobal;
  uint8_T c9_f_u;
  const mxArray *c9_g_y = NULL;
  uint8_T c9_g_hoistedGlobal;
  uint8_T c9_g_u;
  const mxArray *c9_h_y = NULL;
  int8_T *c9_DC_Override;
  int8_T *c9_SetpointMode;
  boolean_T *c9_TestComplete;
  real_T *c9_TestTime;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(7));
  c9_hoistedGlobal = *c9_DC_Override;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 2, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = *c9_SetpointMode;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 2, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 1, c9_c_y);
  c9_c_hoistedGlobal = *c9_TestComplete;
  c9_c_u = c9_c_hoistedGlobal;
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 2, c9_d_y);
  c9_d_hoistedGlobal = *c9_TestTime;
  c9_d_u = c9_d_hoistedGlobal;
  c9_e_y = NULL;
  sf_mex_assign(&c9_e_y, sf_mex_create("y", &c9_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 3, c9_e_y);
  c9_e_hoistedGlobal = chartInstance->c9_TimerOld;
  c9_e_u = c9_e_hoistedGlobal;
  c9_f_y = NULL;
  sf_mex_assign(&c9_f_y, sf_mex_create("y", &c9_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 4, c9_f_y);
  c9_f_hoistedGlobal = chartInstance->c9_is_active_c9_BaseEngineController_A02;
  c9_f_u = c9_f_hoistedGlobal;
  c9_g_y = NULL;
  sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 5, c9_g_y);
  c9_g_hoistedGlobal = chartInstance->c9_is_c9_BaseEngineController_A02;
  c9_g_u = c9_g_hoistedGlobal;
  c9_h_y = NULL;
  sf_mex_assign(&c9_h_y, sf_mex_create("y", &c9_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 6, c9_h_y);
  sf_mex_assign(&c9_st, c9_y);
  return c9_st;
}

static void set_sim_state_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_st)
{
  const mxArray *c9_u;
  int8_T *c9_DC_Override;
  int8_T *c9_SetpointMode;
  boolean_T *c9_TestComplete;
  real_T *c9_TestTime;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_doneDoubleBufferReInit = TRUE;
  c9_u = sf_mex_dup(c9_st);
  *c9_DC_Override = c9_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 0)), "DC_Override");
  *c9_SetpointMode = c9_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 1)), "SetpointMode");
  *c9_TestComplete = c9_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 2)), "TestComplete");
  *c9_TestTime = c9_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c9_u, 3)), "TestTime");
  chartInstance->c9_TimerOld = c9_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 4)), "TimerOld");
  chartInstance->c9_is_active_c9_BaseEngineController_A02 =
    c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 5)),
    "is_active_c9_BaseEngineController_A02");
  chartInstance->c9_is_c9_BaseEngineController_A02 = c9_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 6)),
     "is_c9_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c9_setSimStateSideEffectsInfo,
                c9_j_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c9_u, 7)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c9_u);
  chartInstance->c9_doSetSimStateSideEffects = 1U;
  c9_update_debugger_state_c9_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void c9_set_sim_state_side_effects_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c9_doSetSimStateSideEffects != 0) {
    if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_ForcedShutdown)
    {
      chartInstance->c9_tp_ForcedShutdown = 1U;
    } else {
      chartInstance->c9_tp_ForcedShutdown = 0U;
    }

    if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_LowAdapt) {
      chartInstance->c9_tp_LowAdapt = 1U;
    } else {
      chartInstance->c9_tp_LowAdapt = 0U;
    }

    if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_PassThrough) {
      chartInstance->c9_tp_PassThrough = 1U;
    } else {
      chartInstance->c9_tp_PassThrough = 0U;
    }

    if (chartInstance->c9_is_c9_BaseEngineController_A02 == c9_IN_SpringTest) {
      chartInstance->c9_tp_SpringTest = 1U;
    } else {
      chartInstance->c9_tp_SpringTest = 0U;
    }

    if (chartInstance->c9_is_c9_BaseEngineController_A02 ==
        c9_IN_SpringTestComplete) {
      chartInstance->c9_tp_SpringTestComplete = 1U;
    } else {
      chartInstance->c9_tp_SpringTestComplete = 0U;
    }

    if (chartInstance->c9_is_c9_BaseEngineController_A02 ==
        c9_IN_SpringTestSetpoint) {
      chartInstance->c9_tp_SpringTestSetpoint = 1U;
    } else {
      chartInstance->c9_tp_SpringTestSetpoint = 0U;
    }

    chartInstance->c9_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c9_setSimStateSideEffectsInfo);
}

static void sf_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c9_TestTime;
  boolean_T *c9_ECUP_Off;
  int8_T *c9_DC_Override;
  real_T *c9_Timer;
  boolean_T *c9_LowAdaptError;
  boolean_T *c9_TPSHiThresh;
  boolean_T *c9_TPSLoThresh;
  boolean_T *c9_TestComplete;
  int8_T *c9_SetpointMode;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_TPSLoThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c9_TPSHiThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c9_LowAdaptError = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_Timer = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_ECUP_Off = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_set_sim_state_side_effects_c9_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_ECUP_Off, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
  _SFD_DATA_RANGE_CHECK(*c9_Timer, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_LowAdaptError, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_TPSHiThresh, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_TPSLoThresh, 6U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c9_TimerOld, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
  chartInstance->c9_sfEvent = CALL_EVENT;
  c9_chartstep_c9_BaseEngineController_A02(chartInstance);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c9_chartstep_c9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
  boolean_T c9_temp;
  boolean_T c9_b_temp;
  boolean_T *c9_ECUP_Off;
  int8_T *c9_DC_Override;
  boolean_T *c9_TestComplete;
  int8_T *c9_SetpointMode;
  real_T *c9_Timer;
  real_T *c9_TestTime;
  boolean_T *c9_TPSLoThresh;
  boolean_T *c9_TPSHiThresh;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_TPSLoThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c9_TPSHiThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c9_Timer = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_ECUP_Off = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
  switch (chartInstance->c9_is_c9_BaseEngineController_A02) {
   case c9_IN_ForcedShutdown:
    CV_CHART_EVAL(7, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                 chartInstance->c9_sfEvent);
    if (CV_TRANSITION_EVAL(12U, !(_SFD_CCP_CALL(12U, 0, *c9_ECUP_Off != 0U,
           chartInstance->c9_sfEvent) != 0))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_ForcedShutdown = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 =
        c9_IN_SpringTestComplete;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_SpringTestComplete = 1U;
      *c9_DC_Override = 1;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = *c9_Timer - chartInstance->c9_TimerOld;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c9_sfEvent);
    break;

   case c9_IN_LowAdapt:
    CV_CHART_EVAL(7, 0, 2);
    c9_LowAdapt(chartInstance);
    break;

   case c9_IN_PassThrough:
    CV_CHART_EVAL(7, 0, 3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c9_sfEvent);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c9_ECUP_Off != 0U,
          chartInstance->c9_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_PassThrough = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_LowAdapt;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_LowAdapt = 1U;
      *c9_DC_Override = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 1;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = 0.0;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c9_sfEvent);
    break;

   case c9_IN_SpringTest:
    CV_CHART_EVAL(7, 0, 4);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c9_sfEvent);
    if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0, *c9_Timer > 5.0 !=
          0U, chartInstance->c9_sfEvent))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 9;
        sf_debug_transition_conflict_check_begin();
        if ((*c9_ECUP_Off) && (*c9_TPSLoThresh)) {
          transitionList[numTransitions] = 4;
          numTransitions++;
        }

        if (!*c9_ECUP_Off) {
          transitionList[numTransitions] = 8;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_SpringTest = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_ForcedShutdown;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_ForcedShutdown = 1U;
      *c9_DC_Override = 1;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = 0.0;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c9_sfEvent);
      c9_temp = (_SFD_CCP_CALL(4U, 0, *c9_ECUP_Off != 0U,
                  chartInstance->c9_sfEvent) != 0);
      if (c9_temp) {
        c9_temp = (_SFD_CCP_CALL(4U, 1, *c9_TPSLoThresh != 0U,
                    chartInstance->c9_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c9_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (!*c9_ECUP_Off) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_SpringTest = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
        chartInstance->c9_is_c9_BaseEngineController_A02 =
          c9_IN_SpringTestComplete;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_SpringTestComplete = 1U;
        *c9_DC_Override = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
        *c9_TestComplete = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
        *c9_SetpointMode = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
        *c9_TestTime = *c9_Timer - chartInstance->c9_TimerOld;
        _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                     chartInstance->c9_sfEvent);
        if (CV_TRANSITION_EVAL(8U, !(_SFD_CCP_CALL(8U, 0, *c9_ECUP_Off != 0U,
               chartInstance->c9_sfEvent) != 0))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c9_sfEvent);
          chartInstance->c9_tp_SpringTest = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
          chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_PassThrough;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
          chartInstance->c9_tp_PassThrough = 1U;
          *c9_DC_Override = 0;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
          *c9_TestComplete = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
          *c9_SetpointMode = 0;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
          *c9_TestTime = 0.0;
          _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c9_sfEvent);
    break;

   case c9_IN_SpringTestComplete:
    CV_CHART_EVAL(7, 0, 5);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, chartInstance->c9_sfEvent);
    if (CV_TRANSITION_EVAL(7U, !(_SFD_CCP_CALL(7U, 0, *c9_ECUP_Off != 0U,
           chartInstance->c9_sfEvent) != 0))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_SpringTestComplete = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_PassThrough;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_PassThrough = 1U;
      *c9_DC_Override = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = 0.0;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c9_sfEvent);
    break;

   case c9_IN_SpringTestSetpoint:
    CV_CHART_EVAL(7, 0, 6);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c9_sfEvent);
    if (CV_TRANSITION_EVAL(6U, !(_SFD_CCP_CALL(6U, 0, *c9_ECUP_Off != 0U,
           chartInstance->c9_sfEvent) != 0))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 6;
        sf_debug_transition_conflict_check_begin();
        if ((*c9_ECUP_Off) && (*c9_TPSHiThresh)) {
          transitionList[numTransitions] = 3;
          numTransitions++;
        }

        if (*c9_Timer > 5.0) {
          transitionList[numTransitions] = 11;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_SpringTestSetpoint = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_PassThrough;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_PassThrough = 1U;
      *c9_DC_Override = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = 0.0;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c9_sfEvent);
      c9_b_temp = (_SFD_CCP_CALL(3U, 0, *c9_ECUP_Off != 0U,
        chartInstance->c9_sfEvent) != 0);
      if (c9_b_temp) {
        c9_b_temp = (_SFD_CCP_CALL(3U, 1, *c9_TPSHiThresh != 0U,
          chartInstance->c9_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(3U, (int32_T)c9_b_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (*c9_Timer > 5.0) {
            transitionList[numTransitions] = 11;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_SpringTestSetpoint = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
        chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_SpringTest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_SpringTest = 1U;
        *c9_DC_Override = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
        *c9_TestComplete = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
        *c9_SetpointMode = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
        *c9_TestTime = 0.0;
        _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
        chartInstance->c9_TimerOld = *c9_Timer;
        _SFD_DATA_RANGE_CHECK(chartInstance->c9_TimerOld, 7U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                     chartInstance->c9_sfEvent);
        if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0, *c9_Timer >
              5.0 != 0U, chartInstance->c9_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c9_sfEvent);
          chartInstance->c9_tp_SpringTestSetpoint = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
          chartInstance->c9_is_c9_BaseEngineController_A02 =
            c9_IN_ForcedShutdown;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
          chartInstance->c9_tp_ForcedShutdown = 1U;
          *c9_DC_Override = 1;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
          *c9_TestComplete = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
          *c9_SetpointMode = 0;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
          *c9_TestTime = 0.0;
          _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c9_sfEvent);
    break;

   default:
    CV_CHART_EVAL(7, 0, 0);
    chartInstance->c9_is_c9_BaseEngineController_A02 = (uint8_T)
      c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c9_sfEvent);
}

static void initSimStructsc9_BaseEngineController_A02
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void c9_LowAdapt(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  boolean_T c9_temp;
  real_T *c9_Timer;
  boolean_T *c9_ECUP_Off;
  boolean_T *c9_LowAdaptError;
  int8_T *c9_DC_Override;
  boolean_T *c9_TestComplete;
  int8_T *c9_SetpointMode;
  real_T *c9_TestTime;
  c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c9_LowAdaptError = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_Timer = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c9_ECUP_Off = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c9_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U, chartInstance->c9_sfEvent);
  if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0, *c9_Timer > 5.0 !=
        0U, chartInstance->c9_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions = 1;
      transitionList[0] = 10;
      sf_debug_transition_conflict_check_begin();
      if ((*c9_ECUP_Off) && (*c9_LowAdaptError)) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      if (!*c9_ECUP_Off) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c9_sfEvent);
    chartInstance->c9_tp_LowAdapt = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
    chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_ForcedShutdown;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
    chartInstance->c9_tp_ForcedShutdown = 1U;
    *c9_DC_Override = 1;
    _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
    *c9_TestComplete = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
    *c9_SetpointMode = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
    *c9_TestTime = 0.0;
    _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c9_sfEvent);
    c9_temp = (_SFD_CCP_CALL(2U, 0, *c9_ECUP_Off != 0U,
                chartInstance->c9_sfEvent) != 0);
    if (c9_temp) {
      c9_temp = (_SFD_CCP_CALL(2U, 1, *c9_LowAdaptError != 0U,
                  chartInstance->c9_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(2U, (int32_T)c9_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 2;
        sf_debug_transition_conflict_check_begin();
        if (!*c9_ECUP_Off) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_LowAdapt = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
      chartInstance->c9_is_c9_BaseEngineController_A02 =
        c9_IN_SpringTestSetpoint;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
      chartInstance->c9_tp_SpringTestSetpoint = 1U;
      *c9_DC_Override = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
      *c9_TestComplete = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
      *c9_SetpointMode = 2;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
      *c9_TestTime = 0.0;
      _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c9_sfEvent);
      if (CV_TRANSITION_EVAL(5U, !(_SFD_CCP_CALL(5U, 0, *c9_ECUP_Off != 0U,
             chartInstance->c9_sfEvent) != 0))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_LowAdapt = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
        chartInstance->c9_is_c9_BaseEngineController_A02 = c9_IN_PassThrough;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_PassThrough = 1U;
        *c9_DC_Override = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_DC_Override, 2U);
        *c9_TestComplete = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_TestComplete, 8U);
        *c9_SetpointMode = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_SetpointMode, 9U);
        *c9_TestTime = 0.0;
        _SFD_DATA_RANGE_CHECK(*c9_TestTime, 0U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c9_sfEvent);
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

const mxArray *sf_c9_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  sf_mex_assign(&c9_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c9_nameCaptureInfo;
}

static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  int32_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(int32_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static int32_T c9_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  int32_T c9_y;
  int32_T c9_i0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_i0, 1, 6, 0U, 0, 0U, 0);
  c9_y = c9_i0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_sfEvent;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  int32_T c9_y;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_b_sfEvent = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_sfEvent), &c9_thisId);
  sf_mex_destroy(&c9_b_sfEvent);
  *(int32_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  uint8_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(uint8_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static uint8_T c9_b_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_b_tp_PassThrough, const char_T
  *c9_identifier)
{
  uint8_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_tp_PassThrough),
    &c9_thisId);
  sf_mex_destroy(&c9_b_tp_PassThrough);
  return c9_y;
}

static uint8_T c9_c_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_y;
  uint8_T c9_u0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_u0, 1, 3, 0U, 0, 0U, 0);
  c9_y = c9_u0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_tp_PassThrough;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  uint8_T c9_y;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_b_tp_PassThrough = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_tp_PassThrough),
    &c9_thisId);
  sf_mex_destroy(&c9_b_tp_PassThrough);
  *(uint8_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_c_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  real_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(real_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static real_T c9_d_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_TestTime, const char_T *c9_identifier)
{
  real_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_TestTime),
    &c9_thisId);
  sf_mex_destroy(&c9_TestTime);
  return c9_y;
}

static real_T c9_e_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  real_T c9_y;
  real_T c9_d0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_d0, 1, 0, 0U, 0, 0U, 0);
  c9_y = c9_d0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_TestTime;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  real_T c9_y;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_TestTime = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_TestTime),
    &c9_thisId);
  sf_mex_destroy(&c9_TestTime);
  *(real_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_d_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  boolean_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(boolean_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static const mxArray *c9_e_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  int8_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(int8_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 2, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static int8_T c9_f_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_DC_Override, const char_T *c9_identifier)
{
  int8_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_DC_Override),
    &c9_thisId);
  sf_mex_destroy(&c9_DC_Override);
  return c9_y;
}

static int8_T c9_g_emlrt_marshallIn(SFc9_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  int8_T c9_y;
  int8_T c9_i1;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_i1, 1, 2, 0U, 0, 0U, 0);
  c9_y = c9_i1;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_DC_Override;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  int8_T c9_y;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_DC_Override = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_DC_Override),
    &c9_thisId);
  sf_mex_destroy(&c9_DC_Override);
  *(int8_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static boolean_T c9_h_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_TestComplete, const char_T *c9_identifier)
{
  boolean_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_TestComplete),
    &c9_thisId);
  sf_mex_destroy(&c9_TestComplete);
  return c9_y;
}

static boolean_T c9_i_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  boolean_T c9_y;
  boolean_T c9_b0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b0, 1, 11, 0U, 0, 0U, 0);
  c9_y = c9_b0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_TestComplete;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  boolean_T c9_y;
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c9_TestComplete = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_TestComplete),
    &c9_thisId);
  sf_mex_destroy(&c9_TestComplete);
  *(boolean_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_j_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_b_setSimStateSideEffectsInfo, const char_T *c9_identifier)
{
  const mxArray *c9_y = NULL;
  emlrtMsgIdentifier c9_thisId;
  c9_y = NULL;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  sf_mex_assign(&c9_y, c9_k_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c9_b_setSimStateSideEffectsInfo), &c9_thisId));
  sf_mex_destroy(&c9_b_setSimStateSideEffectsInfo);
  return c9_y;
}

static const mxArray *c9_k_emlrt_marshallIn
  (SFc9_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  const mxArray *c9_y = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_duplicatearraysafe(&c9_u));
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void init_dsm_address_info(SFc9_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c9_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3365387370U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3387564858U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3889263172U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2213074372U);
}

mxArray *sf_c9_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2141310185U);
    pr[1] = (double)(4118296267U);
    pr[2] = (double)(1837173493U);
    pr[3] = (double)(845102210U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c9_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[22],T\"DC_Override\",},{M[1],M[29],T\"SetpointMode\",},{M[1],M[28],T\"TestComplete\",},{M[1],M[20],T\"TestTime\",},{M[3],M[27],T\"TimerOld\",},{M[8],M[0],T\"is_active_c9_BaseEngineController_A02\",},{M[9],M[0],T\"is_c9_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           9,
           6,
           13,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"TestTime");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ECUP_Off");
          _SFD_SET_DATA_PROPS(2,2,0,1,"DC_Override");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Timer");
          _SFD_SET_DATA_PROPS(4,1,1,0,"LowAdaptError");
          _SFD_SET_DATA_PROPS(5,1,1,0,"TPSHiThresh");
          _SFD_SET_DATA_PROPS(6,1,1,0,"TPSLoThresh");
          _SFD_SET_DATA_PROPS(7,0,0,0,"TimerOld");
          _SFD_SET_DATA_PROPS(8,2,0,1,"TestComplete");
          _SFD_SET_DATA_PROPS(9,2,0,1,"SetpointMode");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(6);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(6,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
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
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 24 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
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

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 24 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 11 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)c9_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_e_sf_marshallOut,(MexInFcnForType)c9_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)c9_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_d_sf_marshallOut,(MexInFcnForType)c9_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_e_sf_marshallOut,(MexInFcnForType)c9_d_sf_marshallIn);

        {
          real_T *c9_TestTime;
          boolean_T *c9_ECUP_Off;
          int8_T *c9_DC_Override;
          real_T *c9_Timer;
          boolean_T *c9_LowAdaptError;
          boolean_T *c9_TPSHiThresh;
          boolean_T *c9_TPSLoThresh;
          boolean_T *c9_TestComplete;
          int8_T *c9_SetpointMode;
          c9_SetpointMode = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c9_TestComplete = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c9_TPSLoThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c9_TPSHiThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c9_LowAdaptError = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c9_Timer = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c9_DC_Override = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c9_ECUP_Off = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c9_TestTime = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_TestTime);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_ECUP_Off);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_DC_Override);
          _SFD_SET_DATA_VALUE_PTR(3U, c9_Timer);
          _SFD_SET_DATA_VALUE_PTR(4U, c9_LowAdaptError);
          _SFD_SET_DATA_VALUE_PTR(5U, c9_TPSHiThresh);
          _SFD_SET_DATA_VALUE_PTR(6U, c9_TPSLoThresh);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c9_TimerOld);
          _SFD_SET_DATA_VALUE_PTR(8U, c9_TestComplete);
          _SFD_SET_DATA_VALUE_PTR(9U, c9_SetpointMode);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c9_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c9_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c9_BaseEngineController_A02(void *chartInstanceVar)
{
  disable_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c9_BaseEngineController_A02(void *chartInstanceVar)
{
  sf_c9_BaseEngineController_A02((SFc9_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c9_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c9_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c9_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c9_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c9_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c9_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c9_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_BaseEngineController_A02
      ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_BaseEngineController_A02
    ((SFc9_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_BaseEngineController_A02
      ((SFc9_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",9,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",9,5);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",9,4);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",9);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(584071504U));
  ssSetChecksum1(S,(955643171U));
  ssSetChecksum2(S,(226806274U));
  ssSetChecksum3(S,(2100689685U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c9_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",9);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c9_BaseEngineController_A02(SimStruct *S)
{
  SFc9_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc9_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc9_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c9_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c9_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_BaseEngineController_A02;
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

void c9_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
