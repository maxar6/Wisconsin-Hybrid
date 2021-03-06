/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c12_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c12_IN_NO_ACTIVE_CHILD         (0U)
#define c12_IN_OffIdle                 (2U)
#define c12_IN_Flaring                 (1U)
#define c12_IN_OnIdle                  (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void c12_update_debugger_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_st);
static void c12_set_sim_state_side_effects_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber);
static const mxArray *c12_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static int32_T c12_emlrt_marshallIn(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_b_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static uint8_T c12_b_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_b_tp_OffIdle, const char_T *c12_identifier);
static uint8_T c12_c_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static const mxArray *c12_d_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier);
static const mxArray *c12_e_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void init_dsm_address_info(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint8_T *c12_IdleState;
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c12_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c12_doSetSimStateSideEffects = 0U;
  chartInstance->c12_setSimStateSideEffectsInfo = NULL;
  chartInstance->c12_tp_Flaring = 0U;
  chartInstance->c12_tp_OffIdle = 0U;
  chartInstance->c12_tp_OnIdle = 0U;
  chartInstance->c12_is_active_c12_BaseEngineController_A02 = 0U;
  chartInstance->c12_is_c12_BaseEngineController_A02 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c12_IdleState = 0U;
  }
}

static void initialize_params_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c12_update_debugger_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c12_prevAniVal;
  c12_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c12_is_active_c12_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 10U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OffIdle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_Flaring) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OnIdle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
  }

  sf_debug_set_animation(c12_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c12_st;
  const mxArray *c12_y = NULL;
  uint8_T c12_hoistedGlobal;
  uint8_T c12_u;
  const mxArray *c12_b_y = NULL;
  uint8_T c12_b_hoistedGlobal;
  uint8_T c12_b_u;
  const mxArray *c12_c_y = NULL;
  uint8_T c12_c_hoistedGlobal;
  uint8_T c12_c_u;
  const mxArray *c12_d_y = NULL;
  uint8_T *c12_IdleState;
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_st = NULL;
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellarray(3));
  c12_hoistedGlobal = *c12_IdleState;
  c12_u = c12_hoistedGlobal;
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_b_hoistedGlobal =
    chartInstance->c12_is_active_c12_BaseEngineController_A02;
  c12_b_u = c12_b_hoistedGlobal;
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", &c12_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 1, c12_c_y);
  c12_c_hoistedGlobal = chartInstance->c12_is_c12_BaseEngineController_A02;
  c12_c_u = c12_c_hoistedGlobal;
  c12_d_y = NULL;
  sf_mex_assign(&c12_d_y, sf_mex_create("y", &c12_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 2, c12_d_y);
  sf_mex_assign(&c12_st, c12_y);
  return c12_st;
}

static void set_sim_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_st)
{
  const mxArray *c12_u;
  uint8_T *c12_IdleState;
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_u = sf_mex_dup(c12_st);
  *c12_IdleState = c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 0)), "IdleState");
  chartInstance->c12_is_active_c12_BaseEngineController_A02 =
    c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1)),
    "is_active_c12_BaseEngineController_A02");
  chartInstance->c12_is_c12_BaseEngineController_A02 = c12_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 2)),
     "is_c12_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c12_setSimStateSideEffectsInfo,
                c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c12_u);
  chartInstance->c12_doSetSimStateSideEffects = 1U;
  c12_update_debugger_state_c12_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c12_st);
}

static void c12_set_sim_state_side_effects_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c12_doSetSimStateSideEffects != 0) {
    if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_Flaring) {
      chartInstance->c12_tp_Flaring = 1U;
    } else {
      chartInstance->c12_tp_Flaring = 0U;
    }

    if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OffIdle) {
      chartInstance->c12_tp_OffIdle = 1U;
    } else {
      chartInstance->c12_tp_OffIdle = 0U;
    }

    if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OnIdle) {
      chartInstance->c12_tp_OnIdle = 1U;
    } else {
      chartInstance->c12_tp_OnIdle = 0U;
    }

    chartInstance->c12_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c12_setSimStateSideEffectsInfo);
}

static void sf_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  boolean_T c12_temp;
  boolean_T c12_b_temp;
  boolean_T c12_c_temp;
  boolean_T c12_d_temp;
  boolean_T c12_e_temp;
  boolean_T c12_f_temp;
  boolean_T c12_g_temp;
  boolean_T c12_h_temp;
  boolean_T *c12_IdleEnable;
  boolean_T *c12_RPMFalling;
  boolean_T *c12_RPMInRange;
  boolean_T *c12_RPMLow;
  boolean_T *c12_ThrCmdLow;
  boolean_T *c12_ThrCmdHigh;
  uint8_T *c12_IdleState;
  boolean_T *c12_APPTimeThresh;
  c12_APPTimeThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_ThrCmdHigh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c12_ThrCmdLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_RPMLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c12_RPMInRange = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c12_RPMFalling = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c12_IdleEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c12_set_sim_state_side_effects_c12_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 10U, chartInstance->c12_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleEnable, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMFalling, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMInRange, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMLow, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_ThrCmdLow, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_ThrCmdHigh, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_APPTimeThresh, 7U);
  chartInstance->c12_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 10U, chartInstance->c12_sfEvent);
  if ((int16_T)chartInstance->c12_is_active_c12_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 10U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_active_c12_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, chartInstance->c12_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c12_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_Flaring;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Flaring = 1U;
    *c12_IdleState = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
  } else {
    switch (chartInstance->c12_is_c12_BaseEngineController_A02) {
     case c12_IN_Flaring:
      CV_CHART_EVAL(10, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c12_sfEvent);
      c12_temp = (_SFD_CCP_CALL(1U, 0, *c12_ThrCmdHigh != 0U,
        chartInstance->c12_sfEvent) != 0);
      if (!c12_temp) {
        c12_temp = !(_SFD_CCP_CALL(1U, 1, *c12_IdleEnable != 0U,
          chartInstance->c12_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c12_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((*c12_RPMFalling) && (*c12_ThrCmdLow)) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_Flaring = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OffIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_OffIdle = 1U;
        *c12_IdleState = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c12_sfEvent);
        c12_b_temp = (_SFD_CCP_CALL(3U, 0, *c12_RPMFalling != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (c12_b_temp) {
          c12_b_temp = (_SFD_CCP_CALL(3U, 1, *c12_ThrCmdLow != 0U,
            chartInstance->c12_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c12_b_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_Flaring = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
          chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OnIdle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_OnIdle = 1U;
          *c12_IdleState = 2U;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c12_sfEvent);
      break;

     case c12_IN_OffIdle:
      CV_CHART_EVAL(10, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c12_sfEvent);
      c12_c_temp = (_SFD_CCP_CALL(2U, 0, *c12_IdleEnable != 0U,
        chartInstance->c12_sfEvent) != 0);
      if (c12_c_temp) {
        c12_d_temp = (_SFD_CCP_CALL(2U, 1, *c12_RPMLow != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (!c12_d_temp) {
          c12_e_temp = (_SFD_CCP_CALL(2U, 2, *c12_RPMInRange != 0U,
            chartInstance->c12_sfEvent) != 0);
          if (c12_e_temp) {
            c12_e_temp = (_SFD_CCP_CALL(2U, 3, *c12_ThrCmdLow != 0U,
              chartInstance->c12_sfEvent) != 0);
          }

          c12_d_temp = c12_e_temp;
        }

        c12_c_temp = c12_d_temp;
      }

      c12_f_temp = c12_c_temp;
      if (!c12_f_temp) {
        c12_f_temp = (_SFD_CCP_CALL(2U, 4, *c12_APPTimeThresh != 0U,
          chartInstance->c12_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c12_f_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_OffIdle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OnIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_OnIdle = 1U;
        *c12_IdleState = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c12_sfEvent);
      break;

     case c12_IN_OnIdle:
      CV_CHART_EVAL(10, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c12_sfEvent);
      c12_g_temp = !(_SFD_CCP_CALL(4U, 0, *c12_RPMLow != 0U,
        chartInstance->c12_sfEvent) != 0);
      if (c12_g_temp) {
        c12_h_temp = (_SFD_CCP_CALL(4U, 1, *c12_ThrCmdHigh != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (!c12_h_temp) {
          c12_h_temp = !(_SFD_CCP_CALL(4U, 2, *c12_IdleEnable != 0U,
            chartInstance->c12_sfEvent) != 0);
        }

        c12_g_temp = c12_h_temp;
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c12_g_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_OnIdle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OffIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_OffIdle = 1U;
        *c12_IdleState = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c12_sfEvent);
      break;

     default:
      CV_CHART_EVAL(10, 0, 0);
      chartInstance->c12_is_c12_BaseEngineController_A02 = (uint8_T)
        c12_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, chartInstance->c12_sfEvent);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber)
{
}

const mxArray *sf_c12_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c12_nameCaptureInfo = NULL;
  c12_nameCaptureInfo = NULL;
  sf_mex_assign(&c12_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c12_nameCaptureInfo;
}

static const mxArray *c12_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData = NULL;
  int32_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(int32_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static int32_T c12_emlrt_marshallIn(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  int32_T c12_y;
  int32_T c12_i0;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_i0, 1, 6, 0U, 0, 0U, 0);
  c12_y = c12_i0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_b_sfEvent;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  int32_T c12_y;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_b_sfEvent = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_sfEvent),
    &c12_thisId);
  sf_mex_destroy(&c12_b_sfEvent);
  *(int32_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_b_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData = NULL;
  uint8_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(uint8_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static uint8_T c12_b_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_b_tp_OffIdle, const char_T *c12_identifier)
{
  uint8_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_tp_OffIdle),
    &c12_thisId);
  sf_mex_destroy(&c12_b_tp_OffIdle);
  return c12_y;
}

static uint8_T c12_c_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  uint8_T c12_y;
  uint8_T c12_u0;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_u0, 1, 3, 0U, 0, 0U, 0);
  c12_y = c12_u0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_b_tp_OffIdle;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  uint8_T c12_y;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_b_tp_OffIdle = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_tp_OffIdle),
    &c12_thisId);
  sf_mex_destroy(&c12_b_tp_OffIdle);
  *(uint8_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData = NULL;
  boolean_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(boolean_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static const mxArray *c12_d_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier)
{
  const mxArray *c12_y = NULL;
  emlrtMsgIdentifier c12_thisId;
  c12_y = NULL;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  sf_mex_assign(&c12_y, c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_setSimStateSideEffectsInfo), &c12_thisId));
  sf_mex_destroy(&c12_b_setSimStateSideEffectsInfo);
  return c12_y;
}

static const mxArray *c12_e_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  const mxArray *c12_y = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_duplicatearraysafe(&c12_u));
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void init_dsm_address_info(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c12_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1669966782U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1068076040U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(537989641U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(70436608U);
}

mxArray *sf_c12_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(4094139277U);
    pr[1] = (double)(696415120U);
    pr[2] = (double)(4184334565U);
    pr[3] = (double)(3868383077U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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

static const mxArray *sf_get_sim_state_info_c12_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[15],T\"IdleState\",},{M[8],M[0],T\"is_active_c12_BaseEngineController_A02\",},{M[9],M[0],T\"is_c12_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           12,
           3,
           5,
           8,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"IdleEnable");
          _SFD_SET_DATA_PROPS(1,1,1,0,"RPMFalling");
          _SFD_SET_DATA_PROPS(2,1,1,0,"RPMInRange");
          _SFD_SET_DATA_PROPS(3,1,1,0,"RPMLow");
          _SFD_SET_DATA_PROPS(4,1,1,0,"ThrCmdLow");
          _SFD_SET_DATA_PROPS(5,1,1,0,"ThrCmdHigh");
          _SFD_SET_DATA_PROPS(6,2,0,1,"IdleState");
          _SFD_SET_DATA_PROPS(7,1,1,0,"APPTimeThresh");
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
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 11, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -2 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 16, 27, 45, 60 };

          static unsigned int sEndGuardMap[] = { 11, 22, 37, 54, 73 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, 3, -3, -2, -3, 4, -2 };

          _SFD_CV_INIT_TRANS(2,5,&(sStartGuardMap[0]),&(sEndGuardMap[0]),9,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 24 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 11, 26 };

          static unsigned int sEndGuardMap[] = { 8, 21, 36 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, 2, -1, -2, -3 };

          _SFD_CV_INIT_TRANS(4,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
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

        _SFD_TRANS_COV_WTS(1,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 11, 26 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,5,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 16, 27, 45, 60 };

          static unsigned int sEndGuardMap[] = { 11, 22, 37, 54, 73 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              5,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 24 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 11, 26 };

          static unsigned int sEndGuardMap[] = { 8, 21, 36 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_b_sf_marshallOut,(MexInFcnForType)
          c12_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c12_IdleEnable;
          boolean_T *c12_RPMFalling;
          boolean_T *c12_RPMInRange;
          boolean_T *c12_RPMLow;
          boolean_T *c12_ThrCmdLow;
          boolean_T *c12_ThrCmdHigh;
          uint8_T *c12_IdleState;
          boolean_T *c12_APPTimeThresh;
          c12_APPTimeThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            6);
          c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c12_ThrCmdHigh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c12_ThrCmdLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c12_RPMLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c12_RPMInRange = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c12_RPMFalling = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c12_IdleEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c12_IdleEnable);
          _SFD_SET_DATA_VALUE_PTR(1U, c12_RPMFalling);
          _SFD_SET_DATA_VALUE_PTR(2U, c12_RPMInRange);
          _SFD_SET_DATA_VALUE_PTR(3U, c12_RPMLow);
          _SFD_SET_DATA_VALUE_PTR(4U, c12_ThrCmdLow);
          _SFD_SET_DATA_VALUE_PTR(5U, c12_ThrCmdHigh);
          _SFD_SET_DATA_VALUE_PTR(6U, c12_IdleState);
          _SFD_SET_DATA_VALUE_PTR(7U, c12_APPTimeThresh);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c12_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc12_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c12_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c12_BaseEngineController_A02(void
  *chartInstanceVar)
{
  disable_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c12_BaseEngineController_A02(void
  *chartInstanceVar)
{
  sf_c12_BaseEngineController_A02((SFc12_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c12_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c12_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c12_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c12_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c12_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c12_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c12_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c12_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c12_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c12_BaseEngineController_A02
      ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_BaseEngineController_A02
      ((SFc12_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c12_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",12);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",12,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",12,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",12,7);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",12,1);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",12);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1196831658U));
  ssSetChecksum1(S,(2233976532U));
  ssSetChecksum2(S,(3162751154U));
  ssSetChecksum3(S,(2680982026U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c12_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",12);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c12_BaseEngineController_A02(SimStruct *S)
{
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc12_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc12_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c12_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c12_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c12_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c12_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c12_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c12_BaseEngineController_A02;
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

void c12_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c12_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
