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
static void initSimStructsc3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c3_Fault(SFc3_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static int32_T c3_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_b_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_b_tp_NoFault, const char_T *c3_identifier);
static uint8_T c3_c_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static void c3_d_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_text, const char_T *c3_identifier, uint8_T
  c3_y[10]);
static void c3_e_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_y[10]);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint16_T c3_f_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_minTimer, const char_T *c3_identifier);
static uint16_T c3_g_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_h_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier);
static const mxArray *c3_i_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static uint16_T c3__u16_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b);
static uint8_T c3__u8_s32_(SFc3_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c3_b);
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
  chartInstance->c3_sfEvent = CALL_EVENT;
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
    for (c3_i0 = 0; c3_i0 < 10; c3_i0++) {
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
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_NoFault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_c3_BuckyWagon_01 == c3_IN_Fault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_Fault == c3_IN_scrollText) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_Fault == c3_IN_lastWait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_Fault == c3_IN_scrollTextFirst) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_Fault == c3_IN_CheckNextFault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_BuckyWagon_01
  (SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c3_st;
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
  uint8_T c3_e_u[10];
  const mxArray *c3_f_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  uint8_T c3_f_u;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  uint8_T c3_g_u;
  const mxArray *c3_h_y = NULL;
  uint8_T c3_g_hoistedGlobal;
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
  for (c3_i1 = 0; c3_i1 < 10; c3_i1++) {
    c3_e_u[c3_i1] = (*c3_text)[c3_i1];
  }

  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", c3_e_u, 3, 0U, 1U, 0U, 1, 10));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_e_hoistedGlobal = chartInstance->c3_is_active_c3_BuckyWagon_01;
  c3_f_u = c3_e_hoistedGlobal;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_f_hoistedGlobal = chartInstance->c3_is_c3_BuckyWagon_01;
  c3_g_u = c3_f_hoistedGlobal;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_g_hoistedGlobal = chartInstance->c3_is_Fault;
  c3_h_u = c3_g_hoistedGlobal;
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
  int32_T c3_i2;
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
  *c3_minTimer = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 0)), "minTimer");
  *c3_mode = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u,
    1)), "mode");
  *c3_scrollIndex = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "scrollIndex");
  *c3_scrollTimer = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "scrollTimer");
  c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
                        "text", c3_uv0);
  for (c3_i2 = 0; c3_i2 < 10; c3_i2++) {
    (*c3_text)[c3_i2] = c3_uv0[c3_i2];
  }

  chartInstance->c3_is_active_c3_BuckyWagon_01 = c3_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
     "is_active_c3_BuckyWagon_01");
  chartInstance->c3_is_c3_BuckyWagon_01 = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 6)), "is_c3_BuckyWagon_01");
  chartInstance->c3_is_Fault = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 7)), "is_Fault");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 8)), "setSimStateSideEffectsInfo"));
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
  int32_T c3_i3;
  int32_T c3_i4;
  int32_T c3_i5;
  int32_T c3_i6;
  int32_T c3_i7;
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
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_invertMode, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_mode, 1U);
  for (c3_i3 = 0; c3_i3 < 10; c3_i3++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_noErrText)[c3_i3], 2U);
  }

  for (c3_i4 = 0; c3_i4 < 10; c3_i4++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i4], 3U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c3_dispLength, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_lastScrollTime, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTime, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_firstScrollTime, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_dispFaults, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_minTime, 9U);
  _SFD_DATA_RANGE_CHECK(*c3_faultNameLen, 10U);
  for (c3_i5 = 0; c3_i5 < 27; c3_i5++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c3_faultName)[c3_i5], 11U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c3_faultValid, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  if ((int16_T)chartInstance->c3_is_active_c3_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_active_c3_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_NoFault;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_NoFault = 1U;
    for (c3_i6 = 0; c3_i6 < 10; c3_i6++) {
      (*c3_text)[c3_i6] = (*c3_noErrText)[c3_i6];
    }

    for (c3_i7 = 0; c3_i7 < 10; c3_i7++) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i7], 3U);
    }
  } else {
    switch (chartInstance->c3_is_c3_BuckyWagon_01) {
     case c3_IN_Fault:
      CV_CHART_EVAL(2, 0, 1);
      c3_Fault(chartInstance);
      break;

     case c3_IN_NoFault:
      CV_CHART_EVAL(2, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c3_sfEvent);
      c3_temp = (_SFD_CCP_CALL(1U, 0, *c3_faultValid != 0U,
                  chartInstance->c3_sfEvent) != 0);
      if (c3_temp) {
        c3_temp = (_SFD_CCP_CALL(1U, 1, *c3_dispFaults != 0U,
                    chartInstance->c3_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c3_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_NoFault = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_Fault;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_Fault = 1U;
        *c3_mode = (uint8_T)!*c3_invertMode;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_mode, 1U);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                     chartInstance->c3_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_Fault = c3_IN_scrollTextFirst;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
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

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c3_sfEvent);
      break;

     default:
      CV_CHART_EVAL(2, 0, 0);
      chartInstance->c3_is_c3_BuckyWagon_01 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc3_BuckyWagon_01(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

static void c3_Fault(SFc3_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  int32_T c3_i8;
  int32_T c3_i9;
  boolean_T c3_b_temp;
  boolean_T *c3_faultValid;
  boolean_T *c3_dispFaults;
  uint16_T *c3_minTimer;
  uint16_T *c3_scrollTimer;
  uint8_T *c3_scrollIndex;
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
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c3_sfEvent);
  c3_temp = (_SFD_CCP_CALL(6U, 0, *c3_faultValid != 0U,
              chartInstance->c3_sfEvent) != 0);
  if (c3_temp) {
    c3_temp = (_SFD_CCP_CALL(6U, 1, *c3_dispFaults != 0U,
                chartInstance->c3_sfEvent) != 0);
  }

  if (CV_TRANSITION_EVAL(6U, !c3_temp)) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c3_sfEvent);
    switch (chartInstance->c3_is_Fault) {
     case c3_IN_CheckNextFault:
      CV_STATE_EVAL(0, 1, 1);
      chartInstance->c3_tp_CheckNextFault = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_lastWait:
      CV_STATE_EVAL(0, 1, 2);
      chartInstance->c3_tp_lastWait = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_scrollText:
      CV_STATE_EVAL(0, 1, 3);
      chartInstance->c3_tp_scrollText = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_scrollTextFirst:
      CV_STATE_EVAL(0, 1, 4);
      chartInstance->c3_tp_scrollTextFirst = 0U;
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
      break;

     default:
      CV_STATE_EVAL(0, 1, 0);
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      break;
    }

    chartInstance->c3_tp_Fault = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_c3_BuckyWagon_01 = c3_IN_NoFault;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_NoFault = 1U;
    for (c3_i8 = 0; c3_i8 < 10; c3_i8++) {
      (*c3_text)[c3_i8] = (*c3_noErrText)[c3_i8];
    }

    for (c3_i9 = 0; c3_i9 < 10; c3_i9++) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[c3_i9], 3U);
    }
  } else {
    *c3_minTimer = c3__u16_s32_(chartInstance, *c3_minTimer + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c3_minTimer, 13U);
    switch (chartInstance->c3_is_Fault) {
     case c3_IN_CheckNextFault:
      CV_STATE_EVAL(0, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c3_sfEvent);
      chartInstance->c3_tp_CheckNextFault = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      chartInstance->c3_is_Fault = c3_IN_scrollTextFirst;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
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
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_lastWait:
      CV_STATE_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c3_sfEvent);
      c3_b_temp = (_SFD_CCP_CALL(5U, 0, *c3_scrollTimer > *c3_lastScrollTime !=
        0U, chartInstance->c3_sfEvent) != 0);
      if (c3_b_temp) {
        c3_b_temp = (_SFD_CCP_CALL(5U, 1, *c3_minTimer > *c3_minTime != 0U,
          chartInstance->c3_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(5U, (int32_T)c3_b_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c3_sfEvent);
        sf_call_output_fcn_call(chartInstance->S, 0, "getNewFault", 0);
        chartInstance->c3_tp_lastWait = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_Fault = c3_IN_CheckNextFault;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_CheckNextFault = 1U;
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_scrollText:
      CV_STATE_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c3_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c3_scrollTimer >=
            *c3_scrollTime != 0U, chartInstance->c3_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c3_sfEvent);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
              *c3_faultNameLen - 2.0 >= (real_T)(*c3_dispLength +
               *c3_scrollIndex) != 0U, chartInstance->c3_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
          *c3_scrollIndex = c3__u8_s32_(chartInstance, *c3_scrollIndex + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
          chartInstance->c3_tp_scrollText = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
          chartInstance->c3_is_Fault = c3_IN_scrollText;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
          chartInstance->c3_tp_scrollText = 1U;
          *c3_scrollTimer = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
          memcpy(&(*c3_text)[0], &(*c3_faultName)[(int32_T)(uint8_T)
                 _SFD_ARRAY_BOUNDS_CHECK(11U, (int32_T)*c3_scrollIndex, 0, 26, 1,
                  0)], *c3_dispLength);
          (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
            *c3_dispLength, 0, 9, 1, 0)] = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
            *c3_dispLength, 0, 9, 1, 0)], 3U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                       chartInstance->c3_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
          chartInstance->c3_tp_scrollText = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
          chartInstance->c3_is_Fault = c3_IN_lastWait;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
          chartInstance->c3_tp_lastWait = 1U;
        }
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c3_sfEvent);
      break;

     case c3_IN_scrollTextFirst:
      CV_STATE_EVAL(0, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   chartInstance->c3_sfEvent);
      if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0, *c3_scrollTimer >=
            *c3_firstScrollTime != 0U, chartInstance->c3_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c3_sfEvent);
        *c3_scrollIndex = c3__u8_s32_(chartInstance, *c3_scrollIndex + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollIndex, 14U);
        chartInstance->c3_tp_scrollTextFirst = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c3_sfEvent);
        chartInstance->c3_is_Fault = c3_IN_scrollText;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
        chartInstance->c3_tp_scrollText = 1U;
        *c3_scrollTimer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
        memcpy(&(*c3_text)[0], &(*c3_faultName)[(int32_T)(uint8_T)
               _SFD_ARRAY_BOUNDS_CHECK(11U, (int32_T)*c3_scrollIndex, 0, 26, 1,
                0)], *c3_dispLength);
        (*c3_text)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)] = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)(*c3_text)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(3U, (int32_T)
          *c3_dispLength, 0, 9, 1, 0)], 3U);
      } else {
        *c3_scrollTimer = c3__u16_s32_(chartInstance, *c3_scrollTimer + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c3_scrollTimer, 15U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c3_sfEvent);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);
      chartInstance->c3_is_Fault = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
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

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static int32_T c3_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i10;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i10, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i10;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent), &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_b_tp_NoFault, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_NoFault),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_NoFault);
  return c3_y;
}

static uint8_T c3_c_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_tp_NoFault;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_b_tp_NoFault = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_NoFault),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_NoFault);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i11;
  uint8_T c3_b_inData[10];
  int32_T c3_i12;
  uint8_T c3_u[10];
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i11 = 0; c3_i11 < 10; c3_i11++) {
    c3_b_inData[c3_i11] = (*(uint8_T (*)[10])c3_inData)[c3_i11];
  }

  for (c3_i12 = 0; c3_i12 < 10; c3_i12++) {
    c3_u[c3_i12] = c3_b_inData[c3_i12];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 3, 0U, 1U, 0U, 1, 10));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static void c3_d_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_text, const char_T *c3_identifier, uint8_T
  c3_y[10])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_text), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_text);
}

static void c3_e_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId,
  uint8_T c3_y[10])
{
  uint8_T c3_uv1[10];
  int32_T c3_i13;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_uv1, 1, 3, 0U, 1, 0U, 1, 10);
  for (c3_i13 = 0; c3_i13 < 10; c3_i13++) {
    c3_y[c3_i13] = c3_uv1[c3_i13];
  }

  sf_mex_destroy(&c3_u);
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_text;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y[10];
  int32_T c3_i14;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_text = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_text), &c3_thisId, c3_y);
  sf_mex_destroy(&c3_text);
  for (c3_i14 = 0; c3_i14 < 10; c3_i14++) {
    (*(uint8_T (*)[10])c3_outData)[c3_i14] = c3_y[c3_i14];
  }

  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_e_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  uint16_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint16_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static const mxArray *c3_f_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static const mxArray *c3_g_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData = NULL;
  int32_T c3_i15;
  uint8_T c3_b_inData[27];
  int32_T c3_i16;
  uint8_T c3_u[27];
  const mxArray *c3_y = NULL;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  for (c3_i15 = 0; c3_i15 < 27; c3_i15++) {
    c3_b_inData[c3_i15] = (*(uint8_T (*)[27])c3_inData)[c3_i15];
  }

  for (c3_i16 = 0; c3_i16 < 27; c3_i16++) {
    c3_u[c3_i16] = c3_b_inData[c3_i16];
  }

  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", c3_u, 3, 0U, 1U, 0U, 1, 27));
  sf_mex_assign(&c3_mxArrayOutData, c3_y);
  return c3_mxArrayOutData;
}

static uint16_T c3_f_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_minTimer, const char_T *c3_identifier)
{
  uint16_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_minTimer),
    &c3_thisId);
  sf_mex_destroy(&c3_minTimer);
  return c3_y;
}

static uint16_T c3_g_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint16_T c3_y;
  uint16_T c3_u1;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u1, 1, 5, 0U, 0, 0U, 0);
  c3_y = c3_u1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_minTimer;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint16_T c3_y;
  SFc3_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc3_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c3_minTimer = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_y = c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_minTimer),
    &c3_thisId);
  sf_mex_destroy(&c3_minTimer);
  *(uint16_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_h_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  sf_mex_assign(&c3_y, c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId));
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_i_emlrt_marshallIn(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u));
  sf_mex_destroy(&c3_u);
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

static void init_dsm_address_info(SFc3_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c3_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3379297176U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3511349112U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1599002342U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(955290735U);
}

mxArray *sf_c3_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3909473582U);
    pr[1] = (double)(3194229690U);
    pr[2] = (double)(3335281732U);
    pr[3] = (double)(1216277538U);
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

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c3_BuckyWagon_01(void)
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"invertMode");
          _SFD_SET_DATA_PROPS(1,2,0,1,"mode");
          _SFD_SET_DATA_PROPS(2,1,1,0,"noErrText");
          _SFD_SET_DATA_PROPS(3,2,0,1,"text");
          _SFD_SET_DATA_PROPS(4,1,1,0,"dispLength");
          _SFD_SET_DATA_PROPS(5,1,1,0,"lastScrollTime");
          _SFD_SET_DATA_PROPS(6,1,1,0,"scrollTime");
          _SFD_SET_DATA_PROPS(7,1,1,0,"firstScrollTime");
          _SFD_SET_DATA_PROPS(8,1,1,0,"dispFaults");
          _SFD_SET_DATA_PROPS(9,1,1,0,"minTime");
          _SFD_SET_DATA_PROPS(10,1,1,0,"faultNameLen");
          _SFD_SET_DATA_PROPS(11,1,1,0,"faultName");
          _SFD_SET_DATA_PROPS(12,1,1,0,"faultValid");
          _SFD_SET_DATA_PROPS(13,2,0,1,"minTimer");
          _SFD_SET_DATA_PROPS(14,2,0,1,"scrollIndex");
          _SFD_SET_DATA_PROPS(15,2,0,1,"scrollTimer");
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 10;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 10;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_d_sf_marshallOut,(MexInFcnForType)
            c3_c_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_f_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 27;
          _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c3_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)c3_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshallOut,(MexInFcnForType)c3_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_e_sf_marshallOut,(MexInFcnForType)c3_d_sf_marshallIn);

        {
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
          uint8_T (*c3_noErrText)[10];
          uint8_T (*c3_text)[10];
          uint8_T (*c3_faultName)[27];
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
          _SFD_SET_DATA_VALUE_PTR(2U, *c3_noErrText);
          _SFD_SET_DATA_VALUE_PTR(3U, *c3_text);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_dispLength);
          _SFD_SET_DATA_VALUE_PTR(5U, c3_lastScrollTime);
          _SFD_SET_DATA_VALUE_PTR(6U, c3_scrollTime);
          _SFD_SET_DATA_VALUE_PTR(7U, c3_firstScrollTime);
          _SFD_SET_DATA_VALUE_PTR(8U, c3_dispFaults);
          _SFD_SET_DATA_VALUE_PTR(9U, c3_minTime);
          _SFD_SET_DATA_VALUE_PTR(10U, c3_faultNameLen);
          _SFD_SET_DATA_VALUE_PTR(11U, *c3_faultName);
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

extern const mxArray* sf_internal_get_sim_state_c3_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_BuckyWagon_01
    ((SFc3_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_BuckyWagon_01();/* state var info */
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

extern void sf_internal_set_sim_state_c3_BuckyWagon_01(SimStruct* S, const
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

static const mxArray* sf_opaque_get_sim_state_c3_BuckyWagon_01(SimStruct* S)
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
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_BuckyWagon_01((SFc3_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
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
      (int_T)sf_is_chart_inlinable(S,"BuckyWagon_01","BuckyWagon_01",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01","BuckyWagon_01",3,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"BuckyWagon_01",
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
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1478904013U));
  ssSetChecksum1(S,(1941614608U));
  ssSetChecksum2(S,(488834632U));
  ssSetChecksum3(S,(4221079727U));
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
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
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
