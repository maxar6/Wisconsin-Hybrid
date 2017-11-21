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
static void c12_chartstep_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber);
static const mxArray *c12_sf_marshall(void *chartInstanceVoid, void *c12_u);
static const mxArray *c12_b_sf_marshall(void *chartInstanceVoid, void *c12_u);
static uint8_T c12_emlrt_marshallIn(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c12_IdleState, const char_T *c12_name);
static const mxArray *c12_b_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_name);
static void init_test_point_addr_map
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void **get_test_point_address_map
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint8_T *c12_IdleState;
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
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
    _SFD_CC_CALL(CHART_ACTIVE_TAG,10);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OffIdle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_Flaring) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c12_is_c12_BaseEngineController_A02 == c12_IN_OnIdle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c12_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c12_BaseEngineController_A02
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c12_st = NULL;
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
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c12_st)
{
  const mxArray *c12_u;
  uint8_T *c12_IdleState;
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_u = sf_mex_dup(c12_st);
  *c12_IdleState = c12_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 0)), "IdleState");
  chartInstance->c12_is_active_c12_BaseEngineController_A02 =
    c12_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1))
    , "is_active_c12_BaseEngineController_A02");
  chartInstance->c12_is_c12_BaseEngineController_A02 = c12_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 2)),
     "is_c12_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c12_setSimStateSideEffectsInfo,
                c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u
     , 3)), "setSimStateSideEffectsInfo"));
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
  int32_T c12_previousEvent;
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
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,10);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleEnable, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMFalling, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMInRange, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RPMLow, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_ThrCmdLow, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_ThrCmdHigh, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_APPTimeThresh, 7U);
  c12_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c12_chartstep_c12_BaseEngineController_A02(chartInstance);
  _sfEvent_ = c12_previousEvent;
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
}

static void c12_chartstep_c12_BaseEngineController_A02
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
  boolean_T *c12_RPMLow;
  boolean_T *c12_ThrCmdHigh;
  boolean_T *c12_IdleEnable;
  uint8_T *c12_IdleState;
  boolean_T *c12_RPMInRange;
  boolean_T *c12_ThrCmdLow;
  boolean_T *c12_APPTimeThresh;
  boolean_T *c12_RPMFalling;
  c12_APPTimeThresh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c12_IdleState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_ThrCmdHigh = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c12_ThrCmdLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_RPMLow = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c12_RPMInRange = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c12_RPMFalling = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c12_IdleEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,10);
  if ((int16_T)chartInstance->c12_is_active_c12_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,10);
    chartInstance->c12_is_active_c12_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_Flaring;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c12_tp_Flaring = 1U;
    *c12_IdleState = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
  } else {
    switch (chartInstance->c12_is_c12_BaseEngineController_A02) {
     case c12_IN_Flaring:
      CV_CHART_EVAL(10,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      c12_temp = (_SFD_CCP_CALL(1,0,((*c12_ThrCmdHigh)!=0)) != 0);
      if (!c12_temp) {
        c12_temp = !(_SFD_CCP_CALL(1,1,((*c12_IdleEnable)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c12_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((*c12_RPMFalling) && (*c12_ThrCmdLow)) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c12_tp_Flaring = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OffIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c12_tp_OffIdle = 1U;
        *c12_IdleState = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        c12_b_temp = (_SFD_CCP_CALL(3,0,((*c12_RPMFalling)!=0)) != 0);
        if (c12_b_temp) {
          c12_b_temp = (_SFD_CCP_CALL(3,1,((*c12_ThrCmdLow)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c12_b_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c12_tp_Flaring = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OnIdle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c12_tp_OnIdle = 1U;
          *c12_IdleState = 2U;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c12_IN_OffIdle:
      CV_CHART_EVAL(10,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      c12_c_temp = (_SFD_CCP_CALL(2,0,((*c12_IdleEnable)!=0)) != 0);
      if (c12_c_temp) {
        c12_d_temp = (_SFD_CCP_CALL(2,1,((*c12_RPMLow)!=0)) != 0);
        if (!c12_d_temp) {
          c12_e_temp = (_SFD_CCP_CALL(2,2,((*c12_RPMInRange)!=0)) != 0);
          if (c12_e_temp) {
            c12_e_temp = (_SFD_CCP_CALL(2,3,((*c12_ThrCmdLow)!=0)) != 0);
          }

          c12_d_temp = c12_e_temp;
        }

        c12_c_temp = c12_d_temp;
      }

      c12_f_temp = c12_c_temp;
      if (!c12_f_temp) {
        c12_f_temp = (_SFD_CCP_CALL(2,4,((*c12_APPTimeThresh)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c12_f_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c12_tp_OffIdle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OnIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c12_tp_OnIdle = 1U;
        *c12_IdleState = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c12_IN_OnIdle:
      CV_CHART_EVAL(10,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      c12_g_temp = !(_SFD_CCP_CALL(4,0,((*c12_RPMLow)!=0)) != 0);
      if (c12_g_temp) {
        c12_h_temp = (_SFD_CCP_CALL(4,1,((*c12_ThrCmdHigh)!=0)) != 0);
        if (!c12_h_temp) {
          c12_h_temp = !(_SFD_CCP_CALL(4,2,((*c12_IdleEnable)!=0)) != 0);
        }

        c12_g_temp = c12_h_temp;
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c12_g_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c12_tp_OnIdle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c12_is_c12_BaseEngineController_A02 = c12_IN_OffIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c12_tp_OffIdle = 1U;
        *c12_IdleState = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_IdleState, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     default:
      CV_CHART_EVAL(10,0,0);
      chartInstance->c12_is_c12_BaseEngineController_A02 = (uint8_T)
        c12_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
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

static const mxArray *c12_sf_marshall(void *chartInstanceVoid, void *c12_u)
{
  const mxArray *c12_y = NULL;
  uint8_T c12_b_u;
  const mxArray *c12_b_y = NULL;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_y = NULL;
  c12_b_u = *((uint8_T *)c12_u);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_y, c12_b_y);
  return c12_y;
}

static const mxArray *c12_b_sf_marshall(void *chartInstanceVoid, void *c12_u)
{
  const mxArray *c12_y = NULL;
  boolean_T c12_b_u;
  const mxArray *c12_b_y = NULL;
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c12_y = NULL;
  c12_b_u = *((boolean_T *)c12_u);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_y, c12_b_y);
  return c12_y;
}

static uint8_T c12_emlrt_marshallIn(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c12_IdleState,
  const char_T *c12_name)
{
  uint8_T c12_y;
  uint8_T c12_u0;
  sf_mex_import(c12_name, sf_mex_dup(c12_IdleState), &c12_u0, 1, 3, 0U, 0, 0U, 0);
  c12_y = c12_u0;
  sf_mex_destroy(&c12_IdleState);
  return c12_y;
}

static const mxArray *c12_b_emlrt_marshallIn
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c12_b_setSimStateSideEffectsInfo, const char_T *c12_name)
{
  const mxArray *c12_y = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_duplicatearraysafe
                (&c12_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c12_b_setSimStateSideEffectsInfo);
  return c12_y;
}

static void init_test_point_addr_map
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  chartInstance->c12_testPointAddrMap[0] = &chartInstance->c12_tp_Flaring;
  chartInstance->c12_testPointAddrMap[1] = &chartInstance->c12_tp_OffIdle;
  chartInstance->c12_testPointAddrMap[2] = &chartInstance->c12_tp_OnIdle;
}

static void **get_test_point_address_map
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c12_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc12_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c12_testPointMappingInfo;
}

static void init_dsm_address_info(SFc12_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c12_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2067103566U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1976099589U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2256685232U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(818250964U);
}

mxArray *sf_c12_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3092183532U);
    pr[1] = (double)(2472512259U);
    pr[2] = (double)(1009163258U);
    pr[3] = (double)(621897516U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c12_BaseEngineController_A02(void)
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "IdleEnable",0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "RPMFalling",0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "RPMInRange",0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"RPMLow",0,
                              (MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "ThrCmdLow",0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "ThrCmdHigh",0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "IdleState",0,(MexFcnForType)c12_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "APPTimeThresh",0,(MexFcnForType)c12_b_sf_marshall);
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

static mxArray* sf_internal_get_sim_state_c12_BaseEngineController_A02(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c12_BaseEngineController_A02
    ((SFc12_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c12_BaseEngineController_A02();/* state var info */
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

static void sf_internal_set_sim_state_c12_BaseEngineController_A02(SimStruct* S,
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

static mxArray* sf_opaque_get_sim_state_c12_BaseEngineController_A02(SimStruct*
  S)
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
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
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
      (int_T)sf_is_chart_inlinable("BaseEngineController_A02",
      "BaseEngineController_A02",12);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
                "BaseEngineController_A02",12,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
      "BaseEngineController_A02",12,"gatewayCannotBeInlinedMultipleTimes"));
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
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(778503163U));
  ssSetChecksum1(S,(512220627U));
  ssSetChecksum2(S,(595125829U));
  ssSetChecksum3(S,(879032026U));
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
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info(chartInstance);
  }

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
  { 0, 0, "StateflowChart/Flaring", "Flaring", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/OffIdle", "OffIdle", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/OnIdle", "OnIdle", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    3                                  /* Num Block IO signals */
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
  SFc12_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc12_BaseEngineController_A02InstanceStruct *)
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
