/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c5_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c5_IN_NO_ACTIVE_CHILD          (0U)
#define c5_IN_default                  (2U)
#define c5_IN_cranking                 (1U)
#define c5_IN_startFail                (5U)
#define c5_IN_idle                     (4U)
#define c5_IN_generating               (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void c5_update_debugger_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_st);
static void c5_set_sim_state_side_effects_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void c5_chartstep_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance);
static void c5_cranking(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static int32_T c5_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static uint8_T c5_b_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_b_tp_default, const char_T *c5_identifier);
static uint8_T c5_c_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static real_T c5_d_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c5_b_cranking, const char_T *c5_identifier);
static real_T c5_e_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_f_emlrt_marshallIn
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_b_setSimStateSideEffectsInfo, const char_T *c5_identifier);
static const mxArray *c5_g_emlrt_marshallIn
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void init_dsm_address_info(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c5_b_cranking;
  real_T *c5_idle;
  real_T *c5_APPRamp;
  real_T *c5_torqueRamp;
  real_T *c5_remyEn;
  real_T *c5_maxRPM;
  real_T *c5_motorTQ;
  real_T *c5_generatingTQ;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c5_doSetSimStateSideEffects = 0U;
  chartInstance->c5_setSimStateSideEffectsInfo = NULL;
  chartInstance->c5_tp_cranking = 0U;
  chartInstance->c5_tp_default = 0U;
  chartInstance->c5_tp_generating = 0U;
  chartInstance->c5_tp_idle = 0U;
  chartInstance->c5_tp_startFail = 0U;
  chartInstance->c5_is_active_c5_BaseEngineController_A02 = 0U;
  chartInstance->c5_is_c5_BaseEngineController_A02 = 0U;
  chartInstance->c5_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c5_b_cranking = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c5_idle = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c5_APPRamp = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c5_torqueRamp = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c5_remyEn = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c5_maxRPM = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c5_motorTQ = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c5_generatingTQ = 0.0;
  }
}

static void initialize_params_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c5_update_debugger_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c5_prevAniVal;
  c5_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c5_is_active_c5_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
  }

  if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_default) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
  }

  if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_cranking) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
  }

  if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_startFail) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
  }

  if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
  }

  if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_generating) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
  }

  sf_debug_set_animation(c5_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  real_T c5_hoistedGlobal;
  real_T c5_u;
  const mxArray *c5_b_y = NULL;
  real_T c5_b_hoistedGlobal;
  real_T c5_b_u;
  const mxArray *c5_c_y = NULL;
  real_T c5_c_hoistedGlobal;
  real_T c5_c_u;
  const mxArray *c5_d_y = NULL;
  real_T c5_d_hoistedGlobal;
  real_T c5_d_u;
  const mxArray *c5_e_y = NULL;
  real_T c5_e_hoistedGlobal;
  real_T c5_e_u;
  const mxArray *c5_f_y = NULL;
  real_T c5_f_hoistedGlobal;
  real_T c5_f_u;
  const mxArray *c5_g_y = NULL;
  real_T c5_g_hoistedGlobal;
  real_T c5_g_u;
  const mxArray *c5_h_y = NULL;
  real_T c5_h_hoistedGlobal;
  real_T c5_h_u;
  const mxArray *c5_i_y = NULL;
  real_T c5_i_hoistedGlobal;
  real_T c5_i_u;
  const mxArray *c5_j_y = NULL;
  uint8_T c5_j_hoistedGlobal;
  uint8_T c5_j_u;
  const mxArray *c5_k_y = NULL;
  uint8_T c5_k_hoistedGlobal;
  uint8_T c5_k_u;
  const mxArray *c5_l_y = NULL;
  real_T *c5_APPRamp;
  real_T *c5_b_cranking;
  real_T *c5_generatingTQ;
  real_T *c5_idle;
  real_T *c5_maxRPM;
  real_T *c5_motorTQ;
  real_T *c5_remyEn;
  real_T *c5_torqueRamp;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellarray(11));
  c5_hoistedGlobal = *c5_APPRamp;
  c5_u = c5_hoistedGlobal;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_b_hoistedGlobal = *c5_b_cranking;
  c5_b_u = c5_b_hoistedGlobal;
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", &c5_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_c_hoistedGlobal = *c5_generatingTQ;
  c5_c_u = c5_c_hoistedGlobal;
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_d_hoistedGlobal = *c5_idle;
  c5_d_u = c5_d_hoistedGlobal;
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", &c5_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 3, c5_e_y);
  c5_e_hoistedGlobal = *c5_maxRPM;
  c5_e_u = c5_e_hoistedGlobal;
  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", &c5_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 4, c5_f_y);
  c5_f_hoistedGlobal = *c5_motorTQ;
  c5_f_u = c5_f_hoistedGlobal;
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", &c5_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 5, c5_g_y);
  c5_g_hoistedGlobal = *c5_remyEn;
  c5_g_u = c5_g_hoistedGlobal;
  c5_h_y = NULL;
  sf_mex_assign(&c5_h_y, sf_mex_create("y", &c5_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 6, c5_h_y);
  c5_h_hoistedGlobal = *c5_torqueRamp;
  c5_h_u = c5_h_hoistedGlobal;
  c5_i_y = NULL;
  sf_mex_assign(&c5_i_y, sf_mex_create("y", &c5_h_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 7, c5_i_y);
  c5_i_hoistedGlobal = chartInstance->c5_count;
  c5_i_u = c5_i_hoistedGlobal;
  c5_j_y = NULL;
  sf_mex_assign(&c5_j_y, sf_mex_create("y", &c5_i_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 8, c5_j_y);
  c5_j_hoistedGlobal = chartInstance->c5_is_active_c5_BaseEngineController_A02;
  c5_j_u = c5_j_hoistedGlobal;
  c5_k_y = NULL;
  sf_mex_assign(&c5_k_y, sf_mex_create("y", &c5_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 9, c5_k_y);
  c5_k_hoistedGlobal = chartInstance->c5_is_c5_BaseEngineController_A02;
  c5_k_u = c5_k_hoistedGlobal;
  c5_l_y = NULL;
  sf_mex_assign(&c5_l_y, sf_mex_create("y", &c5_k_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c5_y, 10, c5_l_y);
  sf_mex_assign(&c5_st, c5_y);
  return c5_st;
}

static void set_sim_state_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_st)
{
  const mxArray *c5_u;
  real_T *c5_APPRamp;
  real_T *c5_b_cranking;
  real_T *c5_generatingTQ;
  real_T *c5_idle;
  real_T *c5_maxRPM;
  real_T *c5_motorTQ;
  real_T *c5_remyEn;
  real_T *c5_torqueRamp;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_u = sf_mex_dup(c5_st);
  *c5_APPRamp = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 0)), "APPRamp");
  *c5_b_cranking = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 1)), "cranking");
  *c5_generatingTQ = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 2)), "generatingTQ");
  *c5_idle = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u,
    3)), "idle");
  *c5_maxRPM = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 4)), "maxRPM");
  *c5_motorTQ = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 5)), "motorTQ");
  *c5_remyEn = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 6)), "remyEn");
  *c5_torqueRamp = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 7)), "torqueRamp");
  chartInstance->c5_count = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 8)), "count");
  chartInstance->c5_is_active_c5_BaseEngineController_A02 =
    c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 9)),
    "is_active_c5_BaseEngineController_A02");
  chartInstance->c5_is_c5_BaseEngineController_A02 = c5_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 10)),
     "is_c5_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c5_setSimStateSideEffectsInfo,
                c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c5_u, 11)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c5_u);
  chartInstance->c5_doSetSimStateSideEffects = 1U;
  c5_update_debugger_state_c5_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void c5_set_sim_state_side_effects_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c5_doSetSimStateSideEffects != 0) {
    if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_cranking) {
      chartInstance->c5_tp_cranking = 1U;
    } else {
      chartInstance->c5_tp_cranking = 0U;
    }

    if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_default) {
      chartInstance->c5_tp_default = 1U;
    } else {
      chartInstance->c5_tp_default = 0U;
    }

    if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_generating) {
      chartInstance->c5_tp_generating = 1U;
    } else {
      chartInstance->c5_tp_generating = 0U;
    }

    if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_idle) {
      chartInstance->c5_tp_idle = 1U;
    } else {
      chartInstance->c5_tp_idle = 0U;
    }

    if (chartInstance->c5_is_c5_BaseEngineController_A02 == c5_IN_startFail) {
      chartInstance->c5_tp_startFail = 1U;
    } else {
      chartInstance->c5_tp_startFail = 0U;
    }

    chartInstance->c5_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c5_setSimStateSideEffectsInfo);
}

static void sf_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c5_genEnable;
  real_T *c5_genLoad;
  real_T *c5_RPM;
  real_T *c5_crankTime;
  real_T *c5_crankWait;
  real_T *c5_caughtRPM;
  real_T *c5_crankTQ;
  real_T *c5_maxCrankRPM;
  real_T *c5_maxMotorRPM;
  real_T *c5_b_cranking;
  real_T *c5_idle;
  real_T *c5_APPRamp;
  real_T *c5_torqueRamp;
  real_T *c5_remyEn;
  real_T *c5_maxRPM;
  real_T *c5_motorTQ;
  real_T *c5_generatingTQ;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_maxMotorRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c5_maxCrankRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c5_crankTQ = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c5_caughtRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c5_crankWait = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c5_crankTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c5_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c5_genLoad = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c5_genEnable = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c5_set_sim_state_side_effects_c5_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c5_genEnable, 0U);
  _SFD_DATA_RANGE_CHECK(*c5_genLoad, 1U);
  _SFD_DATA_RANGE_CHECK(*c5_RPM, 2U);
  _SFD_DATA_RANGE_CHECK(*c5_crankTime, 3U);
  _SFD_DATA_RANGE_CHECK(*c5_crankWait, 4U);
  _SFD_DATA_RANGE_CHECK(*c5_caughtRPM, 5U);
  _SFD_DATA_RANGE_CHECK(*c5_crankTQ, 6U);
  _SFD_DATA_RANGE_CHECK(*c5_maxCrankRPM, 7U);
  _SFD_DATA_RANGE_CHECK(*c5_maxMotorRPM, 8U);
  _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
  _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
  _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
  _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
  _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
  _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
  _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
  _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
  chartInstance->c5_sfEvent = CALL_EVENT;
  c5_chartstep_c5_BaseEngineController_A02(chartInstance);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c5_chartstep_c5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c5_genEnable;
  real_T *c5_b_cranking;
  real_T *c5_idle;
  real_T *c5_APPRamp;
  real_T *c5_torqueRamp;
  real_T *c5_remyEn;
  real_T *c5_maxRPM;
  real_T *c5_motorTQ;
  real_T *c5_generatingTQ;
  real_T *c5_genLoad;
  real_T *c5_maxMotorRPM;
  real_T *c5_crankWait;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_maxMotorRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c5_crankWait = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c5_genLoad = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c5_genEnable = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
  if ((int16_T)chartInstance->c5_is_active_c5_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
    chartInstance->c5_is_active_c5_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                 chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c5_sfEvent);
    chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_default;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
    chartInstance->c5_tp_default = 1U;
  } else {
    switch (chartInstance->c5_is_c5_BaseEngineController_A02) {
     case c5_IN_cranking:
      CV_CHART_EVAL(3, 0, 1);
      c5_cranking(chartInstance);
      break;

     case c5_IN_default:
      CV_CHART_EVAL(3, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   chartInstance->c5_sfEvent);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0, *c5_genEnable !=
            0U, chartInstance->c5_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_default = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
        chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_cranking;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_cranking = 1U;
        chartInstance->c5_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
      } else {
        *c5_b_cranking = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
        *c5_idle = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
        *c5_APPRamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
        *c5_torqueRamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
        *c5_remyEn = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
        *c5_maxRPM = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
        *c5_motorTQ = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
        *c5_generatingTQ = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c5_sfEvent);
      break;

     case c5_IN_generating:
      CV_CHART_EVAL(3, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c5_sfEvent);
      if (CV_TRANSITION_EVAL(8U, !(_SFD_CCP_CALL(8U, 0, *c5_genEnable != 0U,
             chartInstance->c5_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 8;
          sf_debug_transition_conflict_check_begin();
          if (!(*c5_genLoad != 0.0)) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_generating = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
        chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_default = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c5_sfEvent);
        if (CV_TRANSITION_EVAL(9U, !(_SFD_CCP_CALL(9U, 0, *c5_genLoad != 0U,
               chartInstance->c5_sfEvent) != 0))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_generating = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
          chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_idle = 1U;
        } else {
          *c5_b_cranking = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
          *c5_idle = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
          *c5_APPRamp = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
          *c5_torqueRamp = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
          *c5_remyEn = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
          *c5_maxRPM = *c5_maxMotorRPM;
          _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
          *c5_motorTQ = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
          *c5_generatingTQ = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c5_sfEvent);
      break;

     case c5_IN_idle:
      CV_CHART_EVAL(3, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c5_sfEvent);
      if (CV_TRANSITION_EVAL(6U, !(_SFD_CCP_CALL(6U, 0, *c5_genEnable != 0U,
             chartInstance->c5_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if (*c5_genLoad) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_idle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
        chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_default = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                     chartInstance->c5_sfEvent);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c5_genLoad !=
              0U, chartInstance->c5_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_idle = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
          chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_generating;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_generating = 1U;
        } else {
          *c5_b_cranking = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
          *c5_idle = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
          *c5_APPRamp = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
          *c5_torqueRamp = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
          *c5_remyEn = 1.0;
          _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
          *c5_maxRPM = *c5_maxMotorRPM;
          _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
          *c5_motorTQ = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
          *c5_generatingTQ = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
      break;

     case c5_IN_startFail:
      CV_CHART_EVAL(3, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c5_sfEvent);
      if (CV_TRANSITION_EVAL(3U, !(_SFD_CCP_CALL(3U, 0, *c5_genEnable != 0U,
             chartInstance->c5_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c5_count >= *c5_crankWait) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_startFail = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
        chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_default = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     chartInstance->c5_sfEvent);
        if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
              chartInstance->c5_count >= *c5_crankWait != 0U,
              chartInstance->c5_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_startFail = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
          chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_cranking;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
          chartInstance->c5_tp_cranking = 1U;
          chartInstance->c5_count = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
        } else {
          chartInstance->c5_count++;
          _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
          *c5_b_cranking = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
          *c5_idle = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
          *c5_APPRamp = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
          *c5_torqueRamp = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
          *c5_remyEn = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
          *c5_maxRPM = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
          *c5_motorTQ = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
          *c5_generatingTQ = 0.0;
          _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c5_sfEvent);
      break;

     default:
      CV_CHART_EVAL(3, 0, 0);
      chartInstance->c5_is_c5_BaseEngineController_A02 = (uint8_T)
        c5_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c5_sfEvent);
}

static void initSimStructsc5_BaseEngineController_A02
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void c5_cranking(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  real_T *c5_crankTime;
  real_T *c5_genEnable;
  real_T *c5_RPM;
  real_T *c5_caughtRPM;
  real_T *c5_b_cranking;
  real_T *c5_idle;
  real_T *c5_APPRamp;
  real_T *c5_torqueRamp;
  real_T *c5_remyEn;
  real_T *c5_maxCrankRPM;
  real_T *c5_maxRPM;
  real_T *c5_crankTQ;
  real_T *c5_motorTQ;
  real_T *c5_generatingTQ;
  c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c5_maxCrankRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c5_crankTQ = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c5_caughtRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c5_crankTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c5_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c5_genEnable = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c5_sfEvent);
  if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        chartInstance->c5_count >= *c5_crankTime != 0U,
        chartInstance->c5_sfEvent))) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions = 1;
      transitionList[0] = 1;
      sf_debug_transition_conflict_check_begin();
      if (!(*c5_genEnable != 0.0)) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      if (*c5_RPM >= *c5_caughtRPM) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
    chartInstance->c5_tp_cranking = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
    chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_startFail;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c5_sfEvent);
    chartInstance->c5_tp_startFail = 1U;
    chartInstance->c5_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c5_sfEvent);
    if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2U, 0, *c5_genEnable != 0U,
           chartInstance->c5_sfEvent) != 0))) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 2;
        sf_debug_transition_conflict_check_begin();
        if (*c5_RPM >= *c5_caughtRPM) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c5_sfEvent);
      chartInstance->c5_tp_cranking = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
      chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_default;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c5_sfEvent);
      chartInstance->c5_tp_default = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c5_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c5_RPM >=
            *c5_caughtRPM != 0U, chartInstance->c5_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_cranking = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c5_sfEvent);
        chartInstance->c5_is_c5_BaseEngineController_A02 = c5_IN_idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c5_sfEvent);
        chartInstance->c5_tp_idle = 1U;
      } else {
        chartInstance->c5_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c5_count, 17U);
        *c5_b_cranking = 1.0;
        _SFD_DATA_RANGE_CHECK(*c5_b_cranking, 9U);
        *c5_idle = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_idle, 10U);
        *c5_APPRamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_APPRamp, 11U);
        *c5_torqueRamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*c5_torqueRamp, 12U);
        *c5_remyEn = 1.0;
        _SFD_DATA_RANGE_CHECK(*c5_remyEn, 13U);
        *c5_maxRPM = *c5_maxCrankRPM;
        _SFD_DATA_RANGE_CHECK(*c5_maxRPM, 14U);
        *c5_motorTQ = *c5_crankTQ;
        _SFD_DATA_RANGE_CHECK(*c5_motorTQ, 15U);
        *c5_generatingTQ = 1.0;
        _SFD_DATA_RANGE_CHECK(*c5_generatingTQ, 16U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c5_sfEvent);
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber)
{
}

const mxArray *sf_c5_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c5_nameCaptureInfo;
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c5_mxArrayOutData, c5_y);
  return c5_mxArrayOutData;
}

static int32_T c5_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i0, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent), &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  uint8_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(uint8_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c5_mxArrayOutData, c5_y);
  return c5_mxArrayOutData;
}

static uint8_T c5_b_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_b_tp_default, const char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_tp_default),
    &c5_thisId);
  sf_mex_destroy(&c5_b_tp_default);
  return c5_y;
}

static uint8_T c5_c_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_tp_default;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_y;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_b_tp_default = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_tp_default),
    &c5_thisId);
  sf_mex_destroy(&c5_b_tp_default);
  *(uint8_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData = NULL;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c5_mxArrayOutData, c5_y);
  return c5_mxArrayOutData;
}

static real_T c5_d_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c5_b_cranking, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_cranking),
    &c5_thisId);
  sf_mex_destroy(&c5_b_cranking);
  return c5_y;
}

static real_T c5_e_emlrt_marshallIn(SFc5_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d0;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d0, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_cranking;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c5_b_cranking = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_y = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_cranking),
    &c5_thisId);
  sf_mex_destroy(&c5_b_cranking);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_f_emlrt_marshallIn
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_b_setSimStateSideEffectsInfo, const char_T *c5_identifier)
{
  const mxArray *c5_y = NULL;
  emlrtMsgIdentifier c5_thisId;
  c5_y = NULL;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  sf_mex_assign(&c5_y, c5_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_setSimStateSideEffectsInfo), &c5_thisId));
  sf_mex_destroy(&c5_b_setSimStateSideEffectsInfo);
  return c5_y;
}

static const mxArray *c5_g_emlrt_marshallIn
  (SFc5_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  const mxArray *c5_y = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_duplicatearraysafe(&c5_u));
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void init_dsm_address_info(SFc5_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c5_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2579395617U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1741997597U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3383298175U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1884568686U);
}

mxArray *sf_c5_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2551289133U);
    pr[1] = (double)(3577621177U);
    pr[2] = (double)(883951549U);
    pr[3] = (double)(848852147U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c5_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[12],T\"APPRamp\",},{M[1],M[10],T\"cranking\",},{M[1],M[17],T\"generatingTQ\",},{M[1],M[11],T\"idle\",},{M[1],M[15],T\"maxRPM\",},{M[1],M[16],T\"motorTQ\",},{M[1],M[18],T\"remyEn\",},{M[1],M[13],T\"torqueRamp\",},{M[3],M[19],T\"count\",},{M[8],M[0],T\"is_active_c5_BaseEngineController_A02\",}}",
    "100 S'type','srcId','name','auxInfo'{{M[9],M[0],T\"is_c5_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 11, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           5,
           5,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"genEnable");
          _SFD_SET_DATA_PROPS(1,1,1,0,"genLoad");
          _SFD_SET_DATA_PROPS(2,1,1,0,"RPM");
          _SFD_SET_DATA_PROPS(3,1,1,0,"crankTime");
          _SFD_SET_DATA_PROPS(4,1,1,0,"crankWait");
          _SFD_SET_DATA_PROPS(5,1,1,0,"caughtRPM");
          _SFD_SET_DATA_PROPS(6,1,1,0,"crankTQ");
          _SFD_SET_DATA_PROPS(7,1,1,0,"maxCrankRPM");
          _SFD_SET_DATA_PROPS(8,1,1,0,"maxMotorRPM");
          _SFD_SET_DATA_PROPS(9,2,0,1,"cranking");
          _SFD_SET_DATA_PROPS(10,2,0,1,"idle");
          _SFD_SET_DATA_PROPS(11,2,0,1,"APPRamp");
          _SFD_SET_DATA_PROPS(12,2,0,1,"torqueRamp");
          _SFD_SET_DATA_PROPS(13,2,0,1,"remyEn");
          _SFD_SET_DATA_PROPS(14,2,0,1,"maxRPM");
          _SFD_SET_DATA_PROPS(15,2,0,1,"motorTQ");
          _SFD_SET_DATA_PROPS(16,2,0,1,"generatingTQ");
          _SFD_SET_DATA_PROPS(17,0,0,0,"count");
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

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

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

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_c_sf_marshallOut,(MexInFcnForType)c5_c_sf_marshallIn);

        {
          real_T *c5_genEnable;
          real_T *c5_genLoad;
          real_T *c5_RPM;
          real_T *c5_crankTime;
          real_T *c5_crankWait;
          real_T *c5_caughtRPM;
          real_T *c5_crankTQ;
          real_T *c5_maxCrankRPM;
          real_T *c5_maxMotorRPM;
          real_T *c5_b_cranking;
          real_T *c5_idle;
          real_T *c5_APPRamp;
          real_T *c5_torqueRamp;
          real_T *c5_remyEn;
          real_T *c5_maxRPM;
          real_T *c5_motorTQ;
          real_T *c5_generatingTQ;
          c5_generatingTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c5_motorTQ = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c5_maxRPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c5_remyEn = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c5_torqueRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c5_APPRamp = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c5_idle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c5_b_cranking = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c5_maxMotorRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c5_maxCrankRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c5_crankTQ = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c5_caughtRPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c5_crankWait = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c5_crankTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c5_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c5_genLoad = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c5_genEnable = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c5_genEnable);
          _SFD_SET_DATA_VALUE_PTR(1U, c5_genLoad);
          _SFD_SET_DATA_VALUE_PTR(2U, c5_RPM);
          _SFD_SET_DATA_VALUE_PTR(3U, c5_crankTime);
          _SFD_SET_DATA_VALUE_PTR(4U, c5_crankWait);
          _SFD_SET_DATA_VALUE_PTR(5U, c5_caughtRPM);
          _SFD_SET_DATA_VALUE_PTR(6U, c5_crankTQ);
          _SFD_SET_DATA_VALUE_PTR(7U, c5_maxCrankRPM);
          _SFD_SET_DATA_VALUE_PTR(8U, c5_maxMotorRPM);
          _SFD_SET_DATA_VALUE_PTR(9U, c5_b_cranking);
          _SFD_SET_DATA_VALUE_PTR(10U, c5_idle);
          _SFD_SET_DATA_VALUE_PTR(11U, c5_APPRamp);
          _SFD_SET_DATA_VALUE_PTR(12U, c5_torqueRamp);
          _SFD_SET_DATA_VALUE_PTR(13U, c5_remyEn);
          _SFD_SET_DATA_VALUE_PTR(14U, c5_maxRPM);
          _SFD_SET_DATA_VALUE_PTR(15U, c5_motorTQ);
          _SFD_SET_DATA_VALUE_PTR(16U, c5_generatingTQ);
          _SFD_SET_DATA_VALUE_PTR(17U, &chartInstance->c5_count);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c5_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc5_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c5_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_BaseEngineController_A02(void *chartInstanceVar)
{
  disable_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c5_BaseEngineController_A02(void *chartInstanceVar)
{
  sf_c5_BaseEngineController_A02((SFc5_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c5_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c5_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c5_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c5_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c5_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c5_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c5_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c5_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c5_BaseEngineController_A02
      ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_BaseEngineController_A02
    ((SFc5_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_BaseEngineController_A02
      ((SFc5_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c5_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",5,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",5,
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
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",5,9);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",5,8);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",5);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3181694619U));
  ssSetChecksum1(S,(4031052894U));
  ssSetChecksum2(S,(205967937U));
  ssSetChecksum3(S,(4108928123U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c5_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",5);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c5_BaseEngineController_A02(SimStruct *S)
{
  SFc5_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc5_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc5_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc5_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c5_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_BaseEngineController_A02;
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

void c5_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
