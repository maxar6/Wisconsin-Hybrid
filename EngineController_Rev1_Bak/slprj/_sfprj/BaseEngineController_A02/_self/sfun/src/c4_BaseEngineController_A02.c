/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c4_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c4_IN_NO_ACTIVE_CHILD          (0U)
#define c4_IN_AT_STARTUP               (1U)
#define c4_IN_TIME_STEP                (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_st);
static void c4_set_sim_state_side_effects_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void c4_AT_STARTUP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void c4_TIME_STEP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static int32_T c4_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static uint8_T c4_b_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_AT_STARTUP, const char_T *c4_identifier);
static uint8_T c4_c_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_d_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFIDs, const char_T *c4_identifier, uint8_T
  c4_y[6]);
static void c4_e_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_y[6]);
static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static void c4_f_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFTrigg, const char_T *c4_identifier,
  boolean_T c4_y[6]);
static void c4_g_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[6]);
static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static const mxArray *c4_g_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static void c4_h_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FltOrder, const char_T *c4_identifier,
  uint16_T c4_y[71]);
static void c4_i_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  uint16_T c4_y[71]);
static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint16_T c4_j_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_FltOrderMax, const char_T *c4_identifier);
static uint16_T c4_k_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static const mxArray *c4_l_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier);
static const mxArray *c4_m_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint16_T c4__u16_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b);
static uint8_T c4__u8_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b);
static void init_dsm_address_info(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  int32_T c4_i0;
  int32_T c4_i1;
  int32_T c4_i2;
  uint16_T *c4_FltOrderMax;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint16_T (*c4_FltOrder)[71];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_doSetSimStateSideEffects = 0U;
  chartInstance->c4_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_tp_AT_STARTUP = 0U;
  chartInstance->c4_tp_TIME_STEP = 0U;
  chartInstance->c4_is_active_c4_BaseEngineController_A02 = 0U;
  chartInstance->c4_is_c4_BaseEngineController_A02 = 0U;
  chartInstance->c4_ActvFltCount = 0U;
  chartInstance->c4_OldIndex = 0U;
  chartInstance->c4_FltOrderCount = 0U;
  chartInstance->c4_FltOrderOld = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    for (c4_i0 = 0; c4_i0 < 6; c4_i0++) {
      (*c4_FFIDs)[c4_i0] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    for (c4_i1 = 0; c4_i1 < 6; c4_i1++) {
      (*c4_FFTrigg)[c4_i1] = FALSE;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    for (c4_i2 = 0; c4_i2 < 71; c4_i2++) {
      (*c4_FltOrder)[c4_i2] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c4_FltOrderMax = 0U;
  }
}

static void initialize_params_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c4_prevAniVal;
  c4_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c4_is_active_c4_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_AT_STARTUP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  }

  if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_TIME_STEP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  }

  sf_debug_set_animation(c4_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  int32_T c4_i3;
  uint8_T c4_u[6];
  const mxArray *c4_b_y = NULL;
  int32_T c4_i4;
  boolean_T c4_b_u[6];
  const mxArray *c4_c_y = NULL;
  int32_T c4_i5;
  uint16_T c4_c_u[71];
  const mxArray *c4_d_y = NULL;
  uint16_T c4_hoistedGlobal;
  uint16_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  uint8_T c4_b_hoistedGlobal;
  uint8_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  uint8_T c4_c_hoistedGlobal;
  uint8_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  uint16_T c4_d_hoistedGlobal;
  uint16_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  uint8_T c4_e_hoistedGlobal;
  uint8_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  uint8_T c4_f_hoistedGlobal;
  uint8_T c4_i_u;
  const mxArray *c4_j_y = NULL;
  uint8_T c4_g_hoistedGlobal;
  uint8_T c4_j_u;
  const mxArray *c4_k_y = NULL;
  uint16_T *c4_FltOrderMax;
  uint16_T (*c4_FltOrder)[71];
  boolean_T (*c4_FFTrigg)[6];
  uint8_T (*c4_FFIDs)[6];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(10));
  for (c4_i3 = 0; c4_i3 < 6; c4_i3++) {
    c4_u[c4_i3] = (*c4_FFIDs)[c4_i3];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_u, 3, 0U, 1U, 0U, 1, 6));
  sf_mex_setcell(c4_y, 0, c4_b_y);
  for (c4_i4 = 0; c4_i4 < 6; c4_i4++) {
    c4_b_u[c4_i4] = (*c4_FFTrigg)[c4_i4];
  }

  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_u, 11, 0U, 1U, 0U, 1, 6));
  sf_mex_setcell(c4_y, 1, c4_c_y);
  for (c4_i5 = 0; c4_i5 < 71; c4_i5++) {
    c4_c_u[c4_i5] = (*c4_FltOrder)[c4_i5];
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_c_u, 5, 0U, 1U, 0U, 1, 71));
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_hoistedGlobal = *c4_FltOrderMax;
  c4_d_u = c4_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_b_hoistedGlobal = chartInstance->c4_ActvFltCount;
  c4_e_u = c4_b_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_c_hoistedGlobal = chartInstance->c4_FltOrderCount;
  c4_f_u = c4_c_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_d_hoistedGlobal = chartInstance->c4_FltOrderOld;
  c4_g_u = c4_d_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_e_hoistedGlobal = chartInstance->c4_OldIndex;
  c4_h_u = c4_e_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_f_hoistedGlobal = chartInstance->c4_is_active_c4_BaseEngineController_A02;
  c4_i_u = c4_f_hoistedGlobal;
  c4_j_y = NULL;
  sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_g_hoistedGlobal = chartInstance->c4_is_c4_BaseEngineController_A02;
  c4_j_u = c4_g_hoistedGlobal;
  c4_k_y = NULL;
  sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 9, c4_k_y);
  sf_mex_assign(&c4_st, c4_y);
  return c4_st;
}

static void set_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_st)
{
  const mxArray *c4_u;
  uint8_T c4_uv0[6];
  int32_T c4_i6;
  boolean_T c4_bv0[6];
  int32_T c4_i7;
  uint16_T c4_uv1[71];
  int32_T c4_i8;
  uint16_T *c4_FltOrderMax;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint16_T (*c4_FltOrder)[71];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_u = sf_mex_dup(c4_st);
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)),
                        "FFIDs", c4_uv0);
  for (c4_i6 = 0; c4_i6 < 6; c4_i6++) {
    (*c4_FFIDs)[c4_i6] = c4_uv0[c4_i6];
  }

  c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "FFTrigg", c4_bv0);
  for (c4_i7 = 0; c4_i7 < 6; c4_i7++) {
    (*c4_FFTrigg)[c4_i7] = c4_bv0[c4_i7];
  }

  c4_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
                        "FltOrder", c4_uv1);
  for (c4_i8 = 0; c4_i8 < 71; c4_i8++) {
    (*c4_FltOrder)[c4_i8] = c4_uv1[c4_i8];
  }

  *c4_FltOrderMax = c4_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 3)), "FltOrderMax");
  chartInstance->c4_ActvFltCount = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 4)), "ActvFltCount");
  chartInstance->c4_FltOrderCount = c4_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 5)), "FltOrderCount");
  chartInstance->c4_FltOrderOld = c4_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 6)), "FltOrderOld");
  chartInstance->c4_OldIndex = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 7)), "OldIndex");
  chartInstance->c4_is_active_c4_BaseEngineController_A02 =
    c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 8)),
    "is_active_c4_BaseEngineController_A02");
  chartInstance->c4_is_c4_BaseEngineController_A02 = c4_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 9)),
     "is_c4_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 10)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c4_u);
  chartInstance->c4_doSetSimStateSideEffects = 1U;
  c4_update_debugger_state_c4_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void c4_set_sim_state_side_effects_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c4_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_AT_STARTUP) {
      chartInstance->c4_tp_AT_STARTUP = 1U;
    } else {
      chartInstance->c4_tp_AT_STARTUP = 0U;
    }

    if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_TIME_STEP) {
      chartInstance->c4_tp_TIME_STEP = 1U;
    } else {
      chartInstance->c4_tp_TIME_STEP = 0U;
    }

    chartInstance->c4_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c4_setSimStateSideEffectsInfo);
}

static void sf_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  int32_T c4_i9;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  uint8_T c4_uv2[6];
  int32_T c4_i19;
  int32_T c4_i20;
  int32_T c4_i21;
  uint16_T c4_uv3[71];
  uint16_T c4_u0;
  uint8_T *c4_NumFF;
  uint8_T *c4_NumFlts;
  uint16_T *c4_FltOrderMaxIn;
  uint16_T *c4_FltOrderMax;
  uint8_T (*c4_FFIDs)[6];
  uint16_T (*c4_FltOrder)[71];
  uint16_T (*c4_FltOrderIn)[71];
  uint8_T (*c4_FFIDsIn)[6];
  boolean_T (*c4_FFTrigg)[6];
  boolean_T (*c4_FFTriggZeros)[6];
  int8_T (*c4_ActvFlts)[71];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FltOrderMaxIn = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_FltOrderIn = (uint16_T (*)[71])ssGetInputPortSignal(chartInstance->S, 4);
  c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDsIn = (uint8_T (*)[6])ssGetInputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_FFTriggZeros = (boolean_T (*)[6])ssGetInputPortSignal(chartInstance->S, 1);
  c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
  c4_set_sim_state_side_effects_c4_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  for (c4_i9 = 0; c4_i9 < 71; c4_i9++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_ActvFlts)[c4_i9], 0U);
  }

  for (c4_i10 = 0; c4_i10 < 6; c4_i10++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTriggZeros)[c4_i10], 1U);
  }

  for (c4_i11 = 0; c4_i11 < 6; c4_i11++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[c4_i11], 2U);
  }

  for (c4_i12 = 0; c4_i12 < 6; c4_i12++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDsIn)[c4_i12], 3U);
  }

  for (c4_i13 = 0; c4_i13 < 6; c4_i13++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[c4_i13], 4U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_NumFF, 5U);
  for (c4_i14 = 0; c4_i14 < 71; c4_i14++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrderIn)[c4_i14], 6U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_NumFlts, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMaxIn, 8U);
  for (c4_i15 = 0; c4_i15 < 71; c4_i15++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[c4_i15], 9U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_OldIndex, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  if ((int16_T)chartInstance->c4_is_active_c4_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_active_c4_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c4_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c4_sfEvent);
    chartInstance->c4_is_c4_BaseEngineController_A02 = c4_IN_AT_STARTUP;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
    chartInstance->c4_tp_AT_STARTUP = 1U;
    for (c4_i16 = 0; c4_i16 < 6; c4_i16++) {
      (*c4_FFIDs)[c4_i16] = (*c4_FFIDsIn)[c4_i16];
    }

    for (c4_i17 = 0; c4_i17 < 6; c4_i17++) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[c4_i17], 2U);
    }

    for (c4_i18 = 0; c4_i18 < 6; c4_i18++) {
      c4_uv2[c4_i18] = (*c4_FFIDs)[c4_i18];
    }

    sf_mex_printf("%s =\\n", "FFIDs");
    sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", c4_uv2, 3, 0U,
      1U, 0U, 1, 6));
    for (c4_i19 = 0; c4_i19 < 71; c4_i19++) {
      (*c4_FltOrder)[c4_i19] = (*c4_FltOrderIn)[c4_i19];
    }

    for (c4_i20 = 0; c4_i20 < 71; c4_i20++) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[c4_i20], 9U);
    }

    for (c4_i21 = 0; c4_i21 < 71; c4_i21++) {
      c4_uv3[c4_i21] = (*c4_FltOrder)[c4_i21];
    }

    sf_mex_printf("%s =\\n", "FltOrder");
    sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", c4_uv3, 5, 0U,
      1U, 0U, 1, 71));
    *c4_FltOrderMax = *c4_FltOrderMaxIn;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
    c4_u0 = *c4_FltOrderMax;
    sf_mex_printf("%s =\\n", "FltOrderMax");
    sf_mex_call_debug("disp", 0U, 1U, 11, c4_u0);
  } else {
    switch (chartInstance->c4_is_c4_BaseEngineController_A02) {
     case c4_IN_AT_STARTUP:
      CV_CHART_EVAL(2, 0, 1);
      c4_AT_STARTUP(chartInstance);
      break;

     case c4_IN_TIME_STEP:
      CV_CHART_EVAL(2, 0, 2);
      c4_TIME_STEP(chartInstance);
      break;

     default:
      CV_CHART_EVAL(2, 0, 0);
      chartInstance->c4_is_c4_BaseEngineController_A02 = (uint8_T)
        c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c4_sfEvent);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void c4_AT_STARTUP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  uint16_T c4_u1;
  uint16_T c4_u2;
  uint8_T c4_u3;
  boolean_T c4_temp;
  uint8_T c4_u4;
  uint8_T c4_u5;
  uint16_T c4_u6;
  uint16_T c4_u7;
  uint8_T c4_u8;
  uint8_T c4_u9;
  uint8_T c4_u10;
  boolean_T c4_b0;
  uint8_T c4_u11;
  boolean_T c4_b1;
  uint8_T c4_u12;
  uint8_T c4_u13;
  uint8_T c4_u14;
  uint16_T *c4_FltOrderMax;
  uint16_T (*c4_FltOrder)[71];
  uint8_T *c4_NumFF;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint8_T *c4_NumFlts;
  int8_T (*c4_ActvFlts)[71];
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c4_sfEvent);
  do {
    exitg1 = 0U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, (*c4_ActvFlts)
          [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(0U, (int32_T)
           chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] == 0 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
      *c4_FltOrderMax = c4__u16_s32_(chartInstance, *c4_FltOrderMax + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
      c4_u1 = *c4_FltOrderMax;
      sf_mex_printf("%s =\\n", "FltOrderMax");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u1);
      (*c4_FltOrder)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] = *c4_FltOrderMax;
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[(uint8_T)
                            _SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)], 9U);
      c4_u2 = (*c4_FltOrder)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)];
      sf_mex_printf("%s =\\n", "FltOrder[ActvFltCount]");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u2);
      chartInstance->c4_FltOrderCount = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
      c4_u3 = chartInstance->c4_FltOrderCount;
      sf_mex_printf("%s =\\n", "FltOrderCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u3);
      do {
        exitg2 = 0U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     chartInstance->c4_sfEvent);
        c4_temp = (_SFD_CCP_CALL(4U, 0, (int16_T)(*c4_FFIDs)[(uint8_T)
                    _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] != 0 != 0U,
                    chartInstance->c4_sfEvent) != 0);
        if (c4_temp) {
          c4_temp = (_SFD_CCP_CALL(4U, 1, (*c4_FFIDs)[(uint8_T)
                      _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] !=
                      chartInstance->c4_ActvFltCount + 1 != 0U,
                      chartInstance->c4_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(4U, (int32_T)c4_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                       chartInstance->c4_sfEvent);
          if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
                chartInstance->c4_FltOrderCount < *c4_NumFF - 1 != 0U,
                chartInstance->c4_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
            chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
              chartInstance->c4_FltOrderCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u4 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u4);
            sf_mex_listen_for_ctrl_c(chartInstance->S);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                         chartInstance->c4_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
            chartInstance->c4_FltOrderCount = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u5 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u5);
            chartInstance->c4_FltOrderOld = *c4_FltOrderMax;
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
            c4_u6 = chartInstance->c4_FltOrderOld;
            sf_mex_printf("%s =\\n", "FltOrderOld");
            sf_mex_call_debug("disp", 0U, 1U, 11, c4_u6);
            do {
              exitg3 = 0U;
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                           chartInstance->c4_sfEvent);
              if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
                    (*c4_FltOrder)[_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)
                     [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                      chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70,
                     1, 0)] < chartInstance->c4_FltOrderOld != 0U,
                    chartInstance->c4_sfEvent))) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U,
                             chartInstance->c4_sfEvent);
                chartInstance->c4_FltOrderOld = (*c4_FltOrder)
                  [_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)[(uint8_T)
                  _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                  chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70, 1, 0)];
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
                c4_u7 = chartInstance->c4_FltOrderOld;
                sf_mex_printf("%s =\\n", "FltOrderOld");
                sf_mex_call_debug("disp", 0U, 1U, 11, c4_u7);
                chartInstance->c4_OldIndex = chartInstance->c4_FltOrderCount;
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_OldIndex, 12U);
                c4_u8 = chartInstance->c4_OldIndex;
                sf_mex_printf("%s =\\n", "OldIndex");
                sf_mex_call_debug("disp", 0U, 1U, 9, c4_u8);
              } else {
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                             chartInstance->c4_sfEvent);
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U,
                             chartInstance->c4_sfEvent);
              }

              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                           chartInstance->c4_sfEvent);
              if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0,
                    chartInstance->c4_FltOrderCount < *c4_NumFF - 1 != 0U,
                    chartInstance->c4_sfEvent))) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U,
                             chartInstance->c4_sfEvent);
                chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
                  chartInstance->c4_FltOrderCount + 1);
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount,
                                      13U);
                c4_u9 = chartInstance->c4_FltOrderCount;
                sf_mex_printf("%s =\\n", "FltOrderCount");
                sf_mex_call_debug("disp", 0U, 1U, 9, c4_u9);
                sf_mex_listen_for_ctrl_c(chartInstance->S);
              } else {
                exitg3 = 1U;
              }
            } while (exitg3 == 0U);

            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                         chartInstance->c4_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
            (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)] = c4__u8_s32_
              (chartInstance, chartInstance->c4_ActvFltCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                  _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)], 2U);
            c4_u10 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)];
            sf_mex_printf("%s =\\n", "FFIDs[OldIndex]");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u10);
            (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)] = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                  _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)], 4U);
            c4_b0 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)];
            sf_mex_printf("%s =\\n", "FFTrigg[OldIndex]");
            sf_mex_call_debug("disp", 0U, 1U, 3, c4_b0);
            exitg2 = 1U;
          }
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
          (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = c4__u8_s32_
            (chartInstance, chartInstance->c4_ActvFltCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)], 2U);
          c4_u11 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFIDs[FltOrderCount]");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u11);
          (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)], 4U);
          c4_b1 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFTrigg[FltOrderCount]");
          sf_mex_call_debug("disp", 0U, 1U, 3, c4_b1);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                       chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
          exitg2 = 1U;
        }
      } while (exitg2 == 0U);

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
          chartInstance->c4_ActvFltCount < *c4_NumFlts - 1 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
      chartInstance->c4_ActvFltCount = c4__u8_s32_(chartInstance,
        chartInstance->c4_ActvFltCount + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
      c4_u12 = chartInstance->c4_ActvFltCount;
      sf_mex_printf("%s =\\n", "ActvFltCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u12);
      sf_mex_listen_for_ctrl_c(chartInstance->S);
    } else {
      exitg1 = 1U;
    }
  } while (exitg1 == 0U);

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  chartInstance->c4_tp_AT_STARTUP = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
  chartInstance->c4_is_c4_BaseEngineController_A02 = c4_IN_TIME_STEP;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  chartInstance->c4_tp_TIME_STEP = 1U;
  chartInstance->c4_ActvFltCount = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
  c4_u13 = chartInstance->c4_ActvFltCount;
  sf_mex_printf("%s =\\n", "ActvFltCount");
  sf_mex_call_debug("disp", 0U, 1U, 9, c4_u13);
  chartInstance->c4_FltOrderCount = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
  c4_u14 = chartInstance->c4_FltOrderCount;
  sf_mex_printf("%s =\\n", "FltOrderCount");
  sf_mex_call_debug("disp", 0U, 1U, 9, c4_u14);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c4_sfEvent);
}

static void c4_TIME_STEP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  boolean_T c4_bv1[6];
  uint16_T c4_u15;
  uint16_T c4_u16;
  uint8_T c4_u17;
  boolean_T c4_temp;
  uint8_T c4_u18;
  uint8_T c4_u19;
  uint16_T c4_u20;
  uint16_T c4_u21;
  uint8_T c4_u22;
  uint8_T c4_u23;
  uint8_T c4_u24;
  boolean_T c4_b2;
  uint8_T c4_u25;
  boolean_T c4_b3;
  uint8_T c4_u26;
  uint8_T c4_u27;
  uint8_T c4_u28;
  uint16_T *c4_FltOrderMax;
  uint16_T (*c4_FltOrder)[71];
  uint8_T *c4_NumFF;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint8_T *c4_NumFlts;
  int8_T (*c4_ActvFlts)[71];
  boolean_T (*c4_FFTriggZeros)[6];
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_FFTriggZeros = (boolean_T (*)[6])ssGetInputPortSignal(chartInstance->S, 1);
  c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c4_sfEvent);
  for (c4_i22 = 0; c4_i22 < 6; c4_i22++) {
    (*c4_FFTrigg)[c4_i22] = (*c4_FFTriggZeros)[c4_i22];
  }

  for (c4_i23 = 0; c4_i23 < 6; c4_i23++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[c4_i23], 4U);
  }

  for (c4_i24 = 0; c4_i24 < 6; c4_i24++) {
    c4_bv1[c4_i24] = (*c4_FFTrigg)[c4_i24];
  }

  sf_mex_printf("%s =\\n", "FFTrigg");
  sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", c4_bv1, 11, 0U, 1U,
    0U, 1, 6));
  do {
    exitg1 = 0U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, (*c4_ActvFlts)
          [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(0U, (int32_T)
           chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] == 0 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c4_sfEvent);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c4_sfEvent);
      *c4_FltOrderMax = c4__u16_s32_(chartInstance, *c4_FltOrderMax + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
      c4_u15 = *c4_FltOrderMax;
      sf_mex_printf("%s =\\n", "FltOrderMax");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u15);
      (*c4_FltOrder)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] = *c4_FltOrderMax;
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[(uint8_T)
                            _SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)], 9U);
      c4_u16 = (*c4_FltOrder)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)];
      sf_mex_printf("%s =\\n", "FltOrder[ActvFltCount]");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u16);
      chartInstance->c4_FltOrderCount = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
      c4_u17 = chartInstance->c4_FltOrderCount;
      sf_mex_printf("%s =\\n", "FltOrderCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u17);
      do {
        exitg2 = 0U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     chartInstance->c4_sfEvent);
        c4_temp = (_SFD_CCP_CALL(4U, 0, (int16_T)(*c4_FFIDs)[(uint8_T)
                    _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] != 0 != 0U,
                    chartInstance->c4_sfEvent) != 0);
        if (c4_temp) {
          c4_temp = (_SFD_CCP_CALL(4U, 1, (*c4_FFIDs)[(uint8_T)
                      _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] !=
                      chartInstance->c4_ActvFltCount + 1 != 0U,
                      chartInstance->c4_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(4U, (int32_T)c4_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                       chartInstance->c4_sfEvent);
          if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
                chartInstance->c4_FltOrderCount < *c4_NumFF - 1 != 0U,
                chartInstance->c4_sfEvent))) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c4_sfEvent);
            chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
              chartInstance->c4_FltOrderCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u18 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u18);
            sf_mex_listen_for_ctrl_c(chartInstance->S);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                         chartInstance->c4_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c4_sfEvent);
            chartInstance->c4_FltOrderCount = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u19 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u19);
            chartInstance->c4_FltOrderOld = *c4_FltOrderMax;
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
            c4_u20 = chartInstance->c4_FltOrderOld;
            sf_mex_printf("%s =\\n", "FltOrderOld");
            sf_mex_call_debug("disp", 0U, 1U, 11, c4_u20);
            do {
              exitg3 = 0U;
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                           chartInstance->c4_sfEvent);
              if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
                    (*c4_FltOrder)[_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)
                     [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                      chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70,
                     1, 0)] < chartInstance->c4_FltOrderOld != 0U,
                    chartInstance->c4_sfEvent))) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U,
                             chartInstance->c4_sfEvent);
                chartInstance->c4_FltOrderOld = (*c4_FltOrder)
                  [_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)[(uint8_T)
                  _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                  chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70, 1, 0)];
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
                c4_u21 = chartInstance->c4_FltOrderOld;
                sf_mex_printf("%s =\\n", "FltOrderOld");
                sf_mex_call_debug("disp", 0U, 1U, 11, c4_u21);
                chartInstance->c4_OldIndex = chartInstance->c4_FltOrderCount;
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_OldIndex, 12U);
                c4_u22 = chartInstance->c4_OldIndex;
                sf_mex_printf("%s =\\n", "OldIndex");
                sf_mex_call_debug("disp", 0U, 1U, 9, c4_u22);
              } else {
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                             chartInstance->c4_sfEvent);
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U,
                             chartInstance->c4_sfEvent);
              }

              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                           chartInstance->c4_sfEvent);
              if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0,
                    chartInstance->c4_FltOrderCount < *c4_NumFF - 1 != 0U,
                    chartInstance->c4_sfEvent))) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U,
                             chartInstance->c4_sfEvent);
                chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
                  chartInstance->c4_FltOrderCount + 1);
                _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount,
                                      13U);
                c4_u23 = chartInstance->c4_FltOrderCount;
                sf_mex_printf("%s =\\n", "FltOrderCount");
                sf_mex_call_debug("disp", 0U, 1U, 9, c4_u23);
                sf_mex_listen_for_ctrl_c(chartInstance->S);
              } else {
                exitg3 = 1U;
              }
            } while (exitg3 == 0U);

            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                         chartInstance->c4_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, chartInstance->c4_sfEvent);
            (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)] = c4__u8_s32_
              (chartInstance, chartInstance->c4_ActvFltCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                  _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)], 2U);
            c4_u24 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)];
            sf_mex_printf("%s =\\n", "FFIDs[OldIndex]");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u24);
            (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)] = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                  _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)], 4U);
            c4_b2 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
              chartInstance->c4_OldIndex, 0, 5, 1, 0)];
            sf_mex_printf("%s =\\n", "FFTrigg[OldIndex]");
            sf_mex_call_debug("disp", 0U, 1U, 3, c4_b2);
            exitg2 = 1U;
          }
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
          (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = c4__u8_s32_
            (chartInstance, chartInstance->c4_ActvFltCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)], 2U);
          c4_u25 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFIDs[FltOrderCount]");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u25);
          (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)], 4U);
          c4_b3 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFTrigg[FltOrderCount]");
          sf_mex_call_debug("disp", 0U, 1U, 3, c4_b3);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                       chartInstance->c4_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, chartInstance->c4_sfEvent);
          exitg2 = 1U;
        }
      } while (exitg2 == 0U);

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   chartInstance->c4_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c4_sfEvent);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c4_sfEvent);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
          chartInstance->c4_ActvFltCount < *c4_NumFlts - 1 != 0U,
          chartInstance->c4_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c4_sfEvent);
      chartInstance->c4_ActvFltCount = c4__u8_s32_(chartInstance,
        chartInstance->c4_ActvFltCount + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
      c4_u26 = chartInstance->c4_ActvFltCount;
      sf_mex_printf("%s =\\n", "ActvFltCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u26);
      sf_mex_listen_for_ctrl_c(chartInstance->S);
    } else {
      exitg1 = 1U;
    }
  } while (exitg1 == 0U);

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, chartInstance->c4_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c4_sfEvent);
  chartInstance->c4_tp_TIME_STEP = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  chartInstance->c4_is_c4_BaseEngineController_A02 = c4_IN_TIME_STEP;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c4_sfEvent);
  chartInstance->c4_tp_TIME_STEP = 1U;
  chartInstance->c4_ActvFltCount = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
  c4_u27 = chartInstance->c4_ActvFltCount;
  sf_mex_printf("%s =\\n", "ActvFltCount");
  sf_mex_call_debug("disp", 0U, 1U, 9, c4_u27);
  chartInstance->c4_FltOrderCount = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
  c4_u28 = chartInstance->c4_FltOrderCount;
  sf_mex_printf("%s =\\n", "FltOrderCount");
  sf_mex_call_debug("disp", 0U, 1U, 9, c4_u28);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c4_sfEvent);
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

const mxArray *sf_c4_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
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
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static int32_T c4_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i25;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i25, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i25;
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
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
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
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint8_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static uint8_T c4_b_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_b_tp_AT_STARTUP, const char_T *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_AT_STARTUP),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_AT_STARTUP);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u29;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u29, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u29;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_tp_AT_STARTUP;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_b_tp_AT_STARTUP = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_tp_AT_STARTUP),
    &c4_thisId);
  sf_mex_destroy(&c4_b_tp_AT_STARTUP);
  *(uint8_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_c_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i26;
  int8_T c4_b_inData[71];
  int32_T c4_i27;
  int8_T c4_u[71];
  const mxArray *c4_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i26 = 0; c4_i26 < 71; c4_i26++) {
    c4_b_inData[c4_i26] = (*(int8_T (*)[71])c4_inData)[c4_i26];
  }

  for (c4_i27 = 0; c4_i27 < 71; c4_i27++) {
    c4_u[c4_i27] = c4_b_inData[c4_i27];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 2, 0U, 1U, 0U, 1, 71));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static const mxArray *c4_d_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i28;
  boolean_T c4_b_inData[6];
  int32_T c4_i29;
  boolean_T c4_u[6];
  const mxArray *c4_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i28 = 0; c4_i28 < 6; c4_i28++) {
    c4_b_inData[c4_i28] = (*(boolean_T (*)[6])c4_inData)[c4_i28];
  }

  for (c4_i29 = 0; c4_i29 < 6; c4_i29++) {
    c4_u[c4_i29] = c4_b_inData[c4_i29];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 11, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static const mxArray *c4_e_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i30;
  uint8_T c4_b_inData[6];
  int32_T c4_i31;
  uint8_T c4_u[6];
  const mxArray *c4_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i30 = 0; c4_i30 < 6; c4_i30++) {
    c4_b_inData[c4_i30] = (*(uint8_T (*)[6])c4_inData)[c4_i30];
  }

  for (c4_i31 = 0; c4_i31 < 6; c4_i31++) {
    c4_u[c4_i31] = c4_b_inData[c4_i31];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 3, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static void c4_d_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFIDs, const char_T *c4_identifier, uint8_T
  c4_y[6])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FFIDs), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FFIDs);
}

static void c4_e_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  uint8_T c4_y[6])
{
  uint8_T c4_uv4[6];
  int32_T c4_i32;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_uv4, 1, 3, 0U, 1, 0U, 1, 6);
  for (c4_i32 = 0; c4_i32 < 6; c4_i32++) {
    c4_y[c4_i32] = c4_uv4[c4_i32];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_FFIDs;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y[6];
  int32_T c4_i33;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_FFIDs = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FFIDs), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FFIDs);
  for (c4_i33 = 0; c4_i33 < 6; c4_i33++) {
    (*(uint8_T (*)[6])c4_outData)[c4_i33] = c4_y[c4_i33];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static void c4_f_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFTrigg, const char_T *c4_identifier,
  boolean_T c4_y[6])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FFTrigg), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FFTrigg);
}

static void c4_g_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_y[6])
{
  boolean_T c4_bv2[6];
  int32_T c4_i34;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_bv2, 1, 11, 0U, 1, 0U, 1, 6);
  for (c4_i34 = 0; c4_i34 < 6; c4_i34++) {
    c4_y[c4_i34] = c4_bv2[c4_i34];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_FFTrigg;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  boolean_T c4_y[6];
  int32_T c4_i35;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_FFTrigg = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FFTrigg), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FFTrigg);
  for (c4_i35 = 0; c4_i35 < 6; c4_i35++) {
    (*(boolean_T (*)[6])c4_outData)[c4_i35] = c4_y[c4_i35];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_f_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_i36;
  uint16_T c4_b_inData[71];
  int32_T c4_i37;
  uint16_T c4_u[71];
  const mxArray *c4_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  for (c4_i36 = 0; c4_i36 < 71; c4_i36++) {
    c4_b_inData[c4_i36] = (*(uint16_T (*)[71])c4_inData)[c4_i36];
  }

  for (c4_i37 = 0; c4_i37 < 71; c4_i37++) {
    c4_u[c4_i37] = c4_b_inData[c4_i37];
  }

  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_u, 5, 0U, 1U, 0U, 1, 71));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static const mxArray *c4_g_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  uint16_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(uint16_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_mxArrayOutData, c4_y);
  return c4_mxArrayOutData;
}

static void c4_h_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FltOrder, const char_T *c4_identifier,
  uint16_T c4_y[71])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FltOrder), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FltOrder);
}

static void c4_i_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  uint16_T c4_y[71])
{
  uint16_T c4_uv5[71];
  int32_T c4_i38;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_uv5, 1, 5, 0U, 1, 0U, 1, 71);
  for (c4_i38 = 0; c4_i38 < 71; c4_i38++) {
    c4_y[c4_i38] = c4_uv5[c4_i38];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_FltOrder;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint16_T c4_y[71];
  int32_T c4_i39;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_FltOrder = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FltOrder), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_FltOrder);
  for (c4_i39 = 0; c4_i39 < 71; c4_i39++) {
    (*(uint16_T (*)[71])c4_outData)[c4_i39] = c4_y[c4_i39];
  }

  sf_mex_destroy(&c4_mxArrayInData);
}

static uint16_T c4_j_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_FltOrderMax, const char_T *c4_identifier)
{
  uint16_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FltOrderMax),
    &c4_thisId);
  sf_mex_destroy(&c4_FltOrderMax);
  return c4_y;
}

static uint16_T c4_k_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint16_T c4_y;
  uint16_T c4_u30;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u30, 1, 5, 0U, 0, 0U, 0);
  c4_y = c4_u30;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_FltOrderMax;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  uint16_T c4_y;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_FltOrderMax = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_FltOrderMax),
    &c4_thisId);
  sf_mex_destroy(&c4_FltOrderMax);
  *(uint16_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static const mxArray *c4_l_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_identifier)
{
  const mxArray *c4_y = NULL;
  emlrtMsgIdentifier c4_thisId;
  c4_y = NULL;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  sf_mex_assign(&c4_y, c4_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_setSimStateSideEffectsInfo), &c4_thisId));
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
  return c4_y;
}

static const mxArray *c4_m_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  const mxArray *c4_y = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe(&c4_u));
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint16_T c4__u16_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b)
{
  uint16_T c4_a;
  c4_a = (uint16_T)c4_b;
  if (c4_a != c4_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c4_a;
}

static uint8_T c4__u8_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b)
{
  uint8_T c4_a;
  c4_a = (uint8_T)c4_b;
  if (c4_a != c4_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c4_a;
}

static void init_dsm_address_info(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c4_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1509878065U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4015845291U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2545151350U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2717684235U);
}

mxArray *sf_c4_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(458654182U);
    pr[1] = (double)(3702098851U);
    pr[2] = (double)(1362980469U);
    pr[3] = (double)(2609014929U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(71);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
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
      pr[0] = (double)(6);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(71);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      pr[0] = (double)(6);
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
      pr[0] = (double)(6);
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
      pr[0] = (double)(71);
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

static const mxArray *sf_get_sim_state_info_c4_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[38],T\"FFIDs\",},{M[1],M[40],T\"FFTrigg\",},{M[1],M[45],T\"FltOrder\",},{M[1],M[46],T\"FltOrderMax\",},{M[3],M[47],T\"ActvFltCount\",},{M[3],M[49],T\"FltOrderCount\",},{M[3],M[50],T\"FltOrderOld\",},{M[3],M[48],T\"OldIndex\",},{M[8],M[0],T\"is_active_c4_BaseEngineController_A02\",},{M[9],M[0],T\"is_c4_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           4,
           6,
           19,
           15,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"ActvFlts");
          _SFD_SET_DATA_PROPS(1,1,1,0,"FFTriggZeros");
          _SFD_SET_DATA_PROPS(2,2,0,1,"FFIDs");
          _SFD_SET_DATA_PROPS(3,1,1,0,"FFIDsIn");
          _SFD_SET_DATA_PROPS(4,2,0,1,"FFTrigg");
          _SFD_SET_DATA_PROPS(5,1,1,0,"NumFF");
          _SFD_SET_DATA_PROPS(6,1,1,0,"FltOrderIn");
          _SFD_SET_DATA_PROPS(7,1,1,0,"NumFlts");
          _SFD_SET_DATA_PROPS(8,1,1,0,"FltOrderMaxIn");
          _SFD_SET_DATA_PROPS(9,2,0,1,"FltOrder");
          _SFD_SET_DATA_PROPS(10,2,0,1,"FltOrderMax");
          _SFD_SET_DATA_PROPS(11,0,0,0,"ActvFltCount");
          _SFD_SET_DATA_PROPS(12,0,0,0,"OldIndex");
          _SFD_SET_DATA_PROPS(13,0,0,0,"FltOrderCount");
          _SFD_SET_DATA_PROPS(14,0,0,0,"FltOrderOld");
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,1);
          _SFD_CH_SUBSTATE_INDEX(1,5);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 37 };

          static unsigned int sEndGuardMap[] = { 27, 77 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 29 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 37 };

          static unsigned int sEndGuardMap[] = { 27, 77 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(7,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,0,3,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(12,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              0,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(15,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 48 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 71;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_INT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
            0,0,(MexFcnForType)c4_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_e_sf_marshallOut,(MexInFcnForType)
            c4_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_d_sf_marshallOut,(MexInFcnForType)
            c4_d_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 71;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT16,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_f_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_g_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 71;
          _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT16,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c4_f_sf_marshallOut,(MexInFcnForType)
            c4_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(10,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_g_sf_marshallOut,(MexInFcnForType)c4_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)c4_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)c4_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_b_sf_marshallOut,(MexInFcnForType)c4_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_g_sf_marshallOut,(MexInFcnForType)c4_f_sf_marshallIn);

        {
          uint8_T *c4_NumFF;
          uint8_T *c4_NumFlts;
          uint16_T *c4_FltOrderMaxIn;
          uint16_T *c4_FltOrderMax;
          int8_T (*c4_ActvFlts)[71];
          boolean_T (*c4_FFTriggZeros)[6];
          uint8_T (*c4_FFIDs)[6];
          uint8_T (*c4_FFIDsIn)[6];
          boolean_T (*c4_FFTrigg)[6];
          uint16_T (*c4_FltOrderIn)[71];
          uint16_T (*c4_FltOrder)[71];
          c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S,
            3);
          c4_FltOrderMaxIn = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            6);
          c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c4_FltOrderIn = (uint16_T (*)[71])ssGetInputPortSignal
            (chartInstance->S, 4);
          c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S,
            2);
          c4_FFIDsIn = (uint8_T (*)[6])ssGetInputPortSignal(chartInstance->S, 2);
          c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
          c4_FFTriggZeros = (boolean_T (*)[6])ssGetInputPortSignal
            (chartInstance->S, 1);
          c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c4_ActvFlts);
          _SFD_SET_DATA_VALUE_PTR(1U, *c4_FFTriggZeros);
          _SFD_SET_DATA_VALUE_PTR(2U, *c4_FFIDs);
          _SFD_SET_DATA_VALUE_PTR(3U, *c4_FFIDsIn);
          _SFD_SET_DATA_VALUE_PTR(4U, *c4_FFTrigg);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_NumFF);
          _SFD_SET_DATA_VALUE_PTR(6U, *c4_FltOrderIn);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_NumFlts);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_FltOrderMaxIn);
          _SFD_SET_DATA_VALUE_PTR(9U, *c4_FltOrder);
          _SFD_SET_DATA_VALUE_PTR(10U, c4_FltOrderMax);
          _SFD_SET_DATA_VALUE_PTR(11U, &chartInstance->c4_ActvFltCount);
          _SFD_SET_DATA_VALUE_PTR(12U, &chartInstance->c4_OldIndex);
          _SFD_SET_DATA_VALUE_PTR(13U, &chartInstance->c4_FltOrderCount);
          _SFD_SET_DATA_VALUE_PTR(14U, &chartInstance->c4_FltOrderOld);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c4_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_BaseEngineController_A02(void *chartInstanceVar)
{
  disable_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_BaseEngineController_A02(void *chartInstanceVar)
{
  sf_c4_BaseEngineController_A02((SFc4_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c4_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c4_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c4_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c4_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c4_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c4_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c4_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c4_BaseEngineController_A02
      ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_BaseEngineController_A02
      ((SFc4_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",4,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",4,7);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",4,4);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1503790394U));
  ssSetChecksum1(S,(4229584685U));
  ssSetChecksum2(S,(663759842U));
  ssSetChecksum3(S,(3661940923U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c4_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",4);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c4_BaseEngineController_A02(SimStruct *S)
{
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc4_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc4_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_BaseEngineController_A02;
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

void c4_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
