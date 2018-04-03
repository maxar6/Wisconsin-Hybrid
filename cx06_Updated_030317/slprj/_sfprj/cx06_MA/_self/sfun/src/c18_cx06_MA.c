/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c18_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c18_IN_NO_ACTIVE_CHILD         (0U)
#define c18_IN_Idle                    (1U)
#define c18_IN_KillDelay               (3U)
#define c18_IN_Kill                    (2U)
#define c18_IN_StartDelay              (5U)
#define c18_IN_Start                   (4U)
#define c18_IN_StartRetry              (6U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void disable_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void c18_update_debugger_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_st);
static void c18_set_sim_state_side_effects_c18_cx06_MA
  (SFc18_cx06_MAInstanceStruct *chartInstance);
static void finalize_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void sf_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void c18_chartstep_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance);
static void c18_Idle(SFc18_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber);
static const mxArray *c18_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_b_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_c_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_d_sf_marshall(void *chartInstanceVoid, void *c18_u);
static uint8_T c18_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_ESS_State, const char_T *c18_name);
static real_T c18_b_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_KillDelay_Cnt, const char_T *c18_name);
static const mxArray *c18_c_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c18_b_setSimStateSideEffectsInfo, const char_T *
  c18_name);
static void init_test_point_addr_map(SFc18_cx06_MAInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc18_cx06_MAInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc18_cx06_MAInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc18_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  real_T *c18_KillDelay_Cnt;
  real_T *c18_Kill_Cnt;
  real_T *c18_StartDelay_Cnt;
  real_T *c18_StartRetryDelay_Cnt;
  real_T *c18_StartRetry_Cnt;
  real_T *c18_Start_Cnt;
  real_T *c18_kill;
  real_T *c18_start;
  uint8_T *c18_ESS_State;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c18_doSetSimStateSideEffects = 0U;
  chartInstance->c18_setSimStateSideEffectsInfo = NULL;
  chartInstance->c18_tp_Idle = 0U;
  chartInstance->c18_tp_Kill = 0U;
  chartInstance->c18_tp_KillDelay = 0U;
  chartInstance->c18_tp_Start = 0U;
  chartInstance->c18_tp_StartDelay = 0U;
  chartInstance->c18_tp_StartRetry = 0U;
  chartInstance->c18_is_active_c18_cx06_MA = 0U;
  chartInstance->c18_is_c18_cx06_MA = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c18_KillDelay_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c18_Kill_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c18_StartDelay_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c18_StartRetryDelay_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c18_StartRetry_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c18_Start_Cnt = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c18_kill = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c18_start = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 9) != 0)) {
    *c18_ESS_State = 0U;
  }
}

static void initialize_params_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c18_update_debugger_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance)
{
  uint32_T c18_prevAniVal;
  c18_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c18_is_active_c18_cx06_MA == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,14);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_KillDelay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Kill) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_StartDelay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c18_is_c18_cx06_MA == c18_IN_StartRetry) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  sf_debug_set_animation(c18_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c18_st = NULL;
  const mxArray *c18_y = NULL;
  uint8_T c18_hoistedGlobal;
  uint8_T c18_u;
  const mxArray *c18_b_y = NULL;
  real_T c18_b_hoistedGlobal;
  real_T c18_b_u;
  const mxArray *c18_c_y = NULL;
  real_T c18_c_hoistedGlobal;
  real_T c18_c_u;
  const mxArray *c18_d_y = NULL;
  real_T c18_d_hoistedGlobal;
  real_T c18_d_u;
  const mxArray *c18_e_y = NULL;
  real_T c18_e_hoistedGlobal;
  real_T c18_e_u;
  const mxArray *c18_f_y = NULL;
  real_T c18_f_hoistedGlobal;
  real_T c18_f_u;
  const mxArray *c18_g_y = NULL;
  real_T c18_g_hoistedGlobal;
  real_T c18_g_u;
  const mxArray *c18_h_y = NULL;
  real_T c18_h_hoistedGlobal;
  real_T c18_h_u;
  const mxArray *c18_i_y = NULL;
  real_T c18_i_hoistedGlobal;
  real_T c18_i_u;
  const mxArray *c18_j_y = NULL;
  uint8_T c18_j_hoistedGlobal;
  uint8_T c18_j_u;
  const mxArray *c18_k_y = NULL;
  uint8_T c18_k_hoistedGlobal;
  uint8_T c18_k_u;
  const mxArray *c18_l_y = NULL;
  uint8_T *c18_ESS_State;
  real_T *c18_KillDelay_Cnt;
  real_T *c18_Kill_Cnt;
  real_T *c18_StartDelay_Cnt;
  real_T *c18_StartRetryDelay_Cnt;
  real_T *c18_StartRetry_Cnt;
  real_T *c18_Start_Cnt;
  real_T *c18_kill;
  real_T *c18_start;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellarray(11));
  c18_hoistedGlobal = *c18_ESS_State;
  c18_u = c18_hoistedGlobal;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_b_hoistedGlobal = *c18_KillDelay_Cnt;
  c18_b_u = c18_b_hoistedGlobal;
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", &c18_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 1, c18_c_y);
  c18_c_hoistedGlobal = *c18_Kill_Cnt;
  c18_c_u = c18_c_hoistedGlobal;
  c18_d_y = NULL;
  sf_mex_assign(&c18_d_y, sf_mex_create("y", &c18_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 2, c18_d_y);
  c18_d_hoistedGlobal = *c18_StartDelay_Cnt;
  c18_d_u = c18_d_hoistedGlobal;
  c18_e_y = NULL;
  sf_mex_assign(&c18_e_y, sf_mex_create("y", &c18_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 3, c18_e_y);
  c18_e_hoistedGlobal = *c18_StartRetryDelay_Cnt;
  c18_e_u = c18_e_hoistedGlobal;
  c18_f_y = NULL;
  sf_mex_assign(&c18_f_y, sf_mex_create("y", &c18_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 4, c18_f_y);
  c18_f_hoistedGlobal = *c18_StartRetry_Cnt;
  c18_f_u = c18_f_hoistedGlobal;
  c18_g_y = NULL;
  sf_mex_assign(&c18_g_y, sf_mex_create("y", &c18_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 5, c18_g_y);
  c18_g_hoistedGlobal = *c18_Start_Cnt;
  c18_g_u = c18_g_hoistedGlobal;
  c18_h_y = NULL;
  sf_mex_assign(&c18_h_y, sf_mex_create("y", &c18_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 6, c18_h_y);
  c18_h_hoistedGlobal = *c18_kill;
  c18_h_u = c18_h_hoistedGlobal;
  c18_i_y = NULL;
  sf_mex_assign(&c18_i_y, sf_mex_create("y", &c18_h_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 7, c18_i_y);
  c18_i_hoistedGlobal = *c18_start;
  c18_i_u = c18_i_hoistedGlobal;
  c18_j_y = NULL;
  sf_mex_assign(&c18_j_y, sf_mex_create("y", &c18_i_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 8, c18_j_y);
  c18_j_hoistedGlobal = chartInstance->c18_is_active_c18_cx06_MA;
  c18_j_u = c18_j_hoistedGlobal;
  c18_k_y = NULL;
  sf_mex_assign(&c18_k_y, sf_mex_create("y", &c18_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 9, c18_k_y);
  c18_k_hoistedGlobal = chartInstance->c18_is_c18_cx06_MA;
  c18_k_u = c18_k_hoistedGlobal;
  c18_l_y = NULL;
  sf_mex_assign(&c18_l_y, sf_mex_create("y", &c18_k_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 10, c18_l_y);
  sf_mex_assign(&c18_st, c18_y);
  return c18_st;
}

static void set_sim_state_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_st)
{
  const mxArray *c18_u;
  uint8_T *c18_ESS_State;
  real_T *c18_KillDelay_Cnt;
  real_T *c18_Kill_Cnt;
  real_T *c18_StartDelay_Cnt;
  real_T *c18_StartRetryDelay_Cnt;
  real_T *c18_StartRetry_Cnt;
  real_T *c18_Start_Cnt;
  real_T *c18_kill;
  real_T *c18_start;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_u = sf_mex_dup(c18_st);
  *c18_ESS_State = c18_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 0)), "ESS_State");
  *c18_KillDelay_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 1)), "KillDelay_Cnt");
  *c18_Kill_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 2)), "Kill_Cnt");
  *c18_StartDelay_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 3)), "StartDelay_Cnt");
  *c18_StartRetryDelay_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 4)), "StartRetryDelay_Cnt");
  *c18_StartRetry_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 5)), "StartRetry_Cnt");
  *c18_Start_Cnt = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 6)), "Start_Cnt");
  *c18_kill = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 7)), "kill");
  *c18_start = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 8)), "start");
  chartInstance->c18_is_active_c18_cx06_MA = c18_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_u, 9)),
    "is_active_c18_cx06_MA");
  chartInstance->c18_is_c18_cx06_MA = c18_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_u, 10)), "is_c18_cx06_MA");
  sf_mex_assign(&chartInstance->c18_setSimStateSideEffectsInfo,
                c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u
     , 11)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c18_u);
  chartInstance->c18_doSetSimStateSideEffects = 1U;
  c18_update_debugger_state_c18_cx06_MA(chartInstance);
  sf_mex_destroy(&c18_st);
}

static void c18_set_sim_state_side_effects_c18_cx06_MA
  (SFc18_cx06_MAInstanceStruct *chartInstance)
{
  if (chartInstance->c18_doSetSimStateSideEffects != 0) {
    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Idle) {
      chartInstance->c18_tp_Idle = 1U;
    } else {
      chartInstance->c18_tp_Idle = 0U;
    }

    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Kill) {
      chartInstance->c18_tp_Kill = 1U;
    } else {
      chartInstance->c18_tp_Kill = 0U;
    }

    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_KillDelay) {
      chartInstance->c18_tp_KillDelay = 1U;
    } else {
      chartInstance->c18_tp_KillDelay = 0U;
    }

    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_Start) {
      chartInstance->c18_tp_Start = 1U;
    } else {
      chartInstance->c18_tp_Start = 0U;
    }

    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_StartDelay) {
      chartInstance->c18_tp_StartDelay = 1U;
    } else {
      chartInstance->c18_tp_StartDelay = 0U;
    }

    if (chartInstance->c18_is_c18_cx06_MA == c18_IN_StartRetry) {
      chartInstance->c18_tp_StartRetry = 1U;
    } else {
      chartInstance->c18_tp_StartRetry = 0U;
    }

    chartInstance->c18_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c18_setSimStateSideEffectsInfo);
}

static void sf_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c18_previousEvent;
  boolean_T *c18_clutching;
  uint16_T *c18_KillDelay;
  real_T *c18_KillDelay_Cnt;
  real_T *c18_Kill_Cnt;
  uint16_T *c18_Kill_Time;
  real_T *c18_Max_RetryCnt;
  real_T *c18_StartDelay_Cnt;
  real_T *c18_StartRetryDelay_Cnt;
  real_T *c18_StartRetry_Cnt;
  uint16_T *c18_StartRetry_Delay;
  real_T *c18_Start_Cnt;
  uint16_T *c18_Start_Delay;
  uint16_T *c18_Start_Time;
  real_T *c18_kill;
  boolean_T *c18_neutral;
  uint8_T *c18_running;
  real_T *c18_start;
  uint8_T *c18_ESS_State;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_running = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_Start_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c18_Start_Delay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_StartRetry_Delay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_Max_RetryCnt = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c18_Kill_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_KillDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_set_sim_state_side_effects_c18_cx06_MA(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,14);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_clutching, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_KillDelay, 1U);
  _SFD_DATA_RANGE_CHECK(*c18_KillDelay_Cnt, 2U);
  _SFD_DATA_RANGE_CHECK(*c18_Kill_Cnt, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_Kill_Time, 4U);
  _SFD_DATA_RANGE_CHECK(*c18_Max_RetryCnt, 5U);
  _SFD_DATA_RANGE_CHECK(*c18_StartDelay_Cnt, 6U);
  _SFD_DATA_RANGE_CHECK(*c18_StartRetryDelay_Cnt, 7U);
  _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_StartRetry_Delay, 9U);
  _SFD_DATA_RANGE_CHECK(*c18_Start_Cnt, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_Start_Delay, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_Start_Time, 12U);
  _SFD_DATA_RANGE_CHECK(*c18_kill, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_neutral, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_running, 15U);
  _SFD_DATA_RANGE_CHECK(*c18_start, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
  c18_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c18_chartstep_c18_cx06_MA(chartInstance);
  _sfEvent_ = c18_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c18_chartstep_c18_cx06_MA(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  boolean_T c18_d_temp;
  boolean_T c18_e_temp;
  real_T *c18_StartRetryDelay_Cnt;
  uint16_T *c18_StartRetry_Delay;
  real_T *c18_StartRetry_Cnt;
  real_T *c18_Max_RetryCnt;
  boolean_T *c18_neutral;
  uint8_T *c18_ESS_State;
  real_T *c18_Kill_Cnt;
  uint16_T *c18_Kill_Time;
  real_T *c18_kill;
  uint8_T *c18_running;
  real_T *c18_KillDelay_Cnt;
  uint16_T *c18_KillDelay;
  real_T *c18_Start_Cnt;
  uint16_T *c18_Start_Time;
  real_T *c18_start;
  boolean_T *c18_clutching;
  real_T *c18_StartDelay_Cnt;
  uint16_T *c18_Start_Delay;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_running = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_Start_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c18_Start_Delay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_StartRetry_Delay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_Max_RetryCnt = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c18_Kill_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_KillDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,14);
  if ((int16_T)chartInstance->c18_is_active_c18_cx06_MA == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,14);
    chartInstance->c18_is_active_c18_cx06_MA = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,14);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c18_tp_Idle = 1U;
    *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)*c18_neutral ==
      1);
    _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
  } else {
    switch (chartInstance->c18_is_c18_cx06_MA) {
     case c18_IN_Idle:
      CV_CHART_EVAL(14,0,1);
      c18_Idle(chartInstance);
      break;

     case c18_IN_Kill:
      CV_CHART_EVAL(14,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c18_Kill_Cnt >
              (real_T)*c18_Kill_Time)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        *c18_kill = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_kill, 13U);
        chartInstance->c18_tp_Kill = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c18_tp_Idle = 1U;
        *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)
          *c18_neutral == 1);
        _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
      } else {
        *c18_Kill_Cnt = *c18_Kill_Cnt + 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_Kill_Cnt, 3U);
        *c18_ESS_State = 5U;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c18_IN_KillDelay:
      CV_CHART_EVAL(14,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      c18_temp = (_SFD_CCP_CALL(3,0,(((int16_T)*c18_running == 0)!=0)) != 0);
      if (!c18_temp) {
        c18_temp = (_SFD_CCP_CALL(3,1,(((int16_T)*c18_neutral == 0)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(3U, (int32_T)c18_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (*c18_KillDelay_Cnt > (real_T)*c18_KillDelay) {
            transitionList[numTransitions] = 2;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c18_tp_KillDelay = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c18_tp_Idle = 1U;
        *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)
          *c18_neutral == 1);
        _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
        if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,
              ((*c18_KillDelay_Cnt > (real_T)*c18_KillDelay)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c18_tp_KillDelay = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c18_is_c18_cx06_MA = c18_IN_Kill;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c18_tp_Kill = 1U;
          *c18_kill = 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_kill, 13U);
          *c18_Kill_Cnt = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_Kill_Cnt, 3U);
        } else {
          *c18_KillDelay_Cnt = *c18_KillDelay_Cnt + 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_KillDelay_Cnt, 2U);
          *c18_ESS_State = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c18_IN_Start:
      CV_CHART_EVAL(14,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,(((int16_T)
              *c18_running == 1)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 10;
          sf_debug_transition_conflict_check_begin();
          if (*c18_Start_Cnt > (real_T)*c18_Start_Time) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        *c18_start = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_start, 16U);
        chartInstance->c18_tp_Start = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c18_tp_Idle = 1U;
        *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)
          *c18_neutral == 1);
        _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c18_Start_Cnt >
                (real_T)*c18_Start_Time)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          *c18_start = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_start, 16U);
          chartInstance->c18_tp_Start = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c18_is_c18_cx06_MA = c18_IN_StartRetry;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c18_tp_StartRetry = 1U;
          *c18_StartRetry_Cnt = *c18_StartRetry_Cnt + 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
          *c18_StartRetryDelay_Cnt = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_StartRetryDelay_Cnt, 7U);
        } else {
          *c18_Start_Cnt = *c18_Start_Cnt + 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_Start_Cnt, 10U);
          *c18_ESS_State = 2U;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c18_IN_StartDelay:
      CV_CHART_EVAL(14,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
      c18_b_temp = (_SFD_CCP_CALL(6,0,(((int16_T)*c18_running == 1)!=0)) != 0);
      if (!c18_b_temp) {
        c18_b_temp = (_SFD_CCP_CALL(6,1,(((int16_T)*c18_neutral == 1)!=0)) != 0);
      }

      c18_c_temp = c18_b_temp;
      if (!c18_c_temp) {
        c18_c_temp = (_SFD_CCP_CALL(6,2,(((int16_T)*c18_clutching == 0)!=0)) !=
                      0);
      }

      if (CV_TRANSITION_EVAL(6U, (int32_T)c18_c_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if (*c18_StartDelay_Cnt > (real_T)*c18_Start_Delay) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c18_tp_StartDelay = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c18_tp_Idle = 1U;
        *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)
          *c18_neutral == 1);
        _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,
              ((*c18_StartDelay_Cnt > (real_T)*c18_Start_Delay)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c18_tp_StartDelay = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c18_is_c18_cx06_MA = c18_IN_Start;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c18_tp_Start = 1U;
          *c18_start = 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_start, 16U);
          *c18_Start_Cnt = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_Start_Cnt, 10U);
        } else {
          *c18_StartDelay_Cnt = *c18_StartDelay_Cnt + 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_StartDelay_Cnt, 6U);
          *c18_ESS_State = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     case c18_IN_StartRetry:
      CV_CHART_EVAL(14,0,6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      c18_d_temp = (_SFD_CCP_CALL(9,0,((*c18_StartRetryDelay_Cnt > (real_T)
        *c18_StartRetry_Delay)!=0)) != 0);
      if (c18_d_temp) {
        c18_d_temp = (_SFD_CCP_CALL(9,1,((*c18_StartRetry_Cnt <
          *c18_Max_RetryCnt)!=0)) != 0);
      }

      c18_e_temp = c18_d_temp;
      if (!c18_e_temp) {
        c18_e_temp = (_SFD_CCP_CALL(9,2,(((int16_T)*c18_neutral == 1)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(9U, (int32_T)c18_e_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c18_tp_StartRetry = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c18_is_c18_cx06_MA = c18_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c18_tp_Idle = 1U;
        *c18_StartRetry_Cnt = *c18_StartRetry_Cnt * (real_T)((int16_T)
          *c18_neutral == 1);
        _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
      } else {
        *c18_StartRetryDelay_Cnt = *c18_StartRetryDelay_Cnt + 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_StartRetryDelay_Cnt, 7U);
        *c18_ESS_State = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     default:
      CV_CHART_EVAL(14,0,0);
      chartInstance->c18_is_c18_cx06_MA = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,14);
}

static void c18_Idle(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  uint8_T *c18_running;
  boolean_T *c18_neutral;
  boolean_T *c18_clutching;
  uint8_T *c18_ESS_State;
  real_T *c18_KillDelay_Cnt;
  real_T *c18_StartRetry_Cnt;
  real_T *c18_StartDelay_Cnt;
  c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_running = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
  c18_temp = (_SFD_CCP_CALL(5,0,(((int16_T)*c18_running == 0)!=0)) != 0);
  if (c18_temp) {
    c18_temp = (_SFD_CCP_CALL(5,1,(((int16_T)*c18_neutral == 0)!=0)) != 0);
  }

  c18_b_temp = c18_temp;
  if (c18_b_temp) {
    c18_b_temp = (_SFD_CCP_CALL(5,2,(((int16_T)*c18_clutching == 1)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(5U, (int32_T)c18_b_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 5;
      sf_debug_transition_conflict_check_begin();
      if (((int16_T)*c18_running == 1) && ((int16_T)*c18_neutral == 1)) {
        transitionList[numTransitions] = 0;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c18_tp_Idle = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c18_is_c18_cx06_MA = c18_IN_StartDelay;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c18_tp_StartDelay = 1U;
    *c18_StartDelay_Cnt = 0.0;
    _SFD_DATA_RANGE_CHECK(*c18_StartDelay_Cnt, 6U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    c18_c_temp = (_SFD_CCP_CALL(0,0,(((int16_T)*c18_running == 1)!=0)) != 0);
    if (c18_c_temp) {
      c18_c_temp = (_SFD_CCP_CALL(0,1,(((int16_T)*c18_neutral == 1)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(0U, (int32_T)c18_c_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c18_tp_Idle = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c18_is_c18_cx06_MA = c18_IN_KillDelay;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c18_tp_KillDelay = 1U;
      *c18_KillDelay_Cnt = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_KillDelay_Cnt, 2U);
      *c18_StartRetry_Cnt = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_StartRetry_Cnt, 8U);
    } else {
      *c18_ESS_State = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_ESS_State, 17U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber)
{
}

const mxArray *sf_c18_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c18_nameCaptureInfo = NULL;
  c18_nameCaptureInfo = NULL;
  sf_mex_assign(&c18_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c18_nameCaptureInfo;
}

static const mxArray *c18_sf_marshall(void *chartInstanceVoid, void *c18_u)
{
  const mxArray *c18_y = NULL;
  uint8_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((uint8_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static const mxArray *c18_b_sf_marshall(void *chartInstanceVoid, void *c18_u)
{
  const mxArray *c18_y = NULL;
  boolean_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((boolean_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static const mxArray *c18_c_sf_marshall(void *chartInstanceVoid, void *c18_u)
{
  const mxArray *c18_y = NULL;
  uint16_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((uint16_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static const mxArray *c18_d_sf_marshall(void *chartInstanceVoid, void *c18_u)
{
  const mxArray *c18_y = NULL;
  real_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((real_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static uint8_T c18_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_ESS_State, const char_T *c18_name
  )
{
  uint8_T c18_y;
  uint8_T c18_u0;
  sf_mex_import(c18_name, sf_mex_dup(c18_ESS_State), &c18_u0, 1, 3, 0U, 0, 0U, 0);
  c18_y = c18_u0;
  sf_mex_destroy(&c18_ESS_State);
  return c18_y;
}

static real_T c18_b_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c18_KillDelay_Cnt, const char_T *
  c18_name)
{
  real_T c18_y;
  real_T c18_d0;
  sf_mex_import(c18_name, sf_mex_dup(c18_KillDelay_Cnt), &c18_d0, 1, 0, 0U, 0,
                0U, 0);
  c18_y = c18_d0;
  sf_mex_destroy(&c18_KillDelay_Cnt);
  return c18_y;
}

static const mxArray *c18_c_emlrt_marshallIn(SFc18_cx06_MAInstanceStruct
  *chartInstance, const mxArray *
  c18_b_setSimStateSideEffectsInfo, const char_T *c18_name)
{
  const mxArray *c18_y = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_duplicatearraysafe
                (&c18_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c18_b_setSimStateSideEffectsInfo);
  return c18_y;
}

static void init_test_point_addr_map(SFc18_cx06_MAInstanceStruct *chartInstance)
{
  chartInstance->c18_testPointAddrMap[0] = &chartInstance->c18_tp_Idle;
  chartInstance->c18_testPointAddrMap[1] = &chartInstance->c18_tp_Kill;
  chartInstance->c18_testPointAddrMap[2] = &chartInstance->c18_tp_KillDelay;
  chartInstance->c18_testPointAddrMap[3] = &chartInstance->c18_tp_Start;
  chartInstance->c18_testPointAddrMap[4] = &chartInstance->c18_tp_StartDelay;
  chartInstance->c18_testPointAddrMap[5] = &chartInstance->c18_tp_StartRetry;
}

static void **get_test_point_address_map(SFc18_cx06_MAInstanceStruct
  *chartInstance)
{
  return &chartInstance->c18_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc18_cx06_MAInstanceStruct *chartInstance)
{
  return &chartInstance->c18_testPointMappingInfo;
}

static void init_dsm_address_info(SFc18_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c18_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2638941127U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4144841511U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3147863606U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1374251253U);
}

mxArray *sf_c18_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3210813078U);
    pr[1] = (double)(406283904U);
    pr[2] = (double)(1801207496U);
    pr[3] = (double)(2672818052U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c18_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[35],T\"ESS_State\",},{M[1],M[20],T\"KillDelay_Cnt\",},{M[1],M[21],T\"Kill_Cnt\",},{M[1],M[24],T\"StartDelay_Cnt\",},{M[1],M[25],T\"StartRetryDelay_Cnt\",},{M[1],M[26],T\"StartRetry_Cnt\",},{M[1],M[28],T\"Start_Cnt\",},{M[1],M[31],T\"kill\",},{M[1],M[34],T\"start\",},{M[8],M[0],T\"is_active_c18_cx06_MA\",}}",
    "100 S'type','srcId','name','auxInfo'{{M[9],M[0],T\"is_c18_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 11, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc18_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc18_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          18,
          6,
          11,
          18,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "clutching",0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "KillDelay",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "KillDelay_Cnt",0,(MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Kill_Cnt",0,(MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Kill_Time",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Max_RetryCnt",0,(MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "StartDelay_Cnt",0,(MexFcnForType)
                              c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "StartRetryDelay_Cnt",0,(MexFcnForType)
                              c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "StartRetry_Cnt",0,(MexFcnForType)
                              c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "StartRetry_Delay",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Start_Cnt",0,(MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Start_Delay",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(12,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Start_Time",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(13,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"kill",0,
                              (MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(14,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"neutral",
                              0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(15,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"running",
                              0,(MexFcnForType)c18_sf_marshall);
          _SFD_SET_DATA_PROPS(16,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"start",
                              0,(MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(17,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "ESS_State",0,(MexFcnForType)c18_sf_marshall);
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

        {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(0,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21, 40 };

          static unsigned int sEndGuardMap[] = { 14, 33, 54 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(5,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21, 40 };

          static unsigned int sEndGuardMap[] = { 14, 33, 54 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(6,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 48, 85 };

          static unsigned int sEndGuardMap[] = { 41, 77, 97 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -2 };

          _SFD_CV_INIT_TRANS(9,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21, 40 };

          static unsigned int sEndGuardMap[] = { 14, 33, 54 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21, 40 };

          static unsigned int sEndGuardMap[] = { 14, 33, 54 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 48, 85 };

          static unsigned int sEndGuardMap[] = { 41, 77, 97 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c18_clutching;
          uint16_T *c18_KillDelay;
          real_T *c18_KillDelay_Cnt;
          real_T *c18_Kill_Cnt;
          uint16_T *c18_Kill_Time;
          real_T *c18_Max_RetryCnt;
          real_T *c18_StartDelay_Cnt;
          real_T *c18_StartRetryDelay_Cnt;
          real_T *c18_StartRetry_Cnt;
          uint16_T *c18_StartRetry_Delay;
          real_T *c18_Start_Cnt;
          uint16_T *c18_Start_Delay;
          uint16_T *c18_Start_Time;
          real_T *c18_kill;
          boolean_T *c18_neutral;
          uint8_T *c18_running;
          real_T *c18_start;
          uint8_T *c18_ESS_State;
          c18_ESS_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c18_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c18_running = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c18_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c18_kill = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c18_Start_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c18_Start_Delay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c18_Start_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c18_StartRetry_Delay = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 4);
          c18_StartRetry_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c18_StartRetryDelay_Cnt = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 4);
          c18_StartDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c18_Max_RetryCnt = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c18_Kill_Time = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c18_Kill_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c18_KillDelay_Cnt = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c18_KillDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c18_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c18_clutching);
          _SFD_SET_DATA_VALUE_PTR(1U, c18_KillDelay);
          _SFD_SET_DATA_VALUE_PTR(2U, c18_KillDelay_Cnt);
          _SFD_SET_DATA_VALUE_PTR(3U, c18_Kill_Cnt);
          _SFD_SET_DATA_VALUE_PTR(4U, c18_Kill_Time);
          _SFD_SET_DATA_VALUE_PTR(5U, c18_Max_RetryCnt);
          _SFD_SET_DATA_VALUE_PTR(6U, c18_StartDelay_Cnt);
          _SFD_SET_DATA_VALUE_PTR(7U, c18_StartRetryDelay_Cnt);
          _SFD_SET_DATA_VALUE_PTR(8U, c18_StartRetry_Cnt);
          _SFD_SET_DATA_VALUE_PTR(9U, c18_StartRetry_Delay);
          _SFD_SET_DATA_VALUE_PTR(10U, c18_Start_Cnt);
          _SFD_SET_DATA_VALUE_PTR(11U, c18_Start_Delay);
          _SFD_SET_DATA_VALUE_PTR(12U, c18_Start_Time);
          _SFD_SET_DATA_VALUE_PTR(13U, c18_kill);
          _SFD_SET_DATA_VALUE_PTR(14U, c18_neutral);
          _SFD_SET_DATA_VALUE_PTR(15U, c18_running);
          _SFD_SET_DATA_VALUE_PTR(16U, c18_start);
          _SFD_SET_DATA_VALUE_PTR(17U, c18_ESS_State);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c18_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc18_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c18_cx06_MA(void *chartInstanceVar)
{
  enable_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c18_cx06_MA(void *chartInstanceVar)
{
  disable_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c18_cx06_MA(void *chartInstanceVar)
{
  sf_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c18_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c18_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c18_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c18_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c18_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c18_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c18_cx06_MA(S, st);
}

static void sf_opaque_terminate_c18_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_cx06_MA((SFc18_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c18_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",18);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",18,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",18,
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
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",18,9);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",18,9);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",18);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(801586767U));
  ssSetChecksum1(S,(3346184060U));
  ssSetChecksum2(S,(192552348U));
  ssSetChecksum3(S,(1896653549U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c18_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",18);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c18_cx06_MA(SimStruct *S)
{
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc18_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc18_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c18_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c18_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c18_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c18_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c18_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c18_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c18_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c18_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c18_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c18_cx06_MA;
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

void c18_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c18_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_cx06_MA_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Idle", "Idle", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Kill", "Kill", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/KillDelay", "KillDelay", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Start", "Start", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/StartDelay", "StartDelay", 0, 0, 0, 0, 0 },

  { 5, 0, "StateflowChart/StartRetry", "StartRetry", 0, 0, 0, 0, 0 } };

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
  SFc18_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc18_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
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
