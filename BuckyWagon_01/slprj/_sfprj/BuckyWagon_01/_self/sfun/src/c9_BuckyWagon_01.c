/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c9_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c9_IN_NO_ACTIVE_CHILD          (0U)
#define c9_IN_LowSpeedManeuvering      (4U)
#define c9_IN_NormalDriving            (5U)
#define c9_IN_Driving                  (1U)
#define c9_IN_Braking                  (1U)
#define c9_IN_KeyUp                    (3U)
#define c9_IN_Idle                     (2U)
#define c9_IN_Creeping                 (1U)
#define c9_IN_Reversing                (2U)
#define c9_IN_DrivingAndBrake          (2U)
#define c9_IN_SlowingDown              (6U)
#define c9_IN_Stopping                 (7U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c9_update_debugger_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_st);
static void c9_set_sim_state_side_effects_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_chartstep_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c9_LowSpeedManeuvering(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c9_exit_internal_LowSpeedManeuvering
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_Braking(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_KeyUp(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_Idle(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void c9_SlowingDown(SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_b_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_c_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_d_sf_marshall(void *chartInstanceVoid, void *c9_u);
static const mxArray *c9_e_sf_marshall(void *chartInstanceVoid, void *c9_u);
static uint8_T c9_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_PumpState, const char_T *c9_name);
static real_T c9_b_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_brakeCounts, const char_T *c9_name);
static uint32_T c9_c_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_counts, const char_T *c9_name);
static const mxArray *c9_d_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_setSimStateSideEffectsInfo, const char_T
  *c9_name);
static uint32_T c9__u32_s8_(SFc9_BuckyWagon_01InstanceStruct *chartInstance,
  int8_T c9_b);
static uint32_T c9__u32_add__(SFc9_BuckyWagon_01InstanceStruct *chartInstance,
  uint32_T c9_b, uint32_T c9_c);
static void init_test_point_addr_map(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint8_T *c9_PumpState;
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_doSetSimStateSideEffects = 0U;
  chartInstance->c9_setSimStateSideEffectsInfo = NULL;
  chartInstance->c9_tp_Braking = 0U;
  chartInstance->c9_tp_Idle = 0U;
  chartInstance->c9_tp_KeyUp = 0U;
  chartInstance->c9_is_LowSpeedManeuvering = 0U;
  chartInstance->c9_tp_LowSpeedManeuvering = 0U;
  chartInstance->c9_tp_Creeping = 0U;
  chartInstance->c9_tp_Reversing = 0U;
  chartInstance->c9_is_NormalDriving = 0U;
  chartInstance->c9_tp_NormalDriving = 0U;
  chartInstance->c9_tp_Driving = 0U;
  chartInstance->c9_tp_DrivingAndBrake = 0U;
  chartInstance->c9_tp_SlowingDown = 0U;
  chartInstance->c9_tp_Stopping = 0U;
  chartInstance->c9_is_active_c9_BuckyWagon_01 = 0U;
  chartInstance->c9_is_c9_BuckyWagon_01 = 0U;
  chartInstance->c9_counts = 0U;
  chartInstance->c9_brakeCounts = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c9_PumpState = 0U;
  }
}

static void initialize_params_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c9_prevAniVal;
  c9_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c9_is_active_c9_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,7);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_LowSpeedManeuvering) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_NormalDriving) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c9_is_NormalDriving == c9_IN_Driving) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Braking) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_KeyUp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c9_is_LowSpeedManeuvering == c9_IN_Creeping) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c9_is_LowSpeedManeuvering == c9_IN_Reversing) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c9_is_NormalDriving == c9_IN_DrivingAndBrake) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_SlowingDown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
  }

  if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Stopping) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
  }

  sf_debug_set_animation(c9_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c9_st = NULL;
  const mxArray *c9_y = NULL;
  uint8_T c9_hoistedGlobal;
  uint8_T c9_u;
  const mxArray *c9_b_y = NULL;
  real_T c9_b_hoistedGlobal;
  real_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  uint32_T c9_c_hoistedGlobal;
  uint32_T c9_c_u;
  const mxArray *c9_d_y = NULL;
  uint8_T c9_d_hoistedGlobal;
  uint8_T c9_d_u;
  const mxArray *c9_e_y = NULL;
  uint8_T c9_e_hoistedGlobal;
  uint8_T c9_e_u;
  const mxArray *c9_f_y = NULL;
  uint8_T c9_f_hoistedGlobal;
  uint8_T c9_f_u;
  const mxArray *c9_g_y = NULL;
  uint8_T c9_g_hoistedGlobal;
  uint8_T c9_g_u;
  const mxArray *c9_h_y = NULL;
  uint8_T *c9_PumpState;
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(7));
  c9_hoistedGlobal = *c9_PumpState;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = chartInstance->c9_brakeCounts;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 1, c9_c_y);
  c9_c_hoistedGlobal = chartInstance->c9_counts;
  c9_c_u = c9_c_hoistedGlobal;
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_c_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 2, c9_d_y);
  c9_d_hoistedGlobal = chartInstance->c9_is_active_c9_BuckyWagon_01;
  c9_d_u = c9_d_hoistedGlobal;
  c9_e_y = NULL;
  sf_mex_assign(&c9_e_y, sf_mex_create("y", &c9_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 3, c9_e_y);
  c9_e_hoistedGlobal = chartInstance->c9_is_c9_BuckyWagon_01;
  c9_e_u = c9_e_hoistedGlobal;
  c9_f_y = NULL;
  sf_mex_assign(&c9_f_y, sf_mex_create("y", &c9_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 4, c9_f_y);
  c9_f_hoistedGlobal = chartInstance->c9_is_LowSpeedManeuvering;
  c9_f_u = c9_f_hoistedGlobal;
  c9_g_y = NULL;
  sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 5, c9_g_y);
  c9_g_hoistedGlobal = chartInstance->c9_is_NormalDriving;
  c9_g_u = c9_g_hoistedGlobal;
  c9_h_y = NULL;
  sf_mex_assign(&c9_h_y, sf_mex_create("y", &c9_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 6, c9_h_y);
  sf_mex_assign(&c9_st, c9_y);
  return c9_st;
}

static void set_sim_state_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_st)
{
  const mxArray *c9_u;
  uint8_T *c9_PumpState;
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_u = sf_mex_dup(c9_st);
  *c9_PumpState = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c9_u, 0)), "PumpState");
  chartInstance->c9_brakeCounts = c9_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c9_u, 1)), "brakeCounts");
  chartInstance->c9_counts = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 2)), "counts");
  chartInstance->c9_is_active_c9_BuckyWagon_01 = c9_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 3)),
     "is_active_c9_BuckyWagon_01");
  chartInstance->c9_is_c9_BuckyWagon_01 = c9_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c9_u, 4)),
    "is_c9_BuckyWagon_01");
  chartInstance->c9_is_LowSpeedManeuvering = c9_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c9_u, 5)),
    "is_LowSpeedManeuvering");
  chartInstance->c9_is_NormalDriving = c9_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c9_u, 6)), "is_NormalDriving");
  sf_mex_assign(&chartInstance->c9_setSimStateSideEffectsInfo,
                c9_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c9_u, 7)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c9_u);
  chartInstance->c9_doSetSimStateSideEffects = 1U;
  c9_update_debugger_state_c9_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void c9_set_sim_state_side_effects_c9_BuckyWagon_01
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c9_doSetSimStateSideEffects != 0) {
    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Braking) {
      chartInstance->c9_tp_Braking = 1U;
    } else {
      chartInstance->c9_tp_Braking = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Idle) {
      chartInstance->c9_tp_Idle = 1U;
    } else {
      chartInstance->c9_tp_Idle = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_KeyUp) {
      chartInstance->c9_tp_KeyUp = 1U;
    } else {
      chartInstance->c9_tp_KeyUp = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_LowSpeedManeuvering) {
      chartInstance->c9_tp_LowSpeedManeuvering = 1U;
    } else {
      chartInstance->c9_tp_LowSpeedManeuvering = 0U;
    }

    if (chartInstance->c9_is_LowSpeedManeuvering == c9_IN_Creeping) {
      chartInstance->c9_tp_Creeping = 1U;
    } else {
      chartInstance->c9_tp_Creeping = 0U;
    }

    if (chartInstance->c9_is_LowSpeedManeuvering == c9_IN_Reversing) {
      chartInstance->c9_tp_Reversing = 1U;
    } else {
      chartInstance->c9_tp_Reversing = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_NormalDriving) {
      chartInstance->c9_tp_NormalDriving = 1U;
    } else {
      chartInstance->c9_tp_NormalDriving = 0U;
    }

    if (chartInstance->c9_is_NormalDriving == c9_IN_Driving) {
      chartInstance->c9_tp_Driving = 1U;
    } else {
      chartInstance->c9_tp_Driving = 0U;
    }

    if (chartInstance->c9_is_NormalDriving == c9_IN_DrivingAndBrake) {
      chartInstance->c9_tp_DrivingAndBrake = 1U;
    } else {
      chartInstance->c9_tp_DrivingAndBrake = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_SlowingDown) {
      chartInstance->c9_tp_SlowingDown = 1U;
    } else {
      chartInstance->c9_tp_SlowingDown = 0U;
    }

    if (chartInstance->c9_is_c9_BuckyWagon_01 == c9_IN_Stopping) {
      chartInstance->c9_tp_Stopping = 1U;
    } else {
      chartInstance->c9_tp_Stopping = 0U;
    }

    chartInstance->c9_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c9_setSimStateSideEffectsInfo);
}

static void sf_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c9_previousEvent;
  boolean_T *c9_onBrake;
  real_T *c9_vehSpeed;
  boolean_T *c9_inReverse;
  uint16_T *c9_keyOnRunTime;
  uint16_T *c9_lowSpeedManTime;
  uint8_T *c9_PumpState;
  boolean_T *c9_hardBrake;
  real_T *c9_stopSpeed;
  real_T *c9_minPumpRunTime;
  real_T *c9_creepSpeed;
  real_T *c9_brakeTime;
  c9_brakeTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c9_hardBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_lowSpeedManTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c9_keyOnRunTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c9_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_onBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c9_set_sim_state_side_effects_c9_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,7);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_onBrake, 0U);
  _SFD_DATA_RANGE_CHECK(*c9_vehSpeed, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_inReverse, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_keyOnRunTime, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_lowSpeedManTime, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_hardBrake, 7U);
  _SFD_DATA_RANGE_CHECK(*c9_stopSpeed, 8U);
  _SFD_DATA_RANGE_CHECK(*c9_minPumpRunTime, 9U);
  _SFD_DATA_RANGE_CHECK(*c9_creepSpeed, 10U);
  _SFD_DATA_RANGE_CHECK(*c9_brakeTime, 11U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c9_brakeCounts, 12U);
  c9_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c9_chartstep_c9_BuckyWagon_01(chartInstance);
  _sfEvent_ = c9_previousEvent;
  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c9_chartstep_c9_BuckyWagon_01(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint32_T c9_u0;
  boolean_T c9_temp;
  uint32_T c9_u1;
  real_T c9_d0;
  uint8_T c9_u2;
  real_T c9_d1;
  uint8_T c9_u3;
  uint32_T c9_u4;
  uint8_T c9_u5;
  real_T *c9_minPumpRunTime;
  real_T *c9_vehSpeed;
  real_T *c9_stopSpeed;
  uint8_T *c9_PumpState;
  real_T *c9_brakeTime;
  boolean_T *c9_hardBrake;
  boolean_T *c9_onBrake;
  c9_brakeTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c9_hardBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_onBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,7);
  if ((int16_T)chartInstance->c9_is_active_c9_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,7);
    chartInstance->c9_is_active_c9_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_KeyUp;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c9_tp_KeyUp = 1U;
    chartInstance->c9_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
    c9_u0 = chartInstance->c9_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 13, c9_u0);
  } else {
    switch (chartInstance->c9_is_c9_BuckyWagon_01) {
     case c9_IN_Braking:
      CV_CHART_EVAL(7,0,1);
      c9_Braking(chartInstance);
      break;

     case c9_IN_Idle:
      CV_CHART_EVAL(7,0,2);
      c9_Idle(chartInstance);
      break;

     case c9_IN_KeyUp:
      CV_CHART_EVAL(7,0,3);
      c9_KeyUp(chartInstance);
      break;

     case c9_IN_LowSpeedManeuvering:
      CV_CHART_EVAL(7,0,4);
      c9_LowSpeedManeuvering(chartInstance);
      break;

     case c9_IN_NormalDriving:
      CV_CHART_EVAL(7,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
      c9_temp = (_SFD_CCP_CALL(15,0,((chartInstance->c9_brakeCounts >
        *c9_brakeTime)!=0)) != 0);
      if (!c9_temp) {
        c9_temp = (_SFD_CCP_CALL(15,1,((*c9_hardBrake)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(15U, (int32_T)c9_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
        switch (chartInstance->c9_is_NormalDriving) {
         case c9_IN_Driving:
          CV_STATE_EVAL(6,1,1);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
          chartInstance->c9_tp_Driving = 0U;
          chartInstance->c9_is_NormalDriving = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
          break;

         case c9_IN_DrivingAndBrake:
          CV_STATE_EVAL(6,1,2);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
          chartInstance->c9_tp_DrivingAndBrake = 0U;
          chartInstance->c9_is_NormalDriving = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
          break;

         default:
          CV_STATE_EVAL(6,1,0);
          chartInstance->c9_is_NormalDriving = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
          break;
        }

        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
        chartInstance->c9_tp_NormalDriving = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_Braking;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c9_tp_Braking = 1U;
        chartInstance->c9_counts = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
        c9_u1 = chartInstance->c9_counts;
        sf_mex_printf("%s =\\n", "counts");
        sf_mex_call_debug("disp", 0U, 1U, 13, c9_u1);
      } else {
        switch (chartInstance->c9_is_NormalDriving) {
         case c9_IN_Driving:
          CV_STATE_EVAL(6,0,1);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
          if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13,0,((*c9_onBrake)
                 !=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
            chartInstance->c9_tp_Driving = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
            chartInstance->c9_is_NormalDriving = c9_IN_DrivingAndBrake;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
            chartInstance->c9_tp_DrivingAndBrake = 1U;
            chartInstance->c9_brakeCounts = 0.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c9_brakeCounts, 12U);
            c9_d0 = chartInstance->c9_brakeCounts;
            sf_mex_printf("%s =\\n", "brakeCounts");
            sf_mex_call_debug("disp", 0U, 1U, 6, c9_d0);
          } else {
            *c9_PumpState = 2U;
            _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
            c9_u2 = *c9_PumpState;
            sf_mex_printf("%s =\\n", "PumpState");
            sf_mex_call_debug("disp", 0U, 1U, 9, c9_u2);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
          break;

         case c9_IN_DrivingAndBrake:
          CV_STATE_EVAL(6,0,2);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
          if (CV_TRANSITION_EVAL(14U, !(_SFD_CCP_CALL(14,0,((*c9_onBrake)!=0))
                != 0)) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
            chartInstance->c9_tp_DrivingAndBrake = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
            chartInstance->c9_is_NormalDriving = c9_IN_Driving;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
            chartInstance->c9_tp_Driving = 1U;
          } else {
            chartInstance->c9_brakeCounts = chartInstance->c9_brakeCounts + 1.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c9_brakeCounts, 12U);
            c9_d1 = chartInstance->c9_brakeCounts;
            sf_mex_printf("%s =\\n", "brakeCounts");
            sf_mex_call_debug("disp", 0U, 1U, 6, c9_d1);
            *c9_PumpState = 5U;
            _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
            c9_u3 = *c9_PumpState;
            sf_mex_printf("%s =\\n", "PumpState");
            sf_mex_call_debug("disp", 0U, 1U, 9, c9_u3);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
          break;

         default:
          CV_STATE_EVAL(6,0,0);
          chartInstance->c9_is_NormalDriving = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
          break;
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      break;

     case c9_IN_SlowingDown:
      CV_CHART_EVAL(7,0,6);
      c9_SlowingDown(chartInstance);
      break;

     case c9_IN_Stopping:
      CV_CHART_EVAL(7,0,7);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,10);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,21);
      if (CV_TRANSITION_EVAL(21U, (int32_T)_SFD_CCP_CALL(21,0,(((real_T)
              chartInstance->c9_counts > *c9_minPumpRunTime * 200.0)!=0))) != 0)
      {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 21;
          sf_debug_transition_conflict_check_begin();
          if (*c9_vehSpeed > *c9_stopSpeed) {
            transitionList[numTransitions] = 22;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,21);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
        chartInstance->c9_tp_Stopping = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c9_tp_Idle = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,22);
        if (CV_TRANSITION_EVAL(22U, (int32_T)_SFD_CCP_CALL(22,0,((*c9_vehSpeed >
                *c9_stopSpeed)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,22);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
          chartInstance->c9_tp_Stopping = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
          chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_SlowingDown;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
          chartInstance->c9_tp_SlowingDown = 1U;
        } else {
          chartInstance->c9_counts = c9__u32_add__(chartInstance,
            chartInstance->c9_counts, c9__u32_s8_(chartInstance, 1));
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u4 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u4);
          *c9_PumpState = 7U;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
          c9_u5 = *c9_PumpState;
          sf_mex_printf("%s =\\n", "PumpState");
          sf_mex_call_debug("disp", 0U, 1U, 9, c9_u5);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
      break;

     default:
      CV_CHART_EVAL(7,0,0);
      chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
}

static void c9_LowSpeedManeuvering(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  boolean_T c9_temp;
  uint8_T c9_u6;
  uint32_T c9_u7;
  uint32_T c9_u8;
  uint32_T c9_u9;
  real_T *c9_vehSpeed;
  real_T *c9_creepSpeed;
  real_T *c9_minPumpRunTime;
  uint16_T *c9_lowSpeedManTime;
  uint8_T *c9_PumpState;
  boolean_T *c9_inReverse;
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_lowSpeedManTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c9_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
  c9_temp = (_SFD_CCP_CALL(11,0,((*c9_vehSpeed > *c9_creepSpeed)!=0)) != 0);
  if (c9_temp) {
    c9_temp = (_SFD_CCP_CALL(11,1,(((real_T)chartInstance->c9_counts >
      *c9_minPumpRunTime * 200.0)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(11U, (int32_T)c9_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 11;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c9_counts > (uint32_T)(*c9_lowSpeedManTime * 200)) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    c9_exit_internal_LowSpeedManeuvering(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
    chartInstance->c9_tp_LowSpeedManeuvering = 0U;
    chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_NormalDriving;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
    chartInstance->c9_tp_NormalDriving = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    chartInstance->c9_is_NormalDriving = c9_IN_Driving;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
    chartInstance->c9_tp_Driving = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,
          ((chartInstance->c9_counts > (uint32_T)(*c9_lowSpeedManTime * 200))!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      c9_exit_internal_LowSpeedManeuvering(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c9_tp_LowSpeedManeuvering = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance->c9_tp_Idle = 1U;
    } else {
      *c9_PumpState = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
      c9_u6 = *c9_PumpState;
      sf_mex_printf("%s =\\n", "PumpState");
      sf_mex_call_debug("disp", 0U, 1U, 9, c9_u6);
      switch (chartInstance->c9_is_LowSpeedManeuvering) {
       case c9_IN_Creeping:
        CV_STATE_EVAL(3,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
        if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,((*c9_inReverse)!=
               0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c9_tp_Creeping = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Reversing;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c9_tp_Reversing = 1U;
          chartInstance->c9_counts = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u7 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u7);
        } else {
          chartInstance->c9_counts = c9__u32_add__(chartInstance,
            chartInstance->c9_counts, c9__u32_s8_(chartInstance, 1));
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u8 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u8);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        break;

       case c9_IN_Reversing:
        CV_STATE_EVAL(3,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
        if (CV_TRANSITION_EVAL(10U, !(_SFD_CCP_CALL(10,0,((*c9_inReverse)!=0))
              != 0)) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
          chartInstance->c9_tp_Reversing = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
          chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c9_tp_Creeping = 1U;
          chartInstance->c9_counts = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u9 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u9);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        break;

       default:
        CV_STATE_EVAL(3,0,0);
        chartInstance->c9_is_LowSpeedManeuvering = (uint8_T)
          c9_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
}

static void c9_exit_internal_LowSpeedManeuvering
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  switch (chartInstance->c9_is_LowSpeedManeuvering) {
   case c9_IN_Creeping:
    CV_STATE_EVAL(3,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c9_tp_Creeping = 0U;
    chartInstance->c9_is_LowSpeedManeuvering = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    break;

   case c9_IN_Reversing:
    CV_STATE_EVAL(3,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c9_tp_Reversing = 0U;
    chartInstance->c9_is_LowSpeedManeuvering = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    break;

   default:
    CV_STATE_EVAL(3,1,0);
    chartInstance->c9_is_LowSpeedManeuvering = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    break;
  }
}

static void c9_Braking(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c9_temp;
  uint32_T c9_u10;
  uint32_T c9_u11;
  boolean_T c9_b_temp;
  boolean_T c9_c_temp;
  uint32_T c9_u12;
  uint8_T c9_u13;
  boolean_T *c9_onBrake;
  real_T *c9_vehSpeed;
  real_T *c9_creepSpeed;
  real_T *c9_minPumpRunTime;
  uint8_T *c9_PumpState;
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_onBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
  c9_temp = !(_SFD_CCP_CALL(12,0,((*c9_onBrake)!=0)) != 0);
  if (c9_temp) {
    c9_temp = (_SFD_CCP_CALL(12,1,((*c9_vehSpeed < *c9_creepSpeed)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(12U, (int32_T)c9_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 12;
      sf_debug_transition_conflict_check_begin();
      if ((*c9_onBrake) && (*c9_vehSpeed < *c9_creepSpeed)) {
        transitionList[numTransitions] = 6;
        numTransitions++;
      }

      if ((!(*c9_onBrake)) && ((real_T)chartInstance->c9_counts >
           *c9_minPumpRunTime * 200.0)) {
        transitionList[numTransitions] = 16;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c9_tp_Braking = 0U;
    chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c9_tp_LowSpeedManeuvering = 1U;
    chartInstance->c9_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
    c9_u10 = chartInstance->c9_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 13, c9_u10);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
    chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c9_tp_Creeping = 1U;
    chartInstance->c9_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
    c9_u11 = chartInstance->c9_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 13, c9_u11);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
    c9_b_temp = (_SFD_CCP_CALL(6,0,((*c9_onBrake)!=0)) != 0);
    if (c9_b_temp) {
      c9_b_temp = (_SFD_CCP_CALL(6,1,((*c9_vehSpeed < *c9_creepSpeed)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(6U, (int32_T)c9_b_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 6;
        sf_debug_transition_conflict_check_begin();
        if ((!(*c9_onBrake)) && ((real_T)chartInstance->c9_counts >
             *c9_minPumpRunTime * 200.0)) {
          transitionList[numTransitions] = 16;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c9_tp_Braking = 0U;
      chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_SlowingDown;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
      chartInstance->c9_tp_SlowingDown = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
      c9_c_temp = !(_SFD_CCP_CALL(16,0,((*c9_onBrake)!=0)) != 0);
      if (c9_c_temp) {
        c9_c_temp = (_SFD_CCP_CALL(16,1,(((real_T)chartInstance->c9_counts >
          *c9_minPumpRunTime * 200.0)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(16U, (int32_T)c9_c_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c9_tp_Braking = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_NormalDriving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
        chartInstance->c9_tp_NormalDriving = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        chartInstance->c9_is_NormalDriving = c9_IN_Driving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance->c9_tp_Driving = 1U;
      } else {
        chartInstance->c9_counts = c9__u32_add__(chartInstance,
          chartInstance->c9_counts, c9__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
        c9_u12 = chartInstance->c9_counts;
        sf_mex_printf("%s =\\n", "counts");
        sf_mex_call_debug("disp", 0U, 1U, 13, c9_u12);
        *c9_PumpState = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
        c9_u13 = *c9_PumpState;
        sf_mex_printf("%s =\\n", "PumpState");
        sf_mex_call_debug("disp", 0U, 1U, 9, c9_u13);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c9_KeyUp(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c9_temp;
  boolean_T c9_b_temp;
  uint32_T c9_u14;
  uint32_T c9_u15;
  uint32_T c9_u16;
  uint32_T c9_u17;
  boolean_T c9_c_temp;
  uint32_T c9_u18;
  uint8_T c9_u19;
  real_T *c9_vehSpeed;
  real_T *c9_creepSpeed;
  uint16_T *c9_keyOnRunTime;
  real_T *c9_stopSpeed;
  boolean_T *c9_inReverse;
  uint8_T *c9_PumpState;
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_keyOnRunTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c9_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
  c9_temp = (_SFD_CCP_CALL(3,0,((*c9_vehSpeed > *c9_creepSpeed)!=0)) != 0);
  if (c9_temp) {
    c9_temp = (_SFD_CCP_CALL(3,1,((chartInstance->c9_counts > (uint32_T)
      (*c9_keyOnRunTime * 200))!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(3U, (int32_T)c9_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[4];
      unsigned int numTransitions= 1;
      transitionList[0] = 3;
      sf_debug_transition_conflict_check_begin();
      if ((*c9_vehSpeed > *c9_stopSpeed) && (*c9_vehSpeed < *c9_creepSpeed)) {
        transitionList[numTransitions] = 23;
        numTransitions++;
      }

      if (*c9_inReverse) {
        transitionList[numTransitions] = 4;
        numTransitions++;
      }

      if ((*c9_vehSpeed < *c9_stopSpeed) && (chartInstance->c9_counts >
           (uint32_T)(*c9_keyOnRunTime * 200))) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c9_tp_KeyUp = 0U;
    chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_NormalDriving;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
    chartInstance->c9_tp_NormalDriving = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    chartInstance->c9_is_NormalDriving = c9_IN_Driving;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
    chartInstance->c9_tp_Driving = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,23);
    c9_b_temp = (_SFD_CCP_CALL(23,0,((*c9_vehSpeed > *c9_stopSpeed)!=0)) != 0);
    if (c9_b_temp) {
      c9_b_temp = (_SFD_CCP_CALL(23,1,((*c9_vehSpeed < *c9_creepSpeed)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(23U, (int32_T)c9_b_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 23;
        sf_debug_transition_conflict_check_begin();
        if (*c9_inReverse) {
          transitionList[numTransitions] = 4;
          numTransitions++;
        }

        if ((*c9_vehSpeed < *c9_stopSpeed) && (chartInstance->c9_counts >
             (uint32_T)(*c9_keyOnRunTime * 200))) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,23);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c9_tp_KeyUp = 0U;
      chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
      chartInstance->c9_tp_LowSpeedManeuvering = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u14 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u14);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c9_tp_Creeping = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u15 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u15);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c9_inReverse)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if ((*c9_vehSpeed < *c9_stopSpeed) && (chartInstance->c9_counts >
               (uint32_T)(*c9_keyOnRunTime * 200))) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c9_tp_KeyUp = 0U;
        chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c9_tp_LowSpeedManeuvering = 1U;
        chartInstance->c9_counts = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
        c9_u16 = chartInstance->c9_counts;
        sf_mex_printf("%s =\\n", "counts");
        sf_mex_call_debug("disp", 0U, 1U, 13, c9_u16);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c9_tp_Creeping = 1U;
        chartInstance->c9_counts = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
        c9_u17 = chartInstance->c9_counts;
        sf_mex_printf("%s =\\n", "counts");
        sf_mex_call_debug("disp", 0U, 1U, 13, c9_u17);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        c9_c_temp = (_SFD_CCP_CALL(5,0,((*c9_vehSpeed < *c9_stopSpeed)!=0)) != 0);
        if (c9_c_temp) {
          c9_c_temp = (_SFD_CCP_CALL(5,1,((chartInstance->c9_counts > (uint32_T)
                          (*c9_keyOnRunTime * 200))!=0)) != 0);
        }

        if (CV_TRANSITION_EVAL(5U, (int32_T)c9_c_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c9_tp_KeyUp = 0U;
          chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c9_tp_Idle = 1U;
        } else {
          chartInstance->c9_counts = c9__u32_add__(chartInstance,
            chartInstance->c9_counts, c9__u32_s8_(chartInstance, 1));
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u18 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u18);
          *c9_PumpState = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
          c9_u19 = *c9_PumpState;
          sf_mex_printf("%s =\\n", "PumpState");
          sf_mex_call_debug("disp", 0U, 1U, 9, c9_u19);
          goto label_1;
        }
      }
    }
  }

 label_1:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c9_Idle(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c9_u20;
  uint32_T c9_u21;
  uint32_T c9_u22;
  uint32_T c9_u23;
  uint8_T c9_u24;
  real_T *c9_vehSpeed;
  real_T *c9_stopSpeed;
  boolean_T *c9_inReverse;
  real_T *c9_creepSpeed;
  uint8_T *c9_PumpState;
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
  if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c9_vehSpeed >
          *c9_stopSpeed)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 8;
      sf_debug_transition_conflict_check_begin();
      if (*c9_inReverse) {
        transitionList[numTransitions] = 24;
        numTransitions++;
      }

      if (*c9_vehSpeed > *c9_creepSpeed) {
        transitionList[numTransitions] = 25;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c9_tp_Idle = 0U;
    chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c9_tp_LowSpeedManeuvering = 1U;
    chartInstance->c9_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
    c9_u20 = chartInstance->c9_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 13, c9_u20);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
    chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c9_tp_Creeping = 1U;
    chartInstance->c9_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
    c9_u21 = chartInstance->c9_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 13, c9_u21);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,24);
    if (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24,0,((*c9_inReverse)!=0)))
        != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 24;
        sf_debug_transition_conflict_check_begin();
        if (*c9_vehSpeed > *c9_creepSpeed) {
          transitionList[numTransitions] = 25;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,24);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c9_tp_Idle = 0U;
      chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
      chartInstance->c9_tp_LowSpeedManeuvering = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u22 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u22);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c9_tp_Creeping = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u23 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u23);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,25);
      if (CV_TRANSITION_EVAL(25U, (int32_T)_SFD_CCP_CALL(25,0,((*c9_vehSpeed >
              *c9_creepSpeed)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,25);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c9_tp_Idle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_NormalDriving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
        chartInstance->c9_tp_NormalDriving = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        chartInstance->c9_is_NormalDriving = c9_IN_Driving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance->c9_tp_Driving = 1U;
      } else {
        *c9_PumpState = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
        c9_u24 = *c9_PumpState;
        sf_mex_printf("%s =\\n", "PumpState");
        sf_mex_call_debug("disp", 0U, 1U, 9, c9_u24);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c9_SlowingDown(SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c9_temp;
  uint32_T c9_u25;
  uint32_T c9_u26;
  boolean_T c9_b_temp;
  uint32_T c9_u27;
  uint32_T c9_u28;
  uint32_T c9_u29;
  uint8_T c9_u30;
  real_T *c9_vehSpeed;
  real_T *c9_stopSpeed;
  boolean_T *c9_onBrake;
  real_T *c9_minPumpRunTime;
  real_T *c9_creepSpeed;
  uint8_T *c9_PumpState;
  c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_onBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,9);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
  if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,((*c9_vehSpeed <
          *c9_stopSpeed)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[4];
      unsigned int numTransitions= 1;
      transitionList[0] = 17;
      sf_debug_transition_conflict_check_begin();
      if ((!(*c9_onBrake)) || ((real_T)chartInstance->c9_counts <
           *c9_minPumpRunTime * 200.0)) {
        transitionList[numTransitions] = 18;
        numTransitions++;
      }

      if ((*c9_vehSpeed > *c9_creepSpeed) && ((real_T)chartInstance->c9_counts >
           *c9_minPumpRunTime * 200.0)) {
        transitionList[numTransitions] = 19;
        numTransitions++;
      }

      if ((real_T)chartInstance->c9_counts > *c9_minPumpRunTime * 200.0) {
        transitionList[numTransitions] = 20;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
    chartInstance->c9_tp_SlowingDown = 0U;
    chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_Stopping;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
    chartInstance->c9_tp_Stopping = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
    c9_temp = !(_SFD_CCP_CALL(18,0,((*c9_onBrake)!=0)) != 0);
    if (!c9_temp) {
      c9_temp = (_SFD_CCP_CALL(18,1,(((real_T)chartInstance->c9_counts <
        *c9_minPumpRunTime * 200.0)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(18U, (int32_T)c9_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 18;
        sf_debug_transition_conflict_check_begin();
        if ((*c9_vehSpeed > *c9_creepSpeed) && ((real_T)chartInstance->c9_counts
             > *c9_minPumpRunTime * 200.0)) {
          transitionList[numTransitions] = 19;
          numTransitions++;
        }

        if ((real_T)chartInstance->c9_counts > *c9_minPumpRunTime * 200.0) {
          transitionList[numTransitions] = 20;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
      chartInstance->c9_tp_SlowingDown = 0U;
      chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
      chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
      chartInstance->c9_tp_LowSpeedManeuvering = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u25 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u25);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c9_tp_Creeping = 1U;
      chartInstance->c9_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
      c9_u26 = chartInstance->c9_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 13, c9_u26);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
      c9_b_temp = (_SFD_CCP_CALL(19,0,((*c9_vehSpeed > *c9_creepSpeed)!=0)) != 0);
      if (c9_b_temp) {
        c9_b_temp = (_SFD_CCP_CALL(19,1,(((real_T)chartInstance->c9_counts >
          *c9_minPumpRunTime * 200.0)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(19U, (int32_T)c9_b_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 19;
          sf_debug_transition_conflict_check_begin();
          if ((real_T)chartInstance->c9_counts > *c9_minPumpRunTime * 200.0) {
            transitionList[numTransitions] = 20;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
        chartInstance->c9_tp_SlowingDown = 0U;
        chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
        chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_NormalDriving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
        chartInstance->c9_tp_NormalDriving = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        chartInstance->c9_is_NormalDriving = c9_IN_Driving;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance->c9_tp_Driving = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
        if (CV_TRANSITION_EVAL(20U, (int32_T)_SFD_CCP_CALL(20,0,(((real_T)
                chartInstance->c9_counts > *c9_minPumpRunTime * 200.0)!=0))) !=
            0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
          chartInstance->c9_tp_SlowingDown = 0U;
          chartInstance->c9_is_c9_BuckyWagon_01 = (uint8_T)c9_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
          chartInstance->c9_is_c9_BuckyWagon_01 = c9_IN_LowSpeedManeuvering;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c9_tp_LowSpeedManeuvering = 1U;
          chartInstance->c9_counts = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u27 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u27);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
          chartInstance->c9_is_LowSpeedManeuvering = c9_IN_Creeping;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c9_tp_Creeping = 1U;
          chartInstance->c9_counts = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u28 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u28);
        } else {
          chartInstance->c9_counts = c9__u32_add__(chartInstance,
            chartInstance->c9_counts, c9__u32_s8_(chartInstance, 1));
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c9_counts, 3U);
          c9_u29 = chartInstance->c9_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 13, c9_u29);
          *c9_PumpState = 6U;
          _SFD_DATA_RANGE_CHECK((real_T)*c9_PumpState, 6U);
          c9_u30 = *c9_PumpState;
          sf_mex_printf("%s =\\n", "PumpState");
          sf_mex_call_debug("disp", 0U, 1U, 9, c9_u30);
          goto label_1;
        }
      }
    }
  }

 label_1:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

const mxArray *sf_c9_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  sf_mex_assign(&c9_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c9_nameCaptureInfo;
}

static const mxArray *c9_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  uint8_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((uint8_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_b_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  boolean_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((boolean_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_c_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  real_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((real_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_d_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  uint32_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((uint32_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static const mxArray *c9_e_sf_marshall(void *chartInstanceVoid, void *c9_u)
{
  const mxArray *c9_y = NULL;
  uint16_T c9_b_u;
  const mxArray *c9_b_y = NULL;
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c9_y = NULL;
  c9_b_u = *((uint16_T *)c9_u);
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_y, c9_b_y);
  return c9_y;
}

static uint8_T c9_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_PumpState, const char_T *
  c9_name)
{
  uint8_T c9_y;
  uint8_T c9_u31;
  sf_mex_import(c9_name, sf_mex_dup(c9_PumpState), &c9_u31, 1, 3, 0U, 0, 0U, 0);
  c9_y = c9_u31;
  sf_mex_destroy(&c9_PumpState);
  return c9_y;
}

static real_T c9_b_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_brakeCounts, const char_T *
  c9_name)
{
  real_T c9_y;
  real_T c9_d2;
  sf_mex_import(c9_name, sf_mex_dup(c9_b_brakeCounts), &c9_d2, 1, 0, 0U, 0, 0U,
                0);
  c9_y = c9_d2;
  sf_mex_destroy(&c9_b_brakeCounts);
  return c9_y;
}

static uint32_T c9_c_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c9_b_counts, const char_T *
  c9_name)
{
  uint32_T c9_y;
  uint32_T c9_u32;
  sf_mex_import(c9_name, sf_mex_dup(c9_b_counts), &c9_u32, 1, 7, 0U, 0, 0U, 0);
  c9_y = c9_u32;
  sf_mex_destroy(&c9_b_counts);
  return c9_y;
}

static const mxArray *c9_d_emlrt_marshallIn(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c9_b_setSimStateSideEffectsInfo, const char_T *c9_name)
{
  const mxArray *c9_y = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_duplicatearraysafe
                (&c9_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c9_b_setSimStateSideEffectsInfo);
  return c9_y;
}

static uint32_T c9__u32_s8_(SFc9_BuckyWagon_01InstanceStruct *chartInstance,
  int8_T c9_b)
{
  uint32_T c9_a;
  c9_a = (uint32_T)c9_b;
  if (c9_b < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c9_a;
}

static uint32_T c9__u32_add__(SFc9_BuckyWagon_01InstanceStruct *chartInstance,
  uint32_T c9_b, uint32_T c9_c)
{
  uint32_T c9_a;
  c9_a = c9_b + c9_c;
  if (c9_a < c9_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c9_a;
}

static void init_test_point_addr_map(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c9_testPointAddrMap[0] = &chartInstance->c9_counts;
  chartInstance->c9_testPointAddrMap[1] = &chartInstance->c9_brakeCounts;
  chartInstance->c9_testPointAddrMap[2] = &chartInstance->c9_tp_Braking;
  chartInstance->c9_testPointAddrMap[3] = &chartInstance->c9_tp_Idle;
  chartInstance->c9_testPointAddrMap[4] = &chartInstance->c9_tp_KeyUp;
  chartInstance->c9_testPointAddrMap[5] =
    &chartInstance->c9_tp_LowSpeedManeuvering;
  chartInstance->c9_testPointAddrMap[6] = &chartInstance->c9_tp_Creeping;
  chartInstance->c9_testPointAddrMap[7] = &chartInstance->c9_tp_Reversing;
  chartInstance->c9_testPointAddrMap[8] = &chartInstance->c9_tp_NormalDriving;
  chartInstance->c9_testPointAddrMap[9] = &chartInstance->c9_tp_Driving;
  chartInstance->c9_testPointAddrMap[10] = &chartInstance->c9_tp_DrivingAndBrake;
  chartInstance->c9_testPointAddrMap[11] = &chartInstance->c9_tp_SlowingDown;
  chartInstance->c9_testPointAddrMap[12] = &chartInstance->c9_tp_Stopping;
}

static void **get_test_point_address_map(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c9_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc9_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c9_testPointMappingInfo;
}

static void init_dsm_address_info(SFc9_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c9_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2724409173U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(139839081U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(674528725U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2338888871U);
}

mxArray *sf_c9_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(4028781129U);
    pr[1] = (double)(2043983752U);
    pr[2] = (double)(466618715U);
    pr[3] = (double)(2743348638U);
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

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c9_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[58],T\"PumpState\",},{M[3],M[78],T\"brakeCounts\",},{M[3],M[17],T\"counts\",},{M[8],M[0],T\"is_active_c9_BuckyWagon_01\",},{M[9],M[0],T\"is_c9_BuckyWagon_01\",},{M[9],M[18],T\"is_LowSpeedManeuvering\",},{M[9],M[20],T\"is_NormalDriving\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc9_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           9,
           11,
           26,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"onBrake",
                              0,(MexFcnForType)c9_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "vehSpeed",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "inReverse",0,(MexFcnForType)c9_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,0,0,0,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,"counts",
                              0,(MexFcnForType)c9_d_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "keyOnRunTime",0,(MexFcnForType)c9_e_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "lowSpeedManTime",0,(MexFcnForType)
                              c9_e_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "PumpState",0,(MexFcnForType)c9_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "hardBrake",0,(MexFcnForType)c9_b_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "stopSpeed",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "minPumpRunTime",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "creepSpeed",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "brakeTime",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_SET_DATA_PROPS(12,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "brakeCounts",0,(MexFcnForType)c9_c_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_CH_SUBSTATE_COUNT(7);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,6);
          _SFD_CH_SUBSTATE_INDEX(5,9);
          _SFD_CH_SUBSTATE_INDEX(6,10);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,2);
          _SFD_ST_SUBSTATE_INDEX(3,0,4);
          _SFD_ST_SUBSTATE_INDEX(3,1,5);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,2);
          _SFD_ST_SUBSTATE_INDEX(6,0,7);
          _SFD_ST_SUBSTATE_INDEX(6,1,8);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
        }

        _SFD_CV_INIT_CHART(7,1,0,0);

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
          _SFD_CV_INIT_STATE(3,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 30 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(12,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 47 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 38 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(16,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 19, 46 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 49 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 10 };

          static unsigned int sEndGuardMap[] = { 8, 29 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 22, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(15,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 38 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -2 };

          _SFD_CV_INIT_TRANS(18,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 49 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(19,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(21,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(23,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(24,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(25,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(1,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              0,NULL,NULL,
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

        _SFD_TRANS_COV_WTS(12,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 30 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 47 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 38 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 19, 46 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 49 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 10 };

          static unsigned int sEndGuardMap[] = { 8, 29 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 22, 33 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 11 };

          static unsigned int sEndGuardMap[] = { 9, 38 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 22 };

          static unsigned int sEndGuardMap[] = { 20, 49 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(20,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(20,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(21,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(21,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(22,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(22,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(23,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(23,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(24,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(24,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(25,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          _SFD_TRANS_COV_MAPS(25,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c9_onBrake;
          real_T *c9_vehSpeed;
          boolean_T *c9_inReverse;
          uint16_T *c9_keyOnRunTime;
          uint16_T *c9_lowSpeedManTime;
          uint8_T *c9_PumpState;
          boolean_T *c9_hardBrake;
          real_T *c9_stopSpeed;
          real_T *c9_minPumpRunTime;
          real_T *c9_creepSpeed;
          real_T *c9_brakeTime;
          c9_brakeTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c9_creepSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c9_minPumpRunTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c9_stopSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c9_hardBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c9_PumpState = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c9_lowSpeedManTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c9_keyOnRunTime = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c9_inReverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c9_vehSpeed = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c9_onBrake = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_onBrake);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_vehSpeed);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_inReverse);
          _SFD_SET_DATA_VALUE_PTR(3U, &chartInstance->c9_counts);
          _SFD_SET_DATA_VALUE_PTR(4U, c9_keyOnRunTime);
          _SFD_SET_DATA_VALUE_PTR(5U, c9_lowSpeedManTime);
          _SFD_SET_DATA_VALUE_PTR(6U, c9_PumpState);
          _SFD_SET_DATA_VALUE_PTR(7U, c9_hardBrake);
          _SFD_SET_DATA_VALUE_PTR(8U, c9_stopSpeed);
          _SFD_SET_DATA_VALUE_PTR(9U, c9_minPumpRunTime);
          _SFD_SET_DATA_VALUE_PTR(10U, c9_creepSpeed);
          _SFD_SET_DATA_VALUE_PTR(11U, c9_brakeTime);
          _SFD_SET_DATA_VALUE_PTR(12U, &chartInstance->c9_brakeCounts);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c9_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c9_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c9_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c9_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c9_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_BuckyWagon_01
    ((SFc9_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c9_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c9_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c9_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c9_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c9_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c9_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c9_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_BuckyWagon_01((SFc9_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",9,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",9,10);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",9,1);
    }

    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",9);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1285819895U));
  ssSetChecksum1(S,(1562527665U));
  ssSetChecksum2(S,(1128696433U));
  ssSetChecksum3(S,(3444086334U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c9_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",9);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c9_BuckyWagon_01(SimStruct *S)
{
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc9_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c9_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c9_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c9_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c9_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c9_BuckyWagon_01;
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

void c9_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "real_T", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "uint32_T", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

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
  { 0, 0, "StateflowChart/counts", "counts", 0, 1, 0, 0, 0 },

  { 1, 0, "StateflowChart/brakeCounts", "brakeCounts", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Braking", "Braking", 0, 2, 0, 0, 0 },

  { 3, 0, "StateflowChart/Idle", "Idle", 0, 2, 0, 0, 0 },

  { 4, 0, "StateflowChart/KeyUp", "KeyUp", 0, 2, 0, 0, 0 },

  { 5, 0, "StateflowChart/LowSpeedManeuvering", "LowSpeedManeuvering", 0, 2, 0,
    0, 0 },

  { 6, 0, "StateflowChart/LowSpeedManeuvering.Creeping", "Creeping", 0, 2, 0, 0,
    0 },

  { 7, 0, "StateflowChart/LowSpeedManeuvering.Reversing", "Reversing", 0, 2, 0,
    0, 0 },

  { 8, 0, "StateflowChart/NormalDriving", "NormalDriving", 0, 2, 0, 0, 0 },

  { 9, 0, "StateflowChart/NormalDriving.Driving", "Driving", 0, 2, 0, 0, 0 },

  { 10, 0, "StateflowChart/NormalDriving.DrivingAndBrake", "DrivingAndBrake", 0,
    2, 0, 0, 0 },

  { 11, 0, "StateflowChart/SlowingDown", "SlowingDown", 0, 2, 0, 0, 0 },

  { 12, 0, "StateflowChart/Stopping", "Stopping", 0, 2, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    13                                 /* Num Block IO signals */
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
  SFc9_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc9_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
