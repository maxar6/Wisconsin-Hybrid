/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c12_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c12_IN_NO_ACTIVE_CHILD         (0U)
#define c12_IN_SystemIdle              (6U)
#define c12_IN_SystemWarmup            (7U)
#define c12_IN_Heat1                   (1U)
#define c12_IN_Heat2                   (2U)
#define c12_IN_Heat4                   (4U)
#define c12_IN_Heat3                   (3U)
#define c12_IN_UserWantsHeat_NotHot    (8U)
#define c12_IN_HeatOn                  (5U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c12_update_debugger_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c12_st);
static void c12_set_sim_state_side_effects_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c12_Mooventure2016_Rev5(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c12_chartstep_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c12_Heat1(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c12_Heat2(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c12_Heat4(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c12_Heat3(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber);
static const mxArray *c12_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static int32_T c12_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_b_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static uint8_T c12_b_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_b_tp_SystemIdle, const char_T
  *c12_identifier);
static uint8_T c12_c_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static const mxArray *c12_d_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData);
static real_T c12_d_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_RadiatorBlend, const char_T *c12_identifier);
static real_T c12_e_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static boolean_T c12_f_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c12_b_Heat1, const char_T *c12_identifier);
static boolean_T c12_g_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static void c12_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData);
static const mxArray *c12_h_emlrt_marshallIn
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier);
static const mxArray *c12_i_emlrt_marshallIn
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c12_u,
   const emlrtMsgIdentifier *c12_parentId);
static void init_dsm_address_info(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c12_RadiatorBlend;
  real_T *c12_HeaterCoreBlend;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  boolean_T *c12_RadiatorPump;
  boolean_T *c12_HeaterCorePump;
  c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c12_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c12_doSetSimStateSideEffects = 0U;
  chartInstance->c12_setSimStateSideEffectsInfo = NULL;
  chartInstance->c12_tp_Heat1 = 0U;
  chartInstance->c12_tp_Heat2 = 0U;
  chartInstance->c12_tp_Heat3 = 0U;
  chartInstance->c12_tp_Heat4 = 0U;
  chartInstance->c12_tp_HeatOn = 0U;
  chartInstance->c12_tp_SystemIdle = 0U;
  chartInstance->c12_tp_SystemWarmup = 0U;
  chartInstance->c12_tp_UserWantsHeat_NotHot = 0U;
  chartInstance->c12_is_active_c12_Mooventure2016_Rev5 = 0U;
  chartInstance->c12_is_c12_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c12_RadiatorBlend = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c12_HeaterCoreBlend = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c12_b_Heat1 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c12_b_Heat2 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c12_b_Heat3 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c12_b_Heat4 = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c12_RadiatorPump = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c12_HeaterCorePump = FALSE;
  }
}

static void initialize_params_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c12_update_debugger_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c12_prevAniVal;
  c12_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c12_is_active_c12_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 11U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_SystemIdle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_SystemWarmup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 ==
      c12_IN_UserWantsHeat_NotHot) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
  }

  if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_HeatOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
  }

  sf_debug_set_animation(c12_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c12_st;
  const mxArray *c12_y = NULL;
  boolean_T c12_hoistedGlobal;
  boolean_T c12_u;
  const mxArray *c12_b_y = NULL;
  boolean_T c12_b_hoistedGlobal;
  boolean_T c12_b_u;
  const mxArray *c12_c_y = NULL;
  boolean_T c12_c_hoistedGlobal;
  boolean_T c12_c_u;
  const mxArray *c12_d_y = NULL;
  boolean_T c12_d_hoistedGlobal;
  boolean_T c12_d_u;
  const mxArray *c12_e_y = NULL;
  real_T c12_e_hoistedGlobal;
  real_T c12_e_u;
  const mxArray *c12_f_y = NULL;
  boolean_T c12_f_hoistedGlobal;
  boolean_T c12_f_u;
  const mxArray *c12_g_y = NULL;
  real_T c12_g_hoistedGlobal;
  real_T c12_g_u;
  const mxArray *c12_h_y = NULL;
  boolean_T c12_h_hoistedGlobal;
  boolean_T c12_h_u;
  const mxArray *c12_i_y = NULL;
  uint8_T c12_i_hoistedGlobal;
  uint8_T c12_i_u;
  const mxArray *c12_j_y = NULL;
  uint8_T c12_j_hoistedGlobal;
  uint8_T c12_j_u;
  const mxArray *c12_k_y = NULL;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  real_T *c12_HeaterCoreBlend;
  boolean_T *c12_HeaterCorePump;
  real_T *c12_RadiatorBlend;
  boolean_T *c12_RadiatorPump;
  c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_st = NULL;
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellarray(10));
  c12_hoistedGlobal = *c12_b_Heat1;
  c12_u = c12_hoistedGlobal;
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_b_hoistedGlobal = *c12_b_Heat2;
  c12_b_u = c12_b_hoistedGlobal;
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", &c12_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 1, c12_c_y);
  c12_c_hoistedGlobal = *c12_b_Heat3;
  c12_c_u = c12_c_hoistedGlobal;
  c12_d_y = NULL;
  sf_mex_assign(&c12_d_y, sf_mex_create("y", &c12_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 2, c12_d_y);
  c12_d_hoistedGlobal = *c12_b_Heat4;
  c12_d_u = c12_d_hoistedGlobal;
  c12_e_y = NULL;
  sf_mex_assign(&c12_e_y, sf_mex_create("y", &c12_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 3, c12_e_y);
  c12_e_hoistedGlobal = *c12_HeaterCoreBlend;
  c12_e_u = c12_e_hoistedGlobal;
  c12_f_y = NULL;
  sf_mex_assign(&c12_f_y, sf_mex_create("y", &c12_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 4, c12_f_y);
  c12_f_hoistedGlobal = *c12_HeaterCorePump;
  c12_f_u = c12_f_hoistedGlobal;
  c12_g_y = NULL;
  sf_mex_assign(&c12_g_y, sf_mex_create("y", &c12_f_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 5, c12_g_y);
  c12_g_hoistedGlobal = *c12_RadiatorBlend;
  c12_g_u = c12_g_hoistedGlobal;
  c12_h_y = NULL;
  sf_mex_assign(&c12_h_y, sf_mex_create("y", &c12_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 6, c12_h_y);
  c12_h_hoistedGlobal = *c12_RadiatorPump;
  c12_h_u = c12_h_hoistedGlobal;
  c12_i_y = NULL;
  sf_mex_assign(&c12_i_y, sf_mex_create("y", &c12_h_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 7, c12_i_y);
  c12_i_hoistedGlobal = chartInstance->c12_is_active_c12_Mooventure2016_Rev5;
  c12_i_u = c12_i_hoistedGlobal;
  c12_j_y = NULL;
  sf_mex_assign(&c12_j_y, sf_mex_create("y", &c12_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 8, c12_j_y);
  c12_j_hoistedGlobal = chartInstance->c12_is_c12_Mooventure2016_Rev5;
  c12_j_u = c12_j_hoistedGlobal;
  c12_k_y = NULL;
  sf_mex_assign(&c12_k_y, sf_mex_create("y", &c12_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 9, c12_k_y);
  sf_mex_assign(&c12_st, c12_y);
  return c12_st;
}

static void set_sim_state_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c12_st)
{
  const mxArray *c12_u;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  real_T *c12_HeaterCoreBlend;
  boolean_T *c12_HeaterCorePump;
  real_T *c12_RadiatorBlend;
  boolean_T *c12_RadiatorPump;
  c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_u = sf_mex_dup(c12_st);
  *c12_b_Heat1 = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 0)), "Heat1");
  *c12_b_Heat2 = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 1)), "Heat2");
  *c12_b_Heat3 = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 2)), "Heat3");
  *c12_b_Heat4 = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 3)), "Heat4");
  *c12_HeaterCoreBlend = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 4)), "HeaterCoreBlend");
  *c12_HeaterCorePump = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 5)), "HeaterCorePump");
  *c12_RadiatorBlend = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 6)), "RadiatorBlend");
  *c12_RadiatorPump = c12_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c12_u, 7)), "RadiatorPump");
  chartInstance->c12_is_active_c12_Mooventure2016_Rev5 = c12_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 8)),
     "is_active_c12_Mooventure2016_Rev5");
  chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 9)),
     "is_c12_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c12_setSimStateSideEffectsInfo,
                c12_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 10)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c12_u);
  chartInstance->c12_doSetSimStateSideEffects = 1U;
  c12_update_debugger_state_c12_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c12_st);
}

static void c12_set_sim_state_side_effects_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c12_doSetSimStateSideEffects != 0) {
    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat1) {
      chartInstance->c12_tp_Heat1 = 1U;
    } else {
      chartInstance->c12_tp_Heat1 = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat2) {
      chartInstance->c12_tp_Heat2 = 1U;
    } else {
      chartInstance->c12_tp_Heat2 = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat3) {
      chartInstance->c12_tp_Heat3 = 1U;
    } else {
      chartInstance->c12_tp_Heat3 = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_Heat4) {
      chartInstance->c12_tp_Heat4 = 1U;
    } else {
      chartInstance->c12_tp_Heat4 = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_HeatOn) {
      chartInstance->c12_tp_HeatOn = 1U;
    } else {
      chartInstance->c12_tp_HeatOn = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_SystemIdle) {
      chartInstance->c12_tp_SystemIdle = 1U;
    } else {
      chartInstance->c12_tp_SystemIdle = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 == c12_IN_SystemWarmup) {
      chartInstance->c12_tp_SystemWarmup = 1U;
    } else {
      chartInstance->c12_tp_SystemWarmup = 0U;
    }

    if (chartInstance->c12_is_c12_Mooventure2016_Rev5 ==
        c12_IN_UserWantsHeat_NotHot) {
      chartInstance->c12_tp_UserWantsHeat_NotHot = 1U;
    } else {
      chartInstance->c12_tp_UserWantsHeat_NotHot = 0U;
    }

    chartInstance->c12_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c12_setSimStateSideEffectsInfo);
}

static void sf_c12_Mooventure2016_Rev5(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T *c12_SystemCold;
  boolean_T *c12_SystemWarm;
  real_T *c12_RadiatorBlend;
  boolean_T *c12_UserWantsHeat;
  real_T *c12_HeaterCoreBlend;
  real_T *c12_HeaterOutputTemp;
  real_T *c12_HottestTemp;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  real_T *c12_Heat1Threshold;
  real_T *c12_Heat2Threshold;
  real_T *c12_Heat3Threshold;
  real_T *c12_Heat4Threshold;
  boolean_T *c12_SomethingsHot;
  boolean_T *c12_RadiatorPump;
  boolean_T *c12_HeaterCorePump;
  real_T *c12_HeaterCoreThreshold;
  c12_HeaterCoreThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c12_SomethingsHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c12_Heat4Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c12_Heat3Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c12_Heat2Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c12_Heat1Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_HeaterOutputTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c12_UserWantsHeat = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c12_SystemCold = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c12_set_sim_state_side_effects_c12_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 11U, chartInstance->c12_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_SystemCold, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_SystemWarm, 1U);
  _SFD_DATA_RANGE_CHECK(*c12_RadiatorBlend, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_UserWantsHeat, 3U);
  _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreBlend, 4U);
  _SFD_DATA_RANGE_CHECK(*c12_HeaterOutputTemp, 5U);
  _SFD_DATA_RANGE_CHECK(*c12_HottestTemp, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
  _SFD_DATA_RANGE_CHECK(*c12_Heat1Threshold, 11U);
  _SFD_DATA_RANGE_CHECK(*c12_Heat2Threshold, 12U);
  _SFD_DATA_RANGE_CHECK(*c12_Heat3Threshold, 13U);
  _SFD_DATA_RANGE_CHECK(*c12_Heat4Threshold, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_SomethingsHot, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_RadiatorPump, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_HeaterCorePump, 17U);
  _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreThreshold, 18U);
  chartInstance->c12_sfEvent = CALL_EVENT;
  c12_chartstep_c12_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c12_chartstep_c12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c12_temp;
  boolean_T c12_b_temp;
  boolean_T c12_c_temp;
  boolean_T c12_d_temp;
  boolean_T c12_e_temp;
  boolean_T c12_f_temp;
  real_T *c12_HeaterOutputTemp;
  real_T *c12_HeaterCoreThreshold;
  boolean_T *c12_UserWantsHeat;
  boolean_T *c12_SystemCold;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  boolean_T *c12_HeaterCorePump;
  real_T *c12_HeaterCoreBlend;
  real_T *c12_RadiatorBlend;
  boolean_T *c12_RadiatorPump;
  real_T *c12_Heat1Threshold;
  boolean_T *c12_SystemWarm;
  boolean_T *c12_SomethingsHot;
  c12_HeaterCoreThreshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c12_SomethingsHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c12_Heat1Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HeaterOutputTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c12_UserWantsHeat = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c12_SystemCold = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 11U, chartInstance->c12_sfEvent);
  if ((int16_T)chartInstance->c12_is_active_c12_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 11U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_active_c12_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c12_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c12_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_SystemIdle = 1U;
  } else {
    switch (chartInstance->c12_is_c12_Mooventure2016_Rev5) {
     case c12_IN_Heat1:
      CV_CHART_EVAL(11, 0, 1);
      c12_Heat1(chartInstance);
      break;

     case c12_IN_Heat2:
      CV_CHART_EVAL(11, 0, 2);
      c12_Heat2(chartInstance);
      break;

     case c12_IN_Heat3:
      CV_CHART_EVAL(11, 0, 3);
      c12_Heat3(chartInstance);
      break;

     case c12_IN_Heat4:
      CV_CHART_EVAL(11, 0, 4);
      c12_Heat4(chartInstance);
      break;

     case c12_IN_HeatOn:
      CV_CHART_EVAL(11, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   chartInstance->c12_sfEvent);
      if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0,
            *c12_HeaterOutputTemp > *c12_HeaterCoreThreshold - 1.0 != 0U,
            chartInstance->c12_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 11;
          sf_debug_transition_conflict_check_begin();
          if (((int16_T)*c12_UserWantsHeat == 0) || ((int16_T)*c12_SystemCold ==
               1)) {
            transitionList[numTransitions] = 13;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_HeatOn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 =
          c12_IN_UserWantsHeat_NotHot;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_UserWantsHeat_NotHot = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     chartInstance->c12_sfEvent);
        c12_temp = (_SFD_CCP_CALL(13U, 0, (int16_T)*c12_UserWantsHeat == 0 != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (!c12_temp) {
          c12_temp = (_SFD_CCP_CALL(13U, 1, (int16_T)*c12_SystemCold == 1 != 0U,
            chartInstance->c12_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(13U, (int32_T)c12_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_HeatOn = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
          chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_SystemIdle = 1U;
        } else {
          *c12_b_Heat1 = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
          *c12_b_Heat2 = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
          *c12_b_Heat3 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
          *c12_b_Heat4 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
          *c12_HeaterCorePump = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_HeaterCorePump, 17U);
          *c12_HeaterCoreBlend = 20.0;
          _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreBlend, 4U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c12_sfEvent);
      break;

     case c12_IN_SystemIdle:
      CV_CHART_EVAL(11, 0, 6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c12_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, (int16_T)
            *c12_SystemCold == 1 != 0U, chartInstance->c12_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((!*c12_SystemCold) && (*c12_UserWantsHeat)) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_SystemIdle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemWarmup;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_SystemWarmup = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c12_sfEvent);
        c12_b_temp = !(_SFD_CCP_CALL(9U, 0, *c12_SystemCold != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (c12_b_temp) {
          c12_b_temp = (_SFD_CCP_CALL(9U, 1, *c12_UserWantsHeat != 0U,
            chartInstance->c12_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(9U, (int32_T)c12_b_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_SystemIdle = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
          chartInstance->c12_is_c12_Mooventure2016_Rev5 =
            c12_IN_UserWantsHeat_NotHot;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_UserWantsHeat_NotHot = 1U;
        } else {
          *c12_RadiatorBlend = 231.0;
          _SFD_DATA_RANGE_CHECK(*c12_RadiatorBlend, 2U);
          *c12_HeaterCoreBlend = 20.0;
          _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreBlend, 4U);
          *c12_b_Heat1 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
          *c12_b_Heat2 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
          *c12_b_Heat3 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
          *c12_b_Heat4 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
          *c12_RadiatorPump = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_RadiatorPump, 16U);
          *c12_HeaterCorePump = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_HeaterCorePump, 17U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c12_sfEvent);
      break;

     case c12_IN_SystemWarmup:
      CV_CHART_EVAL(11, 0, 7);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c12_sfEvent);
      c12_c_temp = (_SFD_CCP_CALL(2U, 0, (int16_T)*c12_SystemCold == 1 != 0U,
        chartInstance->c12_sfEvent) != 0);
      if (c12_c_temp) {
        c12_c_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)*c12_HeaterCorePump == 1 !=
          0U, chartInstance->c12_sfEvent) != 0);
      }

      c12_d_temp = c12_c_temp;
      if (c12_d_temp) {
        c12_d_temp = (_SFD_CCP_CALL(2U, 2, *c12_Heat1Threshold != 2000.0 != 0U,
          chartInstance->c12_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c12_d_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c12_SystemWarm == 1) {
            transitionList[numTransitions] = 18;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_SystemWarmup = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_Heat1 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                     chartInstance->c12_sfEvent);
        if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0, (int16_T)
              *c12_SystemWarm == 1 != 0U, chartInstance->c12_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_SystemWarmup = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
          chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_SystemIdle = 1U;
        } else {
          *c12_RadiatorBlend = 231.0;
          _SFD_DATA_RANGE_CHECK(*c12_RadiatorBlend, 2U);
          *c12_HeaterCoreBlend = 231.0;
          _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreBlend, 4U);
          *c12_RadiatorPump = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_RadiatorPump, 16U);
          *c12_HeaterCorePump = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_HeaterCorePump, 17U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c12_sfEvent);
      break;

     case c12_IN_UserWantsHeat_NotHot:
      CV_CHART_EVAL(11, 0, 8);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                   chartInstance->c12_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   chartInstance->c12_sfEvent);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
            *c12_HeaterOutputTemp < *c12_HeaterCoreThreshold + 1.0 != 0U,
            chartInstance->c12_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 10;
          sf_debug_transition_conflict_check_begin();
          if ((!*c12_UserWantsHeat) || ((*c12_SystemCold) &&
               (!*c12_SomethingsHot))) {
            transitionList[numTransitions] = 12;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_UserWantsHeat_NotHot = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_HeatOn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_HeatOn = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                     chartInstance->c12_sfEvent);
        c12_e_temp = !(_SFD_CCP_CALL(12U, 0, *c12_UserWantsHeat != 0U,
          chartInstance->c12_sfEvent) != 0);
        if (!c12_e_temp) {
          c12_f_temp = (_SFD_CCP_CALL(12U, 1, *c12_SystemCold != 0U,
            chartInstance->c12_sfEvent) != 0);
          if (c12_f_temp) {
            c12_f_temp = !(_SFD_CCP_CALL(12U, 2, *c12_SomethingsHot != 0U,
              chartInstance->c12_sfEvent) != 0);
          }

          c12_e_temp = c12_f_temp;
        }

        if (CV_TRANSITION_EVAL(12U, (int32_T)c12_e_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_UserWantsHeat_NotHot = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
          chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
          chartInstance->c12_tp_SystemIdle = 1U;
        } else {
          *c12_HeaterCoreBlend = 20.0;
          _SFD_DATA_RANGE_CHECK(*c12_HeaterCoreBlend, 4U);
          *c12_HeaterCorePump = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_HeaterCorePump, 17U);
          *c12_b_Heat1 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
          *c12_b_Heat2 = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c12_sfEvent);
      break;

     default:
      CV_CHART_EVAL(11, 0, 0);
      chartInstance->c12_is_c12_Mooventure2016_Rev5 = (uint8_T)
        c12_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c12_sfEvent);
}

static void initSimStructsc12_Mooventure2016_Rev5
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void c12_Heat1(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c12_HottestTemp;
  real_T *c12_Heat2Threshold;
  boolean_T *c12_SystemWarm;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  c12_Heat2Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c12_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c12_sfEvent);
  if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c12_HottestTemp <
        *c12_Heat2Threshold != 0U, chartInstance->c12_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions = 1;
      transitionList[0] = 3;
      sf_debug_transition_conflict_check_begin();
      if ((int16_T)*c12_SystemWarm == 1) {
        transitionList[numTransitions] = 14;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat1 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat2 = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                 chartInstance->c12_sfEvent);
    if (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14U, 0, (int16_T)
          *c12_SystemWarm == 1 != 0U, chartInstance->c12_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
      chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_SystemIdle = 1U;
    } else {
      *c12_b_Heat1 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
      *c12_b_Heat2 = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
      *c12_b_Heat3 = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
      *c12_b_Heat4 = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c12_sfEvent);
}

static void c12_Heat2(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c12_HottestTemp;
  real_T *c12_Heat3Threshold;
  real_T *c12_Heat2Threshold;
  boolean_T *c12_SystemWarm;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  c12_Heat3Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c12_Heat2Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c12_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U, chartInstance->c12_sfEvent);
  if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c12_HottestTemp <
        *c12_Heat3Threshold != 0U, chartInstance->c12_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions = 1;
      transitionList[0] = 4;
      sf_debug_transition_conflict_check_begin();
      if (*c12_HottestTemp > *c12_Heat2Threshold) {
        transitionList[numTransitions] = 8;
        numTransitions++;
      }

      if ((int16_T)*c12_SystemWarm == 1) {
        transitionList[numTransitions] = 15;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat2 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat3;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat3 = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 chartInstance->c12_sfEvent);
    if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0, *c12_HottestTemp > *
          c12_Heat2Threshold != 0U, chartInstance->c12_sfEvent))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 8;
        sf_debug_transition_conflict_check_begin();
        if ((int16_T)*c12_SystemWarm == 1) {
          transitionList[numTransitions] = 15;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
      chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat1 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                   chartInstance->c12_sfEvent);
      if (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15U, 0, (int16_T)
            *c12_SystemWarm == 1 != 0U, chartInstance->c12_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_Heat2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_SystemIdle = 1U;
      } else {
        *c12_b_Heat1 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
        *c12_b_Heat2 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
        *c12_b_Heat3 = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
        *c12_b_Heat4 = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c12_sfEvent);
}

static void c12_Heat4(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c12_HottestTemp;
  real_T *c12_Heat4Threshold;
  boolean_T *c12_SystemWarm;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  c12_Heat4Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c12_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c12_sfEvent);
  if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c12_HottestTemp >
        *c12_Heat4Threshold != 0U, chartInstance->c12_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions = 1;
      transitionList[0] = 6;
      sf_debug_transition_conflict_check_begin();
      if ((int16_T)*c12_SystemWarm == 1) {
        transitionList[numTransitions] = 17;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat4 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat3;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat3 = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                 chartInstance->c12_sfEvent);
    if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0, (int16_T)
          *c12_SystemWarm == 1 != 0U, chartInstance->c12_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat4 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
      chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_SystemIdle = 1U;
    } else {
      *c12_b_Heat1 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
      *c12_b_Heat2 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
      *c12_b_Heat3 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
      *c12_b_Heat4 = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c12_sfEvent);
}

static void c12_Heat3(SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c12_HottestTemp;
  real_T *c12_Heat4Threshold;
  real_T *c12_Heat3Threshold;
  boolean_T *c12_SystemWarm;
  boolean_T *c12_b_Heat1;
  boolean_T *c12_b_Heat2;
  boolean_T *c12_b_Heat3;
  boolean_T *c12_b_Heat4;
  c12_Heat4Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c12_Heat3Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c12_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, chartInstance->c12_sfEvent);
  if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c12_HottestTemp <
        *c12_Heat4Threshold != 0U, chartInstance->c12_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions = 1;
      transitionList[0] = 5;
      sf_debug_transition_conflict_check_begin();
      if (*c12_HottestTemp > *c12_Heat3Threshold) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      if ((int16_T)*c12_SystemWarm == 1) {
        transitionList[numTransitions] = 16;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat3 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
    chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat4;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c12_sfEvent);
    chartInstance->c12_tp_Heat4 = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                 chartInstance->c12_sfEvent);
    if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c12_HottestTemp > *
          c12_Heat3Threshold != 0U, chartInstance->c12_sfEvent))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 7;
        sf_debug_transition_conflict_check_begin();
        if ((int16_T)*c12_SystemWarm == 1) {
          transitionList[numTransitions] = 16;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat3 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
      chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_Heat2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c12_sfEvent);
      chartInstance->c12_tp_Heat2 = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   chartInstance->c12_sfEvent);
      if (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0, (int16_T)
            *c12_SystemWarm == 1 != 0U, chartInstance->c12_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_Heat3 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c12_sfEvent);
        chartInstance->c12_is_c12_Mooventure2016_Rev5 = c12_IN_SystemIdle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c12_sfEvent);
        chartInstance->c12_tp_SystemIdle = 1U;
      } else {
        *c12_b_Heat1 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat1, 7U);
        *c12_b_Heat2 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat2, 8U);
        *c12_b_Heat3 = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat3, 9U);
        *c12_b_Heat4 = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c12_b_Heat4, 10U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c12_sfEvent);
}

static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber)
{
}

const mxArray *sf_c12_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
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
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(int32_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static int32_T c12_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
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
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
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
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(uint8_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static uint8_T c12_b_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_b_tp_SystemIdle, const char_T
  *c12_identifier)
{
  uint8_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_tp_SystemIdle),
    &c12_thisId);
  sf_mex_destroy(&c12_b_tp_SystemIdle);
  return c12_y;
}

static uint8_T c12_c_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
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
  const mxArray *c12_b_tp_SystemIdle;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  uint8_T c12_y;
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_b_tp_SystemIdle = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_tp_SystemIdle),
    &c12_thisId);
  sf_mex_destroy(&c12_b_tp_SystemIdle);
  *(uint8_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_c_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData = NULL;
  boolean_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(boolean_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static const mxArray *c12_d_sf_marshallOut(void *chartInstanceVoid, void
  *c12_inData)
{
  const mxArray *c12_mxArrayOutData = NULL;
  real_T c12_u;
  const mxArray *c12_y = NULL;
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_mxArrayOutData = NULL;
  c12_u = *(real_T *)c12_inData;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_create("y", &c12_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_mxArrayOutData, c12_y);
  return c12_mxArrayOutData;
}

static real_T c12_d_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_RadiatorBlend, const char_T *c12_identifier)
{
  real_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_RadiatorBlend),
    &c12_thisId);
  sf_mex_destroy(&c12_RadiatorBlend);
  return c12_y;
}

static real_T c12_e_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  real_T c12_y;
  real_T c12_d0;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_d0, 1, 0, 0U, 0, 0U, 0);
  c12_y = c12_d0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_RadiatorBlend;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  real_T c12_y;
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_RadiatorBlend = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_RadiatorBlend),
    &c12_thisId);
  sf_mex_destroy(&c12_RadiatorBlend);
  *(real_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static boolean_T c12_f_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c12_b_Heat1, const char_T *c12_identifier)
{
  boolean_T c12_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_Heat1),
    &c12_thisId);
  sf_mex_destroy(&c12_b_Heat1);
  return c12_y;
}

static boolean_T c12_g_emlrt_marshallIn(SFc12_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  boolean_T c12_y;
  boolean_T c12_b0;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_b0, 1, 11, 0U, 0, 0U, 0);
  c12_y = c12_b0;
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void c12_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c12_mxArrayInData, const char_T *c12_varName, void *c12_outData)
{
  const mxArray *c12_b_Heat1;
  const char_T *c12_identifier;
  emlrtMsgIdentifier c12_thisId;
  boolean_T c12_y;
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c12_b_Heat1 = sf_mex_dup(c12_mxArrayInData);
  c12_identifier = c12_varName;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  c12_y = c12_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_Heat1),
    &c12_thisId);
  sf_mex_destroy(&c12_b_Heat1);
  *(boolean_T *)c12_outData = c12_y;
  sf_mex_destroy(&c12_mxArrayInData);
}

static const mxArray *c12_h_emlrt_marshallIn
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c12_b_setSimStateSideEffectsInfo, const char_T *c12_identifier)
{
  const mxArray *c12_y = NULL;
  emlrtMsgIdentifier c12_thisId;
  c12_y = NULL;
  c12_thisId.fIdentifier = c12_identifier;
  c12_thisId.fParent = NULL;
  sf_mex_assign(&c12_y, c12_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_setSimStateSideEffectsInfo), &c12_thisId));
  sf_mex_destroy(&c12_b_setSimStateSideEffectsInfo);
  return c12_y;
}

static const mxArray *c12_i_emlrt_marshallIn
  (SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c12_u,
   const emlrtMsgIdentifier *c12_parentId)
{
  const mxArray *c12_y = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_duplicatearraysafe(&c12_u));
  sf_mex_destroy(&c12_u);
  return c12_y;
}

static void init_dsm_address_info(SFc12_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c12_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1444517476U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4013405848U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2838473592U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3575147036U);
}

mxArray *sf_c12_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3295545188U);
    pr[1] = (double)(3436429964U);
    pr[2] = (double)(1210472255U);
    pr[3] = (double)(517826450U);
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

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c12_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[53],T\"Heat1\",},{M[1],M[54],T\"Heat2\",},{M[1],M[55],T\"Heat3\",},{M[1],M[56],T\"Heat4\",},{M[1],M[42],T\"HeaterCoreBlend\",},{M[1],M[63],T\"HeaterCorePump\",},{M[1],M[36],T\"RadiatorBlend\",},{M[1],M[62],T\"RadiatorPump\",},{M[8],M[0],T\"is_active_c12_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c12_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           12,
           8,
           19,
           19,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"SystemCold");
          _SFD_SET_DATA_PROPS(1,1,1,0,"SystemWarm");
          _SFD_SET_DATA_PROPS(2,2,0,1,"RadiatorBlend");
          _SFD_SET_DATA_PROPS(3,1,1,0,"UserWantsHeat");
          _SFD_SET_DATA_PROPS(4,2,0,1,"HeaterCoreBlend");
          _SFD_SET_DATA_PROPS(5,1,1,0,"HeaterOutputTemp");
          _SFD_SET_DATA_PROPS(6,1,1,0,"HottestTemp");
          _SFD_SET_DATA_PROPS(7,2,0,1,"Heat1");
          _SFD_SET_DATA_PROPS(8,2,0,1,"Heat2");
          _SFD_SET_DATA_PROPS(9,2,0,1,"Heat3");
          _SFD_SET_DATA_PROPS(10,2,0,1,"Heat4");
          _SFD_SET_DATA_PROPS(11,1,1,0,"Heat1Threshold");
          _SFD_SET_DATA_PROPS(12,1,1,0,"Heat2Threshold");
          _SFD_SET_DATA_PROPS(13,1,1,0,"Heat3Threshold");
          _SFD_SET_DATA_PROPS(14,1,1,0,"Heat4Threshold");
          _SFD_SET_DATA_PROPS(15,1,1,0,"SomethingsHot");
          _SFD_SET_DATA_PROPS(16,2,0,1,"RadiatorPump");
          _SFD_SET_DATA_PROPS(17,2,0,1,"HeaterCorePump");
          _SFD_SET_DATA_PROPS(18,1,1,0,"HeaterCoreThreshold");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(8);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(8,1,0,0);

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
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
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

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 19, 44 };

          static unsigned int sEndGuardMap[] = { 14, 38, 66 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(2,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 12, 29 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 20, 35 };

          static unsigned int sEndGuardMap[] = { 15, 30, 48 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, 2, -1, -3, -2 };

          _SFD_CV_INIT_TRANS(12,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 34 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(14,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 19, 44 };

          static unsigned int sEndGuardMap[] = { 14, 38, 66 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 12, 29 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 20, 35 };

          static unsigned int sEndGuardMap[] = { 15, 30, 48 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 34 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)
          c12_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_c_sf_marshallOut,(MexInFcnForType)
          c12_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c12_d_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c12_SystemCold;
          boolean_T *c12_SystemWarm;
          real_T *c12_RadiatorBlend;
          boolean_T *c12_UserWantsHeat;
          real_T *c12_HeaterCoreBlend;
          real_T *c12_HeaterOutputTemp;
          real_T *c12_HottestTemp;
          boolean_T *c12_b_Heat1;
          boolean_T *c12_b_Heat2;
          boolean_T *c12_b_Heat3;
          boolean_T *c12_b_Heat4;
          real_T *c12_Heat1Threshold;
          real_T *c12_Heat2Threshold;
          real_T *c12_Heat3Threshold;
          real_T *c12_Heat4Threshold;
          boolean_T *c12_SomethingsHot;
          boolean_T *c12_RadiatorPump;
          boolean_T *c12_HeaterCorePump;
          real_T *c12_HeaterCoreThreshold;
          c12_HeaterCoreThreshold = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 10);
          c12_HeaterCorePump = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 8);
          c12_RadiatorPump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            7);
          c12_SomethingsHot = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            9);
          c12_Heat4Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S,
            8);
          c12_Heat3Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S,
            7);
          c12_Heat2Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S,
            6);
          c12_Heat1Threshold = (real_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c12_b_Heat4 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c12_b_Heat3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c12_b_Heat2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c12_b_Heat1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c12_HottestTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c12_HeaterOutputTemp = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c12_HeaterCoreBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c12_UserWantsHeat = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c12_RadiatorBlend = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c12_SystemWarm = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c12_SystemCold = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c12_SystemCold);
          _SFD_SET_DATA_VALUE_PTR(1U, c12_SystemWarm);
          _SFD_SET_DATA_VALUE_PTR(2U, c12_RadiatorBlend);
          _SFD_SET_DATA_VALUE_PTR(3U, c12_UserWantsHeat);
          _SFD_SET_DATA_VALUE_PTR(4U, c12_HeaterCoreBlend);
          _SFD_SET_DATA_VALUE_PTR(5U, c12_HeaterOutputTemp);
          _SFD_SET_DATA_VALUE_PTR(6U, c12_HottestTemp);
          _SFD_SET_DATA_VALUE_PTR(7U, c12_b_Heat1);
          _SFD_SET_DATA_VALUE_PTR(8U, c12_b_Heat2);
          _SFD_SET_DATA_VALUE_PTR(9U, c12_b_Heat3);
          _SFD_SET_DATA_VALUE_PTR(10U, c12_b_Heat4);
          _SFD_SET_DATA_VALUE_PTR(11U, c12_Heat1Threshold);
          _SFD_SET_DATA_VALUE_PTR(12U, c12_Heat2Threshold);
          _SFD_SET_DATA_VALUE_PTR(13U, c12_Heat3Threshold);
          _SFD_SET_DATA_VALUE_PTR(14U, c12_Heat4Threshold);
          _SFD_SET_DATA_VALUE_PTR(15U, c12_SomethingsHot);
          _SFD_SET_DATA_VALUE_PTR(16U, c12_RadiatorPump);
          _SFD_SET_DATA_VALUE_PTR(17U, c12_HeaterCorePump);
          _SFD_SET_DATA_VALUE_PTR(18U, c12_HeaterCoreThreshold);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c12_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c12_Mooventure2016_Rev5
    ((SFc12_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c12_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c12_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c12_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c12_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c12_Mooventure2016_Rev5
    ((SFc12_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c12_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c12_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c12_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c12_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c12_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c12_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c12_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c12_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc12_Mooventure2016_Rev5((SFc12_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_Mooventure2016_Rev5
      ((SFc12_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c12_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      12);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",12,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",12,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",12,11);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",12,8);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",12);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3432803839U));
  ssSetChecksum1(S,(2445138215U));
  ssSetChecksum2(S,(47805714U));
  ssSetChecksum3(S,(2764567213U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c12_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",12);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c12_Mooventure2016_Rev5(SimStruct *S)
{
  SFc12_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc12_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc12_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc12_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c12_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c12_Mooventure2016_Rev5;
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

void c12_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c12_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
