/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c3_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c3_IN_NO_ACTIVE_CHILD          (0U)
#define c3_IN_NoFault                  (2U)
#define c3_IN_Fault                    (1U)
#define c3_IN_scrollText               (3U)
#define c3_IN_lastWait                 (2U)
#define c3_IN_scrollTextFirst          (4U)
#define c3_IN_CheckNextFault           (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c3_update_debugger_state_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void c3_Fault(SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_c_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_d_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_e_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_f_sf_marshall(void *chartInstanceVoid, void *c3_u);
static uint16_T c3_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_minTimer, const char_T *c3_name);
static uint8_T c3_b_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_mode, const char_T *c3_name);
static void c3_c_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_text, const char_T *c3_name, uint8_T c3_y[10]);
static const mxArray *c3_d_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_name);
static uint16_T c3__u16_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b);
static uint8_T c3__u8_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b);
static void init_test_point_addr_map(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  int32_T c3_i0;
  uint8_T *c3_mode;
  uint16_T *c3_minTimer;
  uint8_T *c3_scrollIndex;
  uint16_T *c3_scrollTimer;
  uint8_T (*c3_text)[10];
  c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
  c3_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_is_Fault = 0U;
  chartInstance->c3_tp_Fault = 0U;
  chartInstance->c3_tp_CheckNextFault = 0U;
  chartInstance->c3_tp_lastWait = 0U;
  chartInstance->c3_tp_scrollText = 0U;
  chartInstance->c3_tp_scrollTextFirst = 0U;
  chartInstance->c3_tp_NoFault = 0U;
  chartInstance->c3_is_active_c3_BuckyWagon_01 = 0U;
  chartInstance->c3_is_c3_BuckyWagon_01 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c3_mode = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    for (c3_i0 = 0; c3_i0 < 10; c3_i0 = c3_i0 + 1) {
      (*c3_text)[c3_i0] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c3_minTimer = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c3_scrollIndex = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c3_scrollTimer = 0U;
  }
}

static void initialize_params_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  sf_call_output_fcn_enable(chartInstance->S, 0, "getNewFault", 0);
}

static void disable_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  sf_call_output_fcn_disable(chartInstance->S, 0, "getNewFault", 0);
}

static void c3_update_debugger_state_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c3_is_active_c3_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,2);
  }

  if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_NoFault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_Fault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c3_is_Fault == c3_IN_scrollText) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c3_is_Fault == c3_IN_lastWait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c3_is_Fault == c3_IN_scrollTextFirst) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c3_is_Fault == c3_IN_CheckNextFault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c3_st = NULL;
  const mxArray *c3_y = NULL;
  uint16_T c3_hoistedGlobal;
  uint16_T c3_u;
  const mxArray *c3_b_y = NULL;
  uint8_T c3_b_hoistedGlobal;
  uint8_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  uint8_T c3_c_hoistedGlobal;
  uint8_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint16_T c3_d_hoistedGlobal;
  uint16_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  int32_T c3_i1;
  uint8_T c3_e_hoistedGlobal[10];
  int32_T c3_i2;
  uint8_T c3_e_u[10];
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  uint8_T c3_f_u;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  uint8_T c3_g_u;
  const mxArray *c3_h_y = NULL;
  uint8_T c3_h_hoistedGlobal;
  uint8_T c3_h_u;
  const mxArray *c3_i_y = NULL;
  uint16_T *c3_minTimer;
  uint8_T *c3_mode;
  uint8_T *c3_scrollIndex;
  uint16_T *c3_scrollTimer;
  uint8_T (*c3_text)[10];
  c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
  c3_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(8));
  c3_hoistedGlobal = *c3_minTimer;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *c3_mode;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *c3_scrollIndex;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *c3_scrollTimer;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 3, c3_e_y);
  for (c3_i1 = 0; c3_i1 < 10; c3_i1 = c3_i1 + 1) {
    c3_e_hoistedGlobal[c3_i1] = (*c3_text)[c3_i1];
  }

  for (c3_i2 = 0; c3_i2 < 10; c3_i2 = c3_i2 + 1) {
    c3_e_u[c3_i2] = c3_e_hoistedGlobal[c3_i2];
  }

  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 3, 0U, 1U, 0U, 1, 10));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = chartInstance->c3_is_active_c3_BuckyWagon_01;
  c3_f_u = c3_f_hoistedGlobal;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = chartInstance->c3_is_c3_BuckyWagon_01;
  c3_g_u = c3_g_hoistedGlobal;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_h_hoistedGlobal = chartInstance->c3_is_Fault;
  c3_h_u = c3_h_hoistedGlobal;
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y", &c3_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 7, c3_i_y);
  sf_mex_assign(&c3_st, c3_y);
  return c3_st;
}

static void set_sim_state_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  uint8_T c3_uv0[10];
  int32_T c3_i3;
  uint16_T *c3_minTimer;
  uint8_T *c3_mode;
  uint8_T *c3_scrollIndex;
  uint16_T *c3_scrollTimer;
  uint8_T (*c3_text)[10];
  c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
  c3_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_u = sf_mex_dup(c3_st);
  *c3_minTimer = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 0)), "minTimer");
  *c3_mode = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u,
    1)), "mode");
  *c3_scrollIndex = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "scrollIndex");
  *c3_scrollTimer = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 3)), "scrollTimer");
  c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
                        "text", c3_uv0);
  for (c3_i3 = 0; c3_i3 < 10; c3_i3 = c3_i3 + 1) {
    (*c3_text)[c3_i3] = c3_uv0[c3_i3];
  }

  chartInstance->c3_is_active_c3_BuckyWagon_01 = c3_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
     "is_active_c3_BuckyWagon_01");
  chartInstance->c3_is_c3_BuckyWagon_01 = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 6)),
    "is_c3_BuckyWagon_01");
  chartInstance->c3_is_Fault = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 7)), "is_Fault");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 8)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_Fault) {
      chartInstance->c3_tp_Fault = 1U;
    } else {
      chartInstance->c3_tp_Fault = 0U;
    }

    if (chartInstance->c3_is_Fault == c3_IN_CheckNextFault) {
      chartInstance->c3_tp_CheckNextFault = 1U;
    } else {
      chartInstance->c3_tp_CheckNextFault = 0U;
    }

    if (chartInstance->c3_is_Fault == c3_IN_lastWait) {
      chartInstance->c3_tp_lastWait = 1U;
    } else {
      chartInstance->c3_tp_lastWait = 0U;
    }

    if (chartInstance->c3_is_Fault == c3_IN_scrollText) {
      chartInstance->c3_tp_scrollText = 1U;
    } else {
      chartInstance->c3_tp_scrollText = 0U;
    }

    if (chartInstance->c3_is_Fault == c3_IN_scrollTextFirst) {
      chartInstance->c3_tp_scrollTextFirst = 1U;
    } else {
      chartInstance->c3_tp_scrollTextFirst = 0U;
    }

    if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_NoFault) {
      chartInstance->c3_tp_NoFault = 1U;
    } else {
      chartInstance->c3_tp_NoFault = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_c3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_previousEvent;
  int32_T c3_i7;
  int32_T c3_i8;
  boolean_T c3_temp;
  boolean_T *c3_invertMode;
  uint8_T *c3_mode;
  uint8_T *c3_dispLength;
  uint16_T *c3_lastScrollTime;
  uint16_T *c3_scrollTime;
  uint16_T *c3_firstScrollTime;
  boolean_T *c3_dispFaults;
  uint16_T *c3_minTime;
  real_T *c3_faultNameLen;
  boolean_T *c3_faultValid;
  uint16_T *c3_minTimer;
  uint8_T *c3_scrollIndex;
  uint16_T *c3_scrollTimer;
  uint8_T (*c3_text)[10];
  uint8_T (*c3_faultName)[27];
  uint8_T (*c3_noErrText)[10];
  c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_faultValid = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c3_faultName = (uint8_T (*)[27])ssGetInputPortSignal(chartInstance->S, 9);
  c3_faultNameLen = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c3_minTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_dispFaults = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_firstScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_scrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_lastScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_dispLength = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
  c3_noErrText = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 1);
  c3_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_invertMode = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c3_set_sim_state_side_effects_c3_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,2);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_invertMode, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_mode, 1U);
  for (c3_i4 = 0; c3_i4 < 10; c3_i4 = c3_i4 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_noErrText)[c3_i4], 2U);
  }

  for (c3_i5 = 0; c3_i5 < 10; c3_i5 = c3_i5 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i5], 3U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c3_dispLength, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_lastScrollTime, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTime, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_firstScrollTime, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_dispFaults, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_minTime, 9U);
  _SFD_DATA_RANGE_CHECK(*c3_faultNameLen, 10U);
  for (c3_i6 = 0; c3_i6 < 27; c3_i6 = c3_i6 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_faultName)[c3_i6], 11U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c3_faultValid, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
  c3_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,2);
  if ((int16_T)chartInstance->c3_is_active_c3_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,2);
    chartInstance->c3_is_active_c3_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_NoFault;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c3_tp_NoFault = 1U;
    for (c3_i7 = 0; c3_i7 < 10; c3_i7 = c3_i7 + 1) {
      (*c3_text)[c3_i7] = (*c3_noErrText)[c3_i7];
    }

    for (c3_i8 = 0; c3_i8 < 10; c3_i8 = c3_i8 + 1) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i8], 3U);
    }
  } else {
    switch (chartInstance->c3_is_c3_BuckyWagon_01) {
     case c3_IN_Fault:
      CV_CHART_EVAL(2,0,1);
      c3_Fault(chartInstance);
      break;

     case c3_IN_NoFault:
      CV_CHART_EVAL(2,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      c3_temp = (_SFD_CCP_CALL(1,0,((*c3_faultValid)!=0)) != 0);
      if (c3_temp) {
        c3_temp = (_SFD_CCP_CALL(1,1,((*c3_dispFaults)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c3_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c3_tp_NoFault = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_Fault;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c3_tp_Fault = 1U;
        *c3_mode = !(*c3_invertMode);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_mode, 1U);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
        chartInstance->c3_is_Fault = c3_IN_scrollTextFirst;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c3_tp_scrollTextFirst = 1U;
        *c3_scrollTimer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
        *c3_scrollIndex = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
        *c3_minTimer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
        memcpy(&(*c3_text)[0], &(*c3_faultName)[0], *c3_dispLength);
        (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)] = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)], 3U);
      } else {
        *c3_mode = (uint8_T)*c3_invertMode;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_mode, 1U);
        sf_call_output_fcn_call(chartInstance->S, 0, "getNewFault", 0);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     default:
      CV_CHART_EVAL(2,0,0);
      chartInstance->c3_is_c3_BuckyWagon_01 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
  _sfEvent_ = c3_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c3_Fault(SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  int32_T c3_i9;
  int32_T c3_i10;
  boolean_T c3_b_temp;
  boolean_T *c3_faultValid;
  boolean_T *c3_dispFaults;
  uint16_T *c3_scrollTimer;
  uint8_T *c3_scrollIndex;
  uint16_T *c3_minTimer;
  uint8_T (*c3_text)[10];
  uint8_T (*c3_faultName)[27];
  uint8_T *c3_dispLength;
  uint16_T *c3_lastScrollTime;
  uint16_T *c3_minTime;
  uint16_T *c3_scrollTime;
  real_T *c3_faultNameLen;
  uint16_T *c3_firstScrollTime;
  uint8_T (*c3_noErrText)[10];
  c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_faultValid = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c3_faultName = (uint8_T (*)[27])ssGetInputPortSignal(chartInstance->S, 9);
  c3_faultNameLen = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c3_minTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_dispFaults = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_firstScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_scrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_lastScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_dispLength = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
  c3_noErrText = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  c3_temp = (_SFD_CCP_CALL(6,0,((*c3_faultValid)!=0)) != 0);
  if (c3_temp) {
    c3_temp = (_SFD_CCP_CALL(6,1,((*c3_dispFaults)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(6U, !c3_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
    switch (chartInstance->c3_is_Fault) {
     case c3_IN_CheckNextFault:
      CV_STATE_EVAL(0,1,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c3_tp_CheckNextFault = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c3_IN_lastWait:
      CV_STATE_EVAL(0,1,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c3_tp_lastWait = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c3_IN_scrollText:
      CV_STATE_EVAL(0,1,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c3_tp_scrollText = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c3_IN_scrollTextFirst:
      CV_STATE_EVAL(0,1,4);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
      chartInstance->c3_tp_scrollTextFirst = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_STATE_EVAL(0,1,0);
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      break;
    }

    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c3_tp_Fault = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_NoFault;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c3_tp_NoFault = 1U;
    for (c3_i9 = 0; c3_i9 < 10; c3_i9 = c3_i9 + 1) {
      (*c3_text)[c3_i9] = (*c3_noErrText)[c3_i9];
    }

    for (c3_i10 = 0; c3_i10 < 10; c3_i10 = c3_i10 + 1) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i10], 3U);
    }
  } else {
    *c3_minTimer = c3__u16_s32_(chartInstance, *c3_minTimer + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
    switch (chartInstance->c3_is_Fault) {
     case c3_IN_CheckNextFault:
      CV_STATE_EVAL(0,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c3_tp_CheckNextFault = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c3_is_Fault = c3_IN_scrollTextFirst;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c3_tp_scrollTextFirst = 1U;
      *c3_scrollTimer = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      *c3_scrollIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
      *c3_minTimer = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
      memcpy(&(*c3_text)[0], &(*c3_faultName)[0], *c3_dispLength);
      (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
        *c3_dispLength, 0, 9, 1, 0)] = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
                            (3U, (int32_T)*c3_dispLength, 0, 9, 1, 0)], 3U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c3_IN_lastWait:
      CV_STATE_EVAL(0,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      c3_b_temp = (_SFD_CCP_CALL(5,0,((*c3_scrollTimer > *c3_lastScrollTime)!=0))
                   != 0);
      if (c3_b_temp) {
        c3_b_temp = (_SFD_CCP_CALL(5,1,((*c3_minTimer > *c3_minTime)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(5U, (int32_T)c3_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        sf_call_output_fcn_call(chartInstance->S, 0, "getNewFault", 0);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c3_tp_lastWait = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c3_is_Fault = c3_IN_CheckNextFault;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c3_tp_CheckNextFault = 1U;
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c3_IN_scrollText:
      CV_STATE_EVAL(0,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c3_scrollTimer >=
              *c3_scrollTime)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c3_faultNameLen
                - 2.0 >= (real_T)(*c3_dispLength + *c3_scrollIndex))!=0)))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          *c3_scrollIndex = c3__u8_s32_(chartInstance, *c3_scrollIndex + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c3_tp_scrollText = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c3_is_Fault = c3_IN_scrollText;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c3_tp_scrollText = 1U;
          *c3_scrollTimer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
          memcpy(&(*c3_text)[0], &(*c3_faultName)[(int32_T)(uint8_T)
                 _SFD_ARRAY_BOUNDS_CHECK(11U, (int32_T)*c3_scrollIndex, 0, 26, 1,
                  0)], *
                 c3_dispLength);
          (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
            *c3_dispLength, 0, 9, 1, 0)] = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
            *c3_dispLength, 0, 9, 1, 0)], 3U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c3_tp_scrollText = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c3_is_Fault = c3_IN_lastWait;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c3_tp_lastWait = 1U;
        }
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c3_IN_scrollTextFirst:
      CV_STATE_EVAL(0,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,((*c3_scrollTimer >=
              *c3_firstScrollTime)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        *c3_scrollIndex = c3__u8_s32_(chartInstance, *c3_scrollIndex + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c3_tp_scrollTextFirst = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c3_is_Fault = c3_IN_scrollText;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c3_tp_scrollText = 1U;
        *c3_scrollTimer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
        memcpy(&(*c3_text)[0], &(*c3_faultName)[(int32_T)(uint8_T)
               _SFD_ARRAY_BOUNDS_CHECK(11U, (int32_T)*c3_scrollIndex, 0, 26, 1,
                0)], *
               c3_dispLength);
        (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)] = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)], 3U);
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     default:
      CV_STATE_EVAL(0,0,0);
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

const mxArray *sf_c3_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c3_nameCaptureInfo;
}

static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  uint8_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((uint8_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  boolean_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((boolean_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_c_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  int32_T c3_i11;
  uint8_T c3_b_u[10];
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  for (c3_i11 = 0; c3_i11 < 10; c3_i11 = c3_i11 + 1) {
    c3_b_u[c3_i11] = (*((uint8_T (*)[10])c3_u))[c3_i11];
  }

  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 3, 0U, 1U, 0U, 1, 10));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_d_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  uint16_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((uint16_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_e_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  real_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((real_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_f_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  int32_T c3_i12;
  uint8_T c3_b_u[27];
  const mxArray *c3_b_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  for (c3_i12 = 0; c3_i12 < 27; c3_i12 = c3_i12 + 1) {
    c3_b_u[c3_i12] = (*((uint8_T (*)[27])c3_u))[c3_i12];
  }

  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 3, 0U, 1U, 0U, 1, 27));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static uint16_T c3_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_minTimer, const char_T *
  c3_name)
{
  uint16_T c3_y;
  uint16_T c3_u0;
  sf_mex_import(c3_name, sf_mex_dup(c3_minTimer), &c3_u0, 1, 5, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_minTimer);
  return c3_y;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_mode, const char_T *c3_name)
{
  uint8_T c3_y;
  uint8_T c3_u1;
  sf_mex_import(c3_name, sf_mex_dup(c3_mode), &c3_u1, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u1;
  sf_mex_destroy(&c3_mode);
  return c3_y;
}

static void c3_c_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_text, const char_T *c3_name,
  uint8_T c3_y[10])
{
  uint8_T c3_uv1[10];
  int32_T c3_i13;
  sf_mex_import(c3_name, sf_mex_dup(c3_text), &c3_uv1, 1, 3, 0U, 1, 0U, 1, 10);
  for (c3_i13 = 0; c3_i13 < 10; c3_i13 = c3_i13 + 1) {
    c3_y[c3_i13] = c3_uv1[c3_i13];
  }

  sf_mex_destroy(&c3_text);
}

static const mxArray *c3_d_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c3_b_setSimStateSideEffectsInfo, const char_T *c3_name)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe
                (&c3_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static uint16_T c3__u16_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b)
{
  uint16_T c3_a;
  c3_a = (uint16_T)c3_b;
  if (c3_a != c3_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c3_a;
}

static uint8_T c3__u8_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b)
{
  uint8_T c3_a;
  c3_a = (uint8_T)c3_b;
  if (c3_a != c3_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c3_a;
}

static void init_test_point_addr_map(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c3_testPointAddrMap[0] = &chartInstance->c3_tp_Fault;
  chartInstance->c3_testPointAddrMap[1] = &chartInstance->c3_tp_CheckNextFault;
  chartInstance->c3_testPointAddrMap[2] = &chartInstance->c3_tp_lastWait;
  chartInstance->c3_testPointAddrMap[3] = &chartInstance->c3_tp_scrollText;
  chartInstance->c3_testPointAddrMap[4] = &chartInstance->c3_tp_scrollTextFirst;
  chartInstance->c3_testPointAddrMap[5] = &chartInstance->c3_tp_NoFault;
}

static void **get_test_point_address_map(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c3_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c3_testPointMappingInfo;
}

static void init_dsm_address_info(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c3_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2188347662U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3500414839U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1007446549U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(299993U);
}

mxArray *sf_c3_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2483687813U);
    pr[1] = (double)(2584420169U);
    pr[2] = (double)(3008936971U);
    pr[3] = (double)(1856612671U);
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
      pr[0] = (double)(10);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(27);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(10);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c3_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[35],T\"minTimer\",},{M[1],M[23],T\"mode\",},{M[1],M[36],T\"scrollIndex\",},{M[1],M[37],T\"scrollTimer\",},{M[1],M[25],T\"text\",},{M[8],M[0],T\"is_active_c3_BuckyWagon_01\",},{M[9],M[0],T\"is_c3_BuckyWagon_01\",},{M[9],M[2],T\"is_Fault\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc3_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           3,
           6,
           12,
           16,
           1,
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
            1,
            1,
            1);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "invertMode",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"mode",0,
                              (MexFcnForType)c3_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 10;
            _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"noErrText",0,(MexFcnForType)c3_c_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 10;
            _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"text",0,(MexFcnForType)c3_c_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "dispLength",0,(MexFcnForType)c3_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "lastScrollTime",0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "scrollTime",0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "firstScrollTime",0,(MexFcnForType)
                              c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "dispFaults",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"minTime",
                              0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "faultNameLen",0,(MexFcnForType)c3_e_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 27;
            _SFD_SET_DATA_PROPS(11,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"faultName",0,(MexFcnForType)
                                c3_f_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(12,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "faultValid",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(13,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "minTimer",0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(14,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "scrollIndex",0,(MexFcnForType)c3_sf_marshall);
          _SFD_SET_DATA_PROPS(15,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "scrollTimer",0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_EVENT_SCOPE(0,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,5);
          _SFD_ST_SUBSTATE_COUNT(0,4);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,4,1,1,0,0,NULL,NULL);
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
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 25 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 30, 56 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 3, 17 };

          static unsigned int sEndGuardMap[] = { 13, 27 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, -1 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
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
          static unsigned int sStartGuardMap[] = { 1, 15 };

          static unsigned int sEndGuardMap[] = { 11, 25 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 41 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(5,0,2,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 30, 56 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 3, 17 };

          static unsigned int sEndGuardMap[] = { 13, 27 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(11,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c3_invertMode;
          uint8_T *c3_mode;
          uint8_T (*c3_noErrText)[10];
          uint8_T (*c3_text)[10];
          uint8_T *c3_dispLength;
          uint16_T *c3_lastScrollTime;
          uint16_T *c3_scrollTime;
          uint16_T *c3_firstScrollTime;
          boolean_T *c3_dispFaults;
          uint16_T *c3_minTime;
          real_T *c3_faultNameLen;
          uint8_T (*c3_faultName)[27];
          boolean_T *c3_faultValid;
          uint16_T *c3_minTimer;
          uint8_T *c3_scrollIndex;
          uint16_T *c3_scrollTimer;
          c3_scrollTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c3_scrollIndex = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c3_minTimer = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c3_faultValid = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c3_faultName = (uint8_T (*)[27])ssGetInputPortSignal(chartInstance->S,
            9);
          c3_faultNameLen = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c3_minTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c3_dispFaults = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c3_firstScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c3_scrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c3_lastScrollTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c3_dispLength = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c3_text = (uint8_T (*)[10])ssGetOutputPortSignal(chartInstance->S, 2);
          c3_noErrText = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S,
            1);
          c3_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c3_invertMode = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_invertMode);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_mode);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_noErrText);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_text);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_dispLength);
          _SFD_SET_DATA_VALUE_PTR(5U, c3_lastScrollTime);
          _SFD_SET_DATA_VALUE_PTR(6U, c3_scrollTime);
          _SFD_SET_DATA_VALUE_PTR(7U, c3_firstScrollTime);
          _SFD_SET_DATA_VALUE_PTR(8U, c3_dispFaults);
          _SFD_SET_DATA_VALUE_PTR(9U, c3_minTime);
          _SFD_SET_DATA_VALUE_PTR(10U, c3_faultNameLen);
          _SFD_SET_DATA_VALUE_PTR(11U, c3_faultName);
          _SFD_SET_DATA_VALUE_PTR(12U, c3_faultValid);
          _SFD_SET_DATA_VALUE_PTR(13U, c3_minTimer);
          _SFD_SET_DATA_VALUE_PTR(14U, c3_scrollIndex);
          _SFD_SET_DATA_VALUE_PTR(15U, c3_scrollTimer);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c3_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c3_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_BuckyWagon_01
    ((SFc3_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c3_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c3_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c3_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c3_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c3_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c3_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",3,"gatewayCannotBeInlinedMultipleTimes"));
    sf_mark_output_events_with_multiple_callers(S,"BuckyWagon_01",
      "BuckyWagon_01",3,1);
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
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",3,11);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",3,5);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(984226183U));
  ssSetChecksum1(S,(1816518866U));
  ssSetChecksum2(S,(977247822U));
  ssSetChecksum3(S,(3936784476U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",3);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_BuckyWagon_01(SimStruct *S)
{
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc3_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetCallSystemNumFcnCallDestinations(S,0) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'getNewFault' since is not bound to a state.");
  }

  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_BuckyWagon_01;
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

void c3_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
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
  { 0, 0, "StateflowChart/Fault", "Fault", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Fault.CheckNextFault", "CheckNextFault", 0, 0, 0, 0, 0
  },

  { 2, 0, "StateflowChart/Fault.lastWait", "lastWait", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Fault.scrollText", "scrollText", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/Fault.scrollTextFirst", "scrollTextFirst", 0, 0, 0, 0,
    0 },

  { 5, 0, "StateflowChart/NoFault", "NoFault", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    6                                  /* Num Block IO signals */
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
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
