/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c1_Mooventure2016_Rev5.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_Initial                  (3U)
#define c1_IN_Batterybootup            (1U)
#define c1_IN_Charging_and_Temp        (2U)
#define c1_IN_Normal_Operation         (5U)
#define c1_IN_Shutdown_Sequence        (6U)
#define c1_IN_Kill_Component_Keyed     (4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c1_Mooventure2016_Rev5(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void disable_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c1_Mooventure2016_Rev5(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c1_chartstep_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c1_Batterybootup(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static int32_T c1_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static uint8_T c1_b_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_b_tp_Initial, const char_T *c1_identifier);
static uint8_T c1_c_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static boolean_T c1_d_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_Vehicle_Enable, const char_T *c1_identifier);
static boolean_T c1_e_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint32_T c1_f_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_b_previousTicks, const char_T *c1_identifier);
static uint32_T c1_g_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static const mxArray *c1_h_emlrt_marshallIn
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier);
static const mxArray *c1_i_emlrt_marshallIn
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c1_u,
   const emlrtMsgIdentifier *c1_parentId);
static void init_dsm_address_info(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_tp_Batterybootup = 0U;
  chartInstance->c1_tp_Charging_and_Temp = 0U;
  chartInstance->c1_tp_Initial = 0U;
  chartInstance->c1_tp_Kill_Component_Keyed = 0U;
  chartInstance->c1_tp_Normal_Operation = 0U;
  chartInstance->c1_tp_Shutdown_Sequence = 0U;
  chartInstance->c1_is_active_c1_Mooventure2016_Rev5 = 0U;
  chartInstance->c1_is_c1_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_Vehicle_Enable = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c1_Vehicle_Ready = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c1_Torque_Enable = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c1_Keyed_Relay = FALSE;
  }

  chartInstance->c1_presentTicks = 0U;
  chartInstance->c1_elapsedTicks = 0U;
  chartInstance->c1_previousTicks = 0U;
}

static void initialize_params_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c1_Mooventure2016_Rev5(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c1_d0;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c1_d0 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c1_presentTicks = (uint32_T)c1_d0;
  chartInstance->c1_previousTicks = chartInstance->c1_presentTicks;
}

static void disable_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T c1_d1;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c1_d1 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c1_presentTicks = (uint32_T)c1_d1;
  chartInstance->c1_elapsedTicks = chartInstance->c1_presentTicks -
    chartInstance->c1_previousTicks;
  chartInstance->c1_previousTicks = chartInstance->c1_presentTicks;
  if ((uint32_T)chartInstance->c1_temporalCounter_i1 +
      chartInstance->c1_elapsedTicks <= 7U) {
    chartInstance->c1_temporalCounter_i1 = (uint8_T)((uint32_T)
      chartInstance->c1_temporalCounter_i1 + chartInstance->c1_elapsedTicks);
  } else {
    chartInstance->c1_temporalCounter_i1 = 7U;
  }
}

static void c1_update_debugger_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c1_is_active_c1_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Initial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Batterybootup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Charging_and_Temp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Normal_Operation) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Shutdown_Sequence) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
  }

  if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Kill_Component_Keyed)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  boolean_T c1_hoistedGlobal;
  boolean_T c1_u;
  const mxArray *c1_b_y = NULL;
  boolean_T c1_b_hoistedGlobal;
  boolean_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  boolean_T c1_c_hoistedGlobal;
  boolean_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  boolean_T c1_d_hoistedGlobal;
  boolean_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_e_hoistedGlobal;
  uint8_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_f_hoistedGlobal;
  uint8_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  uint8_T c1_g_hoistedGlobal;
  uint8_T c1_g_u;
  const mxArray *c1_h_y = NULL;
  uint32_T c1_h_hoistedGlobal;
  uint32_T c1_h_u;
  const mxArray *c1_i_y = NULL;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(8));
  c1_hoistedGlobal = *c1_Keyed_Relay;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *c1_Torque_Enable;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *c1_Vehicle_Enable;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *c1_Vehicle_Ready;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = chartInstance->c1_is_active_c1_Mooventure2016_Rev5;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = chartInstance->c1_is_c1_Mooventure2016_Rev5;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = chartInstance->c1_temporalCounter_i1;
  c1_g_u = c1_g_hoistedGlobal;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_h_hoistedGlobal = chartInstance->c1_previousTicks;
  c1_h_u = c1_h_hoistedGlobal;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_h_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 7, c1_i_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_Keyed_Relay = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 0)), "Keyed_Relay");
  *c1_Torque_Enable = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "Torque_Enable");
  *c1_Vehicle_Enable = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "Vehicle_Enable");
  *c1_Vehicle_Ready = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "Vehicle_Ready");
  chartInstance->c1_is_active_c1_Mooventure2016_Rev5 = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
     "is_active_c1_Mooventure2016_Rev5");
  chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 5)),
     "is_c1_Mooventure2016_Rev5");
  chartInstance->c1_temporalCounter_i1 = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 6)), "temporalCounter_i1");
  chartInstance->c1_previousTicks = c1_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 7)), "previousTicks");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 8)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Batterybootup) {
      chartInstance->c1_tp_Batterybootup = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_Batterybootup = 0U;
    }

    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Charging_and_Temp)
    {
      chartInstance->c1_tp_Charging_and_Temp = 1U;
    } else {
      chartInstance->c1_tp_Charging_and_Temp = 0U;
    }

    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Initial) {
      chartInstance->c1_tp_Initial = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 4) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_Initial = 0U;
    }

    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 ==
        c1_IN_Kill_Component_Keyed) {
      chartInstance->c1_tp_Kill_Component_Keyed = 1U;
    } else {
      chartInstance->c1_tp_Kill_Component_Keyed = 0U;
    }

    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Normal_Operation) {
      chartInstance->c1_tp_Normal_Operation = 1U;
    } else {
      chartInstance->c1_tp_Normal_Operation = 0U;
    }

    if (chartInstance->c1_is_c1_Mooventure2016_Rev5 == c1_IN_Shutdown_Sequence)
    {
      chartInstance->c1_tp_Shutdown_Sequence = 1U;
    } else {
      chartInstance->c1_tp_Shutdown_Sequence = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_Mooventure2016_Rev5(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T c1_d2;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Batt_Load_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Batt_Contactor_Status;
  boolean_T *c1_Charging;
  c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_Batt_Contactor_Status = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_set_sim_state_side_effects_c1_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  c1_d2 = muDoubleScalarFloor(_sfTime_ / 0.2 + 0.5);
  chartInstance->c1_presentTicks = (uint32_T)c1_d2;
  chartInstance->c1_elapsedTicks = chartInstance->c1_presentTicks -
    chartInstance->c1_previousTicks;
  chartInstance->c1_previousTicks = chartInstance->c1_presentTicks;
  if ((uint32_T)chartInstance->c1_temporalCounter_i1 +
      chartInstance->c1_elapsedTicks <= 7U) {
    chartInstance->c1_temporalCounter_i1 = (uint8_T)((uint32_T)
      chartInstance->c1_temporalCounter_i1 + chartInstance->c1_elapsedTicks);
  } else {
    chartInstance->c1_temporalCounter_i1 = 7U;
  }

  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Shutdown, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Batt_Load_Enable, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Batt_Contactor_Status, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Charging, 7U);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c1_chartstep_c1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c1_b0;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_temp;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b10;
  boolean_T c1_b11;
  boolean_T c1_b12;
  boolean_T c1_b13;
  boolean_T c1_b14;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Charging;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Batt_Contactor_Status;
  c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_Batt_Contactor_Status = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  if ((int16_T)chartInstance->c1_is_active_c1_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
    chartInstance->c1_is_active_c1_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
    chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Initial;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
    chartInstance->c1_temporalCounter_i1 = 0U;
    chartInstance->c1_tp_Initial = 1U;
  } else {
    switch (chartInstance->c1_is_c1_Mooventure2016_Rev5) {
     case c1_IN_Batterybootup:
      CV_CHART_EVAL(0, 0, 1);
      c1_Batterybootup(chartInstance);
      break;

     case c1_IN_Charging_and_Temp:
      CV_CHART_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c1_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c1_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c1_Shutdown !=
            0U, chartInstance->c1_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (!*c1_Charging) {
            transitionList[numTransitions] = 2;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Charging_and_Temp = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Shutdown_Sequence;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Shutdown_Sequence = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                     chartInstance->c1_sfEvent);
        if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2U, 0, *c1_Charging != 0U,
               chartInstance->c1_sfEvent) != 0))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Charging_and_Temp = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
          chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Normal_Operation;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Normal_Operation = 1U;
        } else {
          *c1_Vehicle_Enable = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
          c1_b0 = *c1_Vehicle_Enable;
          sf_mex_printf("%s =\\n", "Vehicle_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b0);
          *c1_Vehicle_Ready = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
          c1_b1 = *c1_Vehicle_Ready;
          sf_mex_printf("%s =\\n", "Vehicle_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b1);
          *c1_Torque_Enable = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
          c1_b2 = *c1_Torque_Enable;
          sf_mex_printf("%s =\\n", "Torque_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b2);
          *c1_Keyed_Relay = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_Initial:
      CV_CHART_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c1_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c1_sfEvent);
      c1_temp = !(_SFD_CCP_CALL(1U, 0, *c1_Shutdown != 0U,
        chartInstance->c1_sfEvent) != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(1U, 1, (uint32_T)
                    chartInstance->c1_temporalCounter_i1 >= 5U != 0U,
                    chartInstance->c1_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c1_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if (*c1_Shutdown) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Initial = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Batterybootup;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
        chartInstance->c1_temporalCounter_i1 = 0U;
        chartInstance->c1_tp_Batterybootup = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                     chartInstance->c1_sfEvent);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0, *c1_Shutdown !=
              0U, chartInstance->c1_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Initial = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c1_sfEvent);
          chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Shutdown_Sequence;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Shutdown_Sequence = 1U;
        } else {
          *c1_Vehicle_Enable = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
          c1_b3 = *c1_Vehicle_Enable;
          sf_mex_printf("%s =\\n", "Vehicle_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b3);
          *c1_Vehicle_Ready = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
          c1_b4 = *c1_Vehicle_Ready;
          sf_mex_printf("%s =\\n", "Vehicle_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b4);
          *c1_Torque_Enable = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
          c1_b5 = *c1_Torque_Enable;
          sf_mex_printf("%s =\\n", "Torque_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b5);
          *c1_Keyed_Relay = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_Kill_Component_Keyed:
      CV_CHART_EVAL(0, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c1_sfEvent);
      *c1_Vehicle_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
      c1_b6 = *c1_Vehicle_Enable;
      sf_mex_printf("%s =\\n", "Vehicle_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b6);
      *c1_Vehicle_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
      c1_b7 = *c1_Vehicle_Ready;
      sf_mex_printf("%s =\\n", "Vehicle_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b7);
      *c1_Torque_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
      c1_b8 = *c1_Torque_Enable;
      sf_mex_printf("%s =\\n", "Torque_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b8);
      *c1_Keyed_Relay = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_Normal_Operation:
      CV_CHART_EVAL(0, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c1_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c1_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c1_Shutdown !=
            0U, chartInstance->c1_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if (*c1_Charging) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Normal_Operation = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Shutdown_Sequence;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Shutdown_Sequence = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     chartInstance->c1_sfEvent);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c1_Charging !=
              0U, chartInstance->c1_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Normal_Operation = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c1_sfEvent);
          chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Charging_and_Temp;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
          chartInstance->c1_tp_Charging_and_Temp = 1U;
        } else {
          *c1_Vehicle_Enable = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
          c1_b9 = *c1_Vehicle_Enable;
          sf_mex_printf("%s =\\n", "Vehicle_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b9);
          *c1_Vehicle_Ready = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
          c1_b10 = *c1_Vehicle_Ready;
          sf_mex_printf("%s =\\n", "Vehicle_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b10);
          *c1_Torque_Enable = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
          c1_b11 = *c1_Torque_Enable;
          sf_mex_printf("%s =\\n", "Torque_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b11);
          *c1_Keyed_Relay = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c1_sfEvent);
      break;

     case c1_IN_Shutdown_Sequence:
      CV_CHART_EVAL(0, 0, 6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c1_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c1_sfEvent);
      if (CV_TRANSITION_EVAL(7U, !(_SFD_CCP_CALL(7U, 0,
             *c1_Batt_Contactor_Status != 0U, chartInstance->c1_sfEvent) != 0)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Shutdown_Sequence = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
        chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Kill_Component_Keyed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
        chartInstance->c1_tp_Kill_Component_Keyed = 1U;
      } else {
        *c1_Vehicle_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
        c1_b12 = *c1_Vehicle_Enable;
        sf_mex_printf("%s =\\n", "Vehicle_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b12);
        *c1_Vehicle_Ready = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
        c1_b13 = *c1_Vehicle_Ready;
        sf_mex_printf("%s =\\n", "Vehicle_Ready");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b13);
        *c1_Torque_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
        c1_b14 = *c1_Torque_Enable;
        sf_mex_printf("%s =\\n", "Torque_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b14);
        *c1_Keyed_Relay = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c1_sfEvent);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);
      chartInstance->c1_is_c1_Mooventure2016_Rev5 = (uint8_T)
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void initSimStructsc1_Mooventure2016_Rev5
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void c1_Batterybootup(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_b15;
  boolean_T c1_b16;
  boolean_T c1_b17;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Batt_Load_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c1_sfEvent);
  if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c1_Shutdown != 0U,
        chartInstance->c1_sfEvent))) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c1_sfEvent);
    chartInstance->c1_tp_Batterybootup = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
    chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Shutdown_Sequence;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c1_sfEvent);
    chartInstance->c1_tp_Shutdown_Sequence = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U, chartInstance->c1_sfEvent);
    c1_temp = (_SFD_CCP_CALL(9U, 0, *c1_Batt_Load_Enable != 0U,
                chartInstance->c1_sfEvent) != 0);
    if (c1_temp) {
      c1_temp = (_SFD_CCP_CALL(9U, 1, (uint32_T)
                  chartInstance->c1_temporalCounter_i1 >= 5U != 0U,
                  chartInstance->c1_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(9U, (int32_T)c1_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_Batterybootup = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c1_sfEvent);
      chartInstance->c1_is_c1_Mooventure2016_Rev5 = c1_IN_Charging_and_Temp;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c1_sfEvent);
      chartInstance->c1_tp_Charging_and_Temp = 1U;
    } else {
      *c1_Vehicle_Enable = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
      c1_b15 = *c1_Vehicle_Enable;
      sf_mex_printf("%s =\\n", "Vehicle_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b15);
      *c1_Vehicle_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
      c1_b16 = *c1_Vehicle_Ready;
      sf_mex_printf("%s =\\n", "Vehicle_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b16);
      *c1_Torque_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
      c1_b17 = *c1_Torque_Enable;
      sf_mex_printf("%s =\\n", "Torque_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b17);
      *c1_Keyed_Relay = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_mxArrayOutData, c1_y);
  return c1_mxArrayOutData;
}

static int32_T c1_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i0, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent), &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  uint8_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(uint8_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_mxArrayOutData, c1_y);
  return c1_mxArrayOutData;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_b_tp_Initial, const char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_tp_Initial),
    &c1_thisId);
  sf_mex_destroy(&c1_b_tp_Initial);
  return c1_y;
}

static uint8_T c1_c_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_tp_Initial;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_b_tp_Initial = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_tp_Initial),
    &c1_thisId);
  sf_mex_destroy(&c1_b_tp_Initial);
  *(uint8_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  boolean_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(boolean_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_mxArrayOutData, c1_y);
  return c1_mxArrayOutData;
}

static boolean_T c1_d_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_Vehicle_Enable, const char_T *c1_identifier)
{
  boolean_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_Vehicle_Enable),
    &c1_thisId);
  sf_mex_destroy(&c1_Vehicle_Enable);
  return c1_y;
}

static boolean_T c1_e_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b18;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b18, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b18;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_Vehicle_Enable;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c1_Vehicle_Enable = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_Vehicle_Enable),
    &c1_thisId);
  sf_mex_destroy(&c1_Vehicle_Enable);
  *(boolean_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint32_T c1_f_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_b_previousTicks, const char_T *c1_identifier)
{
  uint32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_previousTicks),
    &c1_thisId);
  sf_mex_destroy(&c1_b_previousTicks);
  return c1_y;
}

static uint32_T c1_g_emlrt_marshallIn(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint32_T c1_y;
  uint32_T c1_u1;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u1, 1, 7, 0U, 0, 0U, 0);
  c1_y = c1_u1;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static const mxArray *c1_h_emlrt_marshallIn
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier)
{
  const mxArray *c1_y = NULL;
  emlrtMsgIdentifier c1_thisId;
  c1_y = NULL;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  sf_mex_assign(&c1_y, c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_setSimStateSideEffectsInfo), &c1_thisId));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static const mxArray *c1_i_emlrt_marshallIn
  (SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c1_u,
   const emlrtMsgIdentifier *c1_parentId)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u));
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void init_dsm_address_info(SFc1_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(231442283U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(459387605U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3069860952U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(227111869U);
}

mxArray *sf_c1_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2305089439U);
    pr[1] = (double)(2496273415U);
    pr[2] = (double)(649847304U);
    pr[3] = (double)(831601936U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c1_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[7],T\"Keyed_Relay\",},{M[1],M[6],T\"Torque_Enable\",},{M[1],M[4],T\"Vehicle_Enable\",},{M[1],M[5],T\"Vehicle_Ready\",},{M[8],M[0],T\"is_active_c1_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c1_Mooventure2016_Rev5\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"at\",M1x2[9 13],M[1]}}},{M[13],M[0],T\"previousTicks\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           1,
           6,
           10,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"Shutdown");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Batt_Load_Enable");
          _SFD_SET_DATA_PROPS(2,2,0,1,"Vehicle_Enable");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Vehicle_Ready");
          _SFD_SET_DATA_PROPS(4,2,0,1,"Torque_Enable");
          _SFD_SET_DATA_PROPS(5,2,0,1,"Keyed_Relay");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Batt_Contactor_Status");
          _SFD_SET_DATA_PROPS(7,1,1,0,"Charging");
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
          static unsigned int sStartGuardMap[] = { 2, 14 };

          static unsigned int sEndGuardMap[] = { 10, 26 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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
          static unsigned int sStartGuardMap[] = { 2, 14 };

          static unsigned int sEndGuardMap[] = { 10, 26 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 33 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c1_Shutdown;
          boolean_T *c1_Batt_Load_Enable;
          boolean_T *c1_Vehicle_Enable;
          boolean_T *c1_Vehicle_Ready;
          boolean_T *c1_Torque_Enable;
          boolean_T *c1_Keyed_Relay;
          boolean_T *c1_Batt_Contactor_Status;
          boolean_T *c1_Charging;
          c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c1_Batt_Contactor_Status = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_Shutdown);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_Batt_Load_Enable);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_Vehicle_Enable);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_Vehicle_Ready);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_Torque_Enable);
          _SFD_SET_DATA_VALUE_PTR(5U, c1_Keyed_Relay);
          _SFD_SET_DATA_VALUE_PTR(6U, c1_Batt_Contactor_Status);
          _SFD_SET_DATA_VALUE_PTR(7U, c1_Charging);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_Mooventure2016_Rev5
    ((SFc1_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c1_Mooventure2016_Rev5(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_Mooventure2016_Rev5
    ((SFc1_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c1_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c1_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c1_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c1_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c1_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c1_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_Mooventure2016_Rev5((SFc1_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_Mooventure2016_Rev5
      ((SFc1_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_Mooventure2016_Rev5(SimStruct *S)
{
  ssSetNeedAbsoluteTime(S,1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",1,"RTWCG"));
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",1,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",1,4);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",1,4);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(680569131U));
  ssSetChecksum1(S,(701114913U));
  ssSetChecksum2(S,(3581855583U));
  ssSetChecksum3(S,(2787239672U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_Mooventure2016_Rev5(SimStruct *S)
{
  SFc1_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc1_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc1_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_Mooventure2016_Rev5;
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

void c1_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
