/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c4_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c4_IN_NO_ACTIVE_CHILD          (0U)
#define c4_IN_initialize_off           (3U)
#define c4_IN_initialize_on            (4U)
#define c4_IN_initialize_done          (2U)
#define c4_IN_Master                   (1U)
#define c4_IN_FanOff                   (4U)
#define c4_IN_FanLow                   (2U)
#define c4_IN_FanMed                   (3U)
#define c4_IN_FanHigh                  (1U)
#define c4_IN_Heat_0                   (1U)
#define c4_IN_Heat_1                   (1U)
#define c4_IN_Heat_2                   (2U)
#define c4_IN_Heat_3                   (3U)
#define c4_IN_Heat_4                   (4U)
#define c4_IN_System_Cold              (2U)
#define c4_IN_Use_Wants_Heat           (3U)
#define c4_IN_Heat_1H                  (1U)
#define c4_IN_Heat_2H                  (2U)
#define c4_IN_Heat_3H                  (3U)
#define c4_IN_Heat_4H                  (4U)
#define c4_IN_Closed                   (1U)
#define c4_IN_Open                     (2U)
#define c4_IN_Off                      (1U)
#define c4_IN_On                       (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c4_Mooventure2016_Rev5(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void disable_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_st);
static void c4_set_sim_state_side_effects_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c4_Mooventure2016_Rev5(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c4_chartstep_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_Master(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_Fan(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_RadPump(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_RadBlend(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_CoreBlend(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_System_Cold(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c4_Use_Wants_Heat(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c4_exit_internal_Use_Wants_Heat
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static int32_T c4_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static uint8_T c4_b_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_initialize_off, const char_T
  *c4_identifier);
static uint8_T c4_c_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static real_T c4_d_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_RadPump, const char_T *c4_identifier);
static real_T c4_e_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_f_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier);
static const mxArray *c4_g_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId);
static void init_dsm_address_info(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c4_b_RadPump;
  real_T *c4_CorePump;
  real_T *c4_fan;
  real_T *c4_RadBlendOut;
  real_T *c4_CoreBlendOut;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_doSetSimStateSideEffects = 0U;
  chartInstance->c4_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_tp_Master = 0U;
  chartInstance->c4_is_active_CoreBlend = 0U;
  chartInstance->c4_is_CoreBlend = 0U;
  chartInstance->c4_tp_CoreBlend = 0U;
  chartInstance->c4_b_tp_Closed = 0U;
  chartInstance->c4_b_tp_Open = 0U;
  chartInstance->c4_is_active_CorePump = 0U;
  chartInstance->c4_is_CorePump = 0U;
  chartInstance->c4_tp_CorePump = 0U;
  chartInstance->c4_b_tp_Off = 0U;
  chartInstance->c4_b_tp_On = 0U;
  chartInstance->c4_is_active_Fan = 0U;
  chartInstance->c4_is_Fan = 0U;
  chartInstance->c4_tp_Fan = 0U;
  chartInstance->c4_tp_FanHigh = 0U;
  chartInstance->c4_tp_FanLow = 0U;
  chartInstance->c4_tp_FanMed = 0U;
  chartInstance->c4_tp_FanOff = 0U;
  chartInstance->c4_is_active_Heater = 0U;
  chartInstance->c4_is_Heater = 0U;
  chartInstance->c4_tp_Heater = 0U;
  chartInstance->c4_tp_Heat_0 = 0U;
  chartInstance->c4_is_System_Cold = 0U;
  chartInstance->c4_tp_System_Cold = 0U;
  chartInstance->c4_tp_Heat_1 = 0U;
  chartInstance->c4_tp_Heat_2 = 0U;
  chartInstance->c4_tp_Heat_3 = 0U;
  chartInstance->c4_tp_Heat_4 = 0U;
  chartInstance->c4_is_Use_Wants_Heat = 0U;
  chartInstance->c4_tp_Use_Wants_Heat = 0U;
  chartInstance->c4_tp_Heat_1H = 0U;
  chartInstance->c4_tp_Heat_2H = 0U;
  chartInstance->c4_tp_Heat_3H = 0U;
  chartInstance->c4_tp_Heat_4H = 0U;
  chartInstance->c4_is_active_RadBlend = 0U;
  chartInstance->c4_is_RadBlend = 0U;
  chartInstance->c4_tp_RadBlend = 0U;
  chartInstance->c4_tp_Closed = 0U;
  chartInstance->c4_tp_Open = 0U;
  chartInstance->c4_is_active_RadPump = 0U;
  chartInstance->c4_is_RadPump = 0U;
  chartInstance->c4_tp_RadPump = 0U;
  chartInstance->c4_tp_Off = 0U;
  chartInstance->c4_tp_On = 0U;
  chartInstance->c4_tp_initialize_done = 0U;
  chartInstance->c4_tp_initialize_off = 0U;
  chartInstance->c4_tp_initialize_on = 0U;
  chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = 0U;
  chartInstance->c4_is_c4_Mooventure2016_Rev5 = 0U;
  chartInstance->c4_minVal = 0.0;
  chartInstance->c4_maxVal = 0.0;
  chartInstance->c4_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c4_b_RadPump = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c4_CorePump = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c4_fan = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c4_RadBlendOut = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c4_CoreBlendOut = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c4_Heat1 = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c4_Heat2 = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c4_Heat3 = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 9) != 0)) {
    *c4_Heat4 = 0.0;
  }
}

static void initialize_params_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c4_Mooventure2016_Rev5(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Master) {
    sf_call_output_fcn_enable(chartInstance->S, 0, "calc_max", 0);
    sf_call_output_fcn_enable(chartInstance->S, 1, "calc_min", 0);
  }
}

static void disable_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Master) {
    sf_call_output_fcn_disable(chartInstance->S, 0, "calc_max", 0);
    sf_call_output_fcn_disable(chartInstance->S, 1, "calc_min", 0);
  }
}

static void c4_update_debugger_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c4_prevAniVal;
  c4_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c4_is_active_c4_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_done) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Master) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_Fan == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_Heater == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Fan == c4_IN_FanOff) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Fan == c4_IN_FanLow) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Fan == c4_IN_FanMed) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Fan == c4_IN_FanHigh) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_RadPump == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_CorePump == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_RadBlend == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, chartInstance->c4_sfEvent);
  }

  if ((int16_T)chartInstance->c4_is_active_CoreBlend == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Heater == c4_IN_Heat_0) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_System_Cold == c4_IN_Heat_1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_System_Cold == c4_IN_Heat_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_System_Cold == c4_IN_Heat_3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_System_Cold == c4_IN_Heat_4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Heater == c4_IN_System_Cold) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Heater == c4_IN_Use_Wants_Heat) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_1H) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_2H) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_3H) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_4H) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_RadBlend == c4_IN_Closed) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_RadBlend == c4_IN_Open) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_CoreBlend == c4_IN_Closed) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_CoreBlend == c4_IN_Open) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_RadPump == c4_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_CorePump == c4_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_RadPump == c4_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_CorePump == c4_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  }

  sf_debug_set_animation(c4_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  real_T c4_hoistedGlobal;
  real_T c4_u;
  const mxArray *c4_b_y = NULL;
  real_T c4_b_hoistedGlobal;
  real_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  real_T c4_c_hoistedGlobal;
  real_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  real_T c4_d_hoistedGlobal;
  real_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  real_T c4_e_hoistedGlobal;
  real_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  real_T c4_f_hoistedGlobal;
  real_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  real_T c4_g_hoistedGlobal;
  real_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  real_T c4_h_hoistedGlobal;
  real_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  real_T c4_i_hoistedGlobal;
  real_T c4_i_u;
  const mxArray *c4_j_y = NULL;
  real_T c4_j_hoistedGlobal;
  real_T c4_j_u;
  const mxArray *c4_k_y = NULL;
  real_T c4_k_hoistedGlobal;
  real_T c4_k_u;
  const mxArray *c4_l_y = NULL;
  real_T c4_l_hoistedGlobal;
  real_T c4_l_u;
  const mxArray *c4_m_y = NULL;
  uint8_T c4_m_hoistedGlobal;
  uint8_T c4_m_u;
  const mxArray *c4_n_y = NULL;
  uint8_T c4_n_hoistedGlobal;
  uint8_T c4_n_u;
  const mxArray *c4_o_y = NULL;
  uint8_T c4_o_hoistedGlobal;
  uint8_T c4_o_u;
  const mxArray *c4_p_y = NULL;
  uint8_T c4_p_hoistedGlobal;
  uint8_T c4_p_u;
  const mxArray *c4_q_y = NULL;
  uint8_T c4_q_hoistedGlobal;
  uint8_T c4_q_u;
  const mxArray *c4_r_y = NULL;
  uint8_T c4_r_hoistedGlobal;
  uint8_T c4_r_u;
  const mxArray *c4_s_y = NULL;
  uint8_T c4_s_hoistedGlobal;
  uint8_T c4_s_u;
  const mxArray *c4_t_y = NULL;
  uint8_T c4_t_hoistedGlobal;
  uint8_T c4_t_u;
  const mxArray *c4_u_y = NULL;
  uint8_T c4_u_hoistedGlobal;
  uint8_T c4_u_u;
  const mxArray *c4_v_y = NULL;
  uint8_T c4_v_hoistedGlobal;
  uint8_T c4_v_u;
  const mxArray *c4_w_y = NULL;
  uint8_T c4_w_hoistedGlobal;
  uint8_T c4_w_u;
  const mxArray *c4_x_y = NULL;
  uint8_T c4_x_hoistedGlobal;
  uint8_T c4_x_u;
  const mxArray *c4_y_y = NULL;
  uint8_T c4_y_hoistedGlobal;
  uint8_T c4_y_u;
  const mxArray *c4_ab_y = NULL;
  uint8_T c4_ab_hoistedGlobal;
  uint8_T c4_ab_u;
  const mxArray *c4_bb_y = NULL;
  uint8_T c4_bb_hoistedGlobal;
  uint8_T c4_bb_u;
  const mxArray *c4_cb_y = NULL;
  uint8_T c4_cb_hoistedGlobal;
  uint8_T c4_cb_u;
  const mxArray *c4_db_y = NULL;
  real_T *c4_CoreBlendOut;
  real_T *c4_CorePump;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  real_T *c4_RadBlendOut;
  real_T *c4_b_RadPump;
  real_T *c4_fan;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(28));
  c4_hoistedGlobal = *c4_CoreBlendOut;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal = *c4_CorePump;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_c_hoistedGlobal = *c4_Heat1;
  c4_c_u = c4_c_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = *c4_Heat2;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_e_hoistedGlobal = *c4_Heat3;
  c4_e_u = c4_e_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_f_hoistedGlobal = *c4_Heat4;
  c4_f_u = c4_f_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_g_hoistedGlobal = *c4_RadBlendOut;
  c4_g_u = c4_g_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_h_hoistedGlobal = *c4_b_RadPump;
  c4_h_u = c4_h_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_i_hoistedGlobal = *c4_fan;
  c4_i_u = c4_i_hoistedGlobal;
  c4_j_y = NULL;
  sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_i_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_j_hoistedGlobal = chartInstance->c4_count;
  c4_j_u = c4_j_hoistedGlobal;
  c4_k_y = NULL;
  sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_j_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 9, c4_k_y);
  c4_k_hoistedGlobal = chartInstance->c4_maxVal;
  c4_k_u = c4_k_hoistedGlobal;
  c4_l_y = NULL;
  sf_mex_assign(&c4_l_y, sf_mex_create("y", &c4_k_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 10, c4_l_y);
  c4_l_hoistedGlobal = chartInstance->c4_minVal;
  c4_l_u = c4_l_hoistedGlobal;
  c4_m_y = NULL;
  sf_mex_assign(&c4_m_y, sf_mex_create("y", &c4_l_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 11, c4_m_y);
  c4_m_hoistedGlobal = chartInstance->c4_is_active_c4_Mooventure2016_Rev5;
  c4_m_u = c4_m_hoistedGlobal;
  c4_n_y = NULL;
  sf_mex_assign(&c4_n_y, sf_mex_create("y", &c4_m_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 12, c4_n_y);
  c4_n_hoistedGlobal = chartInstance->c4_is_active_Fan;
  c4_n_u = c4_n_hoistedGlobal;
  c4_o_y = NULL;
  sf_mex_assign(&c4_o_y, sf_mex_create("y", &c4_n_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 13, c4_o_y);
  c4_o_hoistedGlobal = chartInstance->c4_is_active_Heater;
  c4_o_u = c4_o_hoistedGlobal;
  c4_p_y = NULL;
  sf_mex_assign(&c4_p_y, sf_mex_create("y", &c4_o_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 14, c4_p_y);
  c4_p_hoistedGlobal = chartInstance->c4_is_active_RadPump;
  c4_p_u = c4_p_hoistedGlobal;
  c4_q_y = NULL;
  sf_mex_assign(&c4_q_y, sf_mex_create("y", &c4_p_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 15, c4_q_y);
  c4_q_hoistedGlobal = chartInstance->c4_is_active_CorePump;
  c4_q_u = c4_q_hoistedGlobal;
  c4_r_y = NULL;
  sf_mex_assign(&c4_r_y, sf_mex_create("y", &c4_q_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 16, c4_r_y);
  c4_r_hoistedGlobal = chartInstance->c4_is_active_RadBlend;
  c4_r_u = c4_r_hoistedGlobal;
  c4_s_y = NULL;
  sf_mex_assign(&c4_s_y, sf_mex_create("y", &c4_r_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 17, c4_s_y);
  c4_s_hoistedGlobal = chartInstance->c4_is_active_CoreBlend;
  c4_s_u = c4_s_hoistedGlobal;
  c4_t_y = NULL;
  sf_mex_assign(&c4_t_y, sf_mex_create("y", &c4_s_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 18, c4_t_y);
  c4_t_hoistedGlobal = chartInstance->c4_is_c4_Mooventure2016_Rev5;
  c4_t_u = c4_t_hoistedGlobal;
  c4_u_y = NULL;
  sf_mex_assign(&c4_u_y, sf_mex_create("y", &c4_t_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 19, c4_u_y);
  c4_u_hoistedGlobal = chartInstance->c4_is_Fan;
  c4_u_u = c4_u_hoistedGlobal;
  c4_v_y = NULL;
  sf_mex_assign(&c4_v_y, sf_mex_create("y", &c4_u_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 20, c4_v_y);
  c4_v_hoistedGlobal = chartInstance->c4_is_Heater;
  c4_v_u = c4_v_hoistedGlobal;
  c4_w_y = NULL;
  sf_mex_assign(&c4_w_y, sf_mex_create("y", &c4_v_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 21, c4_w_y);
  c4_w_hoistedGlobal = chartInstance->c4_is_RadPump;
  c4_w_u = c4_w_hoistedGlobal;
  c4_x_y = NULL;
  sf_mex_assign(&c4_x_y, sf_mex_create("y", &c4_w_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 22, c4_x_y);
  c4_x_hoistedGlobal = chartInstance->c4_is_CorePump;
  c4_x_u = c4_x_hoistedGlobal;
  c4_y_y = NULL;
  sf_mex_assign(&c4_y_y, sf_mex_create("y", &c4_x_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 23, c4_y_y);
  c4_y_hoistedGlobal = chartInstance->c4_is_RadBlend;
  c4_y_u = c4_y_hoistedGlobal;
  c4_ab_y = NULL;
  sf_mex_assign(&c4_ab_y, sf_mex_create("y", &c4_y_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 24, c4_ab_y);
  c4_ab_hoistedGlobal = chartInstance->c4_is_CoreBlend;
  c4_ab_u = c4_ab_hoistedGlobal;
  c4_bb_y = NULL;
  sf_mex_assign(&c4_bb_y, sf_mex_create("y", &c4_ab_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 25, c4_bb_y);
  c4_bb_hoistedGlobal = chartInstance->c4_is_System_Cold;
  c4_bb_u = c4_bb_hoistedGlobal;
  c4_cb_y = NULL;
  sf_mex_assign(&c4_cb_y, sf_mex_create("y", &c4_bb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 26, c4_cb_y);
  c4_cb_hoistedGlobal = chartInstance->c4_is_Use_Wants_Heat;
  c4_cb_u = c4_cb_hoistedGlobal;
  c4_db_y = NULL;
  sf_mex_assign(&c4_db_y, sf_mex_create("y", &c4_cb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 27, c4_db_y);
  sf_mex_assign(&c4_st, c4_y);
  return c4_st;
}

static void set_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T *c4_CoreBlendOut;
  real_T *c4_CorePump;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  real_T *c4_RadBlendOut;
  real_T *c4_b_RadPump;
  real_T *c4_fan;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_u = sf_mex_dup(c4_st);
  *c4_CoreBlendOut = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "CoreBlendOut");
  *c4_CorePump = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 1)), "CorePump");
  *c4_Heat1 = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 2)), "Heat1");
  *c4_Heat2 = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 3)), "Heat2");
  *c4_Heat3 = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 4)), "Heat3");
  *c4_Heat4 = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 5)), "Heat4");
  *c4_RadBlendOut = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 6)), "RadBlendOut");
  *c4_b_RadPump = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 7)), "RadPump");
  *c4_fan = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    8)), "fan");
  chartInstance->c4_count = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 9)), "count");
  chartInstance->c4_maxVal = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 10)), "maxVal");
  chartInstance->c4_minVal = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 11)), "minVal");
  chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = c4_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 12)),
     "is_active_c4_Mooventure2016_Rev5");
  chartInstance->c4_is_active_Fan = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 13)), "is_active_Fan");
  chartInstance->c4_is_active_Heater = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 14)), "is_active_Heater");
  chartInstance->c4_is_active_RadPump = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 15)), "is_active_RadPump");
  chartInstance->c4_is_active_CorePump = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 16)), "is_active_CorePump");
  chartInstance->c4_is_active_RadBlend = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 17)), "is_active_RadBlend");
  chartInstance->c4_is_active_CoreBlend = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 18)), "is_active_CoreBlend");
  chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 19)),
     "is_c4_Mooventure2016_Rev5");
  chartInstance->c4_is_Fan = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 20)), "is_Fan");
  chartInstance->c4_is_Heater = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 21)), "is_Heater");
  chartInstance->c4_is_RadPump = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 22)), "is_RadPump");
  chartInstance->c4_is_CorePump = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 23)), "is_CorePump");
  chartInstance->c4_is_RadBlend = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 24)), "is_RadBlend");
  chartInstance->c4_is_CoreBlend = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 25)), "is_CoreBlend");
  chartInstance->c4_is_System_Cold = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 26)), "is_System_Cold");
  chartInstance->c4_is_Use_Wants_Heat = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 27)), "is_Use_Wants_Heat");
  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 28)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c4_u);
  chartInstance->c4_doSetSimStateSideEffects = 1U;
  c4_update_debugger_state_c4_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void c4_set_sim_state_side_effects_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c4_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Master) {
      chartInstance->c4_tp_Master = 1U;
      if (sf_mex_sub(chartInstance->c4_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        sf_call_output_fcn_enable(chartInstance->S, 0, "calc_max", 0);
        sf_call_output_fcn_enable(chartInstance->S, 1, "calc_min", 0);
      }
    } else {
      chartInstance->c4_tp_Master = 0U;
      if (sf_mex_sub(chartInstance->c4_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) > 0.0) {
        sf_call_output_fcn_disable(chartInstance->S, 0, "calc_max", 0);
        sf_call_output_fcn_disable(chartInstance->S, 1, "calc_min", 0);
      }
    }

    if ((int16_T)chartInstance->c4_is_active_Fan == 1) {
      chartInstance->c4_tp_Fan = 1U;
    } else {
      chartInstance->c4_tp_Fan = 0U;
    }

    if (chartInstance->c4_is_Fan == c4_IN_FanHigh) {
      chartInstance->c4_tp_FanHigh = 1U;
    } else {
      chartInstance->c4_tp_FanHigh = 0U;
    }

    if (chartInstance->c4_is_Fan == c4_IN_FanLow) {
      chartInstance->c4_tp_FanLow = 1U;
    } else {
      chartInstance->c4_tp_FanLow = 0U;
    }

    if (chartInstance->c4_is_Fan == c4_IN_FanMed) {
      chartInstance->c4_tp_FanMed = 1U;
    } else {
      chartInstance->c4_tp_FanMed = 0U;
    }

    if (chartInstance->c4_is_Fan == c4_IN_FanOff) {
      chartInstance->c4_tp_FanOff = 1U;
    } else {
      chartInstance->c4_tp_FanOff = 0U;
    }

    if ((int16_T)chartInstance->c4_is_active_RadBlend == 1) {
      chartInstance->c4_tp_RadBlend = 1U;
    } else {
      chartInstance->c4_tp_RadBlend = 0U;
    }

    if (chartInstance->c4_is_RadBlend == c4_IN_Closed) {
      chartInstance->c4_tp_Closed = 1U;
    } else {
      chartInstance->c4_tp_Closed = 0U;
    }

    if (chartInstance->c4_is_RadBlend == c4_IN_Open) {
      chartInstance->c4_tp_Open = 1U;
    } else {
      chartInstance->c4_tp_Open = 0U;
    }

    if ((int16_T)chartInstance->c4_is_active_CoreBlend == 1) {
      chartInstance->c4_tp_CoreBlend = 1U;
    } else {
      chartInstance->c4_tp_CoreBlend = 0U;
    }

    if (chartInstance->c4_is_CoreBlend == c4_IN_Closed) {
      chartInstance->c4_b_tp_Closed = 1U;
    } else {
      chartInstance->c4_b_tp_Closed = 0U;
    }

    if (chartInstance->c4_is_CoreBlend == c4_IN_Open) {
      chartInstance->c4_b_tp_Open = 1U;
    } else {
      chartInstance->c4_b_tp_Open = 0U;
    }

    if ((int16_T)chartInstance->c4_is_active_RadPump == 1) {
      chartInstance->c4_tp_RadPump = 1U;
    } else {
      chartInstance->c4_tp_RadPump = 0U;
    }

    if (chartInstance->c4_is_RadPump == c4_IN_Off) {
      chartInstance->c4_tp_Off = 1U;
    } else {
      chartInstance->c4_tp_Off = 0U;
    }

    if (chartInstance->c4_is_RadPump == c4_IN_On) {
      chartInstance->c4_tp_On = 1U;
    } else {
      chartInstance->c4_tp_On = 0U;
    }

    if ((int16_T)chartInstance->c4_is_active_Heater == 1) {
      chartInstance->c4_tp_Heater = 1U;
    } else {
      chartInstance->c4_tp_Heater = 0U;
    }

    if (chartInstance->c4_is_Heater == c4_IN_Heat_0) {
      chartInstance->c4_tp_Heat_0 = 1U;
    } else {
      chartInstance->c4_tp_Heat_0 = 0U;
    }

    if (chartInstance->c4_is_Heater == c4_IN_System_Cold) {
      chartInstance->c4_tp_System_Cold = 1U;
    } else {
      chartInstance->c4_tp_System_Cold = 0U;
    }

    if (chartInstance->c4_is_System_Cold == c4_IN_Heat_1) {
      chartInstance->c4_tp_Heat_1 = 1U;
    } else {
      chartInstance->c4_tp_Heat_1 = 0U;
    }

    if (chartInstance->c4_is_System_Cold == c4_IN_Heat_2) {
      chartInstance->c4_tp_Heat_2 = 1U;
    } else {
      chartInstance->c4_tp_Heat_2 = 0U;
    }

    if (chartInstance->c4_is_System_Cold == c4_IN_Heat_3) {
      chartInstance->c4_tp_Heat_3 = 1U;
    } else {
      chartInstance->c4_tp_Heat_3 = 0U;
    }

    if (chartInstance->c4_is_System_Cold == c4_IN_Heat_4) {
      chartInstance->c4_tp_Heat_4 = 1U;
    } else {
      chartInstance->c4_tp_Heat_4 = 0U;
    }

    if (chartInstance->c4_is_Heater == c4_IN_Use_Wants_Heat) {
      chartInstance->c4_tp_Use_Wants_Heat = 1U;
    } else {
      chartInstance->c4_tp_Use_Wants_Heat = 0U;
    }

    if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_1H) {
      chartInstance->c4_tp_Heat_1H = 1U;
    } else {
      chartInstance->c4_tp_Heat_1H = 0U;
    }

    if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_2H) {
      chartInstance->c4_tp_Heat_2H = 1U;
    } else {
      chartInstance->c4_tp_Heat_2H = 0U;
    }

    if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_3H) {
      chartInstance->c4_tp_Heat_3H = 1U;
    } else {
      chartInstance->c4_tp_Heat_3H = 0U;
    }

    if (chartInstance->c4_is_Use_Wants_Heat == c4_IN_Heat_4H) {
      chartInstance->c4_tp_Heat_4H = 1U;
    } else {
      chartInstance->c4_tp_Heat_4H = 0U;
    }

    if ((int16_T)chartInstance->c4_is_active_CorePump == 1) {
      chartInstance->c4_tp_CorePump = 1U;
    } else {
      chartInstance->c4_tp_CorePump = 0U;
    }

    if (chartInstance->c4_is_CorePump == c4_IN_Off) {
      chartInstance->c4_b_tp_Off = 1U;
    } else {
      chartInstance->c4_b_tp_Off = 0U;
    }

    if (chartInstance->c4_is_CorePump == c4_IN_On) {
      chartInstance->c4_b_tp_On = 1U;
    } else {
      chartInstance->c4_b_tp_On = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_done) {
      chartInstance->c4_tp_initialize_done = 1U;
    } else {
      chartInstance->c4_tp_initialize_done = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_off) {
      chartInstance->c4_tp_initialize_off = 1U;
    } else {
      chartInstance->c4_tp_initialize_off = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_initialize_on) {
      chartInstance->c4_tp_initialize_on = 1U;
    } else {
      chartInstance->c4_tp_initialize_on = 0U;
    }

    chartInstance->c4_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c4_setSimStateSideEffectsInfo);
}

static void sf_c4_Mooventure2016_Rev5(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T *c4_TCharger;
  real_T *c4_TIPT;
  real_T *c4_TMinBat;
  real_T *c4_TMaxBat;
  real_T *c4_TEngine;
  real_T *c4_TInverter;
  real_T *c4_Defrost;
  real_T *c4_AC;
  real_T *c4_THeat;
  real_T *c4_RadBlendIn;
  real_T *c4_CoreBlendIn;
  real_T *c4_TDriver;
  real_T *c4_ChargerIn;
  real_T *c4_PumpOn;
  real_T *c4_PumpOff;
  real_T *c4_Cold;
  real_T *c4_Warm;
  real_T *c4_HOn;
  real_T *c4_HThresh;
  real_T *c4_FLow;
  real_T *c4_FMed;
  real_T *c4_FHigh;
  real_T *c4_H1;
  real_T *c4_H2;
  real_T *c4_H3;
  real_T *c4_H4;
  real_T *c4_b_RadPump;
  real_T *c4_CorePump;
  real_T *c4_fan;
  real_T *c4_RadBlendOut;
  real_T *c4_CoreBlendOut;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  real_T *c4_BlendThresh;
  real_T *c4_EOffset;
  real_T *c4_FaultPump;
  real_T *c4_FaultMax;
  c4_FaultMax = (real_T *)ssGetInputPortSignal(chartInstance->S, 29);
  c4_FaultPump = (real_T *)ssGetInputPortSignal(chartInstance->S, 28);
  c4_EOffset = (real_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c4_BlendThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 26);
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_H4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 25);
  c4_H3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 24);
  c4_H2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 23);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c4_FHigh = (real_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c4_FMed = (real_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c4_FLow = (real_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c4_HThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c4_HOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c4_Warm = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c4_Cold = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c4_PumpOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c4_PumpOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c4_ChargerIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c4_TDriver = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c4_CoreBlendIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c4_RadBlendIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c4_THeat = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_AC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_Defrost = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_TInverter = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_TEngine = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_TMaxBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_TMinBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_TIPT = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_TCharger = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c4_set_sim_state_side_effects_c4_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c4_TCharger, 0U);
  _SFD_DATA_RANGE_CHECK(*c4_TIPT, 1U);
  _SFD_DATA_RANGE_CHECK(*c4_TMinBat, 2U);
  _SFD_DATA_RANGE_CHECK(*c4_TMaxBat, 3U);
  _SFD_DATA_RANGE_CHECK(*c4_TEngine, 4U);
  _SFD_DATA_RANGE_CHECK(*c4_TInverter, 5U);
  _SFD_DATA_RANGE_CHECK(*c4_Defrost, 6U);
  _SFD_DATA_RANGE_CHECK(*c4_AC, 7U);
  _SFD_DATA_RANGE_CHECK(*c4_THeat, 8U);
  _SFD_DATA_RANGE_CHECK(*c4_RadBlendIn, 9U);
  _SFD_DATA_RANGE_CHECK(*c4_CoreBlendIn, 10U);
  _SFD_DATA_RANGE_CHECK(*c4_TDriver, 11U);
  _SFD_DATA_RANGE_CHECK(*c4_ChargerIn, 12U);
  _SFD_DATA_RANGE_CHECK(*c4_PumpOn, 13U);
  _SFD_DATA_RANGE_CHECK(*c4_PumpOff, 14U);
  _SFD_DATA_RANGE_CHECK(*c4_Cold, 15U);
  _SFD_DATA_RANGE_CHECK(*c4_Warm, 16U);
  _SFD_DATA_RANGE_CHECK(*c4_HOn, 17U);
  _SFD_DATA_RANGE_CHECK(*c4_HThresh, 18U);
  _SFD_DATA_RANGE_CHECK(*c4_FLow, 19U);
  _SFD_DATA_RANGE_CHECK(*c4_FMed, 20U);
  _SFD_DATA_RANGE_CHECK(*c4_FHigh, 21U);
  _SFD_DATA_RANGE_CHECK(*c4_H1, 22U);
  _SFD_DATA_RANGE_CHECK(*c4_H2, 23U);
  _SFD_DATA_RANGE_CHECK(*c4_H3, 24U);
  _SFD_DATA_RANGE_CHECK(*c4_H4, 25U);
  _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
  _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
  _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
  _SFD_DATA_RANGE_CHECK(*c4_RadBlendOut, 29U);
  _SFD_DATA_RANGE_CHECK(*c4_CoreBlendOut, 30U);
  _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
  _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
  _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
  _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
  _SFD_DATA_RANGE_CHECK(*c4_BlendThresh, 35U);
  _SFD_DATA_RANGE_CHECK(*c4_EOffset, 36U);
  _SFD_DATA_RANGE_CHECK(*c4_FaultPump, 37U);
  _SFD_DATA_RANGE_CHECK(*c4_FaultMax, 38U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c4_minVal, 39U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c4_maxVal, 40U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c4_count, 41U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c4_chartstep_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c4_b_RadPump;
  real_T *c4_CorePump;
  real_T *c4_fan;
  real_T *c4_RadBlendOut;
  real_T *c4_CoreBlendOut;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  if ((int16_T)chartInstance->c4_is_active_c4_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_initialize_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_initialize_off = 1U;
  } else {
    switch (chartInstance->c4_is_c4_Mooventure2016_Rev5) {
     case c4_IN_Master:
      CV_CHART_EVAL(3, 0, 1);
      c4_Master(chartInstance);
      break;

     case c4_IN_initialize_done:
      CV_CHART_EVAL(3, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 32U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c4_b_RadPump ==
            0.0 != 0U, chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_initialize_done = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_Master;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Master = 1U;
        sf_call_output_fcn_enable(chartInstance->S, 0, "calc_max", 0);
        sf_call_output_fcn_enable(chartInstance->S, 1, "calc_min", 0);
        chartInstance->c4_is_active_Fan = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Fan = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Fan = c4_IN_FanOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanOff = 1U;
        chartInstance->c4_is_active_RadBlend = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_RadBlend = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 42U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 42U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_RadBlend = c4_IN_Closed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Closed = 1U;
        chartInstance->c4_is_active_CoreBlend = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_CoreBlend = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_CoreBlend = c4_IN_Closed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
        chartInstance->c4_b_tp_Closed = 1U;
        chartInstance->c4_is_active_RadPump = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_RadPump = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 44U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_RadPump = c4_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Off = 1U;
        chartInstance->c4_is_active_Heater = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heater = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Heater = c4_IN_Heat_0;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_0 = 1U;
        chartInstance->c4_is_active_CorePump = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_CorePump = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 45U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 45U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_CorePump = c4_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
        chartInstance->c4_b_tp_Off = 1U;
      } else {
        *c4_b_RadPump = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
        *c4_CorePump = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
        *c4_fan = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
        *c4_RadBlendOut = 20.0;
        _SFD_DATA_RANGE_CHECK(*c4_RadBlendOut, 29U);
        *c4_CoreBlendOut = 20.0;
        _SFD_DATA_RANGE_CHECK(*c4_CoreBlendOut, 30U);
        *c4_Heat1 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
        *c4_Heat2 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
        *c4_Heat3 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
        *c4_Heat4 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_initialize_off:
      CV_CHART_EVAL(3, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 33U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c4_b_RadPump ==
            0.0 != 0U, chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_initialize_off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_initialize_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_initialize_on = 1U;
        chartInstance->c4_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c4_count, 41U);
      } else {
        *c4_b_RadPump = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
        *c4_CorePump = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
        *c4_fan = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
        *c4_RadBlendOut = 20.0;
        _SFD_DATA_RANGE_CHECK(*c4_RadBlendOut, 29U);
        *c4_CoreBlendOut = 20.0;
        _SFD_DATA_RANGE_CHECK(*c4_CoreBlendOut, 30U);
        *c4_Heat1 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
        *c4_Heat2 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
        *c4_Heat3 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
        *c4_Heat4 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 33U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_initialize_on:
      CV_CHART_EVAL(3, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 34U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
            chartInstance->c4_count >= 600.0 != 0U, chartInstance->c4_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_initialize_on = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_initialize_done;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_initialize_done = 1U;
      } else {
        *c4_b_RadPump = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
        *c4_CorePump = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
        *c4_fan = 3.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
        chartInstance->c4_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c4_count, 41U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, chartInstance->c4_sfEvent);
      break;

     default:
      CV_CHART_EVAL(3, 0, 0);
      chartInstance->c4_is_c4_Mooventure2016_Rev5 = (uint8_T)
        c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
}

static void initSimStructsc4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void c4_Master(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T c4_hoistedGlobal;
  real_T c4_b_hoistedGlobal;
  real_T c4_c_hoistedGlobal;
  real_T c4_d_hoistedGlobal;
  real_T c4_e_hoistedGlobal;
  real_T c4_f_hoistedGlobal;
  real_T c4_g_hoistedGlobal;
  real_T c4_h_hoistedGlobal;
  real_T c4_u1;
  real_T c4_u2;
  real_T c4_u3;
  real_T c4_u4;
  real_T c4_u5;
  real_T c4_u6;
  real_T c4_u7;
  real_T c4_b_maxVal;
  real_T c4_d0;
  real_T c4_i_hoistedGlobal;
  real_T c4_j_hoistedGlobal;
  real_T c4_k_hoistedGlobal;
  real_T c4_l_hoistedGlobal;
  real_T c4_m_hoistedGlobal;
  real_T c4_n_hoistedGlobal;
  real_T c4_o_hoistedGlobal;
  real_T c4_p_hoistedGlobal;
  real_T c4_b_u1;
  real_T c4_b_u2;
  real_T c4_b_u3;
  real_T c4_b_u4;
  real_T c4_b_u5;
  real_T c4_b_u6;
  real_T c4_b_u7;
  real_T c4_b_minVal;
  real_T c4_d1;
  boolean_T c4_temp;
  boolean_T c4_b_temp;
  boolean_T c4_c_temp;
  real_T *c4_TCharger;
  real_T *c4_TIPT;
  real_T *c4_TMinBat;
  real_T *c4_TMaxBat;
  real_T *c4_TEngine;
  real_T *c4_EOffset;
  real_T *c4_TInverter;
  real_T *c4_ChargerIn;
  real_T *c4_c_u1;
  real_T *c4_c_u2;
  real_T *c4_c_u3;
  real_T *c4_c_u4;
  real_T *c4_c_u5;
  real_T *c4_c_u6;
  real_T *c4_c_u7;
  real_T *c4_c_maxVal;
  real_T *c4_d_u1;
  real_T *c4_d_u2;
  real_T *c4_d_u3;
  real_T *c4_d_u4;
  real_T *c4_d_u5;
  real_T *c4_d_u6;
  real_T *c4_d_u7;
  real_T *c4_c_minVal;
  real_T *c4_TDriver;
  real_T *c4_HOn;
  real_T *c4_THeat;
  real_T *c4_HThresh;
  real_T *c4_H1;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  real_T *c4_CorePump;
  c4_d_u7 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 23);
  c4_d_u6 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 22);
  c4_d_u5 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 21);
  c4_d_u4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 20);
  c4_d_u3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 19);
  c4_d_u2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 18);
  c4_d_u1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c4_c_minVal = (real_T *)ssGetInputPortSignal(chartInstance->S, 31);
  c4_c_u7 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 16);
  c4_c_u6 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 15);
  c4_c_u5 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c4_c_u4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c4_c_u3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c4_c_u2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c4_c_u1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c4_c_maxVal = (real_T *)ssGetInputPortSignal(chartInstance->S, 30);
  c4_EOffset = (real_T *)ssGetInputPortSignal(chartInstance->S, 27);
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c4_HThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c4_HOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c4_ChargerIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c4_TDriver = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c4_THeat = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_TInverter = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_TEngine = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_TMaxBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_TMinBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_TIPT = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_TCharger = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  c4_hoistedGlobal = *c4_TCharger;
  c4_b_hoistedGlobal = *c4_TIPT;
  c4_c_hoistedGlobal = *c4_TMinBat;
  c4_d_hoistedGlobal = *c4_TMaxBat;
  c4_e_hoistedGlobal = *c4_TEngine;
  c4_f_hoistedGlobal = *c4_EOffset;
  c4_g_hoistedGlobal = *c4_TInverter;
  c4_h_hoistedGlobal = *c4_ChargerIn;
  c4_u1 = c4_hoistedGlobal;
  c4_u2 = c4_b_hoistedGlobal;
  c4_u3 = c4_c_hoistedGlobal;
  c4_u4 = c4_d_hoistedGlobal;
  c4_u5 = c4_e_hoistedGlobal + c4_f_hoistedGlobal;
  c4_u6 = c4_g_hoistedGlobal;
  c4_u7 = c4_h_hoistedGlobal;
  sf_debug_symbol_scope_push(8U, 0U);
  sf_debug_symbol_scope_add_importable("maxVal", &c4_b_maxVal,
    c4_c_sf_marshallOut, c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u7", &c4_u7, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u6", &c4_u6, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u5", &c4_u5, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u4", &c4_u4, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u3", &c4_u3, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u2", &c4_u2, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u1", &c4_u1, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  _SFD_SET_DATA_VALUE_PTR(50U, &c4_b_maxVal);
  _SFD_SET_DATA_VALUE_PTR(57U, &c4_u7);
  _SFD_SET_DATA_VALUE_PTR(56U, &c4_u6);
  _SFD_SET_DATA_VALUE_PTR(55U, &c4_u5);
  _SFD_SET_DATA_VALUE_PTR(54U, &c4_u4);
  _SFD_SET_DATA_VALUE_PTR(53U, &c4_u3);
  _SFD_SET_DATA_VALUE_PTR(52U, &c4_u2);
  _SFD_SET_DATA_VALUE_PTR(51U, &c4_u1);
  _SFD_CS_CALL(FUNCTION_ACTIVE_TAG, 30U, chartInstance->c4_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 30U, chartInstance->c4_sfEvent);
  *c4_c_u1 = c4_u1;
  _SFD_DATA_RANGE_CHECK(*c4_c_u1, 51U);
  *c4_c_u2 = c4_u2;
  _SFD_DATA_RANGE_CHECK(*c4_c_u2, 52U);
  *c4_c_u3 = c4_u3;
  _SFD_DATA_RANGE_CHECK(*c4_c_u3, 53U);
  *c4_c_u4 = c4_u4;
  _SFD_DATA_RANGE_CHECK(*c4_c_u4, 54U);
  *c4_c_u5 = c4_u5;
  _SFD_DATA_RANGE_CHECK(*c4_c_u5, 55U);
  *c4_c_u6 = c4_u6;
  _SFD_DATA_RANGE_CHECK(*c4_c_u6, 56U);
  *c4_c_u7 = c4_u7;
  _SFD_DATA_RANGE_CHECK(*c4_c_u7, 57U);
  sf_call_output_fcn_call(chartInstance->S, 0, "calc_max", 0);
  c4_b_maxVal = *c4_c_maxVal;
  _SFD_DATA_RANGE_CHECK(c4_b_maxVal, 50U);
  _SFD_CS_CALL(FUNCTION_INACTIVE_TAG, 30U, chartInstance->c4_sfEvent);
  _SFD_UNSET_DATA_VALUE_PTR(50U);
  _SFD_UNSET_DATA_VALUE_PTR(57U);
  _SFD_UNSET_DATA_VALUE_PTR(56U);
  _SFD_UNSET_DATA_VALUE_PTR(55U);
  _SFD_UNSET_DATA_VALUE_PTR(54U);
  _SFD_UNSET_DATA_VALUE_PTR(53U);
  _SFD_UNSET_DATA_VALUE_PTR(52U);
  _SFD_UNSET_DATA_VALUE_PTR(51U);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, chartInstance->c4_sfEvent);
  sf_debug_symbol_scope_pop();
  chartInstance->c4_maxVal = c4_b_maxVal;
  _SFD_DATA_RANGE_CHECK(chartInstance->c4_maxVal, 40U);
  c4_d0 = chartInstance->c4_maxVal;
  sf_mex_printf("%s =\\n", "maxVal");
  sf_mex_call_debug("disp", 0U, 1U, 6, c4_d0);
  c4_i_hoistedGlobal = *c4_TCharger;
  c4_j_hoistedGlobal = *c4_TIPT;
  c4_k_hoistedGlobal = *c4_TMinBat;
  c4_l_hoistedGlobal = *c4_TMaxBat;
  c4_m_hoistedGlobal = *c4_TEngine;
  c4_n_hoistedGlobal = *c4_EOffset;
  c4_o_hoistedGlobal = *c4_TInverter;
  c4_p_hoistedGlobal = *c4_ChargerIn;
  c4_b_u1 = c4_i_hoistedGlobal;
  c4_b_u2 = c4_j_hoistedGlobal;
  c4_b_u3 = c4_k_hoistedGlobal;
  c4_b_u4 = c4_l_hoistedGlobal;
  c4_b_u5 = c4_m_hoistedGlobal + c4_n_hoistedGlobal;
  c4_b_u6 = c4_o_hoistedGlobal;
  c4_b_u7 = c4_p_hoistedGlobal;
  sf_debug_symbol_scope_push(8U, 0U);
  sf_debug_symbol_scope_add_importable("minVal", &c4_b_minVal,
    c4_c_sf_marshallOut, c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u7", &c4_b_u7, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u6", &c4_b_u6, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u5", &c4_b_u5, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u4", &c4_b_u4, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u3", &c4_b_u3, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u2", &c4_b_u2, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  sf_debug_symbol_scope_add_importable("u1", &c4_b_u1, c4_c_sf_marshallOut,
    c4_c_sf_marshallIn);
  _SFD_SET_DATA_VALUE_PTR(42U, &c4_b_minVal);
  _SFD_SET_DATA_VALUE_PTR(49U, &c4_b_u7);
  _SFD_SET_DATA_VALUE_PTR(48U, &c4_b_u6);
  _SFD_SET_DATA_VALUE_PTR(47U, &c4_b_u5);
  _SFD_SET_DATA_VALUE_PTR(46U, &c4_b_u4);
  _SFD_SET_DATA_VALUE_PTR(45U, &c4_b_u3);
  _SFD_SET_DATA_VALUE_PTR(44U, &c4_b_u2);
  _SFD_SET_DATA_VALUE_PTR(43U, &c4_b_u1);
  _SFD_CS_CALL(FUNCTION_ACTIVE_TAG, 31U, chartInstance->c4_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 31U, chartInstance->c4_sfEvent);
  *c4_d_u1 = c4_b_u1;
  _SFD_DATA_RANGE_CHECK(*c4_d_u1, 43U);
  *c4_d_u2 = c4_b_u2;
  _SFD_DATA_RANGE_CHECK(*c4_d_u2, 44U);
  *c4_d_u3 = c4_b_u3;
  _SFD_DATA_RANGE_CHECK(*c4_d_u3, 45U);
  *c4_d_u4 = c4_b_u4;
  _SFD_DATA_RANGE_CHECK(*c4_d_u4, 46U);
  *c4_d_u5 = c4_b_u5;
  _SFD_DATA_RANGE_CHECK(*c4_d_u5, 47U);
  *c4_d_u6 = c4_b_u6;
  _SFD_DATA_RANGE_CHECK(*c4_d_u6, 48U);
  *c4_d_u7 = c4_b_u7;
  _SFD_DATA_RANGE_CHECK(*c4_d_u7, 49U);
  sf_call_output_fcn_call(chartInstance->S, 1, "calc_min", 0);
  c4_b_minVal = *c4_c_minVal;
  _SFD_DATA_RANGE_CHECK(c4_b_minVal, 42U);
  _SFD_CS_CALL(FUNCTION_INACTIVE_TAG, 31U, chartInstance->c4_sfEvent);
  _SFD_UNSET_DATA_VALUE_PTR(42U);
  _SFD_UNSET_DATA_VALUE_PTR(49U);
  _SFD_UNSET_DATA_VALUE_PTR(48U);
  _SFD_UNSET_DATA_VALUE_PTR(47U);
  _SFD_UNSET_DATA_VALUE_PTR(46U);
  _SFD_UNSET_DATA_VALUE_PTR(45U);
  _SFD_UNSET_DATA_VALUE_PTR(44U);
  _SFD_UNSET_DATA_VALUE_PTR(43U);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, chartInstance->c4_sfEvent);
  sf_debug_symbol_scope_pop();
  chartInstance->c4_minVal = c4_b_minVal;
  _SFD_DATA_RANGE_CHECK(chartInstance->c4_minVal, 39U);
  c4_d1 = chartInstance->c4_minVal;
  sf_mex_printf("%s =\\n", "minVal");
  sf_mex_call_debug("disp", 0U, 1U, 6, c4_d1);
  c4_Fan(chartInstance);
  c4_RadBlend(chartInstance);
  c4_CoreBlend(chartInstance);
  c4_RadPump(chartInstance);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_Heater) {
   case c4_IN_Heat_0:
    CV_STATE_EVAL(12, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
                 chartInstance->c4_sfEvent);
    c4_temp = (_SFD_CCP_CALL(29U, 0, *c4_TDriver < *c4_HOn != 0U,
                chartInstance->c4_sfEvent) != 0);
    if (!c4_temp) {
      c4_temp = (_SFD_CCP_CALL(29U, 1, *c4_THeat > *c4_HThresh + 2.0 != 0U,
                  chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(29U, (int32_T)c4_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 29;
        sf_debug_transition_conflict_check_begin();
        if (chartInstance->c4_minVal < *c4_H1 - 1.0) {
          transitionList[numTransitions] = 31;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Heat_0 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Heater = c4_IN_Use_Wants_Heat;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Use_Wants_Heat = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_1H;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Heat_1H = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(31U, (int32_T)_SFD_CCP_CALL(31U, 0,
            chartInstance->c4_minVal < *c4_H1 - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_0 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Heater = c4_IN_System_Cold;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_System_Cold = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_System_Cold = c4_IN_Heat_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_1 = 1U;
      } else {
        *c4_Heat1 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
        *c4_Heat2 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
        *c4_Heat3 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
        *c4_Heat4 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_System_Cold:
    CV_STATE_EVAL(12, 0, 2);
    c4_System_Cold(chartInstance);
    break;

   case c4_IN_Use_Wants_Heat:
    CV_STATE_EVAL(12, 0, 3);
    c4_Use_Wants_Heat(chartInstance);
    break;

   default:
    CV_STATE_EVAL(12, 0, 0);
    chartInstance->c4_is_Heater = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, chartInstance->c4_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_CorePump) {
   case c4_IN_Off:
    CV_STATE_EVAL(4, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 40U,
                 chartInstance->c4_sfEvent);
    c4_b_temp = (_SFD_CCP_CALL(40U, 0, chartInstance->c4_minVal < *c4_H1 - 1.0
      != 0U, chartInstance->c4_sfEvent) != 0);
    if (!c4_b_temp) {
      c4_b_temp = (_SFD_CCP_CALL(40U, 1, *c4_TDriver >= *c4_HOn != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(40U, (int32_T)c4_b_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 40U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Off = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_CorePump = c4_IN_On;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_On = 1U;
    } else {
      *c4_CorePump = 0.0;
      _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_On:
    CV_STATE_EVAL(4, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 41U,
                 chartInstance->c4_sfEvent);
    c4_c_temp = (_SFD_CCP_CALL(41U, 0, chartInstance->c4_minVal > *c4_H1 + 1.0
      != 0U, chartInstance->c4_sfEvent) != 0);
    if (c4_c_temp) {
      c4_c_temp = (_SFD_CCP_CALL(41U, 1, *c4_TDriver < *c4_HOn != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(41U, (int32_T)c4_c_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 41U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_On = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_CorePump = c4_IN_Off;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Off = 1U;
    } else {
      *c4_CorePump = 1.0;
      _SFD_DATA_RANGE_CHECK(*c4_CorePump, 27U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(4, 0, 0);
    chartInstance->c4_is_CorePump = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c4_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
}

static void c4_Fan(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c4_temp;
  boolean_T c4_b_temp;
  boolean_T c4_c_temp;
  boolean_T c4_d_temp;
  boolean_T c4_e_temp;
  boolean_T c4_f_temp;
  boolean_T c4_g_temp;
  boolean_T c4_h_temp;
  boolean_T c4_i_temp;
  boolean_T c4_j_temp;
  boolean_T c4_k_temp;
  boolean_T c4_l_temp;
  boolean_T c4_m_temp;
  real_T *c4_FaultMax;
  real_T *c4_AC;
  real_T *c4_Defrost;
  real_T *c4_FLow;
  real_T *c4_FHigh;
  real_T *c4_fan;
  real_T *c4_FMed;
  c4_FaultMax = (real_T *)ssGetInputPortSignal(chartInstance->S, 29);
  c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FHigh = (real_T *)ssGetInputPortSignal(chartInstance->S, 21);
  c4_FMed = (real_T *)ssGetInputPortSignal(chartInstance->S, 20);
  c4_FLow = (real_T *)ssGetInputPortSignal(chartInstance->S, 19);
  c4_AC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_Defrost = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_Fan) {
   case c4_IN_FanHigh:
    CV_STATE_EVAL(7, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                 chartInstance->c4_sfEvent);
    c4_temp = !(_SFD_CCP_CALL(11U, 0, *c4_FaultMax != 0U,
      chartInstance->c4_sfEvent) != 0);
    if (c4_temp) {
      c4_temp = !(_SFD_CCP_CALL(11U, 1, *c4_AC != 0U, chartInstance->c4_sfEvent)
                  != 0);
    }

    c4_b_temp = c4_temp;
    if (c4_b_temp) {
      c4_b_temp = !(_SFD_CCP_CALL(11U, 2, *c4_Defrost != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    c4_c_temp = c4_b_temp;
    if (c4_c_temp) {
      c4_c_temp = (_SFD_CCP_CALL(11U, 3, chartInstance->c4_maxVal < *c4_FLow -
        1.0 != 0U, chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(11U, (int32_T)c4_c_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 11;
        sf_debug_transition_conflict_check_begin();
        if ((!(*c4_FaultMax != 0.0)) && (!(*c4_AC != 0.0)) && (!(*c4_Defrost !=
              0.0)) && (chartInstance->c4_maxVal < *c4_FHigh - 1.0)) {
          transitionList[numTransitions] = 12;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanHigh = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Fan = c4_IN_FanOff;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanOff = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   chartInstance->c4_sfEvent);
      c4_d_temp = !(_SFD_CCP_CALL(12U, 0, *c4_FaultMax != 0U,
        chartInstance->c4_sfEvent) != 0);
      if (c4_d_temp) {
        c4_d_temp = !(_SFD_CCP_CALL(12U, 1, *c4_AC != 0U,
          chartInstance->c4_sfEvent) != 0);
      }

      c4_e_temp = c4_d_temp;
      if (c4_e_temp) {
        c4_e_temp = !(_SFD_CCP_CALL(12U, 2, *c4_Defrost != 0U,
          chartInstance->c4_sfEvent) != 0);
      }

      c4_f_temp = c4_e_temp;
      if (c4_f_temp) {
        c4_f_temp = (_SFD_CCP_CALL(12U, 3, chartInstance->c4_maxVal < *c4_FHigh
          - 1.0 != 0U, chartInstance->c4_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(12U, (int32_T)c4_f_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanHigh = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Fan = c4_IN_FanMed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanMed = 1U;
      } else {
        *c4_fan = 3.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_FanLow:
    CV_STATE_EVAL(7, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, chartInstance->c4_sfEvent);
    c4_g_temp = (_SFD_CCP_CALL(5U, 0, *c4_FaultMax != 0U,
      chartInstance->c4_sfEvent) != 0);
    if (!c4_g_temp) {
      c4_g_temp = (_SFD_CCP_CALL(5U, 1, *c4_AC != 0U, chartInstance->c4_sfEvent)
                   != 0);
    }

    c4_h_temp = c4_g_temp;
    if (!c4_h_temp) {
      c4_h_temp = (_SFD_CCP_CALL(5U, 2, *c4_Defrost != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(5U, (int32_T)c4_h_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 5;
        sf_debug_transition_conflict_check_begin();
        if (chartInstance->c4_maxVal < *c4_FLow - 1.0) {
          transitionList[numTransitions] = 8;
          numTransitions++;
        }

        if (chartInstance->c4_maxVal > *c4_FMed + 1.0) {
          transitionList[numTransitions] = 9;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanLow = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Fan = c4_IN_FanHigh;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanHigh = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
            chartInstance->c4_maxVal < *c4_FLow - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 8;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c4_maxVal > *c4_FMed + 1.0) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanLow = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Fan = c4_IN_FanOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanOff = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
              chartInstance->c4_maxVal > *c4_FMed + 1.0 != 0U,
              chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_FanLow = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_Fan = c4_IN_FanMed;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_FanMed = 1U;
        } else {
          *c4_fan = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_FanMed:
    CV_STATE_EVAL(7, 0, 3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c4_sfEvent);
    c4_i_temp = (_SFD_CCP_CALL(6U, 0, *c4_FaultMax != 0U,
      chartInstance->c4_sfEvent) != 0);
    if (!c4_i_temp) {
      c4_i_temp = (_SFD_CCP_CALL(6U, 1, *c4_AC != 0U, chartInstance->c4_sfEvent)
                   != 0);
    }

    c4_j_temp = c4_i_temp;
    if (!c4_j_temp) {
      c4_j_temp = (_SFD_CCP_CALL(6U, 2, *c4_Defrost != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    c4_k_temp = c4_j_temp;
    if (!c4_k_temp) {
      c4_k_temp = (_SFD_CCP_CALL(6U, 3, chartInstance->c4_maxVal > *c4_FHigh +
        1.0 != 0U, chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(6U, (int32_T)c4_k_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 6;
        sf_debug_transition_conflict_check_begin();
        if (chartInstance->c4_maxVal < *c4_FMed - 1.0) {
          transitionList[numTransitions] = 10;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanMed = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Fan = c4_IN_FanHigh;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanHigh = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
            chartInstance->c4_maxVal < *c4_FMed - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanMed = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Fan = c4_IN_FanLow;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanLow = 1U;
      } else {
        *c4_fan = 2.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_FanOff:
    CV_STATE_EVAL(7, 0, 4);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U, chartInstance->c4_sfEvent);
    c4_l_temp = (_SFD_CCP_CALL(4U, 0, *c4_FaultMax != 0U,
      chartInstance->c4_sfEvent) != 0);
    if (!c4_l_temp) {
      c4_l_temp = (_SFD_CCP_CALL(4U, 1, *c4_AC != 0U, chartInstance->c4_sfEvent)
                   != 0);
    }

    c4_m_temp = c4_l_temp;
    if (!c4_m_temp) {
      c4_m_temp = (_SFD_CCP_CALL(4U, 2, *c4_Defrost != 0U,
        chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(4U, (int32_T)c4_m_temp)) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 4;
        sf_debug_transition_conflict_check_begin();
        if (chartInstance->c4_maxVal > *c4_FLow + 1.0) {
          transitionList[numTransitions] = 7;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanOff = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Fan = c4_IN_FanHigh;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_FanHigh = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
            chartInstance->c4_maxVal > *c4_FLow + 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanOff = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_Fan = c4_IN_FanLow;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_FanLow = 1U;
      } else {
        *c4_fan = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_fan, 28U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(7, 0, 0);
    chartInstance->c4_is_Fan = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c4_sfEvent);
}

static void c4_RadPump(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c4_temp;
  boolean_T c4_b_temp;
  real_T *c4_PumpOn;
  real_T *c4_H1;
  real_T *c4_b_RadPump;
  real_T *c4_PumpOff;
  c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c4_PumpOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c4_PumpOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 27U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_RadPump) {
   case c4_IN_Off:
    CV_STATE_EVAL(27, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 28U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 38U,
                 chartInstance->c4_sfEvent);
    c4_temp = (_SFD_CCP_CALL(38U, 0, chartInstance->c4_maxVal > *c4_PumpOn != 0U,
                chartInstance->c4_sfEvent) != 0);
    if (!c4_temp) {
      c4_temp = (_SFD_CCP_CALL(38U, 1, chartInstance->c4_minVal < *c4_H1 - 1.0
                  != 0U, chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(38U, (int32_T)c4_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Off = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_RadPump = c4_IN_On;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_On = 1U;
    } else {
      *c4_b_RadPump = 0.0;
      _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_On:
    CV_STATE_EVAL(27, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 29U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                 chartInstance->c4_sfEvent);
    c4_b_temp = (_SFD_CCP_CALL(39U, 0, chartInstance->c4_maxVal < *c4_PumpOff !=
      0U, chartInstance->c4_sfEvent) != 0);
    if (c4_b_temp) {
      c4_b_temp = (_SFD_CCP_CALL(39U, 1, chartInstance->c4_minVal > *c4_H1 + 1.0
        != 0U, chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(39U, (int32_T)c4_b_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_On = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_RadPump = c4_IN_Off;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Off = 1U;
    } else {
      *c4_b_RadPump = 1.0;
      _SFD_DATA_RANGE_CHECK(*c4_b_RadPump, 26U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(27, 0, 0);
    chartInstance->c4_is_RadPump = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, chartInstance->c4_sfEvent);
}

static void c4_RadBlend(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c4_temp;
  real_T *c4_PumpOn;
  real_T *c4_H1;
  real_T *c4_RadBlendOut;
  real_T *c4_PumpOff;
  c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c4_PumpOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c4_PumpOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 24U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_RadBlend) {
   case c4_IN_Closed:
    CV_STATE_EVAL(24, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 25U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                 chartInstance->c4_sfEvent);
    c4_temp = (_SFD_CCP_CALL(34U, 0, chartInstance->c4_maxVal > *c4_PumpOn != 0U,
                chartInstance->c4_sfEvent) != 0);
    if (c4_temp) {
      c4_temp = !(_SFD_CCP_CALL(34U, 1, chartInstance->c4_minVal < *c4_H1 - 1.0
        != 0U, chartInstance->c4_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(34U, (int32_T)c4_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Closed = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_RadBlend = c4_IN_Open;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Open = 1U;
    } else {
      *c4_RadBlendOut = 231.0;
      _SFD_DATA_RANGE_CHECK(*c4_RadBlendOut, 29U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 25U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_Open:
    CV_STATE_EVAL(24, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 26U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 35U,
                 chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(35U, (int32_T)_SFD_CCP_CALL(35U, 0,
          chartInstance->c4_maxVal < *c4_PumpOff != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Open = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_RadBlend = c4_IN_Closed;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Closed = 1U;
    } else {
      *c4_RadBlendOut = 20.0;
      _SFD_DATA_RANGE_CHECK(*c4_RadBlendOut, 29U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(24, 0, 0);
    chartInstance->c4_is_RadBlend = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 24U, chartInstance->c4_sfEvent);
}

static void c4_CoreBlend(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c4_H1;
  real_T *c4_CoreBlendOut;
  c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
  switch (chartInstance->c4_is_CoreBlend) {
   case c4_IN_Closed:
    CV_STATE_EVAL(1, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
                 chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(37U, (int32_T)_SFD_CCP_CALL(37U, 0,
          chartInstance->c4_minVal < *c4_H1 - 1.0 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Closed = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_CoreBlend = c4_IN_Open;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Open = 1U;
    } else {
      *c4_CoreBlendOut = 20.0;
      _SFD_DATA_RANGE_CHECK(*c4_CoreBlendOut, 30U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_Open:
    CV_STATE_EVAL(1, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 36U,
                 chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(36U, (int32_T)_SFD_CCP_CALL(36U, 0,
          chartInstance->c4_minVal > *c4_H1 + 1.0 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Open = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_CoreBlend = c4_IN_Closed;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
      chartInstance->c4_b_tp_Closed = 1U;
    } else {
      *c4_CoreBlendOut = 231.0;
      _SFD_DATA_RANGE_CHECK(*c4_CoreBlendOut, 30U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 0, 0);
    chartInstance->c4_is_CoreBlend = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
}

static void c4_System_Cold(SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c4_H1;
  real_T *c4_H2;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  real_T *c4_H3;
  real_T *c4_H4;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_H4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 25);
  c4_H3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 24);
  c4_H2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 23);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U, chartInstance->c4_sfEvent);
  if (CV_TRANSITION_EVAL(32U, (int32_T)_SFD_CCP_CALL(32U, 0,
        chartInstance->c4_minVal > *c4_H1 + 1.0 != 0U, chartInstance->c4_sfEvent)))
  {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, chartInstance->c4_sfEvent);
    switch (chartInstance->c4_is_System_Cold) {
     case c4_IN_Heat_1:
      CV_STATE_EVAL(14, 1, 1);
      chartInstance->c4_tp_Heat_1 = 0U;
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_2:
      CV_STATE_EVAL(14, 1, 2);
      chartInstance->c4_tp_Heat_2 = 0U;
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_3:
      CV_STATE_EVAL(14, 1, 3);
      chartInstance->c4_tp_Heat_3 = 0U;
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_4:
      CV_STATE_EVAL(14, 1, 4);
      chartInstance->c4_tp_Heat_4 = 0U;
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
      break;

     default:
      CV_STATE_EVAL(14, 1, 0);
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
      break;
    }

    chartInstance->c4_tp_System_Cold = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_Heater = c4_IN_Heat_0;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_Heat_0 = 1U;
  } else {
    switch (chartInstance->c4_is_System_Cold) {
     case c4_IN_Heat_1:
      CV_STATE_EVAL(14, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15U, 0,
            chartInstance->c4_minVal < *c4_H2 - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_System_Cold = c4_IN_Heat_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_2 = 1U;
      } else {
        *c4_Heat1 = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
        *c4_Heat2 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
        *c4_Heat3 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
        *c4_Heat4 = 0.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_2:
      CV_STATE_EVAL(14, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0,
            chartInstance->c4_minVal < *c4_H3 - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 16;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c4_minVal > *c4_H2 + 1.0) {
            transitionList[numTransitions] = 20;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_System_Cold = c4_IN_Heat_3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_3 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(20U, (int32_T)_SFD_CCP_CALL(20U, 0,
              chartInstance->c4_minVal > *c4_H2 + 1.0 != 0U,
              chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_2 = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_System_Cold = c4_IN_Heat_1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_1 = 1U;
        } else {
          *c4_Heat1 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
          *c4_Heat2 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
          *c4_Heat3 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
          *c4_Heat4 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_3:
      CV_STATE_EVAL(14, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
            chartInstance->c4_minVal < *c4_H4 - 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 17;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c4_minVal > *c4_H3 + 1.0) {
            transitionList[numTransitions] = 19;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_3 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_System_Cold = c4_IN_Heat_4;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_4 = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19U, 0,
              chartInstance->c4_minVal > *c4_H3 + 1.0 != 0U,
              chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_3 = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_System_Cold = c4_IN_Heat_2;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_2 = 1U;
        } else {
          *c4_Heat1 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
          *c4_Heat2 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
          *c4_Heat3 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
          *c4_Heat4 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Heat_4:
      CV_STATE_EVAL(14, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0,
            chartInstance->c4_minVal > *c4_H4 + 1.0 != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_4 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_System_Cold = c4_IN_Heat_3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Heat_3 = 1U;
      } else {
        *c4_Heat1 = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
        *c4_Heat2 = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
        *c4_Heat3 = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
        *c4_Heat4 = 1.0;
        _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, chartInstance->c4_sfEvent);
      break;

     default:
      CV_STATE_EVAL(14, 0, 0);
      chartInstance->c4_is_System_Cold = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, chartInstance->c4_sfEvent);
}

static void c4_Use_Wants_Heat(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c4_temp;
  real_T *c4_TDriver;
  real_T *c4_HOn;
  real_T *c4_THeat;
  real_T *c4_HThresh;
  real_T *c4_H1;
  real_T *c4_Heat1;
  real_T *c4_Heat2;
  real_T *c4_Heat3;
  real_T *c4_Heat4;
  c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
  c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
  c4_HThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c4_HOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c4_TDriver = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c4_THeat = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 19U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 30U, chartInstance->c4_sfEvent);
  c4_temp = (_SFD_CCP_CALL(30U, 0, *c4_TDriver >= *c4_HOn != 0U,
              chartInstance->c4_sfEvent) != 0);
  if (c4_temp) {
    c4_temp = (_SFD_CCP_CALL(30U, 1, *c4_THeat < *c4_HThresh - 2.0 != 0U,
                chartInstance->c4_sfEvent) != 0);
  }

  if (CV_TRANSITION_EVAL(30U, (int32_T)c4_temp)) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions = 1;
      transitionList[0] = 30;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c4_minVal < *c4_H1 - 1.0) {
        transitionList[numTransitions] = 33;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, chartInstance->c4_sfEvent);
    c4_exit_internal_Use_Wants_Heat(chartInstance);
    chartInstance->c4_tp_Use_Wants_Heat = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_Heater = c4_IN_Heat_0;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_Heat_0 = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 33U,
                 chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(33U, (int32_T)_SFD_CCP_CALL(33U, 0,
          chartInstance->c4_minVal < *c4_H1 - 1.0 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, chartInstance->c4_sfEvent);
      c4_exit_internal_Use_Wants_Heat(chartInstance);
      chartInstance->c4_tp_Use_Wants_Heat = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_Heater = c4_IN_System_Cold;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_System_Cold = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, chartInstance->c4_sfEvent);
      chartInstance->c4_is_System_Cold = c4_IN_Heat_1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
      chartInstance->c4_tp_Heat_1 = 1U;
    } else {
      switch (chartInstance->c4_is_Use_Wants_Heat) {
       case c4_IN_Heat_1H:
        CV_STATE_EVAL(19, 0, 1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(21U, (int32_T)_SFD_CCP_CALL(21U, 0, *c4_THeat <
              *c4_HThresh - 4.0 != 0U, chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_1H = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_2H;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_2H = 1U;
        } else {
          *c4_Heat1 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
          *c4_Heat2 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
          *c4_Heat3 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
          *c4_Heat4 = 0.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, chartInstance->c4_sfEvent);
        break;

       case c4_IN_Heat_2H:
        CV_STATE_EVAL(19, 0, 2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(22U, (int32_T)_SFD_CCP_CALL(22U, 0, *c4_THeat <
              *c4_HThresh - 8.0 != 0U, chartInstance->c4_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 22;
            sf_debug_transition_conflict_check_begin();
            if (*c4_THeat > *c4_HThresh) {
              transitionList[numTransitions] = 26;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_2H = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_3H;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_3H = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                       chartInstance->c4_sfEvent);
          if (CV_TRANSITION_EVAL(26U, (int32_T)_SFD_CCP_CALL(26U, 0, *c4_THeat >
                *c4_HThresh != 0U, chartInstance->c4_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, chartInstance->c4_sfEvent);
            chartInstance->c4_tp_Heat_2H = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
            chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_1H;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
            chartInstance->c4_tp_Heat_1H = 1U;
          } else {
            *c4_Heat1 = 1.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
            *c4_Heat2 = 1.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
            *c4_Heat3 = 0.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
            *c4_Heat4 = 0.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, chartInstance->c4_sfEvent);
        break;

       case c4_IN_Heat_3H:
        CV_STATE_EVAL(19, 0, 3);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 22U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(23U, (int32_T)_SFD_CCP_CALL(23U, 0, *c4_THeat <
              *c4_HThresh - 10.0 != 0U, chartInstance->c4_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 23;
            sf_debug_transition_conflict_check_begin();
            if (*c4_THeat > *c4_HThresh - 4.0) {
              transitionList[numTransitions] = 25;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_3H = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_4H;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_4H = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                       chartInstance->c4_sfEvent);
          if (CV_TRANSITION_EVAL(25U, (int32_T)_SFD_CCP_CALL(25U, 0, *c4_THeat >
                *c4_HThresh - 4.0 != 0U, chartInstance->c4_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, chartInstance->c4_sfEvent);
            chartInstance->c4_tp_Heat_3H = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
            chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_2H;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
            chartInstance->c4_tp_Heat_2H = 1U;
          } else {
            *c4_Heat1 = 1.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
            *c4_Heat2 = 1.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
            *c4_Heat3 = 1.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
            *c4_Heat4 = 0.0;
            _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, chartInstance->c4_sfEvent);
        break;

       case c4_IN_Heat_4H:
        CV_STATE_EVAL(19, 0, 4);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 23U,
                     chartInstance->c4_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24U, 0, *c4_THeat >
              *c4_HThresh - 8.0 != 0U, chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_4H = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_Use_Wants_Heat = c4_IN_Heat_3H;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_Heat_3H = 1U;
        } else {
          *c4_Heat1 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat1, 31U);
          *c4_Heat2 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat2, 32U);
          *c4_Heat3 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat3, 33U);
          *c4_Heat4 = 1.0;
          _SFD_DATA_RANGE_CHECK(*c4_Heat4, 34U);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, chartInstance->c4_sfEvent);
        break;

       default:
        CV_STATE_EVAL(19, 0, 0);
        chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, chartInstance->c4_sfEvent);
}

static void c4_exit_internal_Use_Wants_Heat
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  switch (chartInstance->c4_is_Use_Wants_Heat) {
   case c4_IN_Heat_1H:
    CV_STATE_EVAL(19, 1, 1);
    chartInstance->c4_tp_Heat_1H = 0U;
    chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_Heat_2H:
    CV_STATE_EVAL(19, 1, 2);
    chartInstance->c4_tp_Heat_2H = 0U;
    chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_Heat_3H:
    CV_STATE_EVAL(19, 1, 3);
    chartInstance->c4_tp_Heat_3H = 0U;
    chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, chartInstance->c4_sfEvent);
    break;

   case c4_IN_Heat_4H:
    CV_STATE_EVAL(19, 1, 4);
    chartInstance->c4_tp_Heat_4H = 0U;
    chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, chartInstance->c4_sfEvent);
    break;

   default:
    CV_STATE_EVAL(19, 1, 0);
    chartInstance->c4_is_Use_Wants_Heat = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, chartInstance->c4_sfEvent);
    break;
  }
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

const mxArray *sf_c4_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c4_nameCaptureInfo;
}

static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static int32_T c4_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i0, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent), &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  uint8_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint8_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static uint8_T c4_b_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_initialize_off, const char_T
  *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_initialize_off),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_initialize_off);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u0, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_tp_initialize_off;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_b_tp_initialize_off = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_initialize_off),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_initialize_off);
  *(uint8_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static real_T c4_d_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_RadPump, const char_T *c4_identifier)
{
  real_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_RadPump),
    &c4_thisId);
  sf_mex_destroy(&c4_b_RadPump);
  return c4_y;
}

static real_T c4_e_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d2;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d2, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d2;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_RadPump;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_b_RadPump = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_RadPump),
    &c4_thisId);
  sf_mex_destroy(&c4_b_RadPump);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_f_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier)
{
  const mxArray *c4_y = NULL;
  emlrtMsgIdentifier c4_thisId;
  c4_y = NULL;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  sf_mex_assign(&c4_y, c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_setSimStateSideEffectsInfo), &c4_thisId));
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
  return c4_y;
}

static const mxArray *c4_g_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId)
{
  const mxArray *c4_y = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe(&c4_u));
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void init_dsm_address_info(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c4_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2205018749U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(300149420U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1508620662U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(830246890U);
}

mxArray *sf_c4_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(793460008U);
    pr[1] = (double)(516921431U);
    pr[2] = (double)(2249111695U);
    pr[3] = (double)(3667517072U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,30,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,28,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,28,"type",mxType);
    }

    mxSetField(mxData,28,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,29,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,29,"type",mxType);
    }

    mxSetField(mxData,29,"complexity",mxCreateDoubleScalar(0));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c4_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[31],T\"CoreBlendOut\",},{M[1],M[28],T\"CorePump\",},{M[1],M[32],T\"Heat1\",},{M[1],M[33],T\"Heat2\",},{M[1],M[34],T\"Heat3\",},{M[1],M[35],T\"Heat4\",},{M[1],M[30],T\"RadBlendOut\",},{M[1],M[27],T\"RadPump\",},{M[1],M[29],T\"fan\",},{M[3],M[162],T\"count\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[3],M[153],T\"maxVal\",},{M[3],M[152],T\"minVal\",},{M[8],M[0],T\"is_active_c4_Mooventure2016_Rev5\",},{M[8],M[83],T\"is_active_Fan\",},{M[8],M[89],T\"is_active_Heater\",},{M[8],M[174],T\"is_active_RadPump\",},{M[8],M[175],T\"is_active_CorePump\",},{M[8],M[176],T\"is_active_RadBlend\",},{M[8],M[178],T\"is_active_CoreBlend\",},{M[9],M[0],T\"is_c4_Mooventure2016_Rev5\",}}",
    "100 S1x8'type','srcId','name','auxInfo'{{M[9],M[83],T\"is_Fan\",},{M[9],M[89],T\"is_Heater\",},{M[9],M[174],T\"is_RadPump\",},{M[9],M[175],T\"is_CorePump\",},{M[9],M[176],T\"is_RadBlend\",},{M[9],M[178],T\"is_CoreBlend\",},{M[9],M[217],T\"is_System_Cold\",},{M[9],M[218],T\"is_Use_Wants_Heat\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 28, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           4,
           35,
           46,
           58,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"TCharger");
          _SFD_SET_DATA_PROPS(1,1,1,0,"TIPT");
          _SFD_SET_DATA_PROPS(2,1,1,0,"TMinBat");
          _SFD_SET_DATA_PROPS(3,1,1,0,"TMaxBat");
          _SFD_SET_DATA_PROPS(4,1,1,0,"TEngine");
          _SFD_SET_DATA_PROPS(5,1,1,0,"TInverter");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Defrost");
          _SFD_SET_DATA_PROPS(7,1,1,0,"AC");
          _SFD_SET_DATA_PROPS(8,1,1,0,"THeat");
          _SFD_SET_DATA_PROPS(9,1,1,0,"RadBlendIn");
          _SFD_SET_DATA_PROPS(10,1,1,0,"CoreBlendIn");
          _SFD_SET_DATA_PROPS(11,1,1,0,"TDriver");
          _SFD_SET_DATA_PROPS(12,1,1,0,"ChargerIn");
          _SFD_SET_DATA_PROPS(13,1,1,0,"PumpOn");
          _SFD_SET_DATA_PROPS(14,1,1,0,"PumpOff");
          _SFD_SET_DATA_PROPS(15,1,1,0,"Cold");
          _SFD_SET_DATA_PROPS(16,1,1,0,"Warm");
          _SFD_SET_DATA_PROPS(17,1,1,0,"HOn");
          _SFD_SET_DATA_PROPS(18,1,1,0,"HThresh");
          _SFD_SET_DATA_PROPS(19,1,1,0,"FLow");
          _SFD_SET_DATA_PROPS(20,1,1,0,"FMed");
          _SFD_SET_DATA_PROPS(21,1,1,0,"FHigh");
          _SFD_SET_DATA_PROPS(22,1,1,0,"H1");
          _SFD_SET_DATA_PROPS(23,1,1,0,"H2");
          _SFD_SET_DATA_PROPS(24,1,1,0,"H3");
          _SFD_SET_DATA_PROPS(25,1,1,0,"H4");
          _SFD_SET_DATA_PROPS(26,2,0,1,"RadPump");
          _SFD_SET_DATA_PROPS(27,2,0,1,"CorePump");
          _SFD_SET_DATA_PROPS(28,2,0,1,"fan");
          _SFD_SET_DATA_PROPS(29,2,0,1,"RadBlendOut");
          _SFD_SET_DATA_PROPS(30,2,0,1,"CoreBlendOut");
          _SFD_SET_DATA_PROPS(31,2,0,1,"Heat1");
          _SFD_SET_DATA_PROPS(32,2,0,1,"Heat2");
          _SFD_SET_DATA_PROPS(33,2,0,1,"Heat3");
          _SFD_SET_DATA_PROPS(34,2,0,1,"Heat4");
          _SFD_SET_DATA_PROPS(35,1,1,0,"BlendThresh");
          _SFD_SET_DATA_PROPS(36,1,1,0,"EOffset");
          _SFD_SET_DATA_PROPS(37,1,1,0,"FaultPump");
          _SFD_SET_DATA_PROPS(38,1,1,0,"FaultMax");
          _SFD_SET_DATA_PROPS(39,0,0,0,"minVal");
          _SFD_SET_DATA_PROPS(40,0,0,0,"maxVal");
          _SFD_SET_DATA_PROPS(41,0,0,0,"count");
          _SFD_SET_DATA_PROPS(42,9,0,0,"");
          _SFD_SET_DATA_PROPS(43,8,0,0,"");
          _SFD_SET_DATA_PROPS(44,8,0,0,"");
          _SFD_SET_DATA_PROPS(45,8,0,0,"");
          _SFD_SET_DATA_PROPS(46,8,0,0,"");
          _SFD_SET_DATA_PROPS(47,8,0,0,"");
          _SFD_SET_DATA_PROPS(48,8,0,0,"");
          _SFD_SET_DATA_PROPS(49,8,0,0,"");
          _SFD_SET_DATA_PROPS(50,9,0,0,"");
          _SFD_SET_DATA_PROPS(51,8,0,0,"");
          _SFD_SET_DATA_PROPS(52,8,0,0,"");
          _SFD_SET_DATA_PROPS(53,8,0,0,"");
          _SFD_SET_DATA_PROPS(54,8,0,0,"");
          _SFD_SET_DATA_PROPS(55,8,0,0,"");
          _SFD_SET_DATA_PROPS(56,8,0,0,"");
          _SFD_SET_DATA_PROPS(57,8,0,0,"");
          _SFD_STATE_INFO(0,1,0);
          _SFD_STATE_INFO(1,0,1);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,1);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,1);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,1);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,0);
          _SFD_STATE_INFO(16,0,0);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,0);
          _SFD_STATE_INFO(22,0,0);
          _SFD_STATE_INFO(23,0,0);
          _SFD_STATE_INFO(24,0,1);
          _SFD_STATE_INFO(25,0,0);
          _SFD_STATE_INFO(26,0,0);
          _SFD_STATE_INFO(27,0,1);
          _SFD_STATE_INFO(28,0,0);
          _SFD_STATE_INFO(29,0,0);
          _SFD_STATE_INFO(32,0,0);
          _SFD_STATE_INFO(33,0,0);
          _SFD_STATE_INFO(34,0,0);
          _SFD_STATE_INFO(30,0,2);
          _SFD_STATE_INFO(31,0,2);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,32);
          _SFD_CH_SUBSTATE_INDEX(2,33);
          _SFD_CH_SUBSTATE_INDEX(3,34);
          _SFD_ST_SUBSTATE_COUNT(0,6);
          _SFD_ST_SUBSTATE_INDEX(0,0,7);
          _SFD_ST_SUBSTATE_INDEX(0,1,24);
          _SFD_ST_SUBSTATE_INDEX(0,2,1);
          _SFD_ST_SUBSTATE_INDEX(0,3,27);
          _SFD_ST_SUBSTATE_INDEX(0,4,12);
          _SFD_ST_SUBSTATE_INDEX(0,5,4);
          _SFD_ST_SUBSTATE_COUNT(7,4);
          _SFD_ST_SUBSTATE_INDEX(7,0,8);
          _SFD_ST_SUBSTATE_INDEX(7,1,9);
          _SFD_ST_SUBSTATE_INDEX(7,2,10);
          _SFD_ST_SUBSTATE_INDEX(7,3,11);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(24,2);
          _SFD_ST_SUBSTATE_INDEX(24,0,25);
          _SFD_ST_SUBSTATE_INDEX(24,1,26);
          _SFD_ST_SUBSTATE_COUNT(25,0);
          _SFD_ST_SUBSTATE_COUNT(26,0);
          _SFD_ST_SUBSTATE_COUNT(1,2);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(27,2);
          _SFD_ST_SUBSTATE_INDEX(27,0,28);
          _SFD_ST_SUBSTATE_INDEX(27,1,29);
          _SFD_ST_SUBSTATE_COUNT(28,0);
          _SFD_ST_SUBSTATE_COUNT(29,0);
          _SFD_ST_SUBSTATE_COUNT(12,3);
          _SFD_ST_SUBSTATE_INDEX(12,0,13);
          _SFD_ST_SUBSTATE_INDEX(12,1,14);
          _SFD_ST_SUBSTATE_INDEX(12,2,19);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,4);
          _SFD_ST_SUBSTATE_INDEX(14,0,15);
          _SFD_ST_SUBSTATE_INDEX(14,1,16);
          _SFD_ST_SUBSTATE_INDEX(14,2,17);
          _SFD_ST_SUBSTATE_INDEX(14,3,18);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(16,0);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(19,4);
          _SFD_ST_SUBSTATE_INDEX(19,0,20);
          _SFD_ST_SUBSTATE_INDEX(19,1,21);
          _SFD_ST_SUBSTATE_INDEX(19,2,22);
          _SFD_ST_SUBSTATE_INDEX(19,3,23);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(21,0);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(23,0);
          _SFD_ST_SUBSTATE_COUNT(4,2);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_INDEX(4,1,6);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(32,0);
          _SFD_ST_SUBSTATE_COUNT(33,0);
          _SFD_ST_SUBSTATE_COUNT(34,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,6,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,4,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,3,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(15,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(16,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(17,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(18,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(19,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(22,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(23,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(24,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(25,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(26,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(27,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(28,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(29,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(32,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(33,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(34,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(30,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(31,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

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

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 13, 19 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(4,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 13, 19 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(5,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 13, 19, 31 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26, 47 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_TRANS(6,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),7,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 15, 22, 34 };

          static unsigned int sEndGuardMap[] = { 10, 17, 29, 49 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3, 2, -1, -3, 3,
            -3 };

          _SFD_CV_INIT_TRANS(11,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),10,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 15, 22, 34 };

          static unsigned int sEndGuardMap[] = { 10, 17, 29, 50 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3, 2, -1, -3, 3,
            -3 };

          _SFD_CV_INIT_TRANS(12,4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),10,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(21,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(23,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(24,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(25,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(26,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 13, 36 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(29,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 14, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(30,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(31,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(32,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(33,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 15, 36 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(34,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(35,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(36,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(37,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 34 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(38,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 22 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(39,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(40,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(41,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(42,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(43,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(45,0,NULL,NULL,0,NULL);
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

          static unsigned int sEndGuardMap[] = { 13 };

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

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 13, 19 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 13, 19 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,4,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 13, 19, 31 };

          static unsigned int sEndGuardMap[] = { 9, 15, 26, 47 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,4,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 15, 22, 34 };

          static unsigned int sEndGuardMap[] = { 10, 17, 29, 49 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,4,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 15, 22, 34 };

          static unsigned int sEndGuardMap[] = { 10, 17, 29, 50 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              4,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(20,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(20,
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

        _SFD_TRANS_COV_WTS(19,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(21,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(21,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(22,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(22,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(23,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(23,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(24,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(24,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(25,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(25,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(26,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(26,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(27,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(27,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(28,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(28,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(29,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 13, 36 };

          _SFD_TRANS_COV_MAPS(29,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(30,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 20 };

          static unsigned int sEndGuardMap[] = { 14, 37 };

          _SFD_TRANS_COV_MAPS(30,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(31,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(31,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(32,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(32,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(33,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(33,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(34,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 15, 36 };

          _SFD_TRANS_COV_MAPS(34,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(35,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(35,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(36,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(36,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(37,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(37,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(38,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 34 };

          _SFD_TRANS_COV_MAPS(38,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(39,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 22 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          _SFD_TRANS_COV_MAPS(39,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(40,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 33 };

          _SFD_TRANS_COV_MAPS(40,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(41,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 21 };

          static unsigned int sEndGuardMap[] = { 15, 32 };

          _SFD_TRANS_COV_MAPS(41,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(42,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(42,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(43,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(43,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(44,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(44,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(45,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(45,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(36,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(37,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(38,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(39,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(40,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(41,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(42,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(43,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(44,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(45,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(46,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(47,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(48,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(49,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(50,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(51,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(52,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(53,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(54,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(55,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(56,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(57,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_VALUE_PTR(42,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(43,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(44,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(45,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(46,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(47,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(48,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(49,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(50,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(51,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(52,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(53,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(54,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(55,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(56,(void *)(NULL));
        _SFD_SET_DATA_VALUE_PTR(57,(void *)(NULL));

        {
          real_T *c4_TCharger;
          real_T *c4_TIPT;
          real_T *c4_TMinBat;
          real_T *c4_TMaxBat;
          real_T *c4_TEngine;
          real_T *c4_TInverter;
          real_T *c4_Defrost;
          real_T *c4_AC;
          real_T *c4_THeat;
          real_T *c4_RadBlendIn;
          real_T *c4_CoreBlendIn;
          real_T *c4_TDriver;
          real_T *c4_ChargerIn;
          real_T *c4_PumpOn;
          real_T *c4_PumpOff;
          real_T *c4_Cold;
          real_T *c4_Warm;
          real_T *c4_HOn;
          real_T *c4_HThresh;
          real_T *c4_FLow;
          real_T *c4_FMed;
          real_T *c4_FHigh;
          real_T *c4_H1;
          real_T *c4_H2;
          real_T *c4_H3;
          real_T *c4_H4;
          real_T *c4_b_RadPump;
          real_T *c4_CorePump;
          real_T *c4_fan;
          real_T *c4_RadBlendOut;
          real_T *c4_CoreBlendOut;
          real_T *c4_Heat1;
          real_T *c4_Heat2;
          real_T *c4_Heat3;
          real_T *c4_Heat4;
          real_T *c4_BlendThresh;
          real_T *c4_EOffset;
          real_T *c4_FaultPump;
          real_T *c4_FaultMax;
          c4_FaultMax = (real_T *)ssGetInputPortSignal(chartInstance->S, 29);
          c4_FaultPump = (real_T *)ssGetInputPortSignal(chartInstance->S, 28);
          c4_EOffset = (real_T *)ssGetInputPortSignal(chartInstance->S, 27);
          c4_BlendThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 26);
          c4_Heat4 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 9);
          c4_Heat3 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c4_Heat2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c4_Heat1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c4_CoreBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c4_RadBlendOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c4_fan = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c4_CorePump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c4_b_RadPump = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c4_H4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 25);
          c4_H3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 24);
          c4_H2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 23);
          c4_H1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 22);
          c4_FHigh = (real_T *)ssGetInputPortSignal(chartInstance->S, 21);
          c4_FMed = (real_T *)ssGetInputPortSignal(chartInstance->S, 20);
          c4_FLow = (real_T *)ssGetInputPortSignal(chartInstance->S, 19);
          c4_HThresh = (real_T *)ssGetInputPortSignal(chartInstance->S, 18);
          c4_HOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
          c4_Warm = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
          c4_Cold = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
          c4_PumpOff = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
          c4_PumpOn = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
          c4_ChargerIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
          c4_TDriver = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c4_CoreBlendIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c4_RadBlendIn = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c4_THeat = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c4_AC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c4_Defrost = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c4_TInverter = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c4_TEngine = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c4_TMaxBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c4_TMinBat = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c4_TIPT = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c4_TCharger = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c4_TCharger);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_TIPT);
          _SFD_SET_DATA_VALUE_PTR(2U, c4_TMinBat);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_TMaxBat);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_TEngine);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_TInverter);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_Defrost);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_AC);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_THeat);
          _SFD_SET_DATA_VALUE_PTR(9U, c4_RadBlendIn);
          _SFD_SET_DATA_VALUE_PTR(10U, c4_CoreBlendIn);
          _SFD_SET_DATA_VALUE_PTR(11U, c4_TDriver);
          _SFD_SET_DATA_VALUE_PTR(12U, c4_ChargerIn);
          _SFD_SET_DATA_VALUE_PTR(13U, c4_PumpOn);
          _SFD_SET_DATA_VALUE_PTR(14U, c4_PumpOff);
          _SFD_SET_DATA_VALUE_PTR(15U, c4_Cold);
          _SFD_SET_DATA_VALUE_PTR(16U, c4_Warm);
          _SFD_SET_DATA_VALUE_PTR(17U, c4_HOn);
          _SFD_SET_DATA_VALUE_PTR(18U, c4_HThresh);
          _SFD_SET_DATA_VALUE_PTR(19U, c4_FLow);
          _SFD_SET_DATA_VALUE_PTR(20U, c4_FMed);
          _SFD_SET_DATA_VALUE_PTR(21U, c4_FHigh);
          _SFD_SET_DATA_VALUE_PTR(22U, c4_H1);
          _SFD_SET_DATA_VALUE_PTR(23U, c4_H2);
          _SFD_SET_DATA_VALUE_PTR(24U, c4_H3);
          _SFD_SET_DATA_VALUE_PTR(25U, c4_H4);
          _SFD_SET_DATA_VALUE_PTR(26U, c4_b_RadPump);
          _SFD_SET_DATA_VALUE_PTR(27U, c4_CorePump);
          _SFD_SET_DATA_VALUE_PTR(28U, c4_fan);
          _SFD_SET_DATA_VALUE_PTR(29U, c4_RadBlendOut);
          _SFD_SET_DATA_VALUE_PTR(30U, c4_CoreBlendOut);
          _SFD_SET_DATA_VALUE_PTR(31U, c4_Heat1);
          _SFD_SET_DATA_VALUE_PTR(32U, c4_Heat2);
          _SFD_SET_DATA_VALUE_PTR(33U, c4_Heat3);
          _SFD_SET_DATA_VALUE_PTR(34U, c4_Heat4);
          _SFD_SET_DATA_VALUE_PTR(35U, c4_BlendThresh);
          _SFD_SET_DATA_VALUE_PTR(36U, c4_EOffset);
          _SFD_SET_DATA_VALUE_PTR(37U, c4_FaultPump);
          _SFD_SET_DATA_VALUE_PTR(38U, c4_FaultMax);
          _SFD_SET_DATA_VALUE_PTR(39U, &chartInstance->c4_minVal);
          _SFD_SET_DATA_VALUE_PTR(40U, &chartInstance->c4_maxVal);
          _SFD_SET_DATA_VALUE_PTR(41U, &chartInstance->c4_count);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c4_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_Mooventure2016_Rev5
    ((SFc4_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c4_Mooventure2016_Rev5(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_Mooventure2016_Rev5
    ((SFc4_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c4_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c4_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c4_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c4_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c4_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c4_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_Mooventure2016_Rev5((SFc4_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_Mooventure2016_Rev5
      ((SFc4_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",4,"gatewayCannotBeInlinedMultipleTimes"));
    sf_mark_output_events_with_multiple_callers(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",4,2);
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
      ssSetInputPortOptimOpts(S, 28, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 29, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 30, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 31, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",4,30);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",4,23);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1531772600U));
  ssSetChecksum1(S,(2328258190U));
  ssSetChecksum2(S,(2649023740U));
  ssSetChecksum3(S,(281746770U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c4_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",4);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c4_Mooventure2016_Rev5(SimStruct *S)
{
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc4_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc4_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_Mooventure2016_Rev5;
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

void c4_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
