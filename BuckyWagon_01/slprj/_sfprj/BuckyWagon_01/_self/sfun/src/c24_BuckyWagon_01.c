/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c24_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c24_IN_NO_ACTIVE_CHILD         (0U)
#define c24_IN_Value_2                 (3U)
#define c24_IN_downsample_2            (5U)
#define c24_IN_Out                     (1U)
#define c24_IN_downsample              (4U)
#define c24_IN_Value_1                 (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance);
static void enable_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c24_update_debugger_state_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_st);
static void c24_set_sim_state_side_effects_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c24_chartstep_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initSimStructsc24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c24_machineNumber, uint32_T
  c24_chartNumber);
static const mxArray *c24_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData);
static int32_T c24_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData);
static const mxArray *c24_b_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData);
static uint8_T c24_b_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_tp_Value_2, const char_T *c24_identifier);
static uint8_T c24_c_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData);
static const mxArray *c24_c_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData);
static real_T c24_d_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_count, const char_T *c24_identifier);
static real_T c24_e_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void c24_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData);
static const mxArray *c24_f_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_setSimStateSideEffectsInfo, const char_T *
  c24_identifier);
static const mxArray *c24_g_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId);
static void init_dsm_address_info(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c24_Out_1;
  real_T *c24_Out_2;
  c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c24_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c24_doSetSimStateSideEffects = 0U;
  chartInstance->c24_setSimStateSideEffectsInfo = NULL;
  chartInstance->c24_tp_Out = 0U;
  chartInstance->c24_tp_Value_1 = 0U;
  chartInstance->c24_tp_Value_2 = 0U;
  chartInstance->c24_tp_downsample = 0U;
  chartInstance->c24_tp_downsample_2 = 0U;
  chartInstance->c24_is_active_c24_BuckyWagon_01 = 0U;
  chartInstance->c24_is_c24_BuckyWagon_01 = 0U;
  chartInstance->c24_count = 0.0;
  chartInstance->c24_state = 0.0;
  chartInstance->c24_Val1 = 0.0;
  chartInstance->c24_Val2 = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c24_Out_1 = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c24_Out_2 = 0.0;
  }
}

static void initialize_params_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance)
{
}

static void enable_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c24_update_debugger_state_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c24_prevAniVal;
  c24_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c24_is_active_c24_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 11U, chartInstance->c24_sfEvent);
  }

  if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Value_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c24_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c24_sfEvent);
  }

  if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_downsample_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c24_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c24_sfEvent);
  }

  if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Out) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
  }

  if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_downsample) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
  }

  if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Value_1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c24_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c24_sfEvent);
  }

  sf_debug_set_animation(c24_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c24_st;
  const mxArray *c24_y = NULL;
  real_T c24_hoistedGlobal;
  real_T c24_u;
  const mxArray *c24_b_y = NULL;
  real_T c24_b_hoistedGlobal;
  real_T c24_b_u;
  const mxArray *c24_c_y = NULL;
  real_T c24_c_hoistedGlobal;
  real_T c24_c_u;
  const mxArray *c24_d_y = NULL;
  real_T c24_d_hoistedGlobal;
  real_T c24_d_u;
  const mxArray *c24_e_y = NULL;
  real_T c24_e_hoistedGlobal;
  real_T c24_e_u;
  const mxArray *c24_f_y = NULL;
  real_T c24_f_hoistedGlobal;
  real_T c24_f_u;
  const mxArray *c24_g_y = NULL;
  uint8_T c24_g_hoistedGlobal;
  uint8_T c24_g_u;
  const mxArray *c24_h_y = NULL;
  uint8_T c24_h_hoistedGlobal;
  uint8_T c24_h_u;
  const mxArray *c24_i_y = NULL;
  real_T *c24_Out_1;
  real_T *c24_Out_2;
  c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c24_st = NULL;
  c24_st = NULL;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_createcellarray(8));
  c24_hoistedGlobal = *c24_Out_1;
  c24_u = c24_hoistedGlobal;
  c24_b_y = NULL;
  sf_mex_assign(&c24_b_y, sf_mex_create("y", &c24_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 0, c24_b_y);
  c24_b_hoistedGlobal = *c24_Out_2;
  c24_b_u = c24_b_hoistedGlobal;
  c24_c_y = NULL;
  sf_mex_assign(&c24_c_y, sf_mex_create("y", &c24_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 1, c24_c_y);
  c24_c_hoistedGlobal = chartInstance->c24_Val1;
  c24_c_u = c24_c_hoistedGlobal;
  c24_d_y = NULL;
  sf_mex_assign(&c24_d_y, sf_mex_create("y", &c24_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 2, c24_d_y);
  c24_d_hoistedGlobal = chartInstance->c24_Val2;
  c24_d_u = c24_d_hoistedGlobal;
  c24_e_y = NULL;
  sf_mex_assign(&c24_e_y, sf_mex_create("y", &c24_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 3, c24_e_y);
  c24_e_hoistedGlobal = chartInstance->c24_count;
  c24_e_u = c24_e_hoistedGlobal;
  c24_f_y = NULL;
  sf_mex_assign(&c24_f_y, sf_mex_create("y", &c24_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 4, c24_f_y);
  c24_f_hoistedGlobal = chartInstance->c24_state;
  c24_f_u = c24_f_hoistedGlobal;
  c24_g_y = NULL;
  sf_mex_assign(&c24_g_y, sf_mex_create("y", &c24_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 5, c24_g_y);
  c24_g_hoistedGlobal = chartInstance->c24_is_active_c24_BuckyWagon_01;
  c24_g_u = c24_g_hoistedGlobal;
  c24_h_y = NULL;
  sf_mex_assign(&c24_h_y, sf_mex_create("y", &c24_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 6, c24_h_y);
  c24_h_hoistedGlobal = chartInstance->c24_is_c24_BuckyWagon_01;
  c24_h_u = c24_h_hoistedGlobal;
  c24_i_y = NULL;
  sf_mex_assign(&c24_i_y, sf_mex_create("y", &c24_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c24_y, 7, c24_i_y);
  sf_mex_assign(&c24_st, c24_y);
  return c24_st;
}

static void set_sim_state_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_st)
{
  const mxArray *c24_u;
  real_T *c24_Out_1;
  real_T *c24_Out_2;
  c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c24_u = sf_mex_dup(c24_st);
  *c24_Out_1 = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c24_u, 0)), "Out_1");
  *c24_Out_2 = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c24_u, 1)), "Out_2");
  chartInstance->c24_Val1 = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 2)), "Val1");
  chartInstance->c24_Val2 = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 3)), "Val2");
  chartInstance->c24_count = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 4)), "count");
  chartInstance->c24_state = c24_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c24_u, 5)), "state");
  chartInstance->c24_is_active_c24_BuckyWagon_01 = c24_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c24_u, 6)),
     "is_active_c24_BuckyWagon_01");
  chartInstance->c24_is_c24_BuckyWagon_01 = c24_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c24_u, 7)), "is_c24_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c24_setSimStateSideEffectsInfo,
                c24_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c24_u, 8)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c24_u);
  chartInstance->c24_doSetSimStateSideEffects = 1U;
  c24_update_debugger_state_c24_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c24_st);
}

static void c24_set_sim_state_side_effects_c24_BuckyWagon_01
  (SFc24_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c24_doSetSimStateSideEffects != 0) {
    if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Out) {
      chartInstance->c24_tp_Out = 1U;
    } else {
      chartInstance->c24_tp_Out = 0U;
    }

    if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Value_1) {
      chartInstance->c24_tp_Value_1 = 1U;
    } else {
      chartInstance->c24_tp_Value_1 = 0U;
    }

    if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_Value_2) {
      chartInstance->c24_tp_Value_2 = 1U;
    } else {
      chartInstance->c24_tp_Value_2 = 0U;
    }

    if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_downsample) {
      chartInstance->c24_tp_downsample = 1U;
    } else {
      chartInstance->c24_tp_downsample = 0U;
    }

    if (chartInstance->c24_is_c24_BuckyWagon_01 == c24_IN_downsample_2) {
      chartInstance->c24_tp_downsample_2 = 1U;
    } else {
      chartInstance->c24_tp_downsample_2 = 0U;
    }

    chartInstance->c24_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c24_setSimStateSideEffectsInfo);
}

static void sf_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c24_Out_1;
  real_T *c24_Out_2;
  real_T *c24_Val_In;
  real_T *c24_numb_downsamp;
  c24_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c24_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c24_set_sim_state_side_effects_c24_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 11U, chartInstance->c24_sfEvent);
  _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
  _SFD_DATA_RANGE_CHECK(*c24_Out_1, 2U);
  _SFD_DATA_RANGE_CHECK(*c24_Out_2, 3U);
  _SFD_DATA_RANGE_CHECK(*c24_Val_In, 4U);
  _SFD_DATA_RANGE_CHECK(*c24_numb_downsamp, 5U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c24_Val1, 6U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c24_Val2, 7U);
  chartInstance->c24_sfEvent = CALL_EVENT;
  c24_chartstep_c24_BuckyWagon_01(chartInstance);
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c24_chartstep_c24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T c24_d0;
  real_T c24_d1;
  real_T c24_d2;
  real_T c24_d3;
  real_T c24_d4;
  real_T c24_d5;
  real_T c24_d6;
  real_T c24_d7;
  real_T c24_d8;
  real_T c24_d9;
  real_T c24_d10;
  real_T c24_d11;
  real_T c24_d12;
  real_T c24_d13;
  real_T c24_d14;
  real_T c24_d15;
  real_T c24_d16;
  real_T c24_d17;
  real_T c24_d18;
  real_T c24_d19;
  real_T c24_d20;
  real_T *c24_Out_1;
  real_T *c24_Out_2;
  real_T *c24_numb_downsamp;
  real_T *c24_Val_In;
  c24_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c24_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 11U, chartInstance->c24_sfEvent);
  if ((int16_T)chartInstance->c24_is_active_c24_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 11U, chartInstance->c24_sfEvent);
    chartInstance->c24_is_active_c24_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c24_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                 chartInstance->c24_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c24_sfEvent);
    chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_downsample;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
    chartInstance->c24_tp_downsample = 1U;
    chartInstance->c24_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
    c24_d0 = chartInstance->c24_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c24_d0);
    chartInstance->c24_state = 1.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
    c24_d1 = chartInstance->c24_state;
    sf_mex_printf("%s =\\n", "state");
    sf_mex_call_debug("disp", 0U, 1U, 6, c24_d1);
  } else {
    switch (chartInstance->c24_is_c24_BuckyWagon_01) {
     case c24_IN_Out:
      CV_CHART_EVAL(11, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c24_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c24_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
            chartInstance->c24_count >= 2.0 != 0U, chartInstance->c24_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Out = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
        chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_downsample;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_downsample = 1U;
        chartInstance->c24_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d2 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d2);
        chartInstance->c24_state = 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
        c24_d3 = chartInstance->c24_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d3);
      } else {
        chartInstance->c24_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d4 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d4);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c24_sfEvent);
      break;

     case c24_IN_Value_1:
      CV_CHART_EVAL(11, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c24_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c24_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
            chartInstance->c24_count >= 2.0 != 0U, chartInstance->c24_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Value_1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c24_sfEvent);
        chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_downsample_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_downsample_2 = 1U;
        chartInstance->c24_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d5 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d5);
        chartInstance->c24_state = 3.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
        c24_d6 = chartInstance->c24_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d6);
      } else {
        chartInstance->c24_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d7 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d7);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c24_sfEvent);
      break;

     case c24_IN_Value_2:
      CV_CHART_EVAL(11, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c24_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c24_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
            chartInstance->c24_count >= 2.0 != 0U, chartInstance->c24_sfEvent)))
      {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Value_2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c24_sfEvent);
        chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_Out;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Out = 1U;
        chartInstance->c24_state = 5.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
        c24_d8 = chartInstance->c24_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d8);
        chartInstance->c24_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d9 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d9);
        *c24_Out_1 = chartInstance->c24_Val1;
        _SFD_DATA_RANGE_CHECK(*c24_Out_1, 2U);
        c24_d10 = *c24_Out_1;
        sf_mex_printf("%s =\\n", "Out_1");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d10);
        *c24_Out_2 = chartInstance->c24_Val2;
        _SFD_DATA_RANGE_CHECK(*c24_Out_2, 3U);
        c24_d11 = *c24_Out_2;
        sf_mex_printf("%s =\\n", "Out_2");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d11);
      } else {
        chartInstance->c24_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d12 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d12);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c24_sfEvent);
      break;

     case c24_IN_downsample:
      CV_CHART_EVAL(11, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c24_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   chartInstance->c24_sfEvent);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
            chartInstance->c24_count >= *c24_numb_downsamp != 0U,
            chartInstance->c24_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_downsample = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c24_sfEvent);
        chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_Value_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Value_1 = 1U;
        chartInstance->c24_Val1 = *c24_Val_In;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_Val1, 6U);
        c24_d13 = chartInstance->c24_Val1;
        sf_mex_printf("%s =\\n", "Val1");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d13);
        chartInstance->c24_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d14 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d14);
        chartInstance->c24_state = 2.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
        c24_d15 = chartInstance->c24_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d15);
      } else {
        chartInstance->c24_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d16 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d16);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c24_sfEvent);
      break;

     case c24_IN_downsample_2:
      CV_CHART_EVAL(11, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c24_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c24_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
            chartInstance->c24_count >= *c24_numb_downsamp != 0U,
            chartInstance->c24_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_downsample_2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c24_sfEvent);
        chartInstance->c24_is_c24_BuckyWagon_01 = c24_IN_Value_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c24_sfEvent);
        chartInstance->c24_tp_Value_2 = 1U;
        chartInstance->c24_Val2 = *c24_Val_In;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_Val2, 7U);
        c24_d17 = chartInstance->c24_Val2;
        sf_mex_printf("%s =\\n", "Val2");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d17);
        chartInstance->c24_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d18 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d18);
        chartInstance->c24_state = 4.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_state, 1U);
        c24_d19 = chartInstance->c24_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d19);
      } else {
        chartInstance->c24_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c24_count, 0U);
        c24_d20 = chartInstance->c24_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c24_d20);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c24_sfEvent);
      break;

     default:
      CV_CHART_EVAL(11, 0, 0);
      chartInstance->c24_is_c24_BuckyWagon_01 = (uint8_T)c24_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c24_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, chartInstance->c24_sfEvent);
}

static void initSimStructsc24_BuckyWagon_01(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

static void init_script_number_translation(uint32_T c24_machineNumber, uint32_T
  c24_chartNumber)
{
}

const mxArray *sf_c24_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c24_nameCaptureInfo = NULL;
  c24_nameCaptureInfo = NULL;
  sf_mex_assign(&c24_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c24_nameCaptureInfo;
}

static const mxArray *c24_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData)
{
  const mxArray *c24_mxArrayOutData = NULL;
  int32_T c24_u;
  const mxArray *c24_y = NULL;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_mxArrayOutData = NULL;
  c24_u = *(int32_T *)c24_inData;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_create("y", &c24_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c24_mxArrayOutData, c24_y);
  return c24_mxArrayOutData;
}

static int32_T c24_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  int32_T c24_y;
  int32_T c24_i0;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_i0, 1, 6, 0U, 0, 0U, 0);
  c24_y = c24_i0;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData)
{
  const mxArray *c24_b_sfEvent;
  const char_T *c24_identifier;
  emlrtMsgIdentifier c24_thisId;
  int32_T c24_y;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_b_sfEvent = sf_mex_dup(c24_mxArrayInData);
  c24_identifier = c24_varName;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  c24_y = c24_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_sfEvent),
    &c24_thisId);
  sf_mex_destroy(&c24_b_sfEvent);
  *(int32_T *)c24_outData = c24_y;
  sf_mex_destroy(&c24_mxArrayInData);
}

static const mxArray *c24_b_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData)
{
  const mxArray *c24_mxArrayOutData = NULL;
  uint8_T c24_u;
  const mxArray *c24_y = NULL;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_mxArrayOutData = NULL;
  c24_u = *(uint8_T *)c24_inData;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_create("y", &c24_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c24_mxArrayOutData, c24_y);
  return c24_mxArrayOutData;
}

static uint8_T c24_b_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_tp_Value_2, const char_T *c24_identifier)
{
  uint8_T c24_y;
  emlrtMsgIdentifier c24_thisId;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  c24_y = c24_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_tp_Value_2),
    &c24_thisId);
  sf_mex_destroy(&c24_b_tp_Value_2);
  return c24_y;
}

static uint8_T c24_c_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  uint8_T c24_y;
  uint8_T c24_u0;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_u0, 1, 3, 0U, 0, 0U, 0);
  c24_y = c24_u0;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData)
{
  const mxArray *c24_b_tp_Value_2;
  const char_T *c24_identifier;
  emlrtMsgIdentifier c24_thisId;
  uint8_T c24_y;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_b_tp_Value_2 = sf_mex_dup(c24_mxArrayInData);
  c24_identifier = c24_varName;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  c24_y = c24_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_tp_Value_2),
    &c24_thisId);
  sf_mex_destroy(&c24_b_tp_Value_2);
  *(uint8_T *)c24_outData = c24_y;
  sf_mex_destroy(&c24_mxArrayInData);
}

static const mxArray *c24_c_sf_marshallOut(void *chartInstanceVoid, void
  *c24_inData)
{
  const mxArray *c24_mxArrayOutData = NULL;
  real_T c24_u;
  const mxArray *c24_y = NULL;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_mxArrayOutData = NULL;
  c24_u = *(real_T *)c24_inData;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_create("y", &c24_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c24_mxArrayOutData, c24_y);
  return c24_mxArrayOutData;
}

static real_T c24_d_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_count, const char_T *c24_identifier)
{
  real_T c24_y;
  emlrtMsgIdentifier c24_thisId;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  c24_y = c24_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_count),
    &c24_thisId);
  sf_mex_destroy(&c24_b_count);
  return c24_y;
}

static real_T c24_e_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  real_T c24_y;
  real_T c24_d21;
  sf_mex_import(c24_parentId, sf_mex_dup(c24_u), &c24_d21, 1, 0, 0U, 0, 0U, 0);
  c24_y = c24_d21;
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void c24_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c24_mxArrayInData, const char_T *c24_varName, void *c24_outData)
{
  const mxArray *c24_b_count;
  const char_T *c24_identifier;
  emlrtMsgIdentifier c24_thisId;
  real_T c24_y;
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c24_b_count = sf_mex_dup(c24_mxArrayInData);
  c24_identifier = c24_varName;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  c24_y = c24_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c24_b_count),
    &c24_thisId);
  sf_mex_destroy(&c24_b_count);
  *(real_T *)c24_outData = c24_y;
  sf_mex_destroy(&c24_mxArrayInData);
}

static const mxArray *c24_f_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_b_setSimStateSideEffectsInfo, const char_T *
  c24_identifier)
{
  const mxArray *c24_y = NULL;
  emlrtMsgIdentifier c24_thisId;
  c24_y = NULL;
  c24_thisId.fIdentifier = c24_identifier;
  c24_thisId.fParent = NULL;
  sf_mex_assign(&c24_y, c24_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c24_b_setSimStateSideEffectsInfo), &c24_thisId));
  sf_mex_destroy(&c24_b_setSimStateSideEffectsInfo);
  return c24_y;
}

static const mxArray *c24_g_emlrt_marshallIn(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c24_u, const emlrtMsgIdentifier *c24_parentId)
{
  const mxArray *c24_y = NULL;
  c24_y = NULL;
  sf_mex_assign(&c24_y, sf_mex_duplicatearraysafe(&c24_u));
  sf_mex_destroy(&c24_u);
  return c24_y;
}

static void init_dsm_address_info(SFc24_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c24_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3300298376U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2275456519U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4156289157U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2059211990U);
}

mxArray *sf_c24_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(372736999U);
    pr[1] = (double)(1491338403U);
    pr[2] = (double)(157689766U);
    pr[3] = (double)(4080322901U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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

static const mxArray *sf_get_sim_state_info_c24_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[79],T\"Out_1\",},{M[1],M[80],T\"Out_2\",},{M[3],M[85],T\"Val1\",},{M[3],M[86],T\"Val2\",},{M[3],M[63],T\"count\",},{M[3],M[67],T\"state\",},{M[8],M[0],T\"is_active_c24_BuckyWagon_01\",},{M[9],M[0],T\"is_c24_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c24_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc24_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc24_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           24,
           5,
           6,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"count");
          _SFD_SET_DATA_PROPS(1,0,0,0,"state");
          _SFD_SET_DATA_PROPS(2,2,0,1,"Out_1");
          _SFD_SET_DATA_PROPS(3,2,0,1,"Out_2");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Val_In");
          _SFD_SET_DATA_PROPS(5,1,1,0,"numb_downsamp");
          _SFD_SET_DATA_PROPS(6,0,0,0,"Val1");
          _SFD_SET_DATA_PROPS(7,0,0,0,"Val2");
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

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
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

        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              0,NULL,NULL,
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c24_c_sf_marshallOut,(MexInFcnForType)
          c24_c_sf_marshallIn);

        {
          real_T *c24_Out_1;
          real_T *c24_Out_2;
          real_T *c24_Val_In;
          real_T *c24_numb_downsamp;
          c24_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c24_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c24_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c24_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, &chartInstance->c24_count);
          _SFD_SET_DATA_VALUE_PTR(1U, &chartInstance->c24_state);
          _SFD_SET_DATA_VALUE_PTR(2U, c24_Out_1);
          _SFD_SET_DATA_VALUE_PTR(3U, c24_Out_2);
          _SFD_SET_DATA_VALUE_PTR(4U, c24_Val_In);
          _SFD_SET_DATA_VALUE_PTR(5U, c24_numb_downsamp);
          _SFD_SET_DATA_VALUE_PTR(6U, &chartInstance->c24_Val1);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c24_Val2);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c24_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc24_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c24_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c24_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c24_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c24_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c24_BuckyWagon_01
    ((SFc24_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c24_BuckyWagon_01();/* state var info */
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

extern void sf_internal_set_sim_state_c24_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c24_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c24_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c24_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c24_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c24_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c24_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc24_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c24_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c24_BuckyWagon_01((SFc24_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c24_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BuckyWagon_01","BuckyWagon_01",24);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01","BuckyWagon_01",24,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01",
      "BuckyWagon_01",24,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",24,2);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",24,2);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",24);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(674929641U));
  ssSetChecksum1(S,(3767188249U));
  ssSetChecksum2(S,(953746832U));
  ssSetChecksum3(S,(356992354U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c24_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",24);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c24_BuckyWagon_01(SimStruct *S)
{
  SFc24_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc24_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc24_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc24_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c24_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c24_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c24_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c24_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c24_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c24_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c24_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c24_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c24_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c24_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c24_BuckyWagon_01;
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

void c24_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c24_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c24_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c24_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c24_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
