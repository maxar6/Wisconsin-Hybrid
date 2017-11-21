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
static void c4_AT_STARTUP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void c4_enter_atomic_TIME_STEP
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static void c4_TIME_STEP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_b_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_c_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_d_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_e_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_f_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_g_sf_marshall(void *chartInstanceVoid, void *c4_u);
static void c4_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFIDs, const char_T *c4_name, uint8_T c4_y[6]);
static void c4_b_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFTrigg, const char_T *c4_name, boolean_T
  c4_y[6]);
static void c4_c_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FltOrder, const char_T *c4_name, uint16_T
  c4_y[71]);
static uint16_T c4_d_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_FltOrderMax, const char_T *c4_name);
static uint8_T c4_e_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_b_ActvFltCount, const char_T *c4_name);
static const mxArray *c4_f_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_b_setSimStateSideEffectsInfo, const char_T *c4_name);
static uint16_T c4__u16_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b);
static uint8_T c4__u8_s32_(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, int32_T c4_b);
static void init_test_point_addr_map(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance);
static void **get_test_point_address_map
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance);
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
    for (c4_i0 = 0; c4_i0 < 6; c4_i0 = c4_i0 + 1) {
      (*c4_FFIDs)[c4_i0] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    for (c4_i1 = 0; c4_i1 < 6; c4_i1 = c4_i1 + 1) {
      (*c4_FFTrigg)[c4_i1] = FALSE;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    for (c4_i2 = 0; c4_i2 < 71; c4_i2 = c4_i2 + 1) {
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
    _SFD_CC_CALL(CHART_ACTIVE_TAG,2);
  }

  if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_AT_STARTUP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c4_is_c4_BaseEngineController_A02 == c4_IN_TIME_STEP) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  sf_debug_set_animation(c4_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c4_st = NULL;
  const mxArray *c4_y = NULL;
  int32_T c4_i3;
  uint8_T c4_hoistedGlobal[6];
  int32_T c4_i4;
  uint8_T c4_u[6];
  const mxArray *c4_b_y = NULL;
  int32_T c4_i5;
  boolean_T c4_b_hoistedGlobal[6];
  int32_T c4_i6;
  boolean_T c4_b_u[6];
  const mxArray *c4_c_y = NULL;
  int32_T c4_i7;
  uint16_T c4_c_hoistedGlobal[71];
  int32_T c4_i8;
  uint16_T c4_c_u[71];
  const mxArray *c4_d_y = NULL;
  uint16_T c4_d_hoistedGlobal;
  uint16_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  uint8_T c4_e_hoistedGlobal;
  uint8_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  uint8_T c4_f_hoistedGlobal;
  uint8_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  uint16_T c4_g_hoistedGlobal;
  uint16_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  uint8_T c4_h_hoistedGlobal;
  uint8_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  uint8_T c4_i_hoistedGlobal;
  uint8_T c4_i_u;
  const mxArray *c4_j_y = NULL;
  uint8_T c4_j_hoistedGlobal;
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
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(10));
  for (c4_i3 = 0; c4_i3 < 6; c4_i3 = c4_i3 + 1) {
    c4_hoistedGlobal[c4_i3] = (*c4_FFIDs)[c4_i3];
  }

  for (c4_i4 = 0; c4_i4 < 6; c4_i4 = c4_i4 + 1) {
    c4_u[c4_i4] = c4_hoistedGlobal[c4_i4];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 3, 0U, 1U, 0U, 1, 6));
  sf_mex_setcell(c4_y, 0, c4_b_y);
  for (c4_i5 = 0; c4_i5 < 6; c4_i5 = c4_i5 + 1) {
    c4_b_hoistedGlobal[c4_i5] = (*c4_FFTrigg)[c4_i5];
  }

  for (c4_i6 = 0; c4_i6 < 6; c4_i6 = c4_i6 + 1) {
    c4_b_u[c4_i6] = c4_b_hoistedGlobal[c4_i6];
  }

  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 11, 0U, 1U, 0U, 1, 6));
  sf_mex_setcell(c4_y, 1, c4_c_y);
  for (c4_i7 = 0; c4_i7 < 71; c4_i7 = c4_i7 + 1) {
    c4_c_hoistedGlobal[c4_i7] = (*c4_FltOrder)[c4_i7];
  }

  for (c4_i8 = 0; c4_i8 < 71; c4_i8 = c4_i8 + 1) {
    c4_c_u[c4_i8] = c4_c_hoistedGlobal[c4_i8];
  }

  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 5, 0U, 1U, 0U, 1, 71));
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = *c4_FltOrderMax;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_e_hoistedGlobal = chartInstance->c4_ActvFltCount;
  c4_e_u = c4_e_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_f_hoistedGlobal = chartInstance->c4_FltOrderCount;
  c4_f_u = c4_f_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_g_hoistedGlobal = chartInstance->c4_FltOrderOld;
  c4_g_u = c4_g_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_h_hoistedGlobal = chartInstance->c4_OldIndex;
  c4_h_u = c4_h_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_i_hoistedGlobal = chartInstance->c4_is_active_c4_BaseEngineController_A02;
  c4_i_u = c4_i_hoistedGlobal;
  c4_j_y = NULL;
  sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_j_hoistedGlobal = chartInstance->c4_is_c4_BaseEngineController_A02;
  c4_j_u = c4_j_hoistedGlobal;
  c4_k_y = NULL;
  sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 9, c4_k_y);
  sf_mex_assign(&c4_st, c4_y);
  return c4_st;
}

static void set_sim_state_c4_BaseEngineController_A02
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c4_st)
{
  const mxArray *c4_u;
  uint8_T c4_uv0[6];
  int32_T c4_i9;
  boolean_T c4_bv0[6];
  int32_T c4_i10;
  uint16_T c4_uv1[71];
  int32_T c4_i11;
  uint16_T *c4_FltOrderMax;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint16_T (*c4_FltOrder)[71];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_u = sf_mex_dup(c4_st);
  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)),
                      "FFIDs", c4_uv0);
  for (c4_i9 = 0; c4_i9 < 6; c4_i9 = c4_i9 + 1) {
    (*c4_FFIDs)[c4_i9] = c4_uv0[c4_i9];
  }

  c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "FFTrigg", c4_bv0);
  for (c4_i10 = 0; c4_i10 < 6; c4_i10 = c4_i10 + 1) {
    (*c4_FFTrigg)[c4_i10] = c4_bv0[c4_i10];
  }

  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
                        "FltOrder", c4_uv1);
  for (c4_i11 = 0; c4_i11 < 71; c4_i11 = c4_i11 + 1) {
    (*c4_FltOrder)[c4_i11] = c4_uv1[c4_i11];
  }

  *c4_FltOrderMax = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 3)), "FltOrderMax");
  chartInstance->c4_ActvFltCount = c4_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 4)), "ActvFltCount");
  chartInstance->c4_FltOrderCount = c4_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 5)), "FltOrderCount");
  chartInstance->c4_FltOrderOld = c4_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 6)), "FltOrderOld");
  chartInstance->c4_OldIndex = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 7)), "OldIndex");
  chartInstance->c4_is_active_c4_BaseEngineController_A02 =
    c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 8)),
    "is_active_c4_BaseEngineController_A02");
  chartInstance->c4_is_c4_BaseEngineController_A02 = c4_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 9)),
     "is_c4_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 10
     )), "setSimStateSideEffectsInfo"));
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
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_previousEvent;
  int32_T c4_i19;
  int32_T c4_i20;
  int32_T c4_i21;
  uint8_T c4_uv2[6];
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  uint16_T c4_uv3[71];
  uint16_T c4_u0;
  uint16_T *c4_FltOrderMaxIn;
  uint16_T *c4_FltOrderMax;
  uint8_T *c4_NumFF;
  uint8_T *c4_NumFlts;
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
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,2);
  for (c4_i12 = 0; c4_i12 < 71; c4_i12 = c4_i12 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_ActvFlts)[c4_i12], 0U);
  }

  for (c4_i13 = 0; c4_i13 < 6; c4_i13 = c4_i13 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTriggZeros)[c4_i13], 1U);
  }

  for (c4_i14 = 0; c4_i14 < 6; c4_i14 = c4_i14 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[c4_i14], 2U);
  }

  for (c4_i15 = 0; c4_i15 < 6; c4_i15 = c4_i15 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDsIn)[c4_i15], 3U);
  }

  for (c4_i16 = 0; c4_i16 < 6; c4_i16 = c4_i16 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[c4_i16], 4U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_NumFF, 5U);
  for (c4_i17 = 0; c4_i17 < 71; c4_i17 = c4_i17 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrderIn)[c4_i17], 6U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_NumFlts, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMaxIn, 8U);
  for (c4_i18 = 0; c4_i18 < 71; c4_i18 = c4_i18 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[c4_i18], 9U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_OldIndex, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderOld, 14U);
  c4_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,2);
  if ((int16_T)chartInstance->c4_is_active_c4_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,2);
    chartInstance->c4_is_active_c4_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c4_is_c4_BaseEngineController_A02 = c4_IN_AT_STARTUP;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c4_tp_AT_STARTUP = 1U;
    for (c4_i19 = 0; c4_i19 < 6; c4_i19 = c4_i19 + 1) {
      (*c4_FFIDs)[c4_i19] = (*c4_FFIDsIn)[c4_i19];
    }

    for (c4_i20 = 0; c4_i20 < 6; c4_i20 = c4_i20 + 1) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[c4_i20], 2U);
    }

    for (c4_i21 = 0; c4_i21 < 6; c4_i21 = c4_i21 + 1) {
      c4_uv2[c4_i21] = (*c4_FFIDs)[c4_i21];
    }

    sf_mex_printf("%s =\\n", "FFIDs");
    sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", &c4_uv2, 3, 0U,
      1U, 0U, 1, 6));
    for (c4_i22 = 0; c4_i22 < 71; c4_i22 = c4_i22 + 1) {
      (*c4_FltOrder)[c4_i22] = (*c4_FltOrderIn)[c4_i22];
    }

    for (c4_i23 = 0; c4_i23 < 71; c4_i23 = c4_i23 + 1) {
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[c4_i23], 9U);
    }

    for (c4_i24 = 0; c4_i24 < 71; c4_i24 = c4_i24 + 1) {
      c4_uv3[c4_i24] = (*c4_FltOrder)[c4_i24];
    }

    sf_mex_printf("%s =\\n", "FltOrder");
    sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", &c4_uv3, 5, 0U,
      1U, 0U, 1, 71));
    *c4_FltOrderMax = *c4_FltOrderMaxIn;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
    c4_u0 = *c4_FltOrderMax;
    sf_mex_printf("%s =\\n", "FltOrderMax");
    sf_mex_call_debug("disp", 0U, 1U, 11, c4_u0);
  } else {
    switch (chartInstance->c4_is_c4_BaseEngineController_A02) {
     case c4_IN_AT_STARTUP:
      CV_CHART_EVAL(2,0,1);
      c4_AT_STARTUP(chartInstance);
      break;

     case c4_IN_TIME_STEP:
      CV_CHART_EVAL(2,0,2);
      c4_TIME_STEP(chartInstance);
      break;

     default:
      CV_CHART_EVAL(2,0,0);
      chartInstance->c4_is_c4_BaseEngineController_A02 = (uint8_T)
        c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
  _sfEvent_ = c4_previousEvent;
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
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
  uint16_T *c4_FltOrderMax;
  uint16_T (*c4_FltOrder)[71];
  uint8_T *c4_NumFF;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint8_T *c4_NumFlts;
  int8_T (*c4_ActvFlts)[71];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((*c4_ActvFlts)
            [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(0U, (int32_T)chartInstance->
             c4_ActvFltCount, 0, 70, 1, 0)] == 0)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      *c4_FltOrderMax = c4__u16_s32_(chartInstance, *c4_FltOrderMax + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
      c4_u1 = *c4_FltOrderMax;
      sf_mex_printf("%s =\\n", "FltOrderMax");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u1);
      (*c4_FltOrder)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] = *
        c4_FltOrderMax;
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[(uint8_T)
                            _SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1
        , 0)], 9U);
      c4_u2 = (*c4_FltOrder)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)];
      sf_mex_printf("%s =\\n", "FltOrder[ActvFltCount]");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u2);
      chartInstance->c4_FltOrderCount = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
      c4_u3 = chartInstance->c4_FltOrderCount;
      sf_mex_printf("%s =\\n", "FltOrderCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u3);
     label_1:
      ;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      c4_temp = (_SFD_CCP_CALL(4,0,(((int16_T)(*c4_FFIDs)[(uint8_T)
        _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)chartInstance->c4_FltOrderCount, 0
        , 5, 1, 0)] != 0)!=0)) != 0);
      if (c4_temp) {
        c4_temp = (_SFD_CCP_CALL(4,1,(((*c4_FFIDs)[(uint8_T)
          _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)chartInstance->c4_FltOrderCount,
          0, 5, 1, 0
          )] != chartInstance->c4_ActvFltCount + 1)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c4_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,
              ((chartInstance->c4_FltOrderCount < *c4_NumFF - 1)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
            chartInstance->c4_FltOrderCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
          c4_u4 = chartInstance->c4_FltOrderCount;
          sf_mex_printf("%s =\\n", "FltOrderCount");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u4);
          sf_mex_listen_for_ctrl_c(chartInstance->S);
          goto label_1;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
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
          while (1) {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
            if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,
                  (((*c4_FltOrder)[_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)
                     [(uint8_T)
                     _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                      chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70,
                     1, 0)] < chartInstance->
                    c4_FltOrderOld)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
              chartInstance->c4_FltOrderOld = (*c4_FltOrder)
                [_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)[(uint8_T)
                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T
                )chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70, 1, 0)];
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
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
            }

            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
            if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
                  ((chartInstance->c4_FltOrderCount < *c4_NumFF - 1)!=0))) == 0)
            {
              break;
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
            chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
              chartInstance->c4_FltOrderCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u9 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u9);
            sf_mex_listen_for_ctrl_c(chartInstance->S);
          }

          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
          (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)] = c4__u8_s32_(
            chartInstance, chartInstance->c4_ActvFltCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)], 2U
                                );
          c4_u10 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFIDs[OldIndex]");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u10);
          (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)] = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)],
                                4U);
          c4_b0 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFTrigg[OldIndex]");
          sf_mex_call_debug("disp", 0U, 1U, 3, c4_b0);
        }
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = c4__u8_s32_(
          chartInstance, chartInstance->c4_ActvFltCount + 1);
        _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)
                              ], 2U);
        c4_u11 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
        sf_mex_printf("%s =\\n", "FFIDs[FltOrderCount]");
        sf_mex_call_debug("disp", 0U, 1U, 9, c4_u11);
        (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1,
          0)], 4U);
        c4_b1 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
        sf_mex_printf("%s =\\n", "FFTrigg[FltOrderCount]");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b1);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
          ((chartInstance->c4_ActvFltCount < *c4_NumFlts - 1)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
    chartInstance->c4_ActvFltCount = c4__u8_s32_(chartInstance,
      chartInstance->c4_ActvFltCount + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
    c4_u12 = chartInstance->c4_ActvFltCount;
    sf_mex_printf("%s =\\n", "ActvFltCount");
    sf_mex_call_debug("disp", 0U, 1U, 9, c4_u12);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
  chartInstance->c4_tp_AT_STARTUP = 0U;
  chartInstance->c4_is_c4_BaseEngineController_A02 = (uint8_T)
    c4_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
  c4_enter_atomic_TIME_STEP(chartInstance);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c4_enter_atomic_TIME_STEP
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint8_T c4_u13;
  uint8_T c4_u14;
  chartInstance->c4_is_c4_BaseEngineController_A02 = c4_IN_TIME_STEP;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
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
}

static void c4_TIME_STEP(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
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
  uint16_T *c4_FltOrderMax;
  uint16_T (*c4_FltOrder)[71];
  uint8_T *c4_NumFF;
  uint8_T (*c4_FFIDs)[6];
  boolean_T (*c4_FFTrigg)[6];
  uint8_T *c4_NumFlts;
  int8_T (*c4_ActvFlts)[71];
  boolean_T (*c4_FFTriggZeros)[6];
  c4_FltOrderMax = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_FltOrder = (uint16_T (*)[71])ssGetOutputPortSignal(chartInstance->S, 3);
  c4_NumFlts = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_NumFF = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_FFTrigg = (boolean_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 2);
  c4_FFIDs = (uint8_T (*)[6])ssGetOutputPortSignal(chartInstance->S, 1);
  c4_FFTriggZeros = (boolean_T (*)[6])ssGetInputPortSignal(chartInstance->S, 1);
  c4_ActvFlts = (int8_T (*)[71])ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
  for (c4_i25 = 0; c4_i25 < 6; c4_i25 = c4_i25 + 1) {
    (*c4_FFTrigg)[c4_i25] = (*c4_FFTriggZeros)[c4_i25];
  }

  for (c4_i26 = 0; c4_i26 < 6; c4_i26 = c4_i26 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[c4_i26], 4U);
  }

  for (c4_i27 = 0; c4_i27 < 6; c4_i27 = c4_i27 + 1) {
    c4_bv1[c4_i27] = (*c4_FFTrigg)[c4_i27];
  }

  sf_mex_printf("%s =\\n", "FFTrigg");
  sf_mex_call_debug("disp", 0U, 1U, 14, sf_mex_create("disp", &c4_bv1, 11, 0U,
    1U, 0U, 1, 6));
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((*c4_ActvFlts)
            [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(0U, (int32_T)chartInstance->
             c4_ActvFltCount, 0, 70, 1, 0)] == 0)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      *c4_FltOrderMax = c4__u16_s32_(chartInstance, *c4_FltOrderMax + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c4_FltOrderMax, 10U);
      c4_u15 = *c4_FltOrderMax;
      sf_mex_printf("%s =\\n", "FltOrderMax");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u15);
      (*c4_FltOrder)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)] = *
        c4_FltOrderMax;
      _SFD_DATA_RANGE_CHECK((real_T)(*c4_FltOrder)[(uint8_T)
                            _SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1
        , 0)], 9U);
      c4_u16 = (*c4_FltOrder)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(9U, (int32_T)
        chartInstance->c4_ActvFltCount, 0, 70, 1, 0)];
      sf_mex_printf("%s =\\n", "FltOrder[ActvFltCount]");
      sf_mex_call_debug("disp", 0U, 1U, 11, c4_u16);
      chartInstance->c4_FltOrderCount = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
      c4_u17 = chartInstance->c4_FltOrderCount;
      sf_mex_printf("%s =\\n", "FltOrderCount");
      sf_mex_call_debug("disp", 0U, 1U, 9, c4_u17);
     label_1:
      ;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      c4_temp = (_SFD_CCP_CALL(4,0,(((int16_T)(*c4_FFIDs)[(uint8_T)
        _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)chartInstance->c4_FltOrderCount, 0
        , 5, 1, 0)] != 0)!=0)) != 0);
      if (c4_temp) {
        c4_temp = (_SFD_CCP_CALL(4,1,(((*c4_FFIDs)[(uint8_T)
          _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)chartInstance->c4_FltOrderCount,
          0, 5, 1, 0
          )] != chartInstance->c4_ActvFltCount + 1)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c4_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,
              ((chartInstance->c4_FltOrderCount < *c4_NumFF - 1)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
            chartInstance->c4_FltOrderCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
          c4_u18 = chartInstance->c4_FltOrderCount;
          sf_mex_printf("%s =\\n", "FltOrderCount");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u18);
          sf_mex_listen_for_ctrl_c(chartInstance->S);
          goto label_1;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
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
          while (1) {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
            if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,
                  (((*c4_FltOrder)[_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)
                     [(uint8_T)
                     _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
                      chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70,
                     1, 0)] < chartInstance->
                    c4_FltOrderOld)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
              chartInstance->c4_FltOrderOld = (*c4_FltOrder)
                [_SFD_ARRAY_BOUNDS_CHECK(9U, (*c4_FFIDs)[(uint8_T)
                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T
                )chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] - 1, 0, 70, 1, 0)];
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
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
            }

            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
            if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
                  ((chartInstance->c4_FltOrderCount < *c4_NumFF - 1)!=0))) == 0)
            {
              break;
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
            chartInstance->c4_FltOrderCount = c4__u8_s32_(chartInstance,
              chartInstance->c4_FltOrderCount + 1);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_FltOrderCount, 13U);
            c4_u23 = chartInstance->c4_FltOrderCount;
            sf_mex_printf("%s =\\n", "FltOrderCount");
            sf_mex_call_debug("disp", 0U, 1U, 9, c4_u23);
            sf_mex_listen_for_ctrl_c(chartInstance->S);
          }

          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
          (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)] = c4__u8_s32_(
            chartInstance, chartInstance->c4_ActvFltCount + 1);
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)], 2U
                                );
          c4_u24 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFIDs[OldIndex]");
          sf_mex_call_debug("disp", 0U, 1U, 9, c4_u24);
          (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)] = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)],
                                4U);
          c4_b2 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
            chartInstance->c4_OldIndex, 0, 5, 1, 0)];
          sf_mex_printf("%s =\\n", "FFTrigg[OldIndex]");
          sf_mex_call_debug("disp", 0U, 1U, 3, c4_b2);
        }
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        (*c4_FFIDs)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = c4__u8_s32_(
          chartInstance, chartInstance->c4_ActvFltCount + 1);
        _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFIDs)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)
                              ], 2U);
        c4_u25 = (*c4_FFIDs)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(2U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
        sf_mex_printf("%s =\\n", "FFIDs[FltOrderCount]");
        sf_mex_call_debug("disp", 0U, 1U, 9, c4_u25);
        (*c4_FFTrigg)[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)] = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)(*c4_FFTrigg)[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1,
          0)], 4U);
        c4_b3 = (*c4_FFTrigg)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(4U, (int32_T)
          chartInstance->c4_FltOrderCount, 0, 5, 1, 0)];
        sf_mex_printf("%s =\\n", "FFTrigg[FltOrderCount]");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b3);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,
          ((chartInstance->c4_ActvFltCount < *c4_NumFlts - 1)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
    chartInstance->c4_ActvFltCount = c4__u8_s32_(chartInstance,
      chartInstance->c4_ActvFltCount + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_ActvFltCount, 11U);
    c4_u26 = chartInstance->c4_ActvFltCount;
    sf_mex_printf("%s =\\n", "ActvFltCount");
    sf_mex_call_debug("disp", 0U, 1U, 9, c4_u26);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
  chartInstance->c4_tp_TIME_STEP = 0U;
  chartInstance->c4_is_c4_BaseEngineController_A02 = (uint8_T)
    c4_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
  c4_enter_atomic_TIME_STEP(chartInstance);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
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

static const mxArray *c4_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  uint8_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((uint8_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_b_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  boolean_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((boolean_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_c_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  int32_T c4_i28;
  int8_T c4_b_u[71];
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  for (c4_i28 = 0; c4_i28 < 71; c4_i28 = c4_i28 + 1) {
    c4_b_u[c4_i28] = (*((int8_T (*)[71])c4_u))[c4_i28];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 2, 0U, 1U, 0U, 1, 71));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_d_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  int32_T c4_i29;
  boolean_T c4_b_u[6];
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  for (c4_i29 = 0; c4_i29 < 6; c4_i29 = c4_i29 + 1) {
    c4_b_u[c4_i29] = (*((boolean_T (*)[6])c4_u))[c4_i29];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 11, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_e_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  int32_T c4_i30;
  uint8_T c4_b_u[6];
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  for (c4_i30 = 0; c4_i30 < 6; c4_i30 = c4_i30 + 1) {
    c4_b_u[c4_i30] = (*((uint8_T (*)[6])c4_u))[c4_i30];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 3, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_f_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  int32_T c4_i31;
  uint16_T c4_b_u[71];
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  for (c4_i31 = 0; c4_i31 < 71; c4_i31 = c4_i31 + 1) {
    c4_b_u[c4_i31] = (*((uint16_T (*)[71])c4_u))[c4_i31];
  }

  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 5, 0U, 1U, 0U, 1, 71));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_g_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  uint16_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((uint16_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static void c4_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFIDs, const char_T *
  c4_name, uint8_T c4_y[6])
{
  uint8_T c4_uv4[6];
  int32_T c4_i32;
  sf_mex_import(c4_name, sf_mex_dup(c4_FFIDs), &c4_uv4, 1, 3, 0U, 1, 0U, 1, 6);
  for (c4_i32 = 0; c4_i32 < 6; c4_i32 = c4_i32 + 1) {
    c4_y[c4_i32] = c4_uv4[c4_i32];
  }

  sf_mex_destroy(&c4_FFIDs);
}

static void c4_b_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FFTrigg, const
  char_T *c4_name, boolean_T c4_y[6])
{
  boolean_T c4_bv2[6];
  int32_T c4_i33;
  sf_mex_import(c4_name, sf_mex_dup(c4_FFTrigg), &c4_bv2, 1, 11, 0U, 1, 0U, 1, 6);
  for (c4_i33 = 0; c4_i33 < 6; c4_i33 = c4_i33 + 1) {
    c4_y[c4_i33] = c4_bv2[c4_i33];
  }

  sf_mex_destroy(&c4_FFTrigg);
}

static void c4_c_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_FltOrder, const
  char_T *c4_name, uint16_T c4_y[71])
{
  uint16_T c4_uv5[71];
  int32_T c4_i34;
  sf_mex_import(c4_name, sf_mex_dup(c4_FltOrder), &c4_uv5, 1, 5, 0U, 1, 0U, 1,
                71);
  for (c4_i34 = 0; c4_i34 < 71; c4_i34 = c4_i34 + 1) {
    c4_y[c4_i34] = c4_uv5[c4_i34];
  }

  sf_mex_destroy(&c4_FltOrder);
}

static uint16_T c4_d_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c4_FltOrderMax,
   const char_T *c4_name)
{
  uint16_T c4_y;
  uint16_T c4_u27;
  sf_mex_import(c4_name, sf_mex_dup(c4_FltOrderMax), &c4_u27, 1, 5, 0U, 0, 0U, 0);
  c4_y = c4_u27;
  sf_mex_destroy(&c4_FltOrderMax);
  return c4_y;
}

static uint8_T c4_e_emlrt_marshallIn(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c4_b_ActvFltCount,
  const char_T *c4_name)
{
  uint8_T c4_y;
  uint8_T c4_u28;
  sf_mex_import(c4_name, sf_mex_dup(c4_b_ActvFltCount), &c4_u28, 1, 3, 0U, 0, 0U,
                0);
  c4_y = c4_u28;
  sf_mex_destroy(&c4_b_ActvFltCount);
  return c4_y;
}

static const mxArray *c4_f_emlrt_marshallIn
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c4_b_setSimStateSideEffectsInfo, const char_T *c4_name)
{
  const mxArray *c4_y = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe
                (&c4_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
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

static void init_test_point_addr_map(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
  chartInstance->c4_testPointAddrMap[0] = &chartInstance->c4_ActvFltCount;
  chartInstance->c4_testPointAddrMap[1] = &chartInstance->c4_OldIndex;
  chartInstance->c4_testPointAddrMap[2] = &chartInstance->c4_FltOrderCount;
  chartInstance->c4_testPointAddrMap[3] = &chartInstance->c4_FltOrderOld;
  chartInstance->c4_testPointAddrMap[4] = &chartInstance->c4_tp_AT_STARTUP;
  chartInstance->c4_testPointAddrMap[5] = &chartInstance->c4_tp_TIME_STEP;
}

static void **get_test_point_address_map
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c4_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc4_BaseEngineController_A02InstanceStruct *chartInstance)
{
  return &chartInstance->c4_testPointMappingInfo;
}

static void init_dsm_address_info(SFc4_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c4_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1275922131U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4256647476U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3941457312U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4169242754U);
}

mxArray *sf_c4_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2094954605U);
    pr[1] = (double)(1637407262U);
    pr[2] = (double)(674989299U);
    pr[3] = (double)(2847267992U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c4_BaseEngineController_A02(void)
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

          {
            unsigned int dimVector[1];
            dimVector[0]= 71;
            _SFD_SET_DATA_PROPS(0,1,1,0,SF_INT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"ActvFlts",0,(MexFcnForType)c4_c_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 6;
            _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"FFTriggZeros",0,(MexFcnForType)
                                c4_d_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 6;
            _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"FFIDs",0,(MexFcnForType)c4_e_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 6;
            _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"FFIDsIn",0,(MexFcnForType)c4_e_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 6;
            _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,1.0,
                                0,"FFTrigg",0,(MexFcnForType)c4_d_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"NumFF",0,
                              (MexFcnForType)c4_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 71;
            _SFD_SET_DATA_PROPS(6,1,1,0,SF_UINT16,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"FltOrderIn",0,(MexFcnForType)
                                c4_f_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"NumFlts",
                              0,(MexFcnForType)c4_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "FltOrderMaxIn",0,(MexFcnForType)c4_g_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 71;
            _SFD_SET_DATA_PROPS(9,2,0,1,SF_UINT16,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"FltOrder",0,(MexFcnForType)
                                c4_f_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(10,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "FltOrderMax",0,(MexFcnForType)c4_g_sf_marshall);
          _SFD_SET_DATA_PROPS(11,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "ActvFltCount",0,(MexFcnForType)c4_sf_marshall);
          _SFD_SET_DATA_PROPS(12,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "OldIndex",0,(MexFcnForType)c4_sf_marshall);
          _SFD_SET_DATA_PROPS(13,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "FltOrderCount",0,(MexFcnForType)c4_sf_marshall);
          _SFD_SET_DATA_PROPS(14,0,0,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "FltOrderOld",0,(MexFcnForType)c4_g_sf_marshall);
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
          int8_T (*c4_ActvFlts)[71];
          boolean_T (*c4_FFTriggZeros)[6];
          uint8_T (*c4_FFIDs)[6];
          uint8_T (*c4_FFIDsIn)[6];
          boolean_T (*c4_FFTrigg)[6];
          uint8_T *c4_NumFF;
          uint16_T (*c4_FltOrderIn)[71];
          uint8_T *c4_NumFlts;
          uint16_T *c4_FltOrderMaxIn;
          uint16_T (*c4_FltOrder)[71];
          uint16_T *c4_FltOrderMax;
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
          _SFD_SET_DATA_VALUE_PTR(0U, c4_ActvFlts);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_FFTriggZeros);
          _SFD_SET_DATA_VALUE_PTR(2U, c4_FFIDs);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_FFIDsIn);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_FFTrigg);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_NumFF);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_FltOrderIn);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_NumFlts);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_FltOrderMaxIn);
          _SFD_SET_DATA_VALUE_PTR(9U, c4_FltOrder);
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

static mxArray* sf_internal_get_sim_state_c4_BaseEngineController_A02(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_BaseEngineController_A02
    ((SFc4_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c4_BaseEngineController_A02();/* state var info */
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

static void sf_internal_set_sim_state_c4_BaseEngineController_A02(SimStruct* S,
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

static mxArray* sf_opaque_get_sim_state_c4_BaseEngineController_A02(SimStruct* S)
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
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
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
      (int_T)sf_is_chart_inlinable("BaseEngineController_A02",
      "BaseEngineController_A02",4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
                "BaseEngineController_A02",4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
      "BaseEngineController_A02",4,"gatewayCannotBeInlinedMultipleTimes"));
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
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(145223413U));
  ssSetChecksum1(S,(3867637936U));
  ssSetChecksum2(S,(1639209714U));
  ssSetChecksum3(S,(3512972379U));
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
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info(chartInstance);
  }

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

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "uint16_T", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

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
  { 0, 0, "StateflowChart/ActvFltCount", "ActvFltCount", 0, 1, 0, 0, 0 },

  { 1, 0, "StateflowChart/OldIndex", "OldIndex", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/FltOrderCount", "FltOrderCount", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/FltOrderOld", "FltOrderOld", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/FREEZE_FRAME_TRIGGER.AT_STARTUP", "AT_STARTUP", 0, 1,
    0, 0, 0 },

  { 5, 0, "StateflowChart/FREEZE_FRAME_TRIGGER.TIME_STEP", "TIME_STEP", 0, 1, 0,
    0, 0 } };

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
  SFc4_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc4_BaseEngineController_A02InstanceStruct *)
    ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
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
