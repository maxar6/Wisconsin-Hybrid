/* Include files */

#include "blascompat32.h"
#include "Dyno_Fall_12_sfun.h"
#include "c3_Dyno_Fall_12.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_Fall_12_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c3_IN_NO_ACTIVE_CHILD          (0U)
#define c3_IN_Genset_Disabled          (2U)
#define c3_IN_Crank                    (1U)
#define c3_IN_NormalRun                (4U)
#define c3_IN_MotoringMode             (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void initialize_params_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void enable_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void disable_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void c3_update_debugger_state_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static void set_sim_state_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static void finalize_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void sf_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static void c3_enter_atomic_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void c3_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_c_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_d_sf_marshall(void *chartInstanceVoid, void *c3_u);
static real_T c3_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct *chartInstance,
  const mxArray *c3_Engine_APP_Out, const char_T *c3_name);
static boolean_T c3_b_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_MotorRunEn, const char_T *c3_name);
static uint16_T c3_c_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_MotorSpeedRequest, const char_T *c3_name);
static uint8_T c3_d_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_Dyno_Fall_12, const char_T
  *c3_name);
static const mxArray *c3_e_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_name);
static void init_test_point_addr_map(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_Dyno_Fall_12InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  boolean_T *c3_MotorRunEn;
  uint16_T *c3_MotorSpeedRequest;
  real_T *c3_Motoring_TorquePct;
  real_T *c3_Generating_TqPct;
  real_T *c3_Engine_APP_Out;
  c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_tp_Crank = 0U;
  chartInstance->c3_tp_Genset_Disabled = 0U;
  chartInstance->c3_tp_MotoringMode = 0U;
  chartInstance->c3_tp_NormalRun = 0U;
  chartInstance->c3_is_active_c3_Dyno_Fall_12 = 0U;
  chartInstance->c3_is_c3_Dyno_Fall_12 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c3_MotorRunEn = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c3_MotorSpeedRequest = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c3_Motoring_TorquePct = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c3_Generating_TqPct = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c3_Engine_APP_Out = 0.0;
  }
}

static void initialize_params_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
}

static void enable_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c3_is_active_c3_Dyno_Fall_12 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,2);
  }

  if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_Genset_Disabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_Crank) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_NormalRun) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_MotoringMode) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  const mxArray *c3_st = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  real_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  boolean_T c3_c_hoistedGlobal;
  boolean_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint16_T c3_d_hoistedGlobal;
  uint16_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  real_T c3_e_hoistedGlobal;
  real_T c3_e_u;
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  uint8_T c3_f_u;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  uint8_T c3_g_u;
  const mxArray *c3_h_y = NULL;
  real_T *c3_Engine_APP_Out;
  real_T *c3_Generating_TqPct;
  boolean_T *c3_MotorRunEn;
  uint16_T *c3_MotorSpeedRequest;
  real_T *c3_Motoring_TorquePct;
  c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(7));
  c3_hoistedGlobal = *c3_Engine_APP_Out;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *c3_Generating_TqPct;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *c3_MotorRunEn;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *c3_MotorSpeedRequest;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = *c3_Motoring_TorquePct;
  c3_e_u = c3_e_hoistedGlobal;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = chartInstance->c3_is_active_c3_Dyno_Fall_12;
  c3_f_u = c3_f_hoistedGlobal;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = chartInstance->c3_is_c3_Dyno_Fall_12;
  c3_g_u = c3_g_hoistedGlobal;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 6, c3_h_y);
  sf_mex_assign(&c3_st, c3_y);
  return c3_st;
}

static void set_sim_state_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T *c3_Engine_APP_Out;
  real_T *c3_Generating_TqPct;
  boolean_T *c3_MotorRunEn;
  uint16_T *c3_MotorSpeedRequest;
  real_T *c3_Motoring_TorquePct;
  c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_u = sf_mex_dup(c3_st);
  *c3_Engine_APP_Out = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "Engine_APP_Out");
  *c3_Generating_TqPct = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 1)), "Generating_TqPct");
  *c3_MotorRunEn = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "MotorRunEn");
  *c3_MotorSpeedRequest = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "MotorSpeedRequest");
  *c3_Motoring_TorquePct = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 4)), "Motoring_TorquePct");
  chartInstance->c3_is_active_c3_Dyno_Fall_12 = c3_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 5)),
     "is_active_c3_Dyno_Fall_12");
  chartInstance->c3_is_c3_Dyno_Fall_12 = c3_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 6)),
    "is_c3_Dyno_Fall_12");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 7)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_Dyno_Fall_12(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_Dyno_Fall_12
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_Crank) {
      chartInstance->c3_tp_Crank = 1U;
    } else {
      chartInstance->c3_tp_Crank = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_Genset_Disabled) {
      chartInstance->c3_tp_Genset_Disabled = 1U;
    } else {
      chartInstance->c3_tp_Genset_Disabled = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_MotoringMode) {
      chartInstance->c3_tp_MotoringMode = 1U;
    } else {
      chartInstance->c3_tp_MotoringMode = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_Fall_12 == c3_IN_NormalRun) {
      chartInstance->c3_tp_NormalRun = 1U;
    } else {
      chartInstance->c3_tp_NormalRun = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  int32_T c3_previousEvent;
  boolean_T *c3_Disable_Genset;
  boolean_T *c3_CrankRequest;
  boolean_T *c3_Engine_LoadReady;
  uint16_T *c3_Motor_Speed_Request;
  boolean_T *c3_Motor_Enable;
  boolean_T *c3_Enable_Motoring;
  uint16_T *c3_Engine_Start_RPM;
  uint16_T *c3_Start_MotoringTq;
  uint16_T *c3_MotoringMode_MotoringTqPct;
  uint16_T *c3_Generating_TorquePct;
  boolean_T *c3_MotorRunEn;
  uint16_T *c3_MotorSpeedRequest;
  real_T *c3_Motoring_TorquePct;
  real_T *c3_Generating_TqPct;
  real_T *c3_Engine_APPCrank_Setting;
  real_T *c3_Engine_APP_Run;
  real_T *c3_Engine_APP_Out;
  c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_Engine_APP_Run = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c3_Engine_APPCrank_Setting = (real_T *)ssGetInputPortSignal(chartInstance->S,
    10);
  c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_Generating_TorquePct = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c3_MotoringMode_MotoringTqPct = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 8);
  c3_Start_MotoringTq = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_Engine_Start_RPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_Enable_Motoring = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_Motor_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_Motor_Speed_Request = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_Engine_LoadReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_CrankRequest = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_Disable_Genset = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c3_set_sim_state_side_effects_c3_Dyno_Fall_12(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,2);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Disable_Genset, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_CrankRequest, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Engine_LoadReady, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Motor_Speed_Request, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Motor_Enable, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Enable_Motoring, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Engine_Start_RPM, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Start_MotoringTq, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_MotoringMode_MotoringTqPct, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_Generating_TorquePct, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
  _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
  _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
  _SFD_DATA_RANGE_CHECK(*c3_Engine_APPCrank_Setting, 14U);
  _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Run, 15U);
  _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
  c3_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c3_c3_Dyno_Fall_12(chartInstance);
  _sfEvent_ = c3_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_Fall_12MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c3_enter_atomic_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,2);
  chartInstance->c3_is_active_c3_Dyno_Fall_12 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c3_c3_Dyno_Fall_12(SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  boolean_T c3_b_temp;
  boolean_T c3_c_temp;
  boolean_T *c3_Engine_LoadReady;
  boolean_T *c3_Enable_Motoring;
  boolean_T *c3_MotorRunEn;
  uint16_T *c3_Motor_Speed_Request;
  uint16_T *c3_MotorSpeedRequest;
  uint16_T *c3_MotoringMode_MotoringTqPct;
  real_T *c3_Motoring_TorquePct;
  uint16_T *c3_Generating_TorquePct;
  real_T *c3_Generating_TqPct;
  real_T *c3_Engine_APP_Run;
  real_T *c3_Engine_APP_Out;
  boolean_T *c3_CrankRequest;
  uint16_T *c3_Engine_Start_RPM;
  uint16_T *c3_Start_MotoringTq;
  real_T *c3_Engine_APPCrank_Setting;
  c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c3_Engine_APP_Run = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c3_Engine_APPCrank_Setting = (real_T *)ssGetInputPortSignal(chartInstance->S,
    10);
  c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_Generating_TorquePct = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c3_MotoringMode_MotoringTqPct = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 8);
  c3_Start_MotoringTq = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_Engine_Start_RPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_Enable_Motoring = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_Motor_Speed_Request = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_Engine_LoadReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_CrankRequest = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,2);
  if ((int16_T)chartInstance->c3_is_active_c3_Dyno_Fall_12 == 0) {
    c3_enter_atomic_c3_Dyno_Fall_12(chartInstance);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_Genset_Disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c3_tp_Genset_Disabled = 1U;
    *c3_MotorRunEn = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
    *c3_MotorSpeedRequest = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
    *c3_Motoring_TorquePct = 0.0;
    _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
    *c3_Generating_TqPct = 0.0;
    _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
    *c3_Engine_APP_Out = 0.0;
    _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
  } else {
    switch (chartInstance->c3_is_c3_Dyno_Fall_12) {
     case c3_IN_Crank:
      CV_CHART_EVAL(2,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      c3_temp = !(_SFD_CCP_CALL(2,0,((*c3_CrankRequest)!=0)) != 0);
      if (c3_temp) {
        c3_temp = !(_SFD_CCP_CALL(2,1,((*c3_Engine_LoadReady)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c3_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((*c3_Engine_LoadReady) && (!(*c3_Enable_Motoring))) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          if ((*c3_Engine_LoadReady) && (*c3_Enable_Motoring)) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c3_tp_Crank = 0U;
        chartInstance->c3_is_c3_Dyno_Fall_12 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_Genset_Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c3_tp_Genset_Disabled = 1U;
        *c3_MotorRunEn = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
        *c3_MotorSpeedRequest = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
        *c3_Motoring_TorquePct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
        *c3_Generating_TqPct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
        *c3_Engine_APP_Out = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        c3_b_temp = (_SFD_CCP_CALL(5,0,((*c3_Engine_LoadReady)!=0)) != 0);
        if (c3_b_temp) {
          c3_b_temp = !(_SFD_CCP_CALL(5,1,((*c3_Enable_Motoring)!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(5U, (int32_T)c3_b_temp) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 5;
            sf_debug_transition_conflict_check_begin();
            if ((*c3_Engine_LoadReady) && (*c3_Enable_Motoring)) {
              transitionList[numTransitions] = 6;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c3_tp_Crank = 0U;
          chartInstance->c3_is_c3_Dyno_Fall_12 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_NormalRun;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c3_tp_NormalRun = 1U;
          *c3_MotorRunEn = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
          *c3_MotorSpeedRequest = *c3_Motor_Speed_Request;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
          *c3_Motoring_TorquePct = 0.0;
          _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
          *c3_Generating_TqPct = (real_T)*c3_Generating_TorquePct;
          _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
          *c3_Engine_APP_Out = *c3_Engine_APP_Run;
          _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
          c3_c_temp = (_SFD_CCP_CALL(6,0,((*c3_Engine_LoadReady)!=0)) != 0);
          if (c3_c_temp) {
            c3_c_temp = (_SFD_CCP_CALL(6,1,((*c3_Enable_Motoring)!=0)) != 0);
          }

          if (CV_TRANSITION_EVAL(6U, (int32_T)c3_c_temp) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
            chartInstance->c3_tp_Crank = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
            chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_MotoringMode;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
            chartInstance->c3_tp_MotoringMode = 1U;
            *c3_MotorRunEn = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
            *c3_MotorSpeedRequest = *c3_Motor_Speed_Request;
            _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
            *c3_Motoring_TorquePct = (real_T)*c3_MotoringMode_MotoringTqPct;
            _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
            *c3_Generating_TqPct = (real_T)*c3_Generating_TorquePct;
            _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
            *c3_Engine_APP_Out = *c3_Engine_APP_Run;
            _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c3_IN_Genset_Disabled:
      CV_CHART_EVAL(2,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c3_CrankRequest)
             !=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c3_tp_Genset_Disabled = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_Crank;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c3_tp_Crank = 1U;
        *c3_MotorRunEn = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
        *c3_MotorSpeedRequest = *c3_Engine_Start_RPM;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
        *c3_Motoring_TorquePct = (real_T)*c3_Start_MotoringTq;
        _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
        *c3_Generating_TqPct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
        *c3_Engine_APP_Out = *c3_Engine_APPCrank_Setting;
        _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c3_IN_MotoringMode:
      CV_CHART_EVAL(2,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, !(_SFD_CCP_CALL(4,0,((*c3_Engine_LoadReady)!=0))
            != 0)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c3_tp_MotoringMode = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_Genset_Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c3_tp_Genset_Disabled = 1U;
        *c3_MotorRunEn = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
        *c3_MotorSpeedRequest = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
        *c3_Motoring_TorquePct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
        *c3_Generating_TqPct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
        *c3_Engine_APP_Out = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c3_IN_NormalRun:
      CV_CHART_EVAL(2,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, !(_SFD_CCP_CALL(3,0,((*c3_Engine_LoadReady)!=0))
            != 0)) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 3;
          sf_debug_transition_conflict_check_begin();
          if (*c3_Enable_Motoring) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c3_tp_NormalRun = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_Genset_Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c3_tp_Genset_Disabled = 1U;
        *c3_MotorRunEn = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
        *c3_MotorSpeedRequest = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
        *c3_Motoring_TorquePct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
        *c3_Generating_TqPct = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
        *c3_Engine_APP_Out = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,
              ((*c3_Enable_Motoring)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c3_tp_NormalRun = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c3_is_c3_Dyno_Fall_12 = c3_IN_MotoringMode;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c3_tp_MotoringMode = 1U;
          *c3_MotorRunEn = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorRunEn, 10U);
          *c3_MotorSpeedRequest = *c3_Motor_Speed_Request;
          _SFD_DATA_RANGE_CHECK((real_T)*c3_MotorSpeedRequest, 11U);
          *c3_Motoring_TorquePct = (real_T)*c3_MotoringMode_MotoringTqPct;
          _SFD_DATA_RANGE_CHECK(*c3_Motoring_TorquePct, 12U);
          *c3_Generating_TqPct = (real_T)*c3_Generating_TorquePct;
          _SFD_DATA_RANGE_CHECK(*c3_Generating_TqPct, 13U);
          *c3_Engine_APP_Out = *c3_Engine_APP_Run;
          _SFD_DATA_RANGE_CHECK(*c3_Engine_APP_Out, 16U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     default:
      CV_CHART_EVAL(2,0,0);
      chartInstance->c3_is_c3_Dyno_Fall_12 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

const mxArray *sf_c3_Dyno_Fall_12_get_eml_resolved_functions_info(void)
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
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
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
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
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
  uint16_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((uint16_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_d_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  real_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((real_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static real_T c3_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct *chartInstance,
  const mxArray *c3_Engine_APP_Out, const char_T *
  c3_name)
{
  real_T c3_y;
  real_T c3_d0;
  sf_mex_import(c3_name, sf_mex_dup(c3_Engine_APP_Out), &c3_d0, 1, 0, 0U, 0, 0U,
                0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_Engine_APP_Out);
  return c3_y;
}

static boolean_T c3_b_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_MotorRunEn, const char_T *
  c3_name)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  sf_mex_import(c3_name, sf_mex_dup(c3_MotorRunEn), &c3_b0, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b0;
  sf_mex_destroy(&c3_MotorRunEn);
  return c3_y;
}

static uint16_T c3_c_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_MotorSpeedRequest, const
  char_T *c3_name)
{
  uint16_T c3_y;
  uint16_T c3_u0;
  sf_mex_import(c3_name, sf_mex_dup(c3_MotorSpeedRequest), &c3_u0, 1, 5, 0U, 0,
                0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_MotorSpeedRequest);
  return c3_y;
}

static uint8_T c3_d_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_Dyno_Fall_12,
  const char_T *c3_name)
{
  uint8_T c3_y;
  uint8_T c3_u1;
  sf_mex_import(c3_name, sf_mex_dup(c3_b_is_active_c3_Dyno_Fall_12), &c3_u1, 1,
                3, 0U, 0, 0U, 0);
  c3_y = c3_u1;
  sf_mex_destroy(&c3_b_is_active_c3_Dyno_Fall_12);
  return c3_y;
}

static const mxArray *c3_e_emlrt_marshallIn(SFc3_Dyno_Fall_12InstanceStruct
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

static void init_test_point_addr_map(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  chartInstance->c3_testPointAddrMap[0] = &chartInstance->c3_tp_Crank;
  chartInstance->c3_testPointAddrMap[1] = &chartInstance->c3_tp_Genset_Disabled;
  chartInstance->c3_testPointAddrMap[2] = &chartInstance->c3_tp_MotoringMode;
  chartInstance->c3_testPointAddrMap[3] = &chartInstance->c3_tp_NormalRun;
}

static void **get_test_point_address_map(SFc3_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  return &chartInstance->c3_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
  return &chartInstance->c3_testPointMappingInfo;
}

static void init_dsm_address_info(SFc3_Dyno_Fall_12InstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c3_Dyno_Fall_12_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2313606849U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(583356868U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(507332629U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1404393898U);
}

mxArray *sf_c3_Dyno_Fall_12_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3645902580U);
    pr[1] = (double)(565683035U);
    pr[2] = (double)(580569409U);
    pr[3] = (double)(1750522106U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,12,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c3_Dyno_Fall_12(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[17],T\"Engine_APP_Out\",},{M[1],M[13],T\"Generating_TqPct\",},{M[1],M[10],T\"MotorRunEn\",},{M[1],M[11],T\"MotorSpeedRequest\",},{M[1],M[12],T\"Motoring_TorquePct\",},{M[8],M[0],T\"is_active_c3_Dyno_Fall_12\",},{M[9],M[0],T\"is_c3_Dyno_Fall_12\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_Dyno_Fall_12_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
    chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_Fall_12MachineNumber_,
           3,
           4,
           8,
           17,
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
          init_script_number_translation(_Dyno_Fall_12MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Dyno_Fall_12MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Dyno_Fall_12MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Disable_Genset",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "CrankRequest",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Engine_LoadReady",0,(MexFcnForType)
                              c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Motor_Speed_Request",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Motor_Enable",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Enable_Motoring",0,(MexFcnForType)
                              c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Engine_Start_RPM",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Start_MotoringTq",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "MotoringMode_MotoringTqPct",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Generating_TorquePct",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "MotorRunEn",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "MotorSpeedRequest",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(12,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Motoring_TorquePct",0,(MexFcnForType)
                              c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(13,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Generating_TqPct",0,(MexFcnForType)
                              c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(14,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Engine_APPCrank_Setting",0,(MexFcnForType)
                              c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(15,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Engine_APP_Run",0,(MexFcnForType)c3_d_sf_marshall);
          _SFD_SET_DATA_PROPS(16,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Engine_APP_Out",0,(MexFcnForType)c3_d_sf_marshall);
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

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 17 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 17, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 17, 34 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 17 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 17, 35 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 17, 34 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
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

        {
          boolean_T *c3_Disable_Genset;
          boolean_T *c3_CrankRequest;
          boolean_T *c3_Engine_LoadReady;
          uint16_T *c3_Motor_Speed_Request;
          boolean_T *c3_Motor_Enable;
          boolean_T *c3_Enable_Motoring;
          uint16_T *c3_Engine_Start_RPM;
          uint16_T *c3_Start_MotoringTq;
          uint16_T *c3_MotoringMode_MotoringTqPct;
          uint16_T *c3_Generating_TorquePct;
          boolean_T *c3_MotorRunEn;
          uint16_T *c3_MotorSpeedRequest;
          real_T *c3_Motoring_TorquePct;
          real_T *c3_Generating_TqPct;
          real_T *c3_Engine_APPCrank_Setting;
          real_T *c3_Engine_APP_Run;
          real_T *c3_Engine_APP_Out;
          c3_Engine_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c3_Engine_APP_Run = (real_T *)ssGetInputPortSignal(chartInstance->S,
            11);
          c3_Engine_APPCrank_Setting = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 10);
          c3_Generating_TqPct = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c3_Motoring_TorquePct = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 3);
          c3_MotorSpeedRequest = (uint16_T *)ssGetOutputPortSignal
            (chartInstance->S, 2);
          c3_MotorRunEn = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c3_Generating_TorquePct = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 9);
          c3_MotoringMode_MotoringTqPct = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 8);
          c3_Start_MotoringTq = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 7);
          c3_Engine_Start_RPM = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 6);
          c3_Enable_Motoring = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 5);
          c3_Motor_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c3_Motor_Speed_Request = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 3);
          c3_Engine_LoadReady = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c3_CrankRequest = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c3_Disable_Genset = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_Disable_Genset);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_CrankRequest);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_Engine_LoadReady);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_Motor_Speed_Request);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_Motor_Enable);
          _SFD_SET_DATA_VALUE_PTR(5U, c3_Enable_Motoring);
          _SFD_SET_DATA_VALUE_PTR(6U, c3_Engine_Start_RPM);
          _SFD_SET_DATA_VALUE_PTR(7U, c3_Start_MotoringTq);
          _SFD_SET_DATA_VALUE_PTR(8U, c3_MotoringMode_MotoringTqPct);
          _SFD_SET_DATA_VALUE_PTR(9U, c3_Generating_TorquePct);
          _SFD_SET_DATA_VALUE_PTR(10U, c3_MotorRunEn);
          _SFD_SET_DATA_VALUE_PTR(11U, c3_MotorSpeedRequest);
          _SFD_SET_DATA_VALUE_PTR(12U, c3_Motoring_TorquePct);
          _SFD_SET_DATA_VALUE_PTR(13U, c3_Generating_TqPct);
          _SFD_SET_DATA_VALUE_PTR(14U, c3_Engine_APPCrank_Setting);
          _SFD_SET_DATA_VALUE_PTR(15U, c3_Engine_APP_Run);
          _SFD_SET_DATA_VALUE_PTR(16U, c3_Engine_APP_Out);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_Fall_12MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c3_Dyno_Fall_12(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_Dyno_Fall_12InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*)
    chartInstanceVar);
  initialize_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_Dyno_Fall_12(void *chartInstanceVar)
{
  enable_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_Dyno_Fall_12(void *chartInstanceVar)
{
  disable_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_Dyno_Fall_12(void *chartInstanceVar)
{
  sf_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c3_Dyno_Fall_12(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_Dyno_Fall_12
    ((SFc3_Dyno_Fall_12InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c3_Dyno_Fall_12();/* state var info */
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

static void sf_internal_set_sim_state_c3_Dyno_Fall_12(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_Dyno_Fall_12();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c3_Dyno_Fall_12(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_Dyno_Fall_12(S);
}

static void sf_opaque_set_sim_state_c3_Dyno_Fall_12(SimStruct* S, const mxArray *
  st)
{
  sf_internal_set_sim_state_c3_Dyno_Fall_12(S, st);
}

static void sf_opaque_terminate_c3_Dyno_Fall_12(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_Dyno_Fall_12(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_Dyno_Fall_12((SFc3_Dyno_Fall_12InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_Dyno_Fall_12(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_Fall_12","Dyno_Fall_12",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_Fall_12","Dyno_Fall_12",3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_Fall_12",
      "Dyno_Fall_12",3,"gatewayCannotBeInlinedMultipleTimes"));
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
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_Fall_12","Dyno_Fall_12",3,12);
      sf_mark_chart_reusable_outputs(S,"Dyno_Fall_12","Dyno_Fall_12",3,5);
    }

    sf_set_rtw_dwork_info(S,"Dyno_Fall_12","Dyno_Fall_12",3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(268790604U));
  ssSetChecksum1(S,(3106594371U));
  ssSetChecksum2(S,(993482040U));
  ssSetChecksum3(S,(4071378635U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_Dyno_Fall_12(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_Fall_12", "Dyno_Fall_12",3);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_Dyno_Fall_12(SimStruct *S)
{
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *)malloc(sizeof
    (SFc3_Dyno_Fall_12InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_Dyno_Fall_12InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_Dyno_Fall_12;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_Dyno_Fall_12;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_Dyno_Fall_12;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_Dyno_Fall_12;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_Dyno_Fall_12;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_Dyno_Fall_12;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_Dyno_Fall_12;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_Dyno_Fall_12;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_Dyno_Fall_12;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_Dyno_Fall_12;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_Dyno_Fall_12;
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

void c3_Dyno_Fall_12_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_Dyno_Fall_12(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_Dyno_Fall_12(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_Dyno_Fall_12(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_Dyno_Fall_12_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Crank", "Crank", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Genset_Disabled", "Genset_Disabled", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/MotoringMode", "MotoringMode", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/NormalRun", "NormalRun", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    4                                  /* Num Block IO signals */
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
  SFc3_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_Fall_12InstanceStruct *) ((ChartInfoStruct *)
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
