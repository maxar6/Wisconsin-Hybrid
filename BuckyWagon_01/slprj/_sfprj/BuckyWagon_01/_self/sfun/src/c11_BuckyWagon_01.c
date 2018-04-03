/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c11_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c11_IN_NO_ACTIVE_CHILD         (0U)
#define c11_IN_Value_2                 (3U)
#define c11_IN_downsample_2            (5U)
#define c11_IN_Out                     (1U)
#define c11_IN_downsample              (4U)
#define c11_IN_Value_1                 (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance);
static void enable_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c11_update_debugger_state_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_st);
static void c11_set_sim_state_side_effects_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c11_chartstep_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber);
static const mxArray *c11_sf_marshall(void *chartInstanceVoid, void *c11_u);
static const mxArray *c11_b_sf_marshall(void *chartInstanceVoid, void *c11_u);
static const mxArray *c11_c_sf_marshall(void *chartInstanceVoid, void *c11_u);
static real_T c11_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_Out_1, const char_T *c11_name);
static uint8_T c11_b_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_b_is_active_c11_BuckyWagon_01, const char_T
  *c11_name);
static const mxArray *c11_c_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_b_setSimStateSideEffectsInfo, const char_T *
  c11_name);
static void init_test_point_addr_map(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T *c11_Out_1;
  real_T *c11_Out_2;
  c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c11_doSetSimStateSideEffects = 0U;
  chartInstance->c11_setSimStateSideEffectsInfo = NULL;
  chartInstance->c11_tp_Out = 0U;
  chartInstance->c11_tp_Value_1 = 0U;
  chartInstance->c11_tp_Value_2 = 0U;
  chartInstance->c11_tp_downsample = 0U;
  chartInstance->c11_tp_downsample_2 = 0U;
  chartInstance->c11_is_active_c11_BuckyWagon_01 = 0U;
  chartInstance->c11_is_c11_BuckyWagon_01 = 0U;
  chartInstance->c11_count = 0.0;
  chartInstance->c11_state = 0.0;
  chartInstance->c11_Val1 = 0.0;
  chartInstance->c11_Val2 = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c11_Out_1 = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c11_Out_2 = 0.0;
  }
}

static void initialize_params_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance)
{
}

static void enable_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c11_update_debugger_state_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c11_prevAniVal;
  c11_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c11_is_active_c11_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,9);
  }

  if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Value_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_downsample_2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Out) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_downsample) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Value_1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c11_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c11_st = NULL;
  const mxArray *c11_y = NULL;
  real_T c11_hoistedGlobal;
  real_T c11_u;
  const mxArray *c11_b_y = NULL;
  real_T c11_b_hoistedGlobal;
  real_T c11_b_u;
  const mxArray *c11_c_y = NULL;
  real_T c11_c_hoistedGlobal;
  real_T c11_c_u;
  const mxArray *c11_d_y = NULL;
  real_T c11_d_hoistedGlobal;
  real_T c11_d_u;
  const mxArray *c11_e_y = NULL;
  real_T c11_e_hoistedGlobal;
  real_T c11_e_u;
  const mxArray *c11_f_y = NULL;
  real_T c11_f_hoistedGlobal;
  real_T c11_f_u;
  const mxArray *c11_g_y = NULL;
  uint8_T c11_g_hoistedGlobal;
  uint8_T c11_g_u;
  const mxArray *c11_h_y = NULL;
  uint8_T c11_h_hoistedGlobal;
  uint8_T c11_h_u;
  const mxArray *c11_i_y = NULL;
  real_T *c11_Out_1;
  real_T *c11_Out_2;
  c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellarray(8));
  c11_hoistedGlobal = *c11_Out_1;
  c11_u = c11_hoistedGlobal;
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_b_hoistedGlobal = *c11_Out_2;
  c11_b_u = c11_b_hoistedGlobal;
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", &c11_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_c_hoistedGlobal = chartInstance->c11_Val1;
  c11_c_u = c11_c_hoistedGlobal;
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", &c11_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_d_hoistedGlobal = chartInstance->c11_Val2;
  c11_d_u = c11_d_hoistedGlobal;
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", &c11_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 3, c11_e_y);
  c11_e_hoistedGlobal = chartInstance->c11_count;
  c11_e_u = c11_e_hoistedGlobal;
  c11_f_y = NULL;
  sf_mex_assign(&c11_f_y, sf_mex_create("y", &c11_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 4, c11_f_y);
  c11_f_hoistedGlobal = chartInstance->c11_state;
  c11_f_u = c11_f_hoistedGlobal;
  c11_g_y = NULL;
  sf_mex_assign(&c11_g_y, sf_mex_create("y", &c11_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 5, c11_g_y);
  c11_g_hoistedGlobal = chartInstance->c11_is_active_c11_BuckyWagon_01;
  c11_g_u = c11_g_hoistedGlobal;
  c11_h_y = NULL;
  sf_mex_assign(&c11_h_y, sf_mex_create("y", &c11_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 6, c11_h_y);
  c11_h_hoistedGlobal = chartInstance->c11_is_c11_BuckyWagon_01;
  c11_h_u = c11_h_hoistedGlobal;
  c11_i_y = NULL;
  sf_mex_assign(&c11_i_y, sf_mex_create("y", &c11_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 7, c11_i_y);
  sf_mex_assign(&c11_st, c11_y);
  return c11_st;
}

static void set_sim_state_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  real_T *c11_Out_1;
  real_T *c11_Out_2;
  c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_u = sf_mex_dup(c11_st);
  *c11_Out_1 = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 0)), "Out_1");
  *c11_Out_2 = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 1)), "Out_2");
  chartInstance->c11_Val1 = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 2)), "Val1");
  chartInstance->c11_Val2 = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 3)), "Val2");
  chartInstance->c11_count = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 4)), "count");
  chartInstance->c11_state = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 5)), "state");
  chartInstance->c11_is_active_c11_BuckyWagon_01 = c11_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 6)),
     "is_active_c11_BuckyWagon_01");
  chartInstance->c11_is_c11_BuckyWagon_01 = c11_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c11_u, 7)),
    "is_c11_BuckyWagon_01");
  sf_mex_assign(&chartInstance->c11_setSimStateSideEffectsInfo,
                c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u
     , 8)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c11_u);
  chartInstance->c11_doSetSimStateSideEffects = 1U;
  c11_update_debugger_state_c11_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c11_st);
}

static void c11_set_sim_state_side_effects_c11_BuckyWagon_01
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c11_doSetSimStateSideEffects != 0) {
    if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Out) {
      chartInstance->c11_tp_Out = 1U;
    } else {
      chartInstance->c11_tp_Out = 0U;
    }

    if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Value_1) {
      chartInstance->c11_tp_Value_1 = 1U;
    } else {
      chartInstance->c11_tp_Value_1 = 0U;
    }

    if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_Value_2) {
      chartInstance->c11_tp_Value_2 = 1U;
    } else {
      chartInstance->c11_tp_Value_2 = 0U;
    }

    if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_downsample) {
      chartInstance->c11_tp_downsample = 1U;
    } else {
      chartInstance->c11_tp_downsample = 0U;
    }

    if (chartInstance->c11_is_c11_BuckyWagon_01 == c11_IN_downsample_2) {
      chartInstance->c11_tp_downsample_2 = 1U;
    } else {
      chartInstance->c11_tp_downsample_2 = 0U;
    }

    chartInstance->c11_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c11_setSimStateSideEffectsInfo);
}

static void sf_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  int32_T c11_previousEvent;
  real_T *c11_Out_1;
  real_T *c11_Out_2;
  real_T *c11_Val_In;
  real_T *c11_numb_downsamp;
  c11_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c11_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_set_sim_state_side_effects_c11_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,9);
  _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
  _SFD_DATA_RANGE_CHECK(*c11_Out_1, 2U);
  _SFD_DATA_RANGE_CHECK(*c11_Out_2, 3U);
  _SFD_DATA_RANGE_CHECK(*c11_Val_In, 4U);
  _SFD_DATA_RANGE_CHECK(*c11_numb_downsamp, 5U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c11_Val1, 6U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c11_Val2, 7U);
  c11_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c11_chartstep_c11_BuckyWagon_01(chartInstance);
  _sfEvent_ = c11_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c11_chartstep_c11_BuckyWagon_01(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  real_T c11_d0;
  real_T c11_d1;
  real_T c11_d2;
  real_T c11_d3;
  real_T c11_d4;
  real_T c11_d5;
  real_T c11_d6;
  real_T c11_d7;
  real_T c11_d8;
  real_T c11_d9;
  real_T c11_d10;
  real_T c11_d11;
  real_T c11_d12;
  real_T c11_d13;
  real_T c11_d14;
  real_T c11_d15;
  real_T c11_d16;
  real_T c11_d17;
  real_T c11_d18;
  real_T c11_d19;
  real_T c11_d20;
  real_T *c11_numb_downsamp;
  real_T *c11_Val_In;
  real_T *c11_Out_1;
  real_T *c11_Out_2;
  c11_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c11_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,9);
  if ((int16_T)chartInstance->c11_is_active_c11_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,9);
    chartInstance->c11_is_active_c11_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
    chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_downsample;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c11_tp_downsample = 1U;
    chartInstance->c11_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
    c11_d0 = chartInstance->c11_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c11_d0);
    chartInstance->c11_state = 1.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
    c11_d1 = chartInstance->c11_state;
    sf_mex_printf("%s =\\n", "state");
    sf_mex_call_debug("disp", 0U, 1U, 6, c11_d1);
  } else {
    switch (chartInstance->c11_is_c11_BuckyWagon_01) {
     case c11_IN_Out:
      CV_CHART_EVAL(9,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
            ((chartInstance->c11_count >= 2.0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c11_tp_Out = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_downsample;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c11_tp_downsample = 1U;
        chartInstance->c11_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d2 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d2);
        chartInstance->c11_state = 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
        c11_d3 = chartInstance->c11_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d3);
      } else {
        chartInstance->c11_count = chartInstance->c11_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d4 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d4);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c11_IN_Value_1:
      CV_CHART_EVAL(9,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,
            ((chartInstance->c11_count >= 2.0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c11_tp_Value_1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_downsample_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c11_tp_downsample_2 = 1U;
        chartInstance->c11_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d5 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d5);
        chartInstance->c11_state = 3.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
        c11_d6 = chartInstance->c11_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d6);
      } else {
        chartInstance->c11_count = chartInstance->c11_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d7 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d7);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c11_IN_Value_2:
      CV_CHART_EVAL(9,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,
            ((chartInstance->c11_count >= 2.0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c11_tp_Value_2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_Out;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c11_tp_Out = 1U;
        chartInstance->c11_state = 5.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
        c11_d8 = chartInstance->c11_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d8);
        chartInstance->c11_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d9 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d9);
        *c11_Out_1 = chartInstance->c11_Val1;
        _SFD_DATA_RANGE_CHECK(*c11_Out_1, 2U);
        c11_d10 = *c11_Out_1;
        sf_mex_printf("%s =\\n", "Out_1");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d10);
        *c11_Out_2 = chartInstance->c11_Val2;
        _SFD_DATA_RANGE_CHECK(*c11_Out_2, 3U);
        c11_d11 = *c11_Out_2;
        sf_mex_printf("%s =\\n", "Out_2");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d11);
      } else {
        chartInstance->c11_count = chartInstance->c11_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d12 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d12);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c11_IN_downsample:
      CV_CHART_EVAL(9,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0,0,
            ((chartInstance->c11_count >= *c11_numb_downsamp)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c11_tp_downsample = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_Value_1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c11_tp_Value_1 = 1U;
        chartInstance->c11_Val1 = *c11_Val_In;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_Val1, 6U);
        c11_d13 = chartInstance->c11_Val1;
        sf_mex_printf("%s =\\n", "Val1");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d13);
        chartInstance->c11_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d14 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d14);
        chartInstance->c11_state = 2.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
        c11_d15 = chartInstance->c11_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d15);
      } else {
        chartInstance->c11_count = chartInstance->c11_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d16 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d16);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c11_IN_downsample_2:
      CV_CHART_EVAL(9,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,
            ((chartInstance->c11_count >= *c11_numb_downsamp)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c11_tp_downsample_2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c11_is_c11_BuckyWagon_01 = c11_IN_Value_2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c11_tp_Value_2 = 1U;
        chartInstance->c11_Val2 = *c11_Val_In;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_Val2, 7U);
        c11_d17 = chartInstance->c11_Val2;
        sf_mex_printf("%s =\\n", "Val2");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d17);
        chartInstance->c11_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d18 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d18);
        chartInstance->c11_state = 4.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_state, 1U);
        c11_d19 = chartInstance->c11_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d19);
      } else {
        chartInstance->c11_count = chartInstance->c11_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c11_count, 0U);
        c11_d20 = chartInstance->c11_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c11_d20);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_CHART_EVAL(9,0,0);
      chartInstance->c11_is_c11_BuckyWagon_01 = (uint8_T)c11_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
}

static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber)
{
}

const mxArray *sf_c11_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c11_nameCaptureInfo;
}

static const mxArray *c11_sf_marshall(void *chartInstanceVoid, void *c11_u)
{
  const mxArray *c11_y = NULL;
  uint8_T c11_b_u;
  const mxArray *c11_b_y = NULL;
  SFc11_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc11_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c11_y = NULL;
  c11_b_u = *((uint8_T *)c11_u);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_y, c11_b_y);
  return c11_y;
}

static const mxArray *c11_b_sf_marshall(void *chartInstanceVoid, void *c11_u)
{
  const mxArray *c11_y = NULL;
  boolean_T c11_b_u;
  const mxArray *c11_b_y = NULL;
  SFc11_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc11_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c11_y = NULL;
  c11_b_u = *((boolean_T *)c11_u);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_y, c11_b_y);
  return c11_y;
}

static const mxArray *c11_c_sf_marshall(void *chartInstanceVoid, void *c11_u)
{
  const mxArray *c11_y = NULL;
  real_T c11_b_u;
  const mxArray *c11_b_y = NULL;
  SFc11_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc11_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c11_y = NULL;
  c11_b_u = *((real_T *)c11_u);
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_y, c11_b_y);
  return c11_y;
}

static real_T c11_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c11_Out_1, const char_T *
  c11_name)
{
  real_T c11_y;
  real_T c11_d21;
  sf_mex_import(c11_name, sf_mex_dup(c11_Out_1), &c11_d21, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d21;
  sf_mex_destroy(&c11_Out_1);
  return c11_y;
}

static uint8_T c11_b_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c11_b_is_active_c11_BuckyWagon_01, const char_T *c11_name)
{
  uint8_T c11_y;
  uint8_T c11_u0;
  sf_mex_import(c11_name, sf_mex_dup(c11_b_is_active_c11_BuckyWagon_01), &c11_u0,
                1, 3, 0U, 0, 0U, 0);
  c11_y = c11_u0;
  sf_mex_destroy(&c11_b_is_active_c11_BuckyWagon_01);
  return c11_y;
}

static const mxArray *c11_c_emlrt_marshallIn(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c11_b_setSimStateSideEffectsInfo, const char_T *c11_name)
{
  const mxArray *c11_y = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_duplicatearraysafe
                (&c11_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c11_b_setSimStateSideEffectsInfo);
  return c11_y;
}

static void init_test_point_addr_map(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c11_testPointAddrMap[0] = &chartInstance->c11_count;
  chartInstance->c11_testPointAddrMap[1] = &chartInstance->c11_state;
  chartInstance->c11_testPointAddrMap[2] = &chartInstance->c11_Val1;
  chartInstance->c11_testPointAddrMap[3] = &chartInstance->c11_Val2;
  chartInstance->c11_testPointAddrMap[4] = &chartInstance->c11_tp_Out;
  chartInstance->c11_testPointAddrMap[5] = &chartInstance->c11_tp_Value_1;
  chartInstance->c11_testPointAddrMap[6] = &chartInstance->c11_tp_Value_2;
  chartInstance->c11_testPointAddrMap[7] = &chartInstance->c11_tp_downsample;
  chartInstance->c11_testPointAddrMap[8] = &chartInstance->c11_tp_downsample_2;
}

static void **get_test_point_address_map(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c11_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc11_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c11_testPointMappingInfo;
}

static void init_dsm_address_info(SFc11_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c11_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3841864934U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3615338539U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4116134091U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2918225907U);
}

mxArray *sf_c11_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2226186681U);
    pr[1] = (double)(2439287103U);
    pr[2] = (double)(677018058U);
    pr[3] = (double)(1645039920U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c11_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[79],T\"Out_1\",},{M[1],M[80],T\"Out_2\",},{M[3],M[85],T\"Val1\",},{M[3],M[86],T\"Val2\",},{M[3],M[63],T\"count\",},{M[3],M[67],T\"state\",},{M[8],M[0],T\"is_active_c11_BuckyWagon_01\",},{M[9],M[0],T\"is_c11_BuckyWagon_01\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc11_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc11_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           11,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Out_1",0,
                              (MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Out_2",0,
                              (MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Val_In",
                              0,(MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "numb_downsamp",0,(MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Val1",0,
                              (MexFcnForType)c11_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Val2",0,
                              (MexFcnForType)c11_c_sf_marshall);
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

        {
          real_T *c11_Out_1;
          real_T *c11_Out_2;
          real_T *c11_Val_In;
          real_T *c11_numb_downsamp;
          c11_numb_downsamp = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c11_Val_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c11_Out_2 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c11_Out_1 = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, &chartInstance->c11_count);
          _SFD_SET_DATA_VALUE_PTR(1U, &chartInstance->c11_state);
          _SFD_SET_DATA_VALUE_PTR(2U, c11_Out_1);
          _SFD_SET_DATA_VALUE_PTR(3U, c11_Out_2);
          _SFD_SET_DATA_VALUE_PTR(4U, c11_Val_In);
          _SFD_SET_DATA_VALUE_PTR(5U, c11_numb_downsamp);
          _SFD_SET_DATA_VALUE_PTR(6U, &chartInstance->c11_Val1);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c11_Val2);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c11_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc11_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c11_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c11_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c11_BuckyWagon_01
    ((SFc11_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c11_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c11_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c11_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c11_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c11_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c11_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c11_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c11_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_BuckyWagon_01((SFc11_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c11_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",11);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",11,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",11,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",11,2);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",11,2);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",11);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3114813224U));
  ssSetChecksum1(S,(1652728309U));
  ssSetChecksum2(S,(1506984510U));
  ssSetChecksum3(S,(2183387016U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c11_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",11);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c11_BuckyWagon_01(SimStruct *S)
{
  SFc11_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc11_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc11_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc11_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c11_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c11_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c11_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c11_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c11_BuckyWagon_01;
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

void c11_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c11_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_BuckyWagon_01_method_dispatcher.\n"
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

  { 1, 0, "StateflowChart/state", "state", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Val1", "Val1", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Val2", "Val2", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/Out", "Out", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/Value_1", "Value_1", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/Value_2", "Value_2", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/downsample", "downsample", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/downsample_2", "downsample_2", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    9                                  /* Num Block IO signals */
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
  SFc11_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc11_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
