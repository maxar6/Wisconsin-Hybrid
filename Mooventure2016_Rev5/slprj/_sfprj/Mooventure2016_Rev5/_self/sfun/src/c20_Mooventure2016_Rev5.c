/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c20_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c20_IN_NO_ACTIVE_CHILD         (0U)
#define c20_IN_Nuetral                 (2U)
#define c20_IN_Driving                 (1U)
#define c20_IN_RegenDrag               (4U)
#define c20_IN_RegenBrake              (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c20_update_debugger_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c20_st);
static void c20_set_sim_state_side_effects_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c20_Mooventure2016_Rev5(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c20_chartstep_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c20_machineNumber, uint32_T
  c20_chartNumber);
static const mxArray *c20_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData);
static int32_T c20_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static void c20_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData);
static const mxArray *c20_b_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData);
static uint8_T c20_b_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_b_tp_Nuetral, const char_T *c20_identifier);
static uint8_T c20_c_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static void c20_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData);
static const mxArray *c20_c_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData);
static real_T c20_d_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_driveTorque, const char_T *c20_identifier);
static real_T c20_e_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId);
static void c20_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData);
static const mxArray *c20_f_emlrt_marshallIn
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c20_b_setSimStateSideEffectsInfo, const char_T *c20_identifier);
static const mxArray *c20_g_emlrt_marshallIn
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c20_u,
   const emlrtMsgIdentifier *c20_parentId);
static void init_dsm_address_info(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c20_driveTorque;
  real_T *c20_regenTorque;
  c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c20_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c20_doSetSimStateSideEffects = 0U;
  chartInstance->c20_setSimStateSideEffectsInfo = NULL;
  chartInstance->c20_tp_Driving = 0U;
  chartInstance->c20_tp_Nuetral = 0U;
  chartInstance->c20_tp_RegenBrake = 0U;
  chartInstance->c20_tp_RegenDrag = 0U;
  chartInstance->c20_is_active_c20_Mooventure2016_Rev5 = 0U;
  chartInstance->c20_is_c20_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c20_driveTorque = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c20_regenTorque = 0.0;
  }
}

static void initialize_params_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c20_update_debugger_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c20_prevAniVal;
  c20_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c20_is_active_c20_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 19U, chartInstance->c20_sfEvent);
  }

  if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_Nuetral) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
  }

  if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_Driving) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
  }

  if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_RegenDrag) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
  }

  if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_RegenBrake) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
  }

  sf_debug_set_animation(c20_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c20_st;
  const mxArray *c20_y = NULL;
  real_T c20_hoistedGlobal;
  real_T c20_u;
  const mxArray *c20_b_y = NULL;
  real_T c20_b_hoistedGlobal;
  real_T c20_b_u;
  const mxArray *c20_c_y = NULL;
  uint8_T c20_c_hoistedGlobal;
  uint8_T c20_c_u;
  const mxArray *c20_d_y = NULL;
  uint8_T c20_d_hoistedGlobal;
  uint8_T c20_d_u;
  const mxArray *c20_e_y = NULL;
  real_T *c20_driveTorque;
  real_T *c20_regenTorque;
  c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_st = NULL;
  c20_st = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_createcellarray(4));
  c20_hoistedGlobal = *c20_driveTorque;
  c20_u = c20_hoistedGlobal;
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", &c20_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 0, c20_b_y);
  c20_b_hoistedGlobal = *c20_regenTorque;
  c20_b_u = c20_b_hoistedGlobal;
  c20_c_y = NULL;
  sf_mex_assign(&c20_c_y, sf_mex_create("y", &c20_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 1, c20_c_y);
  c20_c_hoistedGlobal = chartInstance->c20_is_active_c20_Mooventure2016_Rev5;
  c20_c_u = c20_c_hoistedGlobal;
  c20_d_y = NULL;
  sf_mex_assign(&c20_d_y, sf_mex_create("y", &c20_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 2, c20_d_y);
  c20_d_hoistedGlobal = chartInstance->c20_is_c20_Mooventure2016_Rev5;
  c20_d_u = c20_d_hoistedGlobal;
  c20_e_y = NULL;
  sf_mex_assign(&c20_e_y, sf_mex_create("y", &c20_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 3, c20_e_y);
  sf_mex_assign(&c20_st, c20_y);
  return c20_st;
}

static void set_sim_state_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c20_st)
{
  const mxArray *c20_u;
  real_T *c20_driveTorque;
  real_T *c20_regenTorque;
  c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_u = sf_mex_dup(c20_st);
  *c20_driveTorque = c20_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c20_u, 0)), "driveTorque");
  *c20_regenTorque = c20_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c20_u, 1)), "regenTorque");
  chartInstance->c20_is_active_c20_Mooventure2016_Rev5 = c20_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c20_u, 2)),
     "is_active_c20_Mooventure2016_Rev5");
  chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c20_u, 3)),
     "is_c20_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c20_setSimStateSideEffectsInfo,
                c20_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c20_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c20_u);
  chartInstance->c20_doSetSimStateSideEffects = 1U;
  c20_update_debugger_state_c20_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c20_st);
}

static void c20_set_sim_state_side_effects_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c20_doSetSimStateSideEffects != 0) {
    if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_Driving) {
      chartInstance->c20_tp_Driving = 1U;
    } else {
      chartInstance->c20_tp_Driving = 0U;
    }

    if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_Nuetral) {
      chartInstance->c20_tp_Nuetral = 1U;
    } else {
      chartInstance->c20_tp_Nuetral = 0U;
    }

    if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_RegenBrake) {
      chartInstance->c20_tp_RegenBrake = 1U;
    } else {
      chartInstance->c20_tp_RegenBrake = 0U;
    }

    if (chartInstance->c20_is_c20_Mooventure2016_Rev5 == c20_IN_RegenDrag) {
      chartInstance->c20_tp_RegenDrag = 1U;
    } else {
      chartInstance->c20_tp_RegenDrag = 0U;
    }

    chartInstance->c20_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c20_setSimStateSideEffectsInfo);
}

static void sf_c20_Mooventure2016_Rev5(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T *c20_driveTorque;
  real_T *c20_regenTorque;
  real_T *c20_accel;
  real_T *c20_brake;
  real_T *c20_speed;
  real_T *c20_accelStart;
  real_T *c20_accelEnd;
  real_T *c20_brakeStart;
  real_T *c20_brakeEnd;
  real_T *c20_regenStart;
  real_T *c20_regenEnd;
  real_T *c20_dragTorque;
  c20_dragTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c20_regenEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c20_regenStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c20_brakeEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c20_brakeStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c20_accelEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c20_accelStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c20_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c20_brake = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c20_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_set_sim_state_side_effects_c20_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 19U, chartInstance->c20_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c20_driveTorque, 0U);
  _SFD_DATA_RANGE_CHECK(*c20_regenTorque, 1U);
  _SFD_DATA_RANGE_CHECK(*c20_accel, 2U);
  _SFD_DATA_RANGE_CHECK(*c20_brake, 3U);
  _SFD_DATA_RANGE_CHECK(*c20_speed, 4U);
  _SFD_DATA_RANGE_CHECK(*c20_accelStart, 5U);
  _SFD_DATA_RANGE_CHECK(*c20_accelEnd, 6U);
  _SFD_DATA_RANGE_CHECK(*c20_brakeStart, 7U);
  _SFD_DATA_RANGE_CHECK(*c20_brakeEnd, 8U);
  _SFD_DATA_RANGE_CHECK(*c20_regenStart, 9U);
  _SFD_DATA_RANGE_CHECK(*c20_regenEnd, 10U);
  _SFD_DATA_RANGE_CHECK(*c20_dragTorque, 11U);
  chartInstance->c20_sfEvent = CALL_EVENT;
  c20_chartstep_c20_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c20_chartstep_c20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c20_temp;
  real_T *c20_accel;
  real_T *c20_accelEnd;
  real_T *c20_speed;
  real_T *c20_regenStart;
  real_T *c20_driveTorque;
  real_T *c20_regenTorque;
  real_T *c20_accelStart;
  real_T *c20_regenEnd;
  real_T *c20_brake;
  real_T *c20_brakeEnd;
  real_T *c20_dragTorque;
  real_T *c20_brakeStart;
  c20_dragTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c20_regenEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c20_regenStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c20_brakeEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c20_brakeStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c20_accelEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c20_accelStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c20_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c20_brake = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c20_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 19U, chartInstance->c20_sfEvent);
  if ((int16_T)chartInstance->c20_is_active_c20_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 19U, chartInstance->c20_sfEvent);
    chartInstance->c20_is_active_c20_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, chartInstance->c20_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c20_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
    chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_Nuetral;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
    chartInstance->c20_tp_Nuetral = 1U;
  } else {
    switch (chartInstance->c20_is_c20_Mooventure2016_Rev5) {
     case c20_IN_Driving:
      CV_CHART_EVAL(19, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c20_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c20_sfEvent);
      c20_temp = (_SFD_CCP_CALL(2U, 0, *c20_accel <= *c20_accelEnd != 0U,
        chartInstance->c20_sfEvent) != 0);
      if (c20_temp) {
        c20_temp = (_SFD_CCP_CALL(2U, 1, *c20_speed >= *c20_regenStart != 0U,
          chartInstance->c20_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c20_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_Driving = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
        chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_RegenDrag;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_RegenDrag = 1U;
      } else {
        *c20_driveTorque = *c20_accel;
        _SFD_DATA_RANGE_CHECK(*c20_driveTorque, 0U);
        *c20_regenTorque = 0.0;
        _SFD_DATA_RANGE_CHECK(*c20_regenTorque, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c20_sfEvent);
      break;

     case c20_IN_Nuetral:
      CV_CHART_EVAL(19, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c20_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c20_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c20_accel >=
            *c20_accelStart != 0U, chartInstance->c20_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_Nuetral = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
        chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_Driving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_Driving = 1U;
      } else {
        *c20_driveTorque = 0.0;
        _SFD_DATA_RANGE_CHECK(*c20_driveTorque, 0U);
        *c20_regenTorque = 0.0;
        _SFD_DATA_RANGE_CHECK(*c20_regenTorque, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c20_sfEvent);
      break;

     case c20_IN_RegenBrake:
      CV_CHART_EVAL(19, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c20_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c20_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c20_speed <=
            *c20_regenEnd != 0U, chartInstance->c20_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c20_brake <= *c20_brakeEnd) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_RegenBrake = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
        chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_Nuetral;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_Nuetral = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                     chartInstance->c20_sfEvent);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c20_brake <=
              *c20_brakeEnd != 0U, chartInstance->c20_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c20_sfEvent);
          chartInstance->c20_tp_RegenBrake = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
          chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_RegenDrag;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
          chartInstance->c20_tp_RegenDrag = 1U;
        } else {
          *c20_regenTorque = *c20_brake + *c20_dragTorque;
          _SFD_DATA_RANGE_CHECK(*c20_regenTorque, 1U);
          *c20_driveTorque = 0.0;
          _SFD_DATA_RANGE_CHECK(*c20_driveTorque, 0U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c20_sfEvent);
      break;

     case c20_IN_RegenDrag:
      CV_CHART_EVAL(19, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c20_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c20_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c20_speed <=
            *c20_regenEnd != 0U, chartInstance->c20_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions = 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (*c20_brake >= *c20_brakeStart) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          if (*c20_accel >= *c20_accelStart) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_RegenDrag = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
        chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_Nuetral;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c20_sfEvent);
        chartInstance->c20_tp_Nuetral = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     chartInstance->c20_sfEvent);
        if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c20_brake >=
              *c20_brakeStart != 0U, chartInstance->c20_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 5;
            sf_debug_transition_conflict_check_begin();
            if (*c20_accel >= *c20_accelStart) {
              transitionList[numTransitions] = 6;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c20_sfEvent);
          chartInstance->c20_tp_RegenDrag = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
          chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_RegenBrake;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c20_sfEvent);
          chartInstance->c20_tp_RegenBrake = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                       chartInstance->c20_sfEvent);
          if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c20_accel >=
                *c20_accelStart != 0U, chartInstance->c20_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c20_sfEvent);
            chartInstance->c20_tp_RegenDrag = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c20_sfEvent);
            chartInstance->c20_is_c20_Mooventure2016_Rev5 = c20_IN_Driving;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
            chartInstance->c20_tp_Driving = 1U;
          } else {
            *c20_regenTorque = *c20_dragTorque;
            _SFD_DATA_RANGE_CHECK(*c20_regenTorque, 1U);
            *c20_driveTorque = 0.0;
            _SFD_DATA_RANGE_CHECK(*c20_driveTorque, 0U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c20_sfEvent);
      break;

     default:
      CV_CHART_EVAL(19, 0, 0);
      chartInstance->c20_is_c20_Mooventure2016_Rev5 = (uint8_T)
        c20_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c20_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, chartInstance->c20_sfEvent);
}

static void initSimStructsc20_Mooventure2016_Rev5
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c20_machineNumber, uint32_T
  c20_chartNumber)
{
}

const mxArray *sf_c20_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c20_nameCaptureInfo = NULL;
  c20_nameCaptureInfo = NULL;
  sf_mex_assign(&c20_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c20_nameCaptureInfo;
}

static const mxArray *c20_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData)
{
  const mxArray *c20_mxArrayOutData = NULL;
  int32_T c20_u;
  const mxArray *c20_y = NULL;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_mxArrayOutData = NULL;
  c20_u = *(int32_T *)c20_inData;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_create("y", &c20_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c20_mxArrayOutData, c20_y);
  return c20_mxArrayOutData;
}

static int32_T c20_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  int32_T c20_y;
  int32_T c20_i0;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_i0, 1, 6, 0U, 0, 0U, 0);
  c20_y = c20_i0;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void c20_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData)
{
  const mxArray *c20_b_sfEvent;
  const char_T *c20_identifier;
  emlrtMsgIdentifier c20_thisId;
  int32_T c20_y;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_b_sfEvent = sf_mex_dup(c20_mxArrayInData);
  c20_identifier = c20_varName;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  c20_y = c20_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_b_sfEvent),
    &c20_thisId);
  sf_mex_destroy(&c20_b_sfEvent);
  *(int32_T *)c20_outData = c20_y;
  sf_mex_destroy(&c20_mxArrayInData);
}

static const mxArray *c20_b_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData)
{
  const mxArray *c20_mxArrayOutData = NULL;
  uint8_T c20_u;
  const mxArray *c20_y = NULL;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_mxArrayOutData = NULL;
  c20_u = *(uint8_T *)c20_inData;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_create("y", &c20_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c20_mxArrayOutData, c20_y);
  return c20_mxArrayOutData;
}

static uint8_T c20_b_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_b_tp_Nuetral, const char_T *c20_identifier)
{
  uint8_T c20_y;
  emlrtMsgIdentifier c20_thisId;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  c20_y = c20_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_b_tp_Nuetral),
    &c20_thisId);
  sf_mex_destroy(&c20_b_tp_Nuetral);
  return c20_y;
}

static uint8_T c20_c_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  uint8_T c20_y;
  uint8_T c20_u0;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_u0, 1, 3, 0U, 0, 0U, 0);
  c20_y = c20_u0;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void c20_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData)
{
  const mxArray *c20_b_tp_Nuetral;
  const char_T *c20_identifier;
  emlrtMsgIdentifier c20_thisId;
  uint8_T c20_y;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_b_tp_Nuetral = sf_mex_dup(c20_mxArrayInData);
  c20_identifier = c20_varName;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  c20_y = c20_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_b_tp_Nuetral),
    &c20_thisId);
  sf_mex_destroy(&c20_b_tp_Nuetral);
  *(uint8_T *)c20_outData = c20_y;
  sf_mex_destroy(&c20_mxArrayInData);
}

static const mxArray *c20_c_sf_marshallOut(void *chartInstanceVoid, void
  *c20_inData)
{
  const mxArray *c20_mxArrayOutData = NULL;
  real_T c20_u;
  const mxArray *c20_y = NULL;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_mxArrayOutData = NULL;
  c20_u = *(real_T *)c20_inData;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_create("y", &c20_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c20_mxArrayOutData, c20_y);
  return c20_mxArrayOutData;
}

static real_T c20_d_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_driveTorque, const char_T *c20_identifier)
{
  real_T c20_y;
  emlrtMsgIdentifier c20_thisId;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  c20_y = c20_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_driveTorque),
    &c20_thisId);
  sf_mex_destroy(&c20_driveTorque);
  return c20_y;
}

static real_T c20_e_emlrt_marshallIn(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c20_u, const emlrtMsgIdentifier *c20_parentId)
{
  real_T c20_y;
  real_T c20_d0;
  sf_mex_import(c20_parentId, sf_mex_dup(c20_u), &c20_d0, 1, 0, 0U, 0, 0U, 0);
  c20_y = c20_d0;
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void c20_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c20_mxArrayInData, const char_T *c20_varName, void *c20_outData)
{
  const mxArray *c20_driveTorque;
  const char_T *c20_identifier;
  emlrtMsgIdentifier c20_thisId;
  real_T c20_y;
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c20_driveTorque = sf_mex_dup(c20_mxArrayInData);
  c20_identifier = c20_varName;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  c20_y = c20_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c20_driveTorque),
    &c20_thisId);
  sf_mex_destroy(&c20_driveTorque);
  *(real_T *)c20_outData = c20_y;
  sf_mex_destroy(&c20_mxArrayInData);
}

static const mxArray *c20_f_emlrt_marshallIn
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c20_b_setSimStateSideEffectsInfo, const char_T *c20_identifier)
{
  const mxArray *c20_y = NULL;
  emlrtMsgIdentifier c20_thisId;
  c20_y = NULL;
  c20_thisId.fIdentifier = c20_identifier;
  c20_thisId.fParent = NULL;
  sf_mex_assign(&c20_y, c20_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c20_b_setSimStateSideEffectsInfo), &c20_thisId));
  sf_mex_destroy(&c20_b_setSimStateSideEffectsInfo);
  return c20_y;
}

static const mxArray *c20_g_emlrt_marshallIn
  (SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c20_u,
   const emlrtMsgIdentifier *c20_parentId)
{
  const mxArray *c20_y = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_duplicatearraysafe(&c20_u));
  sf_mex_destroy(&c20_u);
  return c20_y;
}

static void init_dsm_address_info(SFc20_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c20_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(991816687U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1882884614U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1601605195U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1865206436U);
}

mxArray *sf_c20_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3251512807U);
    pr[1] = (double)(2880996826U);
    pr[2] = (double)(3242712132U);
    pr[3] = (double)(1849704662U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c20_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[20],T\"driveTorque\",},{M[1],M[21],T\"regenTorque\",},{M[8],M[0],T\"is_active_c20_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c20_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c20_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           20,
           4,
           8,
           12,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"driveTorque");
          _SFD_SET_DATA_PROPS(1,2,0,1,"regenTorque");
          _SFD_SET_DATA_PROPS(2,1,1,0,"accel");
          _SFD_SET_DATA_PROPS(3,1,1,0,"brake");
          _SFD_SET_DATA_PROPS(4,1,1,0,"speed");
          _SFD_SET_DATA_PROPS(5,1,1,0,"accelStart");
          _SFD_SET_DATA_PROPS(6,1,1,0,"accelEnd");
          _SFD_SET_DATA_PROPS(7,1,1,0,"brakeStart");
          _SFD_SET_DATA_PROPS(8,1,1,0,"brakeEnd");
          _SFD_SET_DATA_PROPS(9,1,1,0,"regenStart");
          _SFD_SET_DATA_PROPS(10,1,1,0,"regenEnd");
          _SFD_SET_DATA_PROPS(11,1,1,0,"dragTorque");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 37 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)
          c20_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)
          c20_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c20_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c20_driveTorque;
          real_T *c20_regenTorque;
          real_T *c20_accel;
          real_T *c20_brake;
          real_T *c20_speed;
          real_T *c20_accelStart;
          real_T *c20_accelEnd;
          real_T *c20_brakeStart;
          real_T *c20_brakeEnd;
          real_T *c20_regenStart;
          real_T *c20_regenEnd;
          real_T *c20_dragTorque;
          c20_dragTorque = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c20_regenEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c20_regenStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c20_brakeEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c20_brakeStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c20_accelEnd = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c20_accelStart = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c20_speed = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c20_brake = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c20_accel = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c20_regenTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c20_driveTorque = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c20_driveTorque);
          _SFD_SET_DATA_VALUE_PTR(1U, c20_regenTorque);
          _SFD_SET_DATA_VALUE_PTR(2U, c20_accel);
          _SFD_SET_DATA_VALUE_PTR(3U, c20_brake);
          _SFD_SET_DATA_VALUE_PTR(4U, c20_speed);
          _SFD_SET_DATA_VALUE_PTR(5U, c20_accelStart);
          _SFD_SET_DATA_VALUE_PTR(6U, c20_accelEnd);
          _SFD_SET_DATA_VALUE_PTR(7U, c20_brakeStart);
          _SFD_SET_DATA_VALUE_PTR(8U, c20_brakeEnd);
          _SFD_SET_DATA_VALUE_PTR(9U, c20_regenStart);
          _SFD_SET_DATA_VALUE_PTR(10U, c20_regenEnd);
          _SFD_SET_DATA_VALUE_PTR(11U, c20_dragTorque);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c20_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c20_Mooventure2016_Rev5
    ((SFc20_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c20_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c20_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c20_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c20_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c20_Mooventure2016_Rev5
    ((SFc20_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c20_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c20_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c20_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c20_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c20_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c20_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c20_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c20_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc20_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc20_Mooventure2016_Rev5((SFc20_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c20_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c20_Mooventure2016_Rev5
      ((SFc20_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c20_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      20);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",20,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",20,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",20,10);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",20,2);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",20);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2470814462U));
  ssSetChecksum1(S,(1347734281U));
  ssSetChecksum2(S,(3999782724U));
  ssSetChecksum3(S,(2341073795U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c20_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",20);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c20_Mooventure2016_Rev5(SimStruct *S)
{
  SFc20_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc20_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc20_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc20_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c20_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c20_Mooventure2016_Rev5;
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

void c20_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c20_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c20_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c20_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c20_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
