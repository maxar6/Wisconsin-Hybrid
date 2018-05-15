/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c8_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c8_IN_NO_ACTIVE_CHILD          (0U)
#define c8_IN_Wait                     (4U)
#define c8_IN_Complete                 (1U)
#define c8_IN_ConstantVoltageCharge    (2U)
#define c8_IN_waitEnd                  (5U)
#define c8_IN_StartupDelay             (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c8_update_debugger_state_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_st);
static void c8_set_sim_state_side_effects_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct *chartInstance);
static void c8_chartstep_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initSimStructsc8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber);
static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData);
static int32_T c8_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static uint8_T c8_b_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_b_tp_Wait, const char_T *c8_identifier);
static uint8_T c8_c_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_c_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static const mxArray *c8_d_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static real_T c8_d_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_currOut, const char_T *c8_identifier);
static real_T c8_e_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_e_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static uint16_T c8_f_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_timer, const char_T *c8_identifier);
static uint16_T c8_g_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_h_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_b_setSimStateSideEffectsInfo, const char_T
  *c8_identifier);
static const mxArray *c8_i_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static uint16_T c8__u16_s32_(SFc8_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c8_b);
static void init_dsm_address_info(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c8_currOut;
  real_T *c8_voltOut;
  uint8_T *c8_state;
  uint16_T *c8_timer;
  c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c8_doSetSimStateSideEffects = 0U;
  chartInstance->c8_setSimStateSideEffectsInfo = NULL;
  chartInstance->c8_tp_Complete = 0U;
  chartInstance->c8_tp_ConstantVoltageCharge = 0U;
  chartInstance->c8_tp_StartupDelay = 0U;
  chartInstance->c8_tp_Wait = 0U;
  chartInstance->c8_tp_waitEnd = 0U;
  chartInstance->c8_is_active_c8_BuckyWagon_01 = 0U;
  chartInstance->c8_is_c8_BuckyWagon_01 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c8_currOut = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c8_voltOut = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c8_state = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c8_timer = 0U;
  }
}

static void initialize_params_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c8_update_debugger_state_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c8_prevAniVal;
  c8_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c8_is_active_c8_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 7U, chartInstance->c8_sfEvent);
  }

  if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
  }

  if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_Complete) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
  }

  if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_ConstantVoltageCharge) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
  }

  if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_waitEnd) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
  }

  if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_StartupDelay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
  }

  sf_debug_set_animation(c8_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c8_st;
  const mxArray *c8_y = NULL;
  real_T c8_hoistedGlobal;
  real_T c8_u;
  const mxArray *c8_b_y = NULL;
  uint8_T c8_b_hoistedGlobal;
  uint8_T c8_b_u;
  const mxArray *c8_c_y = NULL;
  uint16_T c8_c_hoistedGlobal;
  uint16_T c8_c_u;
  const mxArray *c8_d_y = NULL;
  real_T c8_d_hoistedGlobal;
  real_T c8_d_u;
  const mxArray *c8_e_y = NULL;
  uint8_T c8_e_hoistedGlobal;
  uint8_T c8_e_u;
  const mxArray *c8_f_y = NULL;
  uint8_T c8_f_hoistedGlobal;
  uint8_T c8_f_u;
  const mxArray *c8_g_y = NULL;
  real_T *c8_currOut;
  uint8_T *c8_state;
  uint16_T *c8_timer;
  real_T *c8_voltOut;
  c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_st = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellarray(6));
  c8_hoistedGlobal = *c8_currOut;
  c8_u = c8_hoistedGlobal;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 0, c8_b_y);
  c8_b_hoistedGlobal = *c8_state;
  c8_b_u = c8_b_hoistedGlobal;
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", &c8_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 1, c8_c_y);
  c8_c_hoistedGlobal = *c8_timer;
  c8_c_u = c8_c_hoistedGlobal;
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y", &c8_c_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 2, c8_d_y);
  c8_d_hoistedGlobal = *c8_voltOut;
  c8_d_u = c8_d_hoistedGlobal;
  c8_e_y = NULL;
  sf_mex_assign(&c8_e_y, sf_mex_create("y", &c8_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 3, c8_e_y);
  c8_e_hoistedGlobal = chartInstance->c8_is_active_c8_BuckyWagon_01;
  c8_e_u = c8_e_hoistedGlobal;
  c8_f_y = NULL;
  sf_mex_assign(&c8_f_y, sf_mex_create("y", &c8_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 4, c8_f_y);
  c8_f_hoistedGlobal = chartInstance->c8_is_c8_BuckyWagon_01;
  c8_f_u = c8_f_hoistedGlobal;
  c8_g_y = NULL;
  sf_mex_assign(&c8_g_y, sf_mex_create("y", &c8_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c8_y, 5, c8_g_y);
  sf_mex_assign(&c8_st, c8_y);
  return c8_st;
}

static void set_sim_state_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  real_T *c8_currOut;
  uint8_T *c8_state;
  uint16_T *c8_timer;
  real_T *c8_voltOut;
  c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_u = sf_mex_dup(c8_st);
  *c8_currOut = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c8_u, 0)), "currOut");
  *c8_state = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c8_u, 1)), "state");
  *c8_timer = c8_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c8_u, 2)), "timer");
  *c8_voltOut = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c8_u, 3)), "voltOut");
  chartInstance->c8_is_active_c8_BuckyWagon_01 = c8_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 4)),
     "is_active_c8_BuckyWagon_01");
  chartInstance->c8_is_c8_BuckyWagon_01 = c8_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c8_u, 5)), "is_c8_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c8_setSimStateSideEffectsInfo,
                c8_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c8_u, 6)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c8_u);
  chartInstance->c8_doSetSimStateSideEffects = 1U;
  c8_update_debugger_state_c8_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c8_st);
}

static void c8_set_sim_state_side_effects_c8_BuckyWagon_01
  (SFc8_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c8_doSetSimStateSideEffects != 0) {
    if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_Complete) {
      chartInstance->c8_tp_Complete = 1U;
    } else {
      chartInstance->c8_tp_Complete = 0U;
    }

    if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_ConstantVoltageCharge) {
      chartInstance->c8_tp_ConstantVoltageCharge = 1U;
    } else {
      chartInstance->c8_tp_ConstantVoltageCharge = 0U;
    }

    if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_StartupDelay) {
      chartInstance->c8_tp_StartupDelay = 1U;
    } else {
      chartInstance->c8_tp_StartupDelay = 0U;
    }

    if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_Wait) {
      chartInstance->c8_tp_Wait = 1U;
    } else {
      chartInstance->c8_tp_Wait = 0U;
    }

    if (chartInstance->c8_is_c8_BuckyWagon_01 == c8_IN_waitEnd) {
      chartInstance->c8_tp_waitEnd = 1U;
    } else {
      chartInstance->c8_tp_waitEnd = 0U;
    }

    chartInstance->c8_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c8_setSimStateSideEffectsInfo);
}

static void sf_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T *c8_startCharge;
  real_T *c8_battCurrent;
  real_T *c8_battVoltage;
  real_T *c8_currOut;
  real_T *c8_voltOut;
  uint8_T *c8_state;
  real_T *c8_CV_CurrentLimit;
  real_T *c8_CV_EndCurrent;
  real_T *c8_CV_Voltage;
  uint16_T *c8_startupDelay;
  uint16_T *c8_timer;
  uint16_T *c8_CV_EndCurrentTime;
  real_T *c8_startChargeVolt;
  c8_startChargeVolt = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c8_CV_EndCurrentTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c8_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c8_CV_Voltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c8_CV_EndCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c8_CV_CurrentLimit = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_battVoltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c8_battCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c8_startCharge = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c8_set_sim_state_side_effects_c8_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c8_startCharge, 0U);
  _SFD_DATA_RANGE_CHECK(*c8_battCurrent, 1U);
  _SFD_DATA_RANGE_CHECK(*c8_battVoltage, 2U);
  _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
  _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
  _SFD_DATA_RANGE_CHECK(*c8_CV_CurrentLimit, 6U);
  _SFD_DATA_RANGE_CHECK(*c8_CV_EndCurrent, 7U);
  _SFD_DATA_RANGE_CHECK(*c8_CV_Voltage, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c8_startupDelay, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c8_timer, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c8_CV_EndCurrentTime, 11U);
  _SFD_DATA_RANGE_CHECK(*c8_startChargeVolt, 12U);
  chartInstance->c8_sfEvent = CALL_EVENT;
  c8_chartstep_c8_BuckyWagon_01(chartInstance);
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c8_chartstep_c8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c8_battVoltage;
  real_T *c8_startChargeVolt;
  real_T *c8_currOut;
  real_T *c8_voltOut;
  uint8_T *c8_state;
  boolean_T *c8_startCharge;
  real_T *c8_battCurrent;
  real_T *c8_CV_EndCurrent;
  uint16_T *c8_timer;
  uint16_T *c8_startupDelay;
  real_T *c8_CV_CurrentLimit;
  real_T *c8_CV_Voltage;
  uint16_T *c8_CV_EndCurrentTime;
  c8_startChargeVolt = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c8_CV_EndCurrentTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c8_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c8_CV_Voltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c8_CV_EndCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c8_CV_CurrentLimit = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c8_battVoltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c8_battCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c8_startCharge = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
  if ((int16_T)chartInstance->c8_is_active_c8_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
    chartInstance->c8_is_active_c8_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c8_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
    chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Wait;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
    chartInstance->c8_tp_Wait = 1U;
    *c8_currOut = 0.0;
    _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
    *c8_voltOut = 0.0;
    _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
    *c8_state = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
  } else {
    switch (chartInstance->c8_is_c8_BuckyWagon_01) {
     case c8_IN_Complete:
      CV_CHART_EVAL(7, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c8_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   chartInstance->c8_sfEvent);
      if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0, *c8_battVoltage
            < *c8_startChargeVolt != 0U, chartInstance->c8_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                     chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_Complete = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
        chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_Wait = 1U;
        *c8_currOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
        *c8_voltOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
        *c8_state = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c8_sfEvent);
      break;

     case c8_IN_ConstantVoltageCharge:
      CV_CHART_EVAL(7, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c8_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c8_sfEvent);
      if (CV_TRANSITION_EVAL(7U, !(_SFD_CCP_CALL(7U, 0, *c8_startCharge != 0U,
             chartInstance->c8_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if (*c8_battCurrent < *c8_CV_EndCurrent) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                     chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_ConstantVoltageCharge = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
        chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_Wait = 1U;
        *c8_currOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
        *c8_voltOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
        *c8_state = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c8_sfEvent);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c8_battCurrent
              < *c8_CV_EndCurrent != 0U, chartInstance->c8_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_ConstantVoltageCharge = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
          chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_waitEnd;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_waitEnd = 1U;
          *c8_timer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c8_timer, 10U);
          *c8_state = 2U;
          _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c8_sfEvent);
      break;

     case c8_IN_StartupDelay:
      CV_CHART_EVAL(7, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c8_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c8_sfEvent);
      if (CV_TRANSITION_EVAL(6U, !(_SFD_CCP_CALL(6U, 0, *c8_startCharge != 0U,
             chartInstance->c8_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if (*c8_timer > *c8_startupDelay) {
            transitionList[numTransitions] = 1;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_StartupDelay = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
        chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Wait;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_Wait = 1U;
        *c8_currOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
        *c8_voltOut = 0.0;
        _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
        *c8_state = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                     chartInstance->c8_sfEvent);
        if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c8_timer >
              *c8_startupDelay != 0U, chartInstance->c8_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_StartupDelay = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
          chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_ConstantVoltageCharge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_ConstantVoltageCharge = 1U;
          *c8_currOut = *c8_CV_CurrentLimit;
          _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
          *c8_voltOut = *c8_CV_Voltage;
          _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
          *c8_state = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
        } else {
          *c8_timer = c8__u16_s32_(chartInstance, *c8_timer + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c8_timer, 10U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c8_sfEvent);
      break;

     case c8_IN_Wait:
      CV_CHART_EVAL(7, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c8_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c8_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c8_startCharge
            != 0U, chartInstance->c8_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_Wait = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
        chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_StartupDelay;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_StartupDelay = 1U;
        *c8_state = 4U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
        *c8_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_timer, 10U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c8_sfEvent);
      break;

     case c8_IN_waitEnd:
      CV_CHART_EVAL(7, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c8_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c8_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c8_battCurrent >
            *c8_CV_EndCurrent != 0U, chartInstance->c8_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions = 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if (!*c8_startCharge) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          if (*c8_timer >= *c8_CV_EndCurrentTime) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_waitEnd = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
        chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_ConstantVoltageCharge;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c8_sfEvent);
        chartInstance->c8_tp_ConstantVoltageCharge = 1U;
        *c8_currOut = *c8_CV_CurrentLimit;
        _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
        *c8_voltOut = *c8_CV_Voltage;
        _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
        *c8_state = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                     chartInstance->c8_sfEvent);
        if (CV_TRANSITION_EVAL(8U, !(_SFD_CCP_CALL(8U, 0, *c8_startCharge != 0U,
               chartInstance->c8_sfEvent) != 0))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 8;
            sf_debug_transition_conflict_check_begin();
            if (*c8_timer >= *c8_CV_EndCurrentTime) {
              transitionList[numTransitions] = 4;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                       chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                       chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_waitEnd = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
          chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Wait;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c8_sfEvent);
          chartInstance->c8_tp_Wait = 1U;
          *c8_currOut = 0.0;
          _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
          *c8_voltOut = 0.0;
          _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
          *c8_state = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                       chartInstance->c8_sfEvent);
          if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c8_timer >= *
                c8_CV_EndCurrentTime != 0U, chartInstance->c8_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
            chartInstance->c8_tp_waitEnd = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c8_sfEvent);
            chartInstance->c8_is_c8_BuckyWagon_01 = c8_IN_Complete;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
            chartInstance->c8_tp_Complete = 1U;
            *c8_state = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*c8_state, 5U);
            *c8_currOut = 0.0;
            _SFD_DATA_RANGE_CHECK(*c8_currOut, 3U);
            *c8_voltOut = 0.0;
            _SFD_DATA_RANGE_CHECK(*c8_voltOut, 4U);
          } else {
            *c8_timer = c8__u16_s32_(chartInstance, *c8_timer + 1);
            _SFD_DATA_RANGE_CHECK((real_T)*c8_timer, 10U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c8_sfEvent);
      break;

     default:
      CV_CHART_EVAL(7, 0, 0);
      chartInstance->c8_is_c8_BuckyWagon_01 = (uint8_T)c8_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c8_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c8_sfEvent);
}

static void initSimStructsc8_BuckyWagon_01(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber)
{
}

const mxArray *sf_c8_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c8_nameCaptureInfo;
}

static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(int32_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c8_mxArrayOutData, c8_y);
  return c8_mxArrayOutData;
}

static int32_T c8_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  int32_T c8_y;
  int32_T c8_i0;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_i0, 1, 6, 0U, 0, 0U, 0);
  c8_y = c8_i0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_sfEvent;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  int32_T c8_y;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_b_sfEvent = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_sfEvent), &c8_thisId);
  sf_mex_destroy(&c8_b_sfEvent);
  *(int32_T *)c8_outData = c8_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  uint8_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(uint8_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c8_mxArrayOutData, c8_y);
  return c8_mxArrayOutData;
}

static uint8_T c8_b_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_b_tp_Wait, const char_T *c8_identifier)
{
  uint8_T c8_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_tp_Wait),
    &c8_thisId);
  sf_mex_destroy(&c8_b_tp_Wait);
  return c8_y;
}

static uint8_T c8_c_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_y;
  uint8_T c8_u0;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_u0, 1, 3, 0U, 0, 0U, 0);
  c8_y = c8_u0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_tp_Wait;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  uint8_T c8_y;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_b_tp_Wait = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_tp_Wait),
    &c8_thisId);
  sf_mex_destroy(&c8_b_tp_Wait);
  *(uint8_T *)c8_outData = c8_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_c_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  boolean_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(boolean_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c8_mxArrayOutData, c8_y);
  return c8_mxArrayOutData;
}

static const mxArray *c8_d_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  real_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(real_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c8_mxArrayOutData, c8_y);
  return c8_mxArrayOutData;
}

static real_T c8_d_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_currOut, const char_T *c8_identifier)
{
  real_T c8_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_currOut), &c8_thisId);
  sf_mex_destroy(&c8_currOut);
  return c8_y;
}

static real_T c8_e_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  real_T c8_y;
  real_T c8_d0;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_d0, 1, 0, 0U, 0, 0U, 0);
  c8_y = c8_d0;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_currOut;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  real_T c8_y;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_currOut = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_currOut), &c8_thisId);
  sf_mex_destroy(&c8_currOut);
  *(real_T *)c8_outData = c8_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_e_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  uint16_T c8_u;
  const mxArray *c8_y = NULL;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_u = *(uint16_T *)c8_inData;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", &c8_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c8_mxArrayOutData, c8_y);
  return c8_mxArrayOutData;
}

static uint16_T c8_f_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_timer, const char_T *c8_identifier)
{
  uint16_T c8_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_timer), &c8_thisId);
  sf_mex_destroy(&c8_timer);
  return c8_y;
}

static uint16_T c8_g_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint16_T c8_y;
  uint16_T c8_u1;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_u1, 1, 5, 0U, 0, 0U, 0);
  c8_y = c8_u1;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_timer;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  uint16_T c8_y;
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c8_timer = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_y = c8_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_timer), &c8_thisId);
  sf_mex_destroy(&c8_timer);
  *(uint16_T *)c8_outData = c8_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_h_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_b_setSimStateSideEffectsInfo, const char_T
  *c8_identifier)
{
  const mxArray *c8_y = NULL;
  emlrtMsgIdentifier c8_thisId;
  c8_y = NULL;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  sf_mex_assign(&c8_y, c8_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_setSimStateSideEffectsInfo), &c8_thisId));
  sf_mex_destroy(&c8_b_setSimStateSideEffectsInfo);
  return c8_y;
}

static const mxArray *c8_i_emlrt_marshallIn(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  const mxArray *c8_y = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_duplicatearraysafe(&c8_u));
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static uint16_T c8__u16_s32_(SFc8_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c8_b)
{
  uint16_T c8_a;
  c8_a = (uint16_T)c8_b;
  if (c8_a != c8_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c8_a;
}

static void init_dsm_address_info(SFc8_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c8_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(754844753U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1746377431U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1850996362U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3815739739U);
}

mxArray *sf_c8_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3171996076U);
    pr[1] = (double)(3188360077U);
    pr[2] = (double)(2586803103U);
    pr[3] = (double)(1878091716U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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

static const mxArray *sf_get_sim_state_info_c8_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[23],T\"currOut\",},{M[1],M[25],T\"state\",},{M[1],M[30],T\"timer\",},{M[1],M[24],T\"voltOut\",},{M[8],M[0],T\"is_active_c8_BuckyWagon_01\",},{M[9],M[0],T\"is_c8_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc8_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc8_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           8,
           5,
           12,
           13,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"startCharge");
          _SFD_SET_DATA_PROPS(1,1,1,0,"battCurrent");
          _SFD_SET_DATA_PROPS(2,1,1,0,"battVoltage");
          _SFD_SET_DATA_PROPS(3,2,0,1,"currOut");
          _SFD_SET_DATA_PROPS(4,2,0,1,"voltOut");
          _SFD_SET_DATA_PROPS(5,2,0,1,"state");
          _SFD_SET_DATA_PROPS(6,1,1,0,"CV_CurrentLimit");
          _SFD_SET_DATA_PROPS(7,1,1,0,"CV_EndCurrent");
          _SFD_SET_DATA_PROPS(8,1,1,0,"CV_Voltage");
          _SFD_SET_DATA_PROPS(9,1,1,0,"startupDelay");
          _SFD_SET_DATA_PROPS(10,2,0,1,"timer");
          _SFD_SET_DATA_PROPS(11,1,1,0,"CV_EndCurrentTime");
          _SFD_SET_DATA_PROPS(12,1,1,0,"startChargeVolt");
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

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 30 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(3,
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

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              0,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 30 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_b_sf_marshallOut,(MexInFcnForType)c8_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_e_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c8_startCharge;
          real_T *c8_battCurrent;
          real_T *c8_battVoltage;
          real_T *c8_currOut;
          real_T *c8_voltOut;
          uint8_T *c8_state;
          real_T *c8_CV_CurrentLimit;
          real_T *c8_CV_EndCurrent;
          real_T *c8_CV_Voltage;
          uint16_T *c8_startupDelay;
          uint16_T *c8_timer;
          uint16_T *c8_CV_EndCurrentTime;
          real_T *c8_startChargeVolt;
          c8_startChargeVolt = (real_T *)ssGetInputPortSignal(chartInstance->S,
            8);
          c8_CV_EndCurrentTime = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 7);
          c8_timer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c8_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c8_CV_Voltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c8_CV_EndCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c8_CV_CurrentLimit = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c8_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c8_voltOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c8_currOut = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c8_battVoltage = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c8_battCurrent = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c8_startCharge = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c8_startCharge);
          _SFD_SET_DATA_VALUE_PTR(1U, c8_battCurrent);
          _SFD_SET_DATA_VALUE_PTR(2U, c8_battVoltage);
          _SFD_SET_DATA_VALUE_PTR(3U, c8_currOut);
          _SFD_SET_DATA_VALUE_PTR(4U, c8_voltOut);
          _SFD_SET_DATA_VALUE_PTR(5U, c8_state);
          _SFD_SET_DATA_VALUE_PTR(6U, c8_CV_CurrentLimit);
          _SFD_SET_DATA_VALUE_PTR(7U, c8_CV_EndCurrent);
          _SFD_SET_DATA_VALUE_PTR(8U, c8_CV_Voltage);
          _SFD_SET_DATA_VALUE_PTR(9U, c8_startupDelay);
          _SFD_SET_DATA_VALUE_PTR(10U, c8_timer);
          _SFD_SET_DATA_VALUE_PTR(11U, c8_CV_EndCurrentTime);
          _SFD_SET_DATA_VALUE_PTR(12U, c8_startChargeVolt);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c8_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc8_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c8_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c8_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c8_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c8_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c8_BuckyWagon_01
    ((SFc8_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c8_BuckyWagon_01();/* state var info */
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

extern void sf_internal_set_sim_state_c8_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c8_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c8_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c8_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c8_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c8_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c8_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_BuckyWagon_01((SFc8_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c8_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BuckyWagon_01","BuckyWagon_01",8);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01","BuckyWagon_01",8,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01",
      "BuckyWagon_01",8,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",8,9);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",8,4);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",8);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2315718615U));
  ssSetChecksum1(S,(4131772099U));
  ssSetChecksum2(S,(3496888966U));
  ssSetChecksum3(S,(1167154576U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c8_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",8);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c8_BuckyWagon_01(SimStruct *S)
{
  SFc8_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc8_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc8_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc8_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c8_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c8_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c8_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c8_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c8_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c8_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c8_BuckyWagon_01;
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

void c8_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c8_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
