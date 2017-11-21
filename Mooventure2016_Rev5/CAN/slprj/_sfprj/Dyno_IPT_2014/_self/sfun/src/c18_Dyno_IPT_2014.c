/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c18_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c18_IN_NO_ACTIVE_CHILD         (0U)
#define c18_IN_Disabled                (2U)
#define c18_IN_RCCI                    (2U)
#define c18_IN_Crank1                  (1U)
#define c18_IN_Running                 (4U)
#define c18_IN_Diesel                  (1U)
#define c18_IN_Warmup                  (3U)
#define c18_IN_Motoring                (3U)
#define c18_IN_crank_timeout           (5U)
#define c18_IN_switch                  (4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void enable_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c18_update_debugger_state_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_st);
static void c18_set_sim_state_side_effects_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c18_chartstep_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c18_Disabled(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c18_Crank1(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c18_Running(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c18_exit_internal_Running(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c18_Warmup(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c18_switch(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber);
static const mxArray *c18_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_b_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_c_sf_marshall(void *chartInstanceVoid, void *c18_u);
static const mxArray *c18_d_sf_marshall(void *chartInstanceVoid, void *c18_u);
static real_T c18_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_Pumpson, const char_T *c18_name);
static boolean_T c18_b_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_eng_en, const char_T *c18_name);
static int8_T c18_c_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_state, const char_T *c18_name);
static uint8_T c18_d_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_b_is_active_c18_Dyno_IPT_2014, const char_T
  *c18_name);
static const mxArray *c18_e_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_b_setSimStateSideEffectsInfo, const char_T *
  c18_name);
static void init_test_point_addr_map(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_eng_app_percent;
  int8_T *c18_state;
  real_T *c18_Pumpson;
  real_T *c18_hold_G_P;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c18_doSetSimStateSideEffects = 0U;
  chartInstance->c18_setSimStateSideEffectsInfo = NULL;
  chartInstance->c18_tp_Crank1 = 0U;
  chartInstance->c18_tp_Disabled = 0U;
  chartInstance->c18_tp_Motoring = 0U;
  chartInstance->c18_is_Running = 0U;
  chartInstance->c18_tp_Running = 0U;
  chartInstance->c18_tp_Diesel = 0U;
  chartInstance->c18_tp_RCCI = 0U;
  chartInstance->c18_tp_Warmup = 0U;
  chartInstance->c18_tp_switch = 0U;
  chartInstance->c18_tp_crank_timeout = 0U;
  chartInstance->c18_is_active_c18_Dyno_IPT_2014 = 0U;
  chartInstance->c18_is_c18_Dyno_IPT_2014 = 0U;
  chartInstance->c18_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c18_phoenix_en = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c18_phoenix_gen_tq_lim = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c18_phoenix_motor_tq_lim = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c18_phoenix_spd_sp = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c18_eng_en = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c18_rcci_mode = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c18_eng_app_percent = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c18_state = 0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 9) != 0)) {
    *c18_Pumpson = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 10) != 0)) {
    *c18_hold_G_P = 0.0;
  }
}

static void initialize_params_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
}

static void enable_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c18_update_debugger_state_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c18_prevAniVal;
  c18_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c18_is_active_c18_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,5);
  }

  if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Disabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c18_is_Running == c18_IN_RCCI) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Crank1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Running) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c18_is_Running == c18_IN_Diesel) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c18_is_Running == c18_IN_Warmup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Motoring) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_crank_timeout) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
  }

  if (chartInstance->c18_is_Running == c18_IN_switch) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  sf_debug_set_animation(c18_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c18_st = NULL;
  const mxArray *c18_y = NULL;
  real_T c18_hoistedGlobal;
  real_T c18_u;
  const mxArray *c18_b_y = NULL;
  real_T c18_b_hoistedGlobal;
  real_T c18_b_u;
  const mxArray *c18_c_y = NULL;
  boolean_T c18_c_hoistedGlobal;
  boolean_T c18_c_u;
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
  boolean_T c18_i_hoistedGlobal;
  boolean_T c18_i_u;
  const mxArray *c18_j_y = NULL;
  int8_T c18_j_hoistedGlobal;
  int8_T c18_j_u;
  const mxArray *c18_k_y = NULL;
  real_T c18_k_hoistedGlobal;
  real_T c18_k_u;
  const mxArray *c18_l_y = NULL;
  uint8_T c18_l_hoistedGlobal;
  uint8_T c18_l_u;
  const mxArray *c18_m_y = NULL;
  uint8_T c18_m_hoistedGlobal;
  uint8_T c18_m_u;
  const mxArray *c18_n_y = NULL;
  uint8_T c18_n_hoistedGlobal;
  uint8_T c18_n_u;
  const mxArray *c18_o_y = NULL;
  real_T *c18_Pumpson;
  real_T *c18_eng_app_percent;
  boolean_T *c18_eng_en;
  real_T *c18_hold_G_P;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_rcci_mode;
  int8_T *c18_state;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_st = NULL;
  c18_y = NULL;
  sf_mex_assign(&c18_y, sf_mex_createcellarray(14));
  c18_hoistedGlobal = *c18_Pumpson;
  c18_u = c18_hoistedGlobal;
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 0, c18_b_y);
  c18_b_hoistedGlobal = *c18_eng_app_percent;
  c18_b_u = c18_b_hoistedGlobal;
  c18_c_y = NULL;
  sf_mex_assign(&c18_c_y, sf_mex_create("y", &c18_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 1, c18_c_y);
  c18_c_hoistedGlobal = *c18_eng_en;
  c18_c_u = c18_c_hoistedGlobal;
  c18_d_y = NULL;
  sf_mex_assign(&c18_d_y, sf_mex_create("y", &c18_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 2, c18_d_y);
  c18_d_hoistedGlobal = *c18_hold_G_P;
  c18_d_u = c18_d_hoistedGlobal;
  c18_e_y = NULL;
  sf_mex_assign(&c18_e_y, sf_mex_create("y", &c18_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 3, c18_e_y);
  c18_e_hoistedGlobal = *c18_phoenix_en;
  c18_e_u = c18_e_hoistedGlobal;
  c18_f_y = NULL;
  sf_mex_assign(&c18_f_y, sf_mex_create("y", &c18_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 4, c18_f_y);
  c18_f_hoistedGlobal = *c18_phoenix_gen_tq_lim;
  c18_f_u = c18_f_hoistedGlobal;
  c18_g_y = NULL;
  sf_mex_assign(&c18_g_y, sf_mex_create("y", &c18_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 5, c18_g_y);
  c18_g_hoistedGlobal = *c18_phoenix_motor_tq_lim;
  c18_g_u = c18_g_hoistedGlobal;
  c18_h_y = NULL;
  sf_mex_assign(&c18_h_y, sf_mex_create("y", &c18_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 6, c18_h_y);
  c18_h_hoistedGlobal = *c18_phoenix_spd_sp;
  c18_h_u = c18_h_hoistedGlobal;
  c18_i_y = NULL;
  sf_mex_assign(&c18_i_y, sf_mex_create("y", &c18_h_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 7, c18_i_y);
  c18_i_hoistedGlobal = *c18_rcci_mode;
  c18_i_u = c18_i_hoistedGlobal;
  c18_j_y = NULL;
  sf_mex_assign(&c18_j_y, sf_mex_create("y", &c18_i_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 8, c18_j_y);
  c18_j_hoistedGlobal = *c18_state;
  c18_j_u = c18_j_hoistedGlobal;
  c18_k_y = NULL;
  sf_mex_assign(&c18_k_y, sf_mex_create("y", &c18_j_u, 2, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 9, c18_k_y);
  c18_k_hoistedGlobal = chartInstance->c18_count;
  c18_k_u = c18_k_hoistedGlobal;
  c18_l_y = NULL;
  sf_mex_assign(&c18_l_y, sf_mex_create("y", &c18_k_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 10, c18_l_y);
  c18_l_hoistedGlobal = chartInstance->c18_is_active_c18_Dyno_IPT_2014;
  c18_l_u = c18_l_hoistedGlobal;
  c18_m_y = NULL;
  sf_mex_assign(&c18_m_y, sf_mex_create("y", &c18_l_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 11, c18_m_y);
  c18_m_hoistedGlobal = chartInstance->c18_is_c18_Dyno_IPT_2014;
  c18_m_u = c18_m_hoistedGlobal;
  c18_n_y = NULL;
  sf_mex_assign(&c18_n_y, sf_mex_create("y", &c18_m_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 12, c18_n_y);
  c18_n_hoistedGlobal = chartInstance->c18_is_Running;
  c18_n_u = c18_n_hoistedGlobal;
  c18_o_y = NULL;
  sf_mex_assign(&c18_o_y, sf_mex_create("y", &c18_n_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c18_y, 13, c18_o_y);
  sf_mex_assign(&c18_st, c18_y);
  return c18_st;
}

static void set_sim_state_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_st)
{
  const mxArray *c18_u;
  real_T *c18_Pumpson;
  real_T *c18_eng_app_percent;
  boolean_T *c18_eng_en;
  real_T *c18_hold_G_P;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_rcci_mode;
  int8_T *c18_state;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_u = sf_mex_dup(c18_st);
  *c18_Pumpson = c18_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 0)), "Pumpson");
  *c18_eng_app_percent = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 1)), "eng_app_percent");
  *c18_eng_en = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 2)), "eng_en");
  *c18_hold_G_P = c18_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 3)), "hold_G_P");
  *c18_phoenix_en = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 4)), "phoenix_en");
  *c18_phoenix_gen_tq_lim = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 5)), "phoenix_gen_tq_lim");
  *c18_phoenix_motor_tq_lim = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 6)), "phoenix_motor_tq_lim");
  *c18_phoenix_spd_sp = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 7)), "phoenix_spd_sp");
  *c18_rcci_mode = c18_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 8)), "rcci_mode");
  *c18_state = c18_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u, 9)), "state");
  chartInstance->c18_count = c18_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c18_u, 10)), "count");
  chartInstance->c18_is_active_c18_Dyno_IPT_2014 = c18_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c18_u, 11)),
     "is_active_c18_Dyno_IPT_2014");
  chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_u, 12)),
    "is_c18_Dyno_IPT_2014");
  chartInstance->c18_is_Running = c18_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c18_u, 13)), "is_Running");
  sf_mex_assign(&chartInstance->c18_setSimStateSideEffectsInfo,
                c18_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c18_u
     , 14)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c18_u);
  chartInstance->c18_doSetSimStateSideEffects = 1U;
  c18_update_debugger_state_c18_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c18_st);
}

static void c18_set_sim_state_side_effects_c18_Dyno_IPT_2014
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c18_doSetSimStateSideEffects != 0) {
    if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Crank1) {
      chartInstance->c18_tp_Crank1 = 1U;
    } else {
      chartInstance->c18_tp_Crank1 = 0U;
    }

    if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Disabled) {
      chartInstance->c18_tp_Disabled = 1U;
    } else {
      chartInstance->c18_tp_Disabled = 0U;
    }

    if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Motoring) {
      chartInstance->c18_tp_Motoring = 1U;
    } else {
      chartInstance->c18_tp_Motoring = 0U;
    }

    if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_Running) {
      chartInstance->c18_tp_Running = 1U;
    } else {
      chartInstance->c18_tp_Running = 0U;
    }

    if (chartInstance->c18_is_Running == c18_IN_Diesel) {
      chartInstance->c18_tp_Diesel = 1U;
    } else {
      chartInstance->c18_tp_Diesel = 0U;
    }

    if (chartInstance->c18_is_Running == c18_IN_RCCI) {
      chartInstance->c18_tp_RCCI = 1U;
    } else {
      chartInstance->c18_tp_RCCI = 0U;
    }

    if (chartInstance->c18_is_Running == c18_IN_Warmup) {
      chartInstance->c18_tp_Warmup = 1U;
    } else {
      chartInstance->c18_tp_Warmup = 0U;
    }

    if (chartInstance->c18_is_Running == c18_IN_switch) {
      chartInstance->c18_tp_switch = 1U;
    } else {
      chartInstance->c18_tp_switch = 0U;
    }

    if (chartInstance->c18_is_c18_Dyno_IPT_2014 == c18_IN_crank_timeout) {
      chartInstance->c18_tp_crank_timeout = 1U;
    } else {
      chartInstance->c18_tp_crank_timeout = 0U;
    }

    chartInstance->c18_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c18_setSimStateSideEffectsInfo);
}

static void sf_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c18_previousEvent;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_eng_app_percent;
  real_T *c18_eng_coolant_temp;
  real_T *c18_phoenix_spd;
  boolean_T *c18_run;
  boolean_T *c18_turbo;
  boolean_T *c18_rcci_rdy;
  boolean_T *c18_force_diesel;
  boolean_T *c18_acc_error;
  boolean_T *c18_estop;
  real_T *c18_motor;
  real_T *c18_cal_PHX_RPM_CRANK;
  real_T *c18_cal_PHX_MOTOR_TQ_LIM_CRANK;
  real_T *c18_cal_PHX_GEN_TQ_LIM_CRANK;
  real_T *c18_cal_PHX_SPEED_SP_WARMUP;
  real_T *c18_cal_PHX_SPEED_SP_DIESEL;
  real_T *c18_cal_PHX_SPEED_SP_RCCI;
  real_T *c18_cal_ENG_APP_CRANK;
  real_T *c18_cal_ENG_APP_DIESEL;
  real_T *c18_cal_ENG_APP_WARMUP;
  real_T *c18_cal_ENG_APP_RCCI;
  real_T *c18_cal_ENG_CAUGHT_RPM;
  real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
  real_T *c18_cal_CRANK_TIMEOUT;
  int8_T *c18_state;
  real_T *c18_cal_CRANK_LOCKOUT;
  real_T *c18_cal_PHX_GEN_TQ_LIM_MOTORING;
  real_T *c18_cal_PHX_MOTOR_TQ_LIM_MOTORING;
  real_T *c18_cal_PHX_MOTORING_SPEED_SP;
  real_T *c18_cal_ENG_STALL_RPM;
  real_T *c18_Pumpson;
  real_T *c18_cal_ENG_APP_SWITCH;
  real_T *c18_hold_G_P;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_cal_ENG_APP_SWITCH = (real_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_cal_ENG_STALL_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 26);
  c18_cal_PHX_MOTORING_SPEED_SP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 25);
  c18_cal_PHX_MOTOR_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 24);
  c18_cal_PHX_GEN_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 23);
  c18_cal_CRANK_LOCKOUT = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_cal_CRANK_TIMEOUT = (real_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 20);
  c18_cal_ENG_CAUGHT_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c18_cal_ENG_APP_RCCI = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c18_cal_ENG_APP_WARMUP = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c18_cal_ENG_APP_DIESEL = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c18_cal_ENG_APP_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c18_cal_PHX_SPEED_SP_RCCI = (real_T *)ssGetInputPortSignal(chartInstance->S,
    14);
  c18_cal_PHX_SPEED_SP_DIESEL = (real_T *)ssGetInputPortSignal(chartInstance->S,
    13);
  c18_cal_PHX_SPEED_SP_WARMUP = (real_T *)ssGetInputPortSignal(chartInstance->S,
    12);
  c18_cal_PHX_GEN_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S,
    11);
  c18_cal_PHX_MOTOR_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 10);
  c18_cal_PHX_RPM_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c18_motor = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_acc_error = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_turbo = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c18_run = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_phoenix_spd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c18_set_sim_state_side_effects_c18_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,5);
  _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
  _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
  _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
  _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
  _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
  _SFD_DATA_RANGE_CHECK(*c18_eng_coolant_temp, 8U);
  _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_run, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_turbo, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_rdy, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_force_diesel, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_acc_error, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_estop, 15U);
  _SFD_DATA_RANGE_CHECK(*c18_motor, 16U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_RPM_CRANK, 17U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_MOTOR_TQ_LIM_CRANK, 18U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_GEN_TQ_LIM_CRANK, 19U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_SPEED_SP_WARMUP, 20U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_SPEED_SP_DIESEL, 21U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_SPEED_SP_RCCI, 22U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_APP_CRANK, 23U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_APP_DIESEL, 24U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_APP_WARMUP, 25U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_APP_RCCI, 26U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_CAUGHT_RPM, 27U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_RCCI_RDY_COOLANT_TEMP, 28U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_CRANK_TIMEOUT, 29U);
  _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_CRANK_LOCKOUT, 31U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_GEN_TQ_LIM_MOTORING, 32U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_MOTOR_TQ_LIM_MOTORING, 33U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_PHX_MOTORING_SPEED_SP, 34U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_STALL_RPM, 35U);
  _SFD_DATA_RANGE_CHECK(*c18_Pumpson, 36U);
  _SFD_DATA_RANGE_CHECK(*c18_cal_ENG_APP_SWITCH, 37U);
  _SFD_DATA_RANGE_CHECK(*c18_hold_G_P, 38U);
  c18_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c18_chartstep_c18_Dyno_IPT_2014(chartInstance);
  _sfEvent_ = c18_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c18_chartstep_c18_Dyno_IPT_2014(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T c18_d0;
  boolean_T c18_temp;
  real_T c18_d1;
  real_T c18_d2;
  real_T c18_d3;
  real_T c18_d4;
  real_T c18_d5;
  boolean_T c18_b0;
  boolean_T c18_b1;
  real_T c18_d6;
  int8_T c18_i0;
  real_T c18_d7;
  real_T c18_d8;
  real_T c18_d9;
  real_T c18_d10;
  real_T c18_d11;
  boolean_T c18_b2;
  boolean_T c18_b3;
  real_T c18_d12;
  real_T c18_d13;
  int8_T c18_i1;
  real_T c18_d14;
  real_T *c18_cal_CRANK_LOCKOUT;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_eng_app_percent;
  real_T *c18_Pumpson;
  int8_T *c18_state;
  real_T *c18_motor;
  boolean_T *c18_estop;
  real_T *c18_cal_PHX_GEN_TQ_LIM_MOTORING;
  real_T *c18_cal_PHX_MOTOR_TQ_LIM_MOTORING;
  real_T *c18_cal_PHX_MOTORING_SPEED_SP;
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_cal_PHX_MOTORING_SPEED_SP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 25);
  c18_cal_PHX_MOTOR_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 24);
  c18_cal_PHX_GEN_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 23);
  c18_cal_CRANK_LOCKOUT = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_motor = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,5);
  if ((int16_T)chartInstance->c18_is_active_c18_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,5);
    chartInstance->c18_is_active_c18_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c18_tp_Disabled = 1U;
    chartInstance->c18_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
    c18_d0 = chartInstance->c18_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c18_d0);
  } else {
    switch (chartInstance->c18_is_c18_Dyno_IPT_2014) {
     case c18_IN_Crank1:
      CV_CHART_EVAL(5,0,1);
      c18_Crank1(chartInstance);
      break;

     case c18_IN_Disabled:
      CV_CHART_EVAL(5,0,2);
      c18_Disabled(chartInstance);
      break;

     case c18_IN_Motoring:
      CV_CHART_EVAL(5,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      c18_temp = !(_SFD_CCP_CALL(11,0,((*c18_motor)!=0)) != 0);
      if (!c18_temp) {
        c18_temp = (_SFD_CCP_CALL(11,1,((*c18_estop)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(11U, (int32_T)c18_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c18_tp_Motoring = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c18_tp_Disabled = 1U;
        chartInstance->c18_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
        c18_d1 = chartInstance->c18_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d1);
      } else {
        *c18_phoenix_en = 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
        c18_d2 = *c18_phoenix_en;
        sf_mex_printf("%s =\\n", "phoenix_en");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d2);
        *c18_phoenix_gen_tq_lim = *c18_cal_PHX_GEN_TQ_LIM_MOTORING;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
        c18_d3 = *c18_phoenix_gen_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d3);
        *c18_phoenix_motor_tq_lim = *c18_cal_PHX_MOTOR_TQ_LIM_MOTORING;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
        c18_d4 = *c18_phoenix_motor_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d4);
        *c18_phoenix_spd_sp = *c18_cal_PHX_MOTORING_SPEED_SP;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
        c18_d5 = *c18_phoenix_spd_sp;
        sf_mex_printf("%s =\\n", "phoenix_spd_sp");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d5);
        *c18_eng_en = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
        c18_b0 = *c18_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b0);
        *c18_rcci_mode = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
        c18_b1 = *c18_rcci_mode;
        sf_mex_printf("%s =\\n", "rcci_mode");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b1);
        *c18_eng_app_percent = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
        c18_d6 = *c18_eng_app_percent;
        sf_mex_printf("%s =\\n", "eng_app_percent");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d6);
        *c18_state = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
        c18_i0 = *c18_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 8, c18_i0);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c18_IN_Running:
      CV_CHART_EVAL(5,0,4);
      c18_Running(chartInstance);
      break;

     case c18_IN_crank_timeout:
      CV_CHART_EVAL(5,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
      if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13,0,
            ((chartInstance->c18_count > *c18_cal_CRANK_LOCKOUT)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
        chartInstance->c18_tp_crank_timeout = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
        chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c18_tp_Disabled = 1U;
        chartInstance->c18_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
        c18_d7 = chartInstance->c18_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d7);
      } else {
        *c18_phoenix_en = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
        c18_d8 = *c18_phoenix_en;
        sf_mex_printf("%s =\\n", "phoenix_en");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d8);
        *c18_phoenix_gen_tq_lim = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
        c18_d9 = *c18_phoenix_gen_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d9);
        *c18_phoenix_motor_tq_lim = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
        c18_d10 = *c18_phoenix_motor_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d10);
        *c18_phoenix_spd_sp = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
        c18_d11 = *c18_phoenix_spd_sp;
        sf_mex_printf("%s =\\n", "phoenix_spd_sp");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d11);
        *c18_eng_en = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
        c18_b2 = *c18_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b2);
        *c18_rcci_mode = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
        c18_b3 = *c18_rcci_mode;
        sf_mex_printf("%s =\\n", "rcci_mode");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b3);
        *c18_eng_app_percent = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
        c18_d12 = *c18_eng_app_percent;
        sf_mex_printf("%s =\\n", "eng_app_percent");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d12);
        *c18_Pumpson = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_Pumpson, 36U);
        c18_d13 = *c18_Pumpson;
        sf_mex_printf("%s =\\n", "Pumpson");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d13);
        *c18_state = 3;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
        c18_i1 = *c18_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 8, c18_i1);
        chartInstance->c18_count = chartInstance->c18_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
        c18_d14 = chartInstance->c18_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d14);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
      break;

     default:
      CV_CHART_EVAL(5,0,0);
      chartInstance->c18_is_c18_Dyno_IPT_2014 = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
}

static void c18_Disabled(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  real_T c18_d15;
  real_T c18_d16;
  real_T c18_d17;
  real_T c18_d18;
  real_T c18_d19;
  boolean_T c18_b4;
  boolean_T c18_b5;
  real_T c18_d20;
  real_T c18_d21;
  int8_T c18_i2;
  real_T c18_d22;
  real_T *c18_motor;
  boolean_T *c18_estop;
  boolean_T *c18_run;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_eng_app_percent;
  real_T *c18_Pumpson;
  int8_T *c18_state;
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_motor = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_run = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
  c18_temp = (_SFD_CCP_CALL(10,0,((*c18_motor)!=0)) != 0);
  if (c18_temp) {
    c18_temp = !(_SFD_CCP_CALL(10,1,((*c18_estop)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(10U, (int32_T)c18_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 10;
      sf_debug_transition_conflict_check_begin();
      if ((*c18_run) && (!(*c18_estop)) && (chartInstance->c18_count > 1.0)) {
        transitionList[numTransitions] = 1;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c18_tp_Disabled = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Motoring;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c18_tp_Motoring = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    c18_b_temp = (_SFD_CCP_CALL(1,0,((*c18_run)!=0)) != 0);
    if (c18_b_temp) {
      c18_b_temp = !(_SFD_CCP_CALL(1,1,((*c18_estop)!=0)) != 0);
    }

    c18_c_temp = c18_b_temp;
    if (c18_c_temp) {
      c18_c_temp = (_SFD_CCP_CALL(1,2,((chartInstance->c18_count > 1.0)!=0)) !=
                    0);
    }

    if (CV_TRANSITION_EVAL(1U, (int32_T)c18_c_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c18_tp_Disabled = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Crank1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c18_tp_Crank1 = 1U;
      chartInstance->c18_count = 0.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
      c18_d15 = chartInstance->c18_count;
      sf_mex_printf("%s =\\n", "count");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d15);
    } else {
      *c18_phoenix_en = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
      c18_d16 = *c18_phoenix_en;
      sf_mex_printf("%s =\\n", "phoenix_en");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d16);
      *c18_phoenix_gen_tq_lim = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
      c18_d17 = *c18_phoenix_gen_tq_lim;
      sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d17);
      *c18_phoenix_motor_tq_lim = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
      c18_d18 = *c18_phoenix_motor_tq_lim;
      sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d18);
      *c18_phoenix_spd_sp = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
      c18_d19 = *c18_phoenix_spd_sp;
      sf_mex_printf("%s =\\n", "phoenix_spd_sp");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d19);
      *c18_eng_en = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
      c18_b4 = *c18_eng_en;
      sf_mex_printf("%s =\\n", "eng_en");
      sf_mex_call_debug("disp", 0U, 1U, 3, c18_b4);
      *c18_rcci_mode = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
      c18_b5 = *c18_rcci_mode;
      sf_mex_printf("%s =\\n", "rcci_mode");
      sf_mex_call_debug("disp", 0U, 1U, 3, c18_b5);
      *c18_eng_app_percent = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
      c18_d20 = *c18_eng_app_percent;
      sf_mex_printf("%s =\\n", "eng_app_percent");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d20);
      *c18_Pumpson = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_Pumpson, 36U);
      c18_d21 = *c18_Pumpson;
      sf_mex_printf("%s =\\n", "Pumpson");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d21);
      *c18_state = 0;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
      c18_i2 = *c18_state;
      sf_mex_printf("%s =\\n", "state");
      sf_mex_call_debug("disp", 0U, 1U, 8, c18_i2);
      chartInstance->c18_count = chartInstance->c18_count + 1.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
      c18_d22 = chartInstance->c18_count;
      sf_mex_printf("%s =\\n", "count");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d22);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c18_Crank1(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  real_T c18_d23;
  real_T c18_d24;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  boolean_T c18_d_temp;
  boolean_T c18_e_temp;
  boolean_T c18_f_temp;
  real_T c18_d25;
  real_T c18_d26;
  real_T c18_d27;
  real_T c18_d28;
  boolean_T c18_b6;
  boolean_T c18_b7;
  real_T c18_d29;
  real_T c18_d30;
  int8_T c18_i3;
  real_T c18_d31;
  boolean_T *c18_run;
  boolean_T *c18_estop;
  real_T *c18_cal_CRANK_TIMEOUT;
  real_T *c18_phoenix_spd;
  real_T *c18_cal_ENG_CAUGHT_RPM;
  real_T *c18_phoenix_en;
  real_T *c18_cal_PHX_GEN_TQ_LIM_CRANK;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_cal_PHX_MOTOR_TQ_LIM_CRANK;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_cal_PHX_RPM_CRANK;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_cal_ENG_APP_CRANK;
  real_T *c18_eng_app_percent;
  real_T *c18_Pumpson;
  int8_T *c18_state;
  boolean_T *c18_force_diesel;
  boolean_T *c18_rcci_rdy;
  real_T *c18_eng_coolant_temp;
  real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
  boolean_T *c18_turbo;
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_cal_CRANK_TIMEOUT = (real_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 20);
  c18_cal_ENG_CAUGHT_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c18_cal_ENG_APP_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c18_cal_PHX_GEN_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S,
    11);
  c18_cal_PHX_MOTOR_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 10);
  c18_cal_PHX_RPM_CRANK = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_turbo = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c18_run = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_phoenix_spd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
  c18_temp = !(_SFD_CCP_CALL(5,0,((*c18_run)!=0)) != 0);
  if (!c18_temp) {
    c18_temp = (_SFD_CCP_CALL(5,1,((*c18_estop)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(5U, (int32_T)c18_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 5;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c18_count > *c18_cal_CRANK_TIMEOUT) {
        transitionList[numTransitions] = 12;
        numTransitions++;
      }

      if (*c18_phoenix_spd > *c18_cal_ENG_CAUGHT_RPM) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c18_tp_Crank1 = 0U;
    chartInstance->c18_is_c18_Dyno_IPT_2014 = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c18_tp_Disabled = 1U;
    chartInstance->c18_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
    c18_d23 = chartInstance->c18_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c18_d23);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
    if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12,0,
          ((chartInstance->c18_count > *c18_cal_CRANK_TIMEOUT)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 12;
        sf_debug_transition_conflict_check_begin();
        if (*c18_phoenix_spd > *c18_cal_ENG_CAUGHT_RPM) {
          transitionList[numTransitions] = 2;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c18_tp_Crank1 = 0U;
      chartInstance->c18_is_c18_Dyno_IPT_2014 = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_crank_timeout;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c18_tp_crank_timeout = 1U;
      chartInstance->c18_count = 0.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
      c18_d24 = chartInstance->c18_count;
      sf_mex_printf("%s =\\n", "count");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d24);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c18_phoenix_spd >
              *c18_cal_ENG_CAUGHT_RPM)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c18_tp_Crank1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Running;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c18_tp_Running = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
        c18_b_temp = (_SFD_CCP_CALL(4,0,((*c18_force_diesel)!=0)) != 0);
        if (!c18_b_temp) {
          c18_b_temp = !(_SFD_CCP_CALL(4,1,((*c18_rcci_rdy)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(4U, (int32_T)c18_b_temp) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions= 1;
            transitionList[0] = 4;
            sf_debug_transition_conflict_check_begin();
            if ((*c18_eng_coolant_temp > *c18_cal_RCCI_RDY_COOLANT_TEMP) &&
                (*c18_rcci_rdy) && (!(*c18_force_diesel))) {
              transitionList[numTransitions] = 15;
              numTransitions++;
            }

            if ((!(*c18_turbo)) && (*c18_eng_coolant_temp <
                                    *c18_cal_RCCI_RDY_COOLANT_TEMP) &&
                (!(*c18_force_diesel))) {
              transitionList[numTransitions] = 16;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          chartInstance->c18_is_Running = c18_IN_Diesel;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c18_tp_Diesel = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
          c18_c_temp = (_SFD_CCP_CALL(15,0,((*c18_eng_coolant_temp >
            *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
          if (c18_c_temp) {
            c18_c_temp = (_SFD_CCP_CALL(15,1,((*c18_rcci_rdy)!=0)) != 0);
          }

          c18_d_temp = c18_c_temp;
          if (c18_d_temp) {
            c18_d_temp = !(_SFD_CCP_CALL(15,2,((*c18_force_diesel)!=0)) != 0);
          }

          if (CV_TRANSITION_EVAL(15U, (int32_T)c18_d_temp) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 15;
              sf_debug_transition_conflict_check_begin();
              if ((!(*c18_turbo)) && (*c18_eng_coolant_temp <
                                      *c18_cal_RCCI_RDY_COOLANT_TEMP) &&
                  (!(*c18_force_diesel))) {
                transitionList[numTransitions] = 16;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
            chartInstance->c18_is_Running = c18_IN_RCCI;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
            chartInstance->c18_tp_RCCI = 1U;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
            c18_e_temp = !(_SFD_CCP_CALL(16,0,((*c18_turbo)!=0)) != 0);
            if (c18_e_temp) {
              c18_e_temp = (_SFD_CCP_CALL(16,1,((*c18_eng_coolant_temp <
                *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
            }

            c18_f_temp = c18_e_temp;
            if (c18_f_temp) {
              c18_f_temp = !(_SFD_CCP_CALL(16,2,((*c18_force_diesel)!=0)) != 0);
            }

            if (CV_TRANSITION_EVAL(16U, (int32_T)c18_f_temp) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
              chartInstance->c18_is_Running = c18_IN_Warmup;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
              chartInstance->c18_tp_Warmup = 1U;
            }
          }
        }
      } else {
        *c18_phoenix_en = 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
        c18_d25 = *c18_phoenix_en;
        sf_mex_printf("%s =\\n", "phoenix_en");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d25);
        *c18_phoenix_gen_tq_lim = *c18_cal_PHX_GEN_TQ_LIM_CRANK;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
        c18_d26 = *c18_phoenix_gen_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d26);
        *c18_phoenix_motor_tq_lim = *c18_cal_PHX_MOTOR_TQ_LIM_CRANK;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
        c18_d27 = *c18_phoenix_motor_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d27);
        *c18_phoenix_spd_sp = *c18_cal_PHX_RPM_CRANK;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
        c18_d28 = *c18_phoenix_spd_sp;
        sf_mex_printf("%s =\\n", "phoenix_spd_sp");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d28);
        *c18_eng_en = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
        c18_b6 = *c18_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b6);
        *c18_rcci_mode = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
        c18_b7 = *c18_rcci_mode;
        sf_mex_printf("%s =\\n", "rcci_mode");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b7);
        *c18_eng_app_percent = *c18_cal_ENG_APP_CRANK;
        _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
        c18_d29 = *c18_eng_app_percent;
        sf_mex_printf("%s =\\n", "eng_app_percent");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d29);
        *c18_Pumpson = 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_Pumpson, 36U);
        c18_d30 = *c18_Pumpson;
        sf_mex_printf("%s =\\n", "Pumpson");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d30);
        *c18_state = 2;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
        c18_i3 = *c18_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 8, c18_i3);
        chartInstance->c18_count = chartInstance->c18_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
        c18_d31 = chartInstance->c18_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d31);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c18_Running(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  real_T c18_d32;
  boolean_T c18_b_temp;
  real_T c18_d33;
  real_T c18_d34;
  boolean_T c18_c_temp;
  real_T c18_d35;
  real_T c18_d36;
  real_T c18_d37;
  real_T c18_d38;
  boolean_T c18_b8;
  boolean_T c18_b9;
  real_T c18_d39;
  real_T c18_d40;
  int8_T c18_i4;
  boolean_T c18_d_temp;
  boolean_T c18_e_temp;
  real_T c18_d41;
  real_T c18_d42;
  real_T c18_d43;
  real_T c18_d44;
  boolean_T c18_b10;
  boolean_T c18_b11;
  real_T c18_d45;
  real_T c18_d46;
  int8_T c18_i5;
  boolean_T *c18_run;
  boolean_T *c18_estop;
  real_T *c18_phoenix_spd;
  real_T *c18_cal_ENG_STALL_RPM;
  real_T *c18_Pumpson;
  boolean_T *c18_force_diesel;
  boolean_T *c18_rcci_rdy;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_cal_PHX_SPEED_SP_DIESEL;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_cal_ENG_APP_DIESEL;
  real_T *c18_eng_app_percent;
  real_T *c18_hold_G_P;
  int8_T *c18_state;
  real_T *c18_eng_coolant_temp;
  real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
  real_T *c18_cal_PHX_SPEED_SP_RCCI;
  real_T *c18_cal_ENG_APP_RCCI;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c18_cal_ENG_STALL_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 26);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 20);
  c18_cal_ENG_APP_RCCI = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c18_cal_ENG_APP_DIESEL = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c18_cal_PHX_SPEED_SP_RCCI = (real_T *)ssGetInputPortSignal(chartInstance->S,
    14);
  c18_cal_PHX_SPEED_SP_DIESEL = (real_T *)ssGetInputPortSignal(chartInstance->S,
    13);
  c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_run = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c18_phoenix_spd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
  c18_temp = !(_SFD_CCP_CALL(3,0,((*c18_run)!=0)) != 0);
  if (!c18_temp) {
    c18_temp = (_SFD_CCP_CALL(3,1,((*c18_estop)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(3U, (int32_T)c18_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 3;
      sf_debug_transition_conflict_check_begin();
      if ((*c18_run) && (*c18_phoenix_spd < *c18_cal_ENG_STALL_RPM)) {
        transitionList[numTransitions] = 14;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
    c18_exit_internal_Running(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
    chartInstance->c18_tp_Running = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_Disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c18_tp_Disabled = 1U;
    chartInstance->c18_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
    c18_d32 = chartInstance->c18_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c18_d32);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
    c18_b_temp = (_SFD_CCP_CALL(14,0,((*c18_run)!=0)) != 0);
    if (c18_b_temp) {
      c18_b_temp = (_SFD_CCP_CALL(14,1,((*c18_phoenix_spd <
        *c18_cal_ENG_STALL_RPM)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(14U, (int32_T)c18_b_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
      c18_exit_internal_Running(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c18_tp_Running = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      chartInstance->c18_is_c18_Dyno_IPT_2014 = c18_IN_crank_timeout;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c18_tp_crank_timeout = 1U;
      chartInstance->c18_count = 0.0;
      _SFD_DATA_RANGE_CHECK(chartInstance->c18_count, 7U);
      c18_d33 = chartInstance->c18_count;
      sf_mex_printf("%s =\\n", "count");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d33);
    } else {
      *c18_Pumpson = 1.0;
      _SFD_DATA_RANGE_CHECK(*c18_Pumpson, 36U);
      c18_d34 = *c18_Pumpson;
      sf_mex_printf("%s =\\n", "Pumpson");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d34);
      switch (chartInstance->c18_is_Running) {
       case c18_IN_Diesel:
        CV_STATE_EVAL(3,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        c18_c_temp = !(_SFD_CCP_CALL(6,0,((*c18_force_diesel)!=0)) != 0);
        if (c18_c_temp) {
          c18_c_temp = (_SFD_CCP_CALL(6,1,((*c18_rcci_rdy)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(6U, (int32_T)c18_c_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c18_tp_Diesel = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c18_is_Running = c18_IN_switch;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
          chartInstance->c18_tp_switch = 1U;
        } else {
          *c18_phoenix_en = 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
          c18_d35 = *c18_phoenix_en;
          sf_mex_printf("%s =\\n", "phoenix_en");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d35);
          *c18_phoenix_gen_tq_lim = 100.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
          c18_d36 = *c18_phoenix_gen_tq_lim;
          sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d36);
          *c18_phoenix_motor_tq_lim = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
          c18_d37 = *c18_phoenix_motor_tq_lim;
          sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d37);
          *c18_phoenix_spd_sp = *c18_cal_PHX_SPEED_SP_DIESEL;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
          c18_d38 = *c18_phoenix_spd_sp;
          sf_mex_printf("%s =\\n", "phoenix_spd_sp");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d38);
          *c18_eng_en = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
          c18_b8 = *c18_eng_en;
          sf_mex_printf("%s =\\n", "eng_en");
          sf_mex_call_debug("disp", 0U, 1U, 3, c18_b8);
          *c18_rcci_mode = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
          c18_b9 = *c18_rcci_mode;
          sf_mex_printf("%s =\\n", "rcci_mode");
          sf_mex_call_debug("disp", 0U, 1U, 3, c18_b9);
          *c18_eng_app_percent = *c18_cal_ENG_APP_DIESEL;
          _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
          c18_d39 = *c18_eng_app_percent;
          sf_mex_printf("%s =\\n", "eng_app_percent");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d39);
          *c18_hold_G_P = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_hold_G_P, 38U);
          c18_d40 = *c18_hold_G_P;
          sf_mex_printf("%s =\\n", "hold_G_P");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d40);
          *c18_state = 5;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
          c18_i4 = *c18_state;
          sf_mex_printf("%s =\\n", "state");
          sf_mex_call_debug("disp", 0U, 1U, 8, c18_i4);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        break;

       case c18_IN_RCCI:
        CV_STATE_EVAL(3,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        c18_d_temp = (_SFD_CCP_CALL(8,0,((*c18_force_diesel)!=0)) != 0);
        if (!c18_d_temp) {
          c18_d_temp = !(_SFD_CCP_CALL(8,1,((*c18_rcci_rdy)!=0)) != 0);
        }

        c18_e_temp = c18_d_temp;
        if (!c18_e_temp) {
          c18_e_temp = (_SFD_CCP_CALL(8,2,((*c18_eng_coolant_temp <
            *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(8U, (int32_T)c18_e_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
          chartInstance->c18_tp_RCCI = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
          chartInstance->c18_is_Running = c18_IN_switch;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
          chartInstance->c18_tp_switch = 1U;
        } else {
          *c18_phoenix_en = 1.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
          c18_d41 = *c18_phoenix_en;
          sf_mex_printf("%s =\\n", "phoenix_en");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d41);
          *c18_phoenix_gen_tq_lim = 100.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
          c18_d42 = *c18_phoenix_gen_tq_lim;
          sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d42);
          *c18_phoenix_motor_tq_lim = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
          c18_d43 = *c18_phoenix_motor_tq_lim;
          sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d43);
          *c18_phoenix_spd_sp = *c18_cal_PHX_SPEED_SP_RCCI;
          _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
          c18_d44 = *c18_phoenix_spd_sp;
          sf_mex_printf("%s =\\n", "phoenix_spd_sp");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d44);
          *c18_eng_en = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
          c18_b10 = *c18_eng_en;
          sf_mex_printf("%s =\\n", "eng_en");
          sf_mex_call_debug("disp", 0U, 1U, 3, c18_b10);
          *c18_rcci_mode = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
          c18_b11 = *c18_rcci_mode;
          sf_mex_printf("%s =\\n", "rcci_mode");
          sf_mex_call_debug("disp", 0U, 1U, 3, c18_b11);
          *c18_eng_app_percent = *c18_cal_ENG_APP_RCCI;
          _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
          c18_d45 = *c18_eng_app_percent;
          sf_mex_printf("%s =\\n", "eng_app_percent");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d45);
          *c18_hold_G_P = 0.0;
          _SFD_DATA_RANGE_CHECK(*c18_hold_G_P, 38U);
          c18_d46 = *c18_hold_G_P;
          sf_mex_printf("%s =\\n", "hold_G_P");
          sf_mex_call_debug("disp", 0U, 1U, 6, c18_d46);
          *c18_state = 6;
          _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
          c18_i5 = *c18_state;
          sf_mex_printf("%s =\\n", "state");
          sf_mex_call_debug("disp", 0U, 1U, 8, c18_i5);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        break;

       case c18_IN_Warmup:
        CV_STATE_EVAL(3,0,3);
        c18_Warmup(chartInstance);
        break;

       case c18_IN_switch:
        CV_STATE_EVAL(3,0,4);
        c18_switch(chartInstance);
        break;

       default:
        CV_STATE_EVAL(3,0,0);
        chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
}

static void c18_exit_internal_Running(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c18_is_Running) {
   case c18_IN_Diesel:
    CV_STATE_EVAL(3,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c18_tp_Diesel = 0U;
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    break;

   case c18_IN_RCCI:
    CV_STATE_EVAL(3,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c18_tp_RCCI = 0U;
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    break;

   case c18_IN_Warmup:
    CV_STATE_EVAL(3,1,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c18_tp_Warmup = 0U;
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    break;

   case c18_IN_switch:
    CV_STATE_EVAL(3,1,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
    chartInstance->c18_tp_switch = 0U;
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    break;

   default:
    CV_STATE_EVAL(3,1,0);
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    break;
  }
}

static void c18_Warmup(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  real_T c18_d47;
  real_T c18_d48;
  real_T c18_d49;
  real_T c18_d50;
  boolean_T c18_b12;
  boolean_T c18_b13;
  real_T c18_d51;
  real_T c18_d52;
  int8_T c18_i6;
  real_T *c18_eng_coolant_temp;
  real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
  boolean_T *c18_rcci_rdy;
  boolean_T *c18_force_diesel;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  real_T *c18_cal_PHX_SPEED_SP_WARMUP;
  real_T *c18_phoenix_spd_sp;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_cal_ENG_APP_WARMUP;
  real_T *c18_eng_app_percent;
  real_T *c18_hold_G_P;
  int8_T *c18_state;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 20);
  c18_cal_ENG_APP_WARMUP = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c18_cal_PHX_SPEED_SP_WARMUP = (real_T *)ssGetInputPortSignal(chartInstance->S,
    12);
  c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
  c18_temp = (_SFD_CCP_CALL(7,0,((*c18_eng_coolant_temp >
    *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
  if (c18_temp) {
    c18_temp = (_SFD_CCP_CALL(7,1,((*c18_rcci_rdy)!=0)) != 0);
  }

  c18_b_temp = c18_temp;
  if (c18_b_temp) {
    c18_b_temp = !(_SFD_CCP_CALL(7,2,((*c18_force_diesel)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(7U, (int32_T)c18_b_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 7;
      sf_debug_transition_conflict_check_begin();
      if ((*c18_force_diesel) || (!(*c18_rcci_rdy))) {
        transitionList[numTransitions] = 9;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c18_tp_Warmup = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    chartInstance->c18_is_Running = c18_IN_switch;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
    chartInstance->c18_tp_switch = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
    c18_c_temp = (_SFD_CCP_CALL(9,0,((*c18_force_diesel)!=0)) != 0);
    if (!c18_c_temp) {
      c18_c_temp = !(_SFD_CCP_CALL(9,1,((*c18_rcci_rdy)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(9U, (int32_T)c18_c_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
      chartInstance->c18_tp_Warmup = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      chartInstance->c18_is_Running = c18_IN_switch;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance->c18_tp_switch = 1U;
    } else {
      *c18_phoenix_en = 1.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
      c18_d47 = *c18_phoenix_en;
      sf_mex_printf("%s =\\n", "phoenix_en");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d47);
      *c18_phoenix_gen_tq_lim = 100.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
      c18_d48 = *c18_phoenix_gen_tq_lim;
      sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d48);
      *c18_phoenix_motor_tq_lim = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
      c18_d49 = *c18_phoenix_motor_tq_lim;
      sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d49);
      *c18_phoenix_spd_sp = *c18_cal_PHX_SPEED_SP_WARMUP;
      _SFD_DATA_RANGE_CHECK(*c18_phoenix_spd_sp, 3U);
      c18_d50 = *c18_phoenix_spd_sp;
      sf_mex_printf("%s =\\n", "phoenix_spd_sp");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d50);
      *c18_eng_en = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
      c18_b12 = *c18_eng_en;
      sf_mex_printf("%s =\\n", "eng_en");
      sf_mex_call_debug("disp", 0U, 1U, 3, c18_b12);
      *c18_rcci_mode = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
      c18_b13 = *c18_rcci_mode;
      sf_mex_printf("%s =\\n", "rcci_mode");
      sf_mex_call_debug("disp", 0U, 1U, 3, c18_b13);
      *c18_eng_app_percent = *c18_cal_ENG_APP_WARMUP;
      _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
      c18_d51 = *c18_eng_app_percent;
      sf_mex_printf("%s =\\n", "eng_app_percent");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d51);
      *c18_hold_G_P = 0.0;
      _SFD_DATA_RANGE_CHECK(*c18_hold_G_P, 38U);
      c18_d52 = *c18_hold_G_P;
      sf_mex_printf("%s =\\n", "hold_G_P");
      sf_mex_call_debug("disp", 0U, 1U, 6, c18_d52);
      *c18_state = 4;
      _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
      c18_i6 = *c18_state;
      sf_mex_printf("%s =\\n", "state");
      sf_mex_call_debug("disp", 0U, 1U, 8, c18_i6);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
}

static void c18_switch(SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c18_temp;
  boolean_T c18_b_temp;
  boolean_T c18_c_temp;
  boolean_T c18_d_temp;
  boolean_T c18_e_temp;
  boolean_T c18_f_temp;
  real_T c18_d53;
  real_T c18_d54;
  real_T c18_d55;
  boolean_T c18_b14;
  boolean_T c18_b15;
  real_T c18_d56;
  real_T c18_d57;
  int8_T c18_i7;
  boolean_T *c18_force_diesel;
  boolean_T *c18_rcci_rdy;
  boolean_T *c18_acc_error;
  real_T *c18_eng_coolant_temp;
  real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
  real_T *c18_phoenix_en;
  real_T *c18_phoenix_gen_tq_lim;
  real_T *c18_phoenix_motor_tq_lim;
  boolean_T *c18_eng_en;
  boolean_T *c18_rcci_mode;
  real_T *c18_cal_ENG_APP_SWITCH;
  real_T *c18_eng_app_percent;
  real_T *c18_hold_G_P;
  int8_T *c18_state;
  c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c18_cal_ENG_APP_SWITCH = (real_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 20);
  c18_acc_error = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
  c18_temp = (_SFD_CCP_CALL(18,0,((*c18_force_diesel)!=0)) != 0);
  if (!c18_temp) {
    c18_temp = !(_SFD_CCP_CALL(18,1,((*c18_rcci_rdy)!=0)) != 0);
  }

  c18_b_temp = c18_temp;
  if (c18_b_temp) {
    c18_b_temp = (_SFD_CCP_CALL(18,2,((*c18_acc_error)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(18U, (int32_T)c18_b_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 18;
      sf_debug_transition_conflict_check_begin();
      if ((*c18_acc_error) && (*c18_eng_coolant_temp <
           *c18_cal_RCCI_RDY_COOLANT_TEMP)) {
        transitionList[numTransitions] = 19;
        numTransitions++;
      }

      if ((!(*c18_force_diesel)) && (*c18_eng_coolant_temp >
           *c18_cal_RCCI_RDY_COOLANT_TEMP) && (*c18_rcci_rdy) && (*c18_acc_error))
      {
        transitionList[numTransitions] = 17;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
    chartInstance->c18_tp_switch = 0U;
    chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    chartInstance->c18_is_Running = c18_IN_Diesel;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c18_tp_Diesel = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
    c18_c_temp = (_SFD_CCP_CALL(19,0,((*c18_acc_error)!=0)) != 0);
    if (c18_c_temp) {
      c18_c_temp = (_SFD_CCP_CALL(19,1,((*c18_eng_coolant_temp <
        *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(19U, (int32_T)c18_c_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 19;
        sf_debug_transition_conflict_check_begin();
        if ((!(*c18_force_diesel)) && (*c18_eng_coolant_temp >
             *c18_cal_RCCI_RDY_COOLANT_TEMP) && (*c18_rcci_rdy) &&
            (*c18_acc_error)) {
          transitionList[numTransitions] = 17;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
      chartInstance->c18_tp_switch = 0U;
      chartInstance->c18_is_Running = (uint8_T)c18_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      chartInstance->c18_is_Running = c18_IN_Warmup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
      chartInstance->c18_tp_Warmup = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
      c18_d_temp = !(_SFD_CCP_CALL(17,0,((*c18_force_diesel)!=0)) != 0);
      if (c18_d_temp) {
        c18_d_temp = (_SFD_CCP_CALL(17,1,((*c18_eng_coolant_temp >
          *c18_cal_RCCI_RDY_COOLANT_TEMP)!=0)) != 0);
      }

      c18_e_temp = c18_d_temp;
      if (c18_e_temp) {
        c18_e_temp = (_SFD_CCP_CALL(17,2,((*c18_rcci_rdy)!=0)) != 0);
      }

      c18_f_temp = c18_e_temp;
      if (c18_f_temp) {
        c18_f_temp = (_SFD_CCP_CALL(17,3,((*c18_acc_error)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(17U, (int32_T)c18_f_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
        chartInstance->c18_tp_switch = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
        chartInstance->c18_is_Running = c18_IN_RCCI;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
        chartInstance->c18_tp_RCCI = 1U;
      } else {
        *c18_phoenix_en = 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_en, 0U);
        c18_d53 = *c18_phoenix_en;
        sf_mex_printf("%s =\\n", "phoenix_en");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d53);
        *c18_phoenix_gen_tq_lim = 100.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_gen_tq_lim, 1U);
        c18_d54 = *c18_phoenix_gen_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_gen_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d54);
        *c18_phoenix_motor_tq_lim = 0.0;
        _SFD_DATA_RANGE_CHECK(*c18_phoenix_motor_tq_lim, 2U);
        c18_d55 = *c18_phoenix_motor_tq_lim;
        sf_mex_printf("%s =\\n", "phoenix_motor_tq_lim");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d55);
        *c18_eng_en = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_eng_en, 4U);
        c18_b14 = *c18_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b14);
        *c18_rcci_mode = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_rcci_mode, 5U);
        c18_b15 = *c18_rcci_mode;
        sf_mex_printf("%s =\\n", "rcci_mode");
        sf_mex_call_debug("disp", 0U, 1U, 3, c18_b15);
        *c18_eng_app_percent = *c18_cal_ENG_APP_SWITCH;
        _SFD_DATA_RANGE_CHECK(*c18_eng_app_percent, 6U);
        c18_d56 = *c18_eng_app_percent;
        sf_mex_printf("%s =\\n", "eng_app_percent");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d56);
        *c18_hold_G_P = 1.0;
        _SFD_DATA_RANGE_CHECK(*c18_hold_G_P, 38U);
        c18_d57 = *c18_hold_G_P;
        sf_mex_printf("%s =\\n", "hold_G_P");
        sf_mex_call_debug("disp", 0U, 1U, 6, c18_d57);
        *c18_state = 7;
        _SFD_DATA_RANGE_CHECK((real_T)*c18_state, 30U);
        c18_i7 = *c18_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 8, c18_i7);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
}

static void init_script_number_translation(uint32_T c18_machineNumber, uint32_T
  c18_chartNumber)
{
}

const mxArray *sf_c18_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
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
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
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
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
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
  real_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((real_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static const mxArray *c18_d_sf_marshall(void *chartInstanceVoid, void *c18_u)
{
  const mxArray *c18_y = NULL;
  int8_T c18_b_u;
  const mxArray *c18_b_y = NULL;
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c18_y = NULL;
  c18_b_u = *((int8_T *)c18_u);
  c18_b_y = NULL;
  sf_mex_assign(&c18_b_y, sf_mex_create("y", &c18_b_u, 2, 0U, 0U, 0U, 0));
  sf_mex_assign(&c18_y, c18_b_y);
  return c18_y;
}

static real_T c18_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_Pumpson, const char_T *
  c18_name)
{
  real_T c18_y;
  real_T c18_d58;
  sf_mex_import(c18_name, sf_mex_dup(c18_Pumpson), &c18_d58, 1, 0, 0U, 0, 0U, 0);
  c18_y = c18_d58;
  sf_mex_destroy(&c18_Pumpson);
  return c18_y;
}

static boolean_T c18_b_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_eng_en, const char_T *
  c18_name)
{
  boolean_T c18_y;
  boolean_T c18_b16;
  sf_mex_import(c18_name, sf_mex_dup(c18_eng_en), &c18_b16, 1, 11, 0U, 0, 0U, 0);
  c18_y = c18_b16;
  sf_mex_destroy(&c18_eng_en);
  return c18_y;
}

static int8_T c18_c_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c18_state, const char_T *
  c18_name)
{
  int8_T c18_y;
  int8_T c18_i8;
  sf_mex_import(c18_name, sf_mex_dup(c18_state), &c18_i8, 1, 2, 0U, 0, 0U, 0);
  c18_y = c18_i8;
  sf_mex_destroy(&c18_state);
  return c18_y;
}

static uint8_T c18_d_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c18_b_is_active_c18_Dyno_IPT_2014, const char_T *c18_name)
{
  uint8_T c18_y;
  uint8_T c18_u0;
  sf_mex_import(c18_name, sf_mex_dup(c18_b_is_active_c18_Dyno_IPT_2014), &c18_u0,
                1, 3, 0U, 0, 0U, 0);
  c18_y = c18_u0;
  sf_mex_destroy(&c18_b_is_active_c18_Dyno_IPT_2014);
  return c18_y;
}

static const mxArray *c18_e_emlrt_marshallIn(SFc18_Dyno_IPT_2014InstanceStruct
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

static void init_test_point_addr_map(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c18_testPointAddrMap[0] = &chartInstance->c18_count;
  chartInstance->c18_testPointAddrMap[1] = &chartInstance->c18_tp_Crank1;
  chartInstance->c18_testPointAddrMap[2] = &chartInstance->c18_tp_Disabled;
  chartInstance->c18_testPointAddrMap[3] = &chartInstance->c18_tp_Motoring;
  chartInstance->c18_testPointAddrMap[4] = &chartInstance->c18_tp_Running;
  chartInstance->c18_testPointAddrMap[5] = &chartInstance->c18_tp_Diesel;
  chartInstance->c18_testPointAddrMap[6] = &chartInstance->c18_tp_RCCI;
  chartInstance->c18_testPointAddrMap[7] = &chartInstance->c18_tp_Warmup;
  chartInstance->c18_testPointAddrMap[8] = &chartInstance->c18_tp_switch;
  chartInstance->c18_testPointAddrMap[9] = &chartInstance->c18_tp_crank_timeout;
}

static void **get_test_point_address_map(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c18_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc18_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c18_testPointMappingInfo;
}

static void init_dsm_address_info(SFc18_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c18_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3071302794U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(148100827U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3227610958U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1721539746U);
}

mxArray *sf_c18_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3128633372U);
    pr[1] = (double)(3243075618U);
    pr[2] = (double)(1328927022U);
    pr[3] = (double)(2675991394U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,28,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,17,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,17,"type",mxType);
    }

    mxSetField(mxData,17,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,18,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,18,"type",mxType);
    }

    mxSetField(mxData,18,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,19,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,19,"type",mxType);
    }

    mxSetField(mxData,19,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,20,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,20,"type",mxType);
    }

    mxSetField(mxData,20,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,21,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,21,"type",mxType);
    }

    mxSetField(mxData,21,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,22,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,22,"type",mxType);
    }

    mxSetField(mxData,22,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,23,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,23,"type",mxType);
    }

    mxSetField(mxData,23,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,24,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,24,"type",mxType);
    }

    mxSetField(mxData,24,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,25,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,25,"type",mxType);
    }

    mxSetField(mxData,25,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,26,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,26,"type",mxType);
    }

    mxSetField(mxData,26,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,27,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,27,"type",mxType);
    }

    mxSetField(mxData,27,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,10,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c18_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[153],T\"Pumpson\",},{M[1],M[54],T\"eng_app_percent\",},{M[1],M[56],T\"eng_en\",},{M[1],M[163],T\"hold_G_P\",},{M[1],M[47],T\"phoenix_en\",},{M[1],M[49],T\"phoenix_gen_tq_lim\",},{M[1],M[50],T\"phoenix_motor_tq_lim\",},{M[1],M[51],T\"phoenix_spd_sp\",},{M[1],M[53],T\"rcci_mode\",},{M[1],M[117],T\"state\",}}",
    "100 S1x4'type','srcId','name','auxInfo'{{M[3],M[57],T\"count\",},{M[8],M[0],T\"is_active_c18_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c18_Dyno_IPT_2014\",},{M[9],M[12],T\"is_Running\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 14, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c18_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           18,
           9,
           20,
           39,
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
          init_script_number_translation(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Dyno_IPT_2014MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "phoenix_en",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "phoenix_gen_tq_lim",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "phoenix_motor_tq_lim",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "phoenix_spd_sp",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"eng_en",0,
                              (MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "rcci_mode",0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "eng_app_percent",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "eng_coolant_temp",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "phoenix_spd",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"run",0,
                              (MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"turbo",0,
                              (MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(12,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "rcci_rdy",0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(13,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "force_diesel",0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(14,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "acc_error",0,(MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(15,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"estop",0,
                              (MexFcnForType)c18_b_sf_marshall);
          _SFD_SET_DATA_PROPS(16,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"motor",
                              0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(17,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_RPM_CRANK",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(18,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_MOTOR_TQ_LIM_CRANK",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(19,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_GEN_TQ_LIM_CRANK",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(20,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_SPEED_SP_WARMUP",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(21,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_SPEED_SP_DIESEL",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(22,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_SPEED_SP_RCCI",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(23,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_APP_CRANK",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(24,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_APP_DIESEL",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(25,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_APP_WARMUP",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(26,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_APP_RCCI",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(27,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_CAUGHT_RPM",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(28,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_RCCI_RDY_COOLANT_TEMP",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(29,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_CRANK_TIMEOUT",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(30,2,0,1,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c18_d_sf_marshall);
          _SFD_SET_DATA_PROPS(31,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_CRANK_LOCKOUT",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(32,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_GEN_TQ_LIM_MOTORING",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(33,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_MOTOR_TQ_LIM_MOTORING",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(34,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_PHX_MOTORING_SPEED_SP",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(35,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_STALL_RPM",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(36,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Pumpson",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(37,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_ENG_APP_SWITCH",0,(MexFcnForType)
                              c18_c_sf_marshall);
          _SFD_SET_DATA_PROPS(38,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "hold_G_P",0,(MexFcnForType)c18_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_CH_SUBSTATE_COUNT(5);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,8);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,4);
          _SFD_ST_SUBSTATE_INDEX(3,0,4);
          _SFD_ST_SUBSTATE_INDEX(3,1,5);
          _SFD_ST_SUBSTATE_INDEX(3,2,6);
          _SFD_ST_SUBSTATE_INDEX(3,3,7);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
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
          _SFD_CV_INIT_STATE(3,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 7, 15 };

          static unsigned int sEndGuardMap[] = { 4, 12, 24 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(1,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 13, 24 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -2 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 7 };

          static unsigned int sEndGuardMap[] = { 5, 12 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 13, 24 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -2 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 51, 62 };

          static unsigned int sEndGuardMap[] = { 44, 59, 74 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -1, -3 };

          _SFD_CV_INIT_TRANS(15,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 16, 27 };

          static unsigned int sEndGuardMap[] = { 13, 24, 69 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(8,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 7 };

          static unsigned int sEndGuardMap[] = { 5, 12 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 14, 24 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 51, 62 };

          static unsigned int sEndGuardMap[] = { 44, 59, 74 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -1, -3 };

          _SFD_CV_INIT_TRANS(7,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 6, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 9 };

          static unsigned int sEndGuardMap[] = { 7, 14 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 7 };

          static unsigned int sEndGuardMap[] = { 4, 38 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 10, 56 };

          static unsigned int sEndGuardMap[] = { 7, 52, 68 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3, 2, -1, -3 };

          _SFD_CV_INIT_TRANS(16,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 17, 62, 72 };

          static unsigned int sEndGuardMap[] = { 14, 59, 70, 81 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_TRANS(17,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),8,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 17, 28 };

          static unsigned int sEndGuardMap[] = { 14, 25, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -2, 2, -3 };

          _SFD_CV_INIT_TRANS(18,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 13 };

          static unsigned int sEndGuardMap[] = { 10, 55 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(19,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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

        _SFD_TRANS_COV_WTS(1,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 7, 15 };

          static unsigned int sEndGuardMap[] = { 4, 12, 24 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 13, 24 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 7 };

          static unsigned int sEndGuardMap[] = { 5, 12 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 13, 24 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 51, 62 };

          static unsigned int sEndGuardMap[] = { 44, 59, 74 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 16, 27 };

          static unsigned int sEndGuardMap[] = { 13, 24, 69 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 7 };

          static unsigned int sEndGuardMap[] = { 5, 12 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 14, 24 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 51, 62 };

          static unsigned int sEndGuardMap[] = { 44, 59, 74 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 9 };

          static unsigned int sEndGuardMap[] = { 6, 14 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 9 };

          static unsigned int sEndGuardMap[] = { 7, 14 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 7 };

          static unsigned int sEndGuardMap[] = { 4, 38 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 10, 56 };

          static unsigned int sEndGuardMap[] = { 7, 52, 68 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,4,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 17, 62, 72 };

          static unsigned int sEndGuardMap[] = { 14, 59, 70, 81 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 17, 28 };

          static unsigned int sEndGuardMap[] = { 14, 25, 37 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 13 };

          static unsigned int sEndGuardMap[] = { 10, 55 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c18_phoenix_en;
          real_T *c18_phoenix_gen_tq_lim;
          real_T *c18_phoenix_motor_tq_lim;
          real_T *c18_phoenix_spd_sp;
          boolean_T *c18_eng_en;
          boolean_T *c18_rcci_mode;
          real_T *c18_eng_app_percent;
          real_T *c18_eng_coolant_temp;
          real_T *c18_phoenix_spd;
          boolean_T *c18_run;
          boolean_T *c18_turbo;
          boolean_T *c18_rcci_rdy;
          boolean_T *c18_force_diesel;
          boolean_T *c18_acc_error;
          boolean_T *c18_estop;
          real_T *c18_motor;
          real_T *c18_cal_PHX_RPM_CRANK;
          real_T *c18_cal_PHX_MOTOR_TQ_LIM_CRANK;
          real_T *c18_cal_PHX_GEN_TQ_LIM_CRANK;
          real_T *c18_cal_PHX_SPEED_SP_WARMUP;
          real_T *c18_cal_PHX_SPEED_SP_DIESEL;
          real_T *c18_cal_PHX_SPEED_SP_RCCI;
          real_T *c18_cal_ENG_APP_CRANK;
          real_T *c18_cal_ENG_APP_DIESEL;
          real_T *c18_cal_ENG_APP_WARMUP;
          real_T *c18_cal_ENG_APP_RCCI;
          real_T *c18_cal_ENG_CAUGHT_RPM;
          real_T *c18_cal_RCCI_RDY_COOLANT_TEMP;
          real_T *c18_cal_CRANK_TIMEOUT;
          int8_T *c18_state;
          real_T *c18_cal_CRANK_LOCKOUT;
          real_T *c18_cal_PHX_GEN_TQ_LIM_MOTORING;
          real_T *c18_cal_PHX_MOTOR_TQ_LIM_MOTORING;
          real_T *c18_cal_PHX_MOTORING_SPEED_SP;
          real_T *c18_cal_ENG_STALL_RPM;
          real_T *c18_Pumpson;
          real_T *c18_cal_ENG_APP_SWITCH;
          real_T *c18_hold_G_P;
          c18_hold_G_P = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
          c18_cal_ENG_APP_SWITCH = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 27);
          c18_Pumpson = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c18_cal_ENG_STALL_RPM = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 26);
          c18_cal_PHX_MOTORING_SPEED_SP = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 25);
          c18_cal_PHX_MOTOR_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 24);
          c18_cal_PHX_GEN_TQ_LIM_MOTORING = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 23);
          c18_cal_CRANK_LOCKOUT = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 22);
          c18_state = (int8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c18_cal_CRANK_TIMEOUT = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 21);
          c18_cal_RCCI_RDY_COOLANT_TEMP = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 20);
          c18_cal_ENG_CAUGHT_RPM = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 19);
          c18_cal_ENG_APP_RCCI = (real_T *)ssGetInputPortSignal(chartInstance->S,
            18);
          c18_cal_ENG_APP_WARMUP = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 17);
          c18_cal_ENG_APP_DIESEL = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 16);
          c18_cal_ENG_APP_CRANK = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 15);
          c18_cal_PHX_SPEED_SP_RCCI = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 14);
          c18_cal_PHX_SPEED_SP_DIESEL = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 13);
          c18_cal_PHX_SPEED_SP_WARMUP = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 12);
          c18_cal_PHX_GEN_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 11);
          c18_cal_PHX_MOTOR_TQ_LIM_CRANK = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 10);
          c18_cal_PHX_RPM_CRANK = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 9);
          c18_motor = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c18_estop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c18_acc_error = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c18_force_diesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c18_rcci_rdy = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c18_turbo = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c18_run = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c18_phoenix_spd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c18_eng_coolant_temp = (real_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          c18_eng_app_percent = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            7);
          c18_rcci_mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c18_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c18_phoenix_spd_sp = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c18_phoenix_motor_tq_lim = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 3);
          c18_phoenix_gen_tq_lim = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 2);
          c18_phoenix_en = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c18_phoenix_en);
          _SFD_SET_DATA_VALUE_PTR(1U, c18_phoenix_gen_tq_lim);
          _SFD_SET_DATA_VALUE_PTR(2U, c18_phoenix_motor_tq_lim);
          _SFD_SET_DATA_VALUE_PTR(3U, c18_phoenix_spd_sp);
          _SFD_SET_DATA_VALUE_PTR(4U, c18_eng_en);
          _SFD_SET_DATA_VALUE_PTR(5U, c18_rcci_mode);
          _SFD_SET_DATA_VALUE_PTR(6U, c18_eng_app_percent);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c18_count);
          _SFD_SET_DATA_VALUE_PTR(8U, c18_eng_coolant_temp);
          _SFD_SET_DATA_VALUE_PTR(9U, c18_phoenix_spd);
          _SFD_SET_DATA_VALUE_PTR(10U, c18_run);
          _SFD_SET_DATA_VALUE_PTR(11U, c18_turbo);
          _SFD_SET_DATA_VALUE_PTR(12U, c18_rcci_rdy);
          _SFD_SET_DATA_VALUE_PTR(13U, c18_force_diesel);
          _SFD_SET_DATA_VALUE_PTR(14U, c18_acc_error);
          _SFD_SET_DATA_VALUE_PTR(15U, c18_estop);
          _SFD_SET_DATA_VALUE_PTR(16U, c18_motor);
          _SFD_SET_DATA_VALUE_PTR(17U, c18_cal_PHX_RPM_CRANK);
          _SFD_SET_DATA_VALUE_PTR(18U, c18_cal_PHX_MOTOR_TQ_LIM_CRANK);
          _SFD_SET_DATA_VALUE_PTR(19U, c18_cal_PHX_GEN_TQ_LIM_CRANK);
          _SFD_SET_DATA_VALUE_PTR(20U, c18_cal_PHX_SPEED_SP_WARMUP);
          _SFD_SET_DATA_VALUE_PTR(21U, c18_cal_PHX_SPEED_SP_DIESEL);
          _SFD_SET_DATA_VALUE_PTR(22U, c18_cal_PHX_SPEED_SP_RCCI);
          _SFD_SET_DATA_VALUE_PTR(23U, c18_cal_ENG_APP_CRANK);
          _SFD_SET_DATA_VALUE_PTR(24U, c18_cal_ENG_APP_DIESEL);
          _SFD_SET_DATA_VALUE_PTR(25U, c18_cal_ENG_APP_WARMUP);
          _SFD_SET_DATA_VALUE_PTR(26U, c18_cal_ENG_APP_RCCI);
          _SFD_SET_DATA_VALUE_PTR(27U, c18_cal_ENG_CAUGHT_RPM);
          _SFD_SET_DATA_VALUE_PTR(28U, c18_cal_RCCI_RDY_COOLANT_TEMP);
          _SFD_SET_DATA_VALUE_PTR(29U, c18_cal_CRANK_TIMEOUT);
          _SFD_SET_DATA_VALUE_PTR(30U, c18_state);
          _SFD_SET_DATA_VALUE_PTR(31U, c18_cal_CRANK_LOCKOUT);
          _SFD_SET_DATA_VALUE_PTR(32U, c18_cal_PHX_GEN_TQ_LIM_MOTORING);
          _SFD_SET_DATA_VALUE_PTR(33U, c18_cal_PHX_MOTOR_TQ_LIM_MOTORING);
          _SFD_SET_DATA_VALUE_PTR(34U, c18_cal_PHX_MOTORING_SPEED_SP);
          _SFD_SET_DATA_VALUE_PTR(35U, c18_cal_ENG_STALL_RPM);
          _SFD_SET_DATA_VALUE_PTR(36U, c18_Pumpson);
          _SFD_SET_DATA_VALUE_PTR(37U, c18_cal_ENG_APP_SWITCH);
          _SFD_SET_DATA_VALUE_PTR(38U, c18_hold_G_P);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c18_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc18_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c18_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c18_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c18_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c18_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c18_Dyno_IPT_2014
    ((SFc18_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c18_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c18_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c18_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c18_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c18_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c18_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c18_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c18_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc18_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c18_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c18_Dyno_IPT_2014((SFc18_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c18_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",18);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",18,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",18,"gatewayCannotBeInlinedMultipleTimes"));
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
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 18, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 19, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 20, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 21, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 22, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 23, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 24, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 25, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 26, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 27, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",18,
        28);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",18,10);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",18);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(171693184U));
  ssSetChecksum1(S,(2992764293U));
  ssSetChecksum2(S,(2570002258U));
  ssSetChecksum3(S,(3316922786U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c18_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",18);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c18_Dyno_IPT_2014(SimStruct *S)
{
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc18_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc18_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c18_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c18_Dyno_IPT_2014;
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

void c18_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c18_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c18_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c18_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c18_Dyno_IPT_2014_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/count", "count", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Crank1", "Crank1", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/Disabled", "Disabled", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/Motoring", "Motoring", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/Running", "Running", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/Running.Diesel", "Diesel", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/Running.RCCI", "RCCI", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/Running.Warmup", "Warmup", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/Running.switch", "switch", 0, 1, 0, 0, 0 },

  { 9, 0, "StateflowChart/crank_timeout", "crank_timeout", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    10                                 /* Num Block IO signals */
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
  SFc18_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc18_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
