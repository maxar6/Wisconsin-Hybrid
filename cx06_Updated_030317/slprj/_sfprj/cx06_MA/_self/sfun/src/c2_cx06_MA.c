/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c2_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0U)
#define c2_IN_PowerUp                  (4U)
#define c2_IN_On                       (2U)
#define c2_IN_Estop                    (1U)
#define c2_IN_PowerDown                (3U)
#define c2_IN_ShutDown                 (5U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void disable_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *
  chartInstance);
static void finalize_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void sf_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void c2_chartstep_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u);
static boolean_T c2_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_MPRD, const char_T *c2_name);
static uint8_T c2_b_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_MS_State, const char_T *c2_name);
static uint32_T c2_c_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_b_PowerDownEventCounter, const char_T *c2_name);
static const mxArray *c2_d_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_name);
static void init_test_point_addr_map(SFc2_cx06_MAInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc2_cx06_MAInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_cx06_MAInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc2_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  uint8_T *c2_MS_State;
  boolean_T *c2_MPRD;
  boolean_T *c2_Shutdown;
  boolean_T *c2_PowerUp;
  boolean_T *c2_PowerDown;
  c2_PowerDown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_PowerUp = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  chartInstance->c2_tp_Estop = 0U;
  chartInstance->c2_tp_On = 0U;
  chartInstance->c2_tp_PowerDown = 0U;
  chartInstance->c2_tp_PowerUp = 0U;
  chartInstance->c2_tp_ShutDown = 0U;
  chartInstance->c2_is_active_c2_cx06_MA = 0U;
  chartInstance->c2_is_c2_cx06_MA = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c2_MS_State = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c2_MPRD = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c2_Shutdown = TRUE;
  }

  chartInstance->c2_PowerUpEventCounter = 0U;
  *c2_PowerUp = FALSE;
  chartInstance->c2_PowerDownEventCounter = 0U;
  *c2_PowerDown = FALSE;
}

static void initialize_params_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance)
{
  uint32_T c2_prevAniVal;
  c2_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c2_is_active_c2_cx06_MA == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,0);
  }

  if (chartInstance->c2_is_c2_cx06_MA == c2_IN_PowerUp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c2_is_c2_cx06_MA == c2_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_c2_cx06_MA == c2_IN_Estop) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c2_is_c2_cx06_MA == c2_IN_PowerDown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c2_is_c2_cx06_MA == c2_IN_ShutDown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  sf_debug_set_animation(c2_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  boolean_T c2_hoistedGlobal;
  boolean_T c2_u;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  uint8_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_c_hoistedGlobal;
  boolean_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  boolean_T c2_d_hoistedGlobal;
  boolean_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  boolean_T c2_e_hoistedGlobal;
  boolean_T c2_e_u;
  const mxArray *c2_f_y = NULL;
  uint32_T c2_f_hoistedGlobal;
  uint32_T c2_f_u;
  const mxArray *c2_g_y = NULL;
  uint32_T c2_g_hoistedGlobal;
  uint32_T c2_g_u;
  const mxArray *c2_h_y = NULL;
  uint8_T c2_h_hoistedGlobal;
  uint8_T c2_h_u;
  const mxArray *c2_i_y = NULL;
  uint8_T c2_i_hoistedGlobal;
  uint8_T c2_i_u;
  const mxArray *c2_j_y = NULL;
  boolean_T *c2_MPRD;
  uint8_T *c2_MS_State;
  boolean_T *c2_Shutdown;
  boolean_T *c2_PowerDown;
  boolean_T *c2_PowerUp;
  c2_PowerDown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_PowerUp = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(9));
  c2_hoistedGlobal = *c2_MPRD;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_MS_State;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = *c2_Shutdown;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = *c2_PowerDown;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_e_hoistedGlobal = *c2_PowerUp;
  c2_e_u = c2_e_hoistedGlobal;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_e_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_f_hoistedGlobal = chartInstance->c2_PowerDownEventCounter;
  c2_f_u = c2_f_hoistedGlobal;
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_f_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_g_hoistedGlobal = chartInstance->c2_PowerUpEventCounter;
  c2_g_u = c2_g_hoistedGlobal;
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_g_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 6, c2_h_y);
  c2_h_hoistedGlobal = chartInstance->c2_is_active_c2_cx06_MA;
  c2_h_u = c2_h_hoistedGlobal;
  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_i_hoistedGlobal = chartInstance->c2_is_c2_cx06_MA;
  c2_i_u = c2_i_hoistedGlobal;
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 8, c2_j_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_st)
{
  const mxArray *c2_u;
  boolean_T *c2_MPRD;
  uint8_T *c2_MS_State;
  boolean_T *c2_Shutdown;
  boolean_T *c2_PowerDown;
  boolean_T *c2_PowerUp;
  c2_PowerDown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_PowerUp = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_u = sf_mex_dup(c2_st);
  *c2_MPRD = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    0)), "MPRD");
  *c2_MS_State = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 1)), "MS_State");
  *c2_Shutdown = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 2)), "Shutdown");
  *c2_PowerDown = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 3)), "PowerDown");
  *c2_PowerUp = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 4)), "PowerUp");
  chartInstance->c2_PowerDownEventCounter = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 5)),
    "PowerDownEventCounter");
  chartInstance->c2_PowerUpEventCounter = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 6)),
    "PowerUpEventCounter");
  chartInstance->c2_is_active_c2_cx06_MA = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 7)),
    "is_active_c2_cx06_MA");
  chartInstance->c2_is_c2_cx06_MA = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 8)), "is_c2_cx06_MA");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 9)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_cx06_MA(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *
  chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (chartInstance->c2_is_c2_cx06_MA == c2_IN_Estop) {
      chartInstance->c2_tp_Estop = 1U;
    } else {
      chartInstance->c2_tp_Estop = 0U;
    }

    if (chartInstance->c2_is_c2_cx06_MA == c2_IN_On) {
      chartInstance->c2_tp_On = 1U;
    } else {
      chartInstance->c2_tp_On = 0U;
    }

    if (chartInstance->c2_is_c2_cx06_MA == c2_IN_PowerDown) {
      chartInstance->c2_tp_PowerDown = 1U;
    } else {
      chartInstance->c2_tp_PowerDown = 0U;
    }

    if (chartInstance->c2_is_c2_cx06_MA == c2_IN_PowerUp) {
      chartInstance->c2_tp_PowerUp = 1U;
    } else {
      chartInstance->c2_tp_PowerUp = 0U;
    }

    if (chartInstance->c2_is_c2_cx06_MA == c2_IN_ShutDown) {
      chartInstance->c2_tp_ShutDown = 1U;
    } else {
      chartInstance->c2_tp_ShutDown = 0U;
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c2_previousEvent;
  boolean_T *c2_EStop;
  boolean_T *c2_Ecup;
  uint8_T *c2_MS_State;
  uint8_T *c2_PowerDown_Cmplt;
  boolean_T *c2_MPRD;
  boolean_T *c2_Shutdown;
  boolean_T *c2_PowerUp;
  boolean_T *c2_PowerDown;
  c2_PowerDown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_PowerUp = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_PowerDown_Cmplt = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_Ecup = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_EStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c2_set_sim_state_side_effects_c2_cx06_MA(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_EStop, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Ecup, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_MS_State, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_PowerDown_Cmplt, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Shutdown, 5U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c2_chartstep_c2_cx06_MA(chartInstance);
  _sfEvent_ = c2_previousEvent;
  if (chartInstance->c2_PowerUpEventCounter > 0U) {
    *c2_PowerUp = !(*c2_PowerUp);
    chartInstance->c2_PowerUpEventCounter =
      chartInstance->c2_PowerUpEventCounter - 1U;
  }

  if (chartInstance->c2_PowerDownEventCounter > 0U) {
    *c2_PowerDown = !(*c2_PowerDown);
    chartInstance->c2_PowerDownEventCounter =
      chartInstance->c2_PowerDownEventCounter - 1U;
  }

  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c2_chartstep_c2_cx06_MA(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  uint8_T c2_u0;
  boolean_T c2_temp;
  boolean_T c2_b_temp;
  boolean_T *c2_MPRD;
  boolean_T *c2_EStop;
  uint8_T *c2_MS_State;
  boolean_T *c2_Ecup;
  uint8_T *c2_PowerDown_Cmplt;
  boolean_T *c2_Shutdown;
  c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_PowerDown_Cmplt = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_Ecup = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_EStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  if ((int16_T)chartInstance->c2_is_active_c2_cx06_MA == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,0);
    chartInstance->c2_is_active_c2_cx06_MA = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    sf_mex_printf("%s\\n", "PowerUp");
    chartInstance->c2_PowerUpEventCounter =
      chartInstance->c2_PowerUpEventCounter + 1U;
    chartInstance->c2_is_c2_cx06_MA = c2_IN_PowerUp;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c2_tp_PowerUp = 1U;
  } else {
    switch (chartInstance->c2_is_c2_cx06_MA) {
     case c2_IN_Estop:
      CV_CHART_EVAL(0,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,(((int16_T)*c2_EStop
              == 0)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_Ecup == 0) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c2_tp_Estop = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c2_is_c2_cx06_MA = c2_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c2_tp_On = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,(((int16_T)
                *c2_Ecup == 0)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c2_tp_Estop = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c2_is_c2_cx06_MA = c2_IN_PowerDown;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c2_tp_PowerDown = 1U;
        } else {
          *c2_MS_State = 2U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MS_State, 2U);
          c2_u0 = *c2_MS_State;
          sf_mex_printf("%s =\\n", "MS_State");
          sf_mex_call_debug("disp", 0U, 1U, 9, c2_u0);
          *c2_MPRD = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c2_IN_On:
      CV_CHART_EVAL(0,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,(((int16_T)*c2_Ecup ==
              0)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_EStop == 1) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c2_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c2_is_c2_cx06_MA = c2_IN_PowerDown;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c2_tp_PowerDown = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,(((int16_T)
                *c2_EStop == 1)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
          chartInstance->c2_tp_On = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
          chartInstance->c2_is_c2_cx06_MA = c2_IN_Estop;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
          chartInstance->c2_tp_Estop = 1U;
        } else {
          *c2_MS_State = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MS_State, 2U);
          *c2_MPRD = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c2_IN_PowerDown:
      CV_CHART_EVAL(0,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      c2_temp = (_SFD_CCP_CALL(9,0,(((int16_T)*c2_Ecup == 1)!=0)) != 0);
      if (c2_temp) {
        c2_temp = (_SFD_CCP_CALL(9,1,(((int16_T)*c2_EStop == 0)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(9U, (int32_T)c2_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions= 1;
          transitionList[0] = 9;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_PowerDown_Cmplt == 1) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          if (((int16_T)*c2_Ecup == 1) && ((int16_T)*c2_EStop == 1)) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c2_tp_PowerDown = 0U;
        chartInstance->c2_is_c2_cx06_MA = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c2_is_c2_cx06_MA = c2_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c2_tp_On = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,(((int16_T)
                *c2_PowerDown_Cmplt == 1)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 7;
            sf_debug_transition_conflict_check_begin();
            if (((int16_T)*c2_Ecup == 1) && ((int16_T)*c2_EStop == 1)) {
              transitionList[numTransitions] = 8;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c2_tp_PowerDown = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c2_is_c2_cx06_MA = c2_IN_ShutDown;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c2_tp_ShutDown = 1U;
          *c2_Shutdown = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_Shutdown, 5U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
          c2_b_temp = (_SFD_CCP_CALL(8,0,(((int16_T)*c2_Ecup == 1)!=0)) != 0);
          if (c2_b_temp) {
            c2_b_temp = (_SFD_CCP_CALL(8,1,(((int16_T)*c2_EStop == 1)!=0)) != 0);
          }

          if (CV_TRANSITION_EVAL(8U, (int32_T)c2_b_temp) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
            chartInstance->c2_tp_PowerDown = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
            chartInstance->c2_is_c2_cx06_MA = c2_IN_Estop;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
            chartInstance->c2_tp_Estop = 1U;
          } else {
            *c2_MS_State = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_MS_State, 2U);
            *c2_MPRD = *c2_EStop;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c2_IN_PowerUp:
      CV_CHART_EVAL(0,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((int16_T)*c2_EStop
              == 0)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_EStop == 1) {
            transitionList[numTransitions] = 2;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c2_tp_PowerUp = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c2_is_c2_cx06_MA = c2_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c2_tp_On = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
        if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,(((int16_T)
                *c2_EStop == 1)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c2_tp_PowerUp = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c2_is_c2_cx06_MA = c2_IN_Estop;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
          chartInstance->c2_tp_Estop = 1U;
        } else {
          *c2_MS_State = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MS_State, 2U);
          *c2_MPRD = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c2_IN_ShutDown:
      CV_CHART_EVAL(0,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      *c2_MPRD = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_MPRD, 4U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(0,0,0);
      chartInstance->c2_is_c2_cx06_MA = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

const mxArray *sf_c2_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c2_nameCaptureInfo;
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint32_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc2_cx06_MAInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint32_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc2_cx06_MAInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc2_cx06_MAInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static boolean_T c2_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_MPRD, const char_T *c2_name)
{
  boolean_T c2_y;
  boolean_T c2_b0;
  sf_mex_import(c2_name, sf_mex_dup(c2_MPRD), &c2_b0, 1, 11, 0U, 0, 0U, 0);
  c2_y = c2_b0;
  sf_mex_destroy(&c2_MPRD);
  return c2_y;
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_MS_State, const char_T *c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u1;
  sf_mex_import(c2_name, sf_mex_dup(c2_MS_State), &c2_u1, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u1;
  sf_mex_destroy(&c2_MS_State);
  return c2_y;
}

static uint32_T c2_c_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c2_b_PowerDownEventCounter, const
  char_T *c2_name)
{
  uint32_T c2_y;
  uint32_T c2_u2;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_PowerDownEventCounter), &c2_u2, 1, 7,
                0U, 0, 0U, 0);
  c2_y = c2_u2;
  sf_mex_destroy(&c2_b_PowerDownEventCounter);
  return c2_y;
}

static const mxArray *c2_d_emlrt_marshallIn(SFc2_cx06_MAInstanceStruct
  *chartInstance, const mxArray *
  c2_b_setSimStateSideEffectsInfo, const char_T *c2_name)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe
                (&c2_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static void init_test_point_addr_map(SFc2_cx06_MAInstanceStruct *chartInstance)
{
  chartInstance->c2_testPointAddrMap[0] = &chartInstance->c2_tp_Estop;
  chartInstance->c2_testPointAddrMap[1] = &chartInstance->c2_tp_On;
  chartInstance->c2_testPointAddrMap[2] = &chartInstance->c2_tp_PowerDown;
  chartInstance->c2_testPointAddrMap[3] = &chartInstance->c2_tp_PowerUp;
  chartInstance->c2_testPointAddrMap[4] = &chartInstance->c2_tp_ShutDown;
}

static void **get_test_point_address_map(SFc2_cx06_MAInstanceStruct
  *chartInstance)
{
  return &chartInstance->c2_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_cx06_MAInstanceStruct *chartInstance)
{
  return &chartInstance->c2_testPointMappingInfo;
}

static void init_dsm_address_info(SFc2_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c2_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1182940799U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3846642430U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2498974565U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2294495046U);
}

mxArray *sf_c2_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1397946310U);
    pr[1] = (double)(1917122221U);
    pr[2] = (double)(3729100401U);
    pr[3] = (double)(219484177U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[20],T\"MPRD\",},{M[1],M[18],T\"MS_State\",},{M[1],M[21],T\"Shutdown\",},{M[6],M[23],T\"PowerDown\",},{M[6],M[22],T\"PowerUp\",},{M[7],M[23],T\"PowerDownEventCounter\",},{M[7],M[22],T\"PowerUpEventCounter\",},{M[8],M[0],T\"is_active_c2_cx06_MA\",},{M[9],M[0],T\"is_c2_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc2_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          2,
          5,
          10,
          6,
          2,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            2,
            2,
            2);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"EStop",0,
                              (MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Ecup",0,
                              (MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"MS_State",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "PowerDown_Cmplt",0,(MexFcnForType)
                              c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"MPRD",0,
                              (MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Shutdown",
                              0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_EVENT_SCOPE(0,2);
          _SFD_EVENT_SCOPE(1,2);
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

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 11, 28 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c2_EStop;
          boolean_T *c2_Ecup;
          uint8_T *c2_MS_State;
          uint8_T *c2_PowerDown_Cmplt;
          boolean_T *c2_MPRD;
          boolean_T *c2_Shutdown;
          c2_Shutdown = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c2_MPRD = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c2_PowerDown_Cmplt = (uint8_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c2_MS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c2_Ecup = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_EStop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_EStop);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_Ecup);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_MS_State);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_PowerDown_Cmplt);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_MPRD);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_Shutdown);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_cx06_MAInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_cx06_MA(void *chartInstanceVar)
{
  enable_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_cx06_MA(void *chartInstanceVar)
{
  disable_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_cx06_MA(void *chartInstanceVar)
{
  sf_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c2_cx06_MA(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c2_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c2_cx06_MA(S, st);
}

static void sf_opaque_terminate_c2_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_cx06_MA((SFc2_cx06_MAInstanceStruct*)(((ChartInfoStruct
      *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",2,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",2,3);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",2,5);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1690620180U));
  ssSetChecksum1(S,(2175284900U));
  ssSetChecksum2(S,(660883987U));
  ssSetChecksum3(S,(12821270U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_cx06_MA(SimStruct *S)
{
  SFc2_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc2_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc2_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_cx06_MA;
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

void c2_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_cx06_MA_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Estop", "Estop", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/On", "On", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/PowerDown", "PowerDown", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/PowerUp", "PowerUp", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/ShutDown", "ShutDown", 0, 0, 0, 0, 0 } };

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
  SFc2_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc2_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
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
