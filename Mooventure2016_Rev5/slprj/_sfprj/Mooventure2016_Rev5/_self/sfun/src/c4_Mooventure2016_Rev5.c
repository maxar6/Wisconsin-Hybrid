/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c4_Mooventure2016_Rev5.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c4_IN_NO_ACTIVE_CHILD          (0U)
#define c4_IN_MotorDisabled            (4U)
#define c4_IN_MotorEnabled             (5U)
#define c4_IN_TimerRunningOne          (6U)
#define c4_IN_TimerRunningTwo          (7U)
#define c4_IN_Init                     (3U)
#define c4_IN_IPTAwake                 (1U)
#define c4_IN_IPTEnable                (2U)

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
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static int32_T c4_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_sfEvent, const char_T *c4_identifier);
static int32_T c4_b_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static uint8_T c4_c_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_MotorDisabled, const char_T
  *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static boolean_T c4_e_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_MotorEnable, const char_T *c4_identifier);
static boolean_T c4_f_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint32_T c4_g_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_previousTicks, const char_T *c4_identifier);
static uint32_T c4_h_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static const mxArray *c4_i_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier);
static const mxArray *c4_j_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId);
static int32_T c4__s32_add__(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, int32_T c4_b, int32_T c4_c);
static void init_dsm_address_info(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c4_MotorEnable;
  boolean_T *c4_IPTWake;
  boolean_T *c4_IPTEnable;
  c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_doSetSimStateSideEffects = 0U;
  chartInstance->c4_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_tp_IPTAwake = 0U;
  chartInstance->c4_tp_IPTEnable = 0U;
  chartInstance->c4_tp_Init = 0U;
  chartInstance->c4_tp_MotorDisabled = 0U;
  chartInstance->c4_tp_MotorEnabled = 0U;
  chartInstance->c4_tp_TimerRunningOne = 0U;
  chartInstance->c4_tp_TimerRunningTwo = 0U;
  chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = 0U;
  chartInstance->c4_is_c4_Mooventure2016_Rev5 = 0U;
  chartInstance->c4_motorcount = 0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c4_MotorEnable = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c4_IPTWake = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c4_IPTEnable = FALSE;
  }

  chartInstance->c4_presentTicks = 0U;
  chartInstance->c4_elapsedTicks = 0U;
  chartInstance->c4_previousTicks = 0U;
}

static void initialize_params_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c4_Mooventure2016_Rev5(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c4_d0;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c4_d0 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c4_presentTicks = (uint32_T)c4_d0;
  chartInstance->c4_previousTicks = chartInstance->c4_presentTicks;
}

static void disable_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T c4_d1;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c4_d1 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c4_presentTicks = (uint32_T)c4_d1;
  chartInstance->c4_elapsedTicks = chartInstance->c4_presentTicks -
    chartInstance->c4_previousTicks;
  chartInstance->c4_previousTicks = chartInstance->c4_presentTicks;
  if ((uint32_T)chartInstance->c4_temporalCounter_i1 +
      chartInstance->c4_elapsedTicks <= 7U) {
    chartInstance->c4_temporalCounter_i1 = (uint8_T)((uint32_T)
      chartInstance->c4_temporalCounter_i1 + chartInstance->c4_elapsedTicks);
  } else {
    chartInstance->c4_temporalCounter_i1 = 7U;
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

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_MotorDisabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_MotorEnabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_TimerRunningOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_TimerRunningTwo) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_IPTAwake) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_IPTEnable) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  }

  sf_debug_set_animation(c4_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  boolean_T c4_hoistedGlobal;
  boolean_T c4_u;
  const mxArray *c4_b_y = NULL;
  boolean_T c4_b_hoistedGlobal;
  boolean_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  boolean_T c4_c_hoistedGlobal;
  boolean_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  int32_T c4_d_hoistedGlobal;
  int32_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  uint8_T c4_e_hoistedGlobal;
  uint8_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  uint8_T c4_f_hoistedGlobal;
  uint8_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  uint8_T c4_g_hoistedGlobal;
  uint8_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  uint32_T c4_h_hoistedGlobal;
  uint32_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  boolean_T *c4_IPTEnable;
  boolean_T *c4_IPTWake;
  boolean_T *c4_MotorEnable;
  c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(8));
  c4_hoistedGlobal = *c4_IPTEnable;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal = *c4_IPTWake;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_c_hoistedGlobal = *c4_MotorEnable;
  c4_c_u = c4_c_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = chartInstance->c4_motorcount;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 6, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_e_hoistedGlobal = chartInstance->c4_is_active_c4_Mooventure2016_Rev5;
  c4_e_u = c4_e_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_f_hoistedGlobal = chartInstance->c4_is_c4_Mooventure2016_Rev5;
  c4_f_u = c4_f_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_g_hoistedGlobal = chartInstance->c4_temporalCounter_i1;
  c4_g_u = c4_g_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_h_hoistedGlobal = chartInstance->c4_previousTicks;
  c4_h_u = c4_h_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 7, c4_i_y);
  sf_mex_assign(&c4_st, c4_y);
  return c4_st;
}

static void set_sim_state_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  boolean_T *c4_IPTEnable;
  boolean_T *c4_IPTWake;
  boolean_T *c4_MotorEnable;
  c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_u = sf_mex_dup(c4_st);
  *c4_IPTEnable = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 0)), "IPTEnable");
  *c4_IPTWake = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 1)), "IPTWake");
  *c4_MotorEnable = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 2)), "MotorEnable");
  chartInstance->c4_motorcount = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 3)), "motorcount");
  chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 4)),
     "is_active_c4_Mooventure2016_Rev5");
  chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 5)),
     "is_c4_Mooventure2016_Rev5");
  chartInstance->c4_temporalCounter_i1 = c4_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 6)), "temporalCounter_i1");
  chartInstance->c4_previousTicks = c4_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 7)), "previousTicks");
  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 8)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c4_u);
  chartInstance->c4_doSetSimStateSideEffects = 1U;
  c4_update_debugger_state_c4_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void c4_set_sim_state_side_effects_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c4_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_IPTAwake) {
      chartInstance->c4_tp_IPTAwake = 1U;
      if (sf_mex_sub(chartInstance->c4_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        chartInstance->c4_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c4_tp_IPTAwake = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_IPTEnable) {
      chartInstance->c4_tp_IPTEnable = 1U;
      if (sf_mex_sub(chartInstance->c4_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        chartInstance->c4_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c4_tp_IPTEnable = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_Init) {
      chartInstance->c4_tp_Init = 1U;
      if (sf_mex_sub(chartInstance->c4_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 4) == 0.0) {
        chartInstance->c4_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c4_tp_Init = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_MotorDisabled) {
      chartInstance->c4_tp_MotorDisabled = 1U;
    } else {
      chartInstance->c4_tp_MotorDisabled = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_MotorEnabled) {
      chartInstance->c4_tp_MotorEnabled = 1U;
    } else {
      chartInstance->c4_tp_MotorEnabled = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_TimerRunningOne) {
      chartInstance->c4_tp_TimerRunningOne = 1U;
    } else {
      chartInstance->c4_tp_TimerRunningOne = 0U;
    }

    if (chartInstance->c4_is_c4_Mooventure2016_Rev5 == c4_IN_TimerRunningTwo) {
      chartInstance->c4_tp_TimerRunningTwo = 1U;
    } else {
      chartInstance->c4_tp_TimerRunningTwo = 0U;
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
  real_T c4_d2;
  boolean_T *c4_MotorReady;
  boolean_T *c4_MotorEnable;
  int32_T *c4_Motor_Kill_Time;
  boolean_T *c4_IPTWake;
  boolean_T *c4_IPTEnable;
  boolean_T *c4_VehicleReady;
  c4_VehicleReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_Motor_Kill_Time = (int32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_MotorReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c4_set_sim_state_side_effects_c4_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c4_d2 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c4_presentTicks = (uint32_T)c4_d2;
  chartInstance->c4_elapsedTicks = chartInstance->c4_presentTicks -
    chartInstance->c4_previousTicks;
  chartInstance->c4_previousTicks = chartInstance->c4_presentTicks;
  if ((uint32_T)chartInstance->c4_temporalCounter_i1 +
      chartInstance->c4_elapsedTicks <= 7U) {
    chartInstance->c4_temporalCounter_i1 = (uint8_T)((uint32_T)
      chartInstance->c4_temporalCounter_i1 + chartInstance->c4_elapsedTicks);
  } else {
    chartInstance->c4_temporalCounter_i1 = 7U;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorReady, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_Motor_Kill_Time, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_VehicleReady, 6U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c4_chartstep_c4_Mooventure2016_Rev5
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c4_temp;
  boolean_T c4_b_temp;
  boolean_T *c4_IPTWake;
  boolean_T *c4_IPTEnable;
  boolean_T *c4_MotorEnable;
  boolean_T *c4_MotorReady;
  boolean_T *c4_VehicleReady;
  int32_T *c4_Motor_Kill_Time;
  c4_VehicleReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_Motor_Kill_Time = (int32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_MotorReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
  if ((int16_T)chartInstance->c4_is_active_c4_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_active_c4_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
    chartInstance->c4_temporalCounter_i1 = 0U;
    chartInstance->c4_tp_Init = 1U;
  } else {
    switch (chartInstance->c4_is_c4_Mooventure2016_Rev5) {
     case c4_IN_IPTAwake:
      CV_CHART_EVAL(3, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, (uint32_T)
            chartInstance->c4_temporalCounter_i1 >= 3U != 0U,
            chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_IPTAwake = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_IPTEnable;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
        chartInstance->c4_temporalCounter_i1 = 0U;
        chartInstance->c4_tp_IPTEnable = 1U;
      } else {
        *c4_IPTWake = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
        *c4_IPTEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
        *c4_MotorEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_IPTEnable:
      CV_CHART_EVAL(3, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   chartInstance->c4_sfEvent);
      c4_temp = (_SFD_CCP_CALL(9U, 0, *c4_MotorReady != 0U,
                  chartInstance->c4_sfEvent) != 0);
      if (c4_temp) {
        c4_temp = (_SFD_CCP_CALL(9U, 1, (uint32_T)
                    chartInstance->c4_temporalCounter_i1 >= 5U != 0U,
                    chartInstance->c4_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(9U, (int32_T)c4_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_IPTEnable = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_MotorDisabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_MotorDisabled = 1U;
        chartInstance->c4_motorcount = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
      } else {
        *c4_IPTWake = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
        *c4_IPTEnable = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
        *c4_MotorEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_Init:
      CV_CHART_EVAL(3, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c4_sfEvent);
      c4_b_temp = (_SFD_CCP_CALL(8U, 0, *c4_VehicleReady != 0U,
        chartInstance->c4_sfEvent) != 0);
      if (c4_b_temp) {
        c4_b_temp = (_SFD_CCP_CALL(8U, 1, (uint32_T)
          chartInstance->c4_temporalCounter_i1 >= 5U != 0U,
          chartInstance->c4_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(8U, (int32_T)c4_b_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_Init = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_IPTAwake;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_temporalCounter_i1 = 0U;
        chartInstance->c4_tp_IPTAwake = 1U;
      } else {
        *c4_MotorEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
        *c4_IPTWake = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
        *c4_IPTEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_MotorDisabled:
      CV_CHART_EVAL(3, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0, *c4_MotorReady !=
            0U, chartInstance->c4_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_MotorDisabled = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_TimerRunningOne;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_TimerRunningOne = 1U;
      } else {
        *c4_MotorEnable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
        *c4_IPTWake = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
        *c4_IPTEnable = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_MotorEnabled:
      CV_CHART_EVAL(3, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(3U, !(_SFD_CCP_CALL(3U, 0, *c4_MotorReady != 0U,
             chartInstance->c4_sfEvent) != 0))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_MotorEnabled = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_TimerRunningTwo;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_TimerRunningTwo = 1U;
      } else {
        *c4_MotorEnable = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MotorEnable, 1U);
        *c4_IPTWake = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTWake, 4U);
        *c4_IPTEnable = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPTEnable, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_TimerRunningOne:
      CV_CHART_EVAL(3, 0, 6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
            chartInstance->c4_motorcount >= *c4_Motor_Kill_Time != 0U,
            chartInstance->c4_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if (!*c4_MotorReady) {
            transitionList[numTransitions] = 2;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_TimerRunningOne = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_MotorEnabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_MotorEnabled = 1U;
        chartInstance->c4_motorcount = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2U, 0, *c4_MotorReady != 0U,
               chartInstance->c4_sfEvent) != 0))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_TimerRunningOne = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_MotorDisabled;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_MotorDisabled = 1U;
          chartInstance->c4_motorcount = 0;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
        } else {
          chartInstance->c4_motorcount = c4__s32_add__(chartInstance,
            chartInstance->c4_motorcount, 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c4_sfEvent);
      break;

     case c4_IN_TimerRunningTwo:
      CV_CHART_EVAL(3, 0, 7);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c4_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c4_MotorReady !=
            0U, chartInstance->c4_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c4_motorcount >= *c4_Motor_Kill_Time) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_TimerRunningTwo = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
        chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_MotorEnabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
        chartInstance->c4_tp_MotorEnabled = 1U;
        chartInstance->c4_motorcount = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     chartInstance->c4_sfEvent);
        if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
              chartInstance->c4_motorcount >= *c4_Motor_Kill_Time != 0U,
              chartInstance->c4_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_TimerRunningTwo = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
          chartInstance->c4_is_c4_Mooventure2016_Rev5 = c4_IN_MotorDisabled;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
          chartInstance->c4_tp_MotorDisabled = 1U;
          chartInstance->c4_motorcount = 0;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
        } else {
          chartInstance->c4_motorcount = c4__s32_add__(chartInstance,
            chartInstance->c4_motorcount, 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_motorcount, 2U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c4_sfEvent);
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
  *chartInstance, const mxArray *c4_b_sfEvent, const char_T *c4_identifier)
{
  int32_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  return c4_y;
}

static int32_T c4_b_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
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
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
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

static uint8_T c4_c_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_MotorDisabled, const char_T
  *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_MotorDisabled),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_MotorDisabled);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
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
  const mxArray *c4_b_tp_MotorDisabled;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_b_tp_MotorDisabled = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_MotorDisabled),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_MotorDisabled);
  *(uint8_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  boolean_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(boolean_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static boolean_T c4_e_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_MotorEnable, const char_T *c4_identifier)
{
  boolean_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_MotorEnable),
    &c4_thisId);
  sf_mex_destroy(&c4_MotorEnable);
  return c4_y;
}

static boolean_T c4_f_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  boolean_T c4_y;
  boolean_T c4_b0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b0, 1, 11, 0U, 0, 0U, 0);
  c4_y = c4_b0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_MotorEnable;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  boolean_T c4_y;
  SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc4_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c4_MotorEnable = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_MotorEnable),
    &c4_thisId);
  sf_mex_destroy(&c4_MotorEnable);
  *(boolean_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static uint32_T c4_g_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_b_previousTicks, const char_T *c4_identifier)
{
  uint32_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_previousTicks),
    &c4_thisId);
  sf_mex_destroy(&c4_b_previousTicks);
  return c4_y;
}

static uint32_T c4_h_emlrt_marshallIn(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint32_T c4_y;
  uint32_T c4_u1;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u1, 1, 7, 0U, 0, 0U, 0);
  c4_y = c4_u1;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static const mxArray *c4_i_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier)
{
  const mxArray *c4_y = NULL;
  emlrtMsgIdentifier c4_thisId;
  c4_y = NULL;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  sf_mex_assign(&c4_y, c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_setSimStateSideEffectsInfo), &c4_thisId));
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
  return c4_y;
}

static const mxArray *c4_j_emlrt_marshallIn
  (SFc4_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c4_u,
   const emlrtMsgIdentifier *c4_parentId)
{
  const mxArray *c4_y = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe(&c4_u));
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static int32_T c4__s32_add__(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance, int32_T c4_b, int32_T c4_c)
{
  int32_T c4_a;
  c4_a = c4_b + c4_c;
  if (((c4_a ^ c4_b) & (c4_a ^ c4_c)) < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c4_a;
}

static void init_dsm_address_info(SFc4_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c4_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1523926662U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2780226198U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3705983952U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2510469325U);
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
    pr[0] = (double)(1687081640U);
    pr[1] = (double)(3965844404U);
    pr[2] = (double)(1733984238U);
    pr[3] = (double)(982763576U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[73],T\"IPTEnable\",},{M[1],M[74],T\"IPTWake\",},{M[1],M[36],T\"MotorEnable\",},{M[3],M[49],T\"motorcount\",},{M[8],M[0],T\"is_active_c4_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c4_Mooventure2016_Rev5\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x3[76 79 82],M[1]}}},{M[13],M[0],T\"previousTicks\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
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
           7,
           10,
           7,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"MotorReady");
          _SFD_SET_DATA_PROPS(1,2,0,1,"MotorEnable");
          _SFD_SET_DATA_PROPS(2,0,0,0,"motorcount");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Motor_Kill_Time");
          _SFD_SET_DATA_PROPS(4,2,0,1,"IPTWake");
          _SFD_SET_DATA_PROPS(5,2,0,1,"IPTEnable");
          _SFD_SET_DATA_PROPS(6,1,1,0,"VehicleReady");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_CH_SUBSTATE_COUNT(7);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
        }

        _SFD_CV_INIT_CHART(7,1,0,0);

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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 13, 29 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 12 };

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

        _SFD_TRANS_COV_WTS(6,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 13, 29 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 27 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)c4_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c4_MotorReady;
          boolean_T *c4_MotorEnable;
          int32_T *c4_Motor_Kill_Time;
          boolean_T *c4_IPTWake;
          boolean_T *c4_IPTEnable;
          boolean_T *c4_VehicleReady;
          c4_VehicleReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c4_IPTEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c4_IPTWake = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c4_Motor_Kill_Time = (int32_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c4_MotorEnable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c4_MotorReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c4_MotorReady);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_MotorEnable);
          _SFD_SET_DATA_VALUE_PTR(2U, &chartInstance->c4_motorcount);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_Motor_Kill_Time);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_IPTWake);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_IPTEnable);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_VehicleReady);
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
  ssSetNeedAbsoluteTime(S,1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",4,"RTWCG"));
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",4,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",4,3);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",4,3);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3245576231U));
  ssSetChecksum1(S,(3070730270U));
  ssSetChecksum2(S,(1210744026U));
  ssSetChecksum3(S,(381326087U));
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
