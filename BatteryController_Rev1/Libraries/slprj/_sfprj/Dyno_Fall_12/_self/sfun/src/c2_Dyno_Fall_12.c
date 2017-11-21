/* Include files */

#include "blascompat32.h"
#include "Dyno_Fall_12_sfun.h"
#include "c2_Dyno_Fall_12.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_Fall_12_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0U)
#define c2_IN_Default_State            (1U)
#define c2_IN_Key_On_FuelPump          (4U)
#define c2_IN_Disable                  (2U)
#define c2_IN_WaitForStartFuelPumpTO   (1U)
#define c2_IN_Start                    (8U)
#define c2_IN_Overcrank                (6U)
#define c2_IN_IdleRun                  (3U)
#define c2_IN_Stall                    (7U)
#define c2_IN_LoadReady                (5U)
#define c2_IN_WaitForStartStandard     (2U)
#define c2_IN_WaitForStart             (9U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void initialize_params_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void enable_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void disable_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void c2_update_debugger_state_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void set_sim_state_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void finalize_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void sf_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_Key_On_FuelPump(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_Overcrank(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_IdleRun(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_Stall(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_LoadReady(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_WaitForStart(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void c2_exit_internal_WaitForStart(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u);
static boolean_T c2_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_Crank_Timeout, const char_T *c2_name);
static uint16_T c2_b_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_b_counts, const char_T *c2_name);
static uint8_T c2_c_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Dyno_Fall_12, const char_T
  *c2_name);
static const mxArray *c2_d_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_name);
static uint16_T c2__u16_s32_(SFc2_Dyno_Fall_12InstanceStruct *chartInstance,
  int32_T c2_b);
static void init_test_point_addr_map(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc2_Dyno_Fall_12InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_EngKeyed;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_b_Stall;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  chartInstance->c2_tp_Default_State = 0U;
  chartInstance->c2_tp_Disable = 0U;
  chartInstance->c2_tp_IdleRun = 0U;
  chartInstance->c2_tp_Key_On_FuelPump = 0U;
  chartInstance->c2_tp_LoadReady = 0U;
  chartInstance->c2_tp_Overcrank = 0U;
  chartInstance->c2_tp_Stall = 0U;
  chartInstance->c2_tp_Start = 0U;
  chartInstance->c2_is_WaitForStart = 0U;
  chartInstance->c2_tp_WaitForStart = 0U;
  chartInstance->c2_tp_WaitForStartFuelPumpTO = 0U;
  chartInstance->c2_tp_WaitForStartStandard = 0U;
  chartInstance->c2_is_active_c2_Dyno_Fall_12 = 0U;
  chartInstance->c2_is_c2_Dyno_Fall_12 = 0U;
  chartInstance->c2_counts = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c2_Starter = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c2_Fuel_Pump = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c2_EngKeyed = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c2_Load_Ready = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c2_Crank_Timeout = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c2_b_Stall = FALSE;
  }
}

static void initialize_params_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
}

static void enable_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint32_T c2_prevAniVal;
  c2_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c2_is_active_c2_Dyno_Fall_12 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Default_State) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Key_On_FuelPump) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Disable) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_WaitForStart == c2_IN_WaitForStartFuelPumpTO) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Overcrank) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_IdleRun) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Stall) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_LoadReady) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c2_is_WaitForStart == c2_IN_WaitForStartStandard) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
  }

  if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_WaitForStart) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
  }

  sf_debug_set_animation(c2_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  boolean_T c2_hoistedGlobal;
  boolean_T c2_u;
  const mxArray *c2_b_y = NULL;
  boolean_T c2_b_hoistedGlobal;
  boolean_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_c_hoistedGlobal;
  boolean_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  boolean_T c2_d_hoistedGlobal;
  boolean_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  boolean_T c2_e_hoistedGlobal;
  boolean_T c2_e_u;
  const mxArray *c2_f_y = NULL;
  boolean_T c2_f_hoistedGlobal;
  boolean_T c2_f_u;
  const mxArray *c2_g_y = NULL;
  uint16_T c2_g_hoistedGlobal;
  uint16_T c2_g_u;
  const mxArray *c2_h_y = NULL;
  uint8_T c2_h_hoistedGlobal;
  uint8_T c2_h_u;
  const mxArray *c2_i_y = NULL;
  uint8_T c2_i_hoistedGlobal;
  uint8_T c2_i_u;
  const mxArray *c2_j_y = NULL;
  uint8_T c2_j_hoistedGlobal;
  uint8_T c2_j_u;
  const mxArray *c2_k_y = NULL;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_EngKeyed;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_Starter;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(10));
  c2_hoistedGlobal = *c2_Crank_Timeout;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_EngKeyed;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = *c2_Fuel_Pump;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = *c2_Load_Ready;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_e_hoistedGlobal = *c2_b_Stall;
  c2_e_u = c2_e_hoistedGlobal;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_e_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_f_hoistedGlobal = *c2_Starter;
  c2_f_u = c2_f_hoistedGlobal;
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_f_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_g_hoistedGlobal = chartInstance->c2_counts;
  c2_g_u = c2_g_hoistedGlobal;
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_g_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 6, c2_h_y);
  c2_h_hoistedGlobal = chartInstance->c2_is_active_c2_Dyno_Fall_12;
  c2_h_u = c2_h_hoistedGlobal;
  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_i_hoistedGlobal = chartInstance->c2_is_c2_Dyno_Fall_12;
  c2_i_u = c2_i_hoistedGlobal;
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 8, c2_j_y);
  c2_j_hoistedGlobal = chartInstance->c2_is_WaitForStart;
  c2_j_u = c2_j_hoistedGlobal;
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 9, c2_k_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_EngKeyed;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_Starter;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_u = sf_mex_dup(c2_st);
  *c2_Crank_Timeout = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 0)), "Crank_Timeout");
  *c2_EngKeyed = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 1)), "EngKeyed");
  *c2_Fuel_Pump = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 2)), "Fuel_Pump");
  *c2_Load_Ready = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 3)), "Load_Ready");
  *c2_b_Stall = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 4)), "Stall");
  *c2_Starter = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 5)), "Starter");
  chartInstance->c2_counts = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 6)), "counts");
  chartInstance->c2_is_active_c2_Dyno_Fall_12 = c2_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 7)),
     "is_active_c2_Dyno_Fall_12");
  chartInstance->c2_is_c2_Dyno_Fall_12 = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 8)),
    "is_c2_Dyno_Fall_12");
  chartInstance->c2_is_WaitForStart = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 9)), "is_WaitForStart");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 10
     )), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_Dyno_Fall_12(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_Dyno_Fall_12
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Default_State) {
      chartInstance->c2_tp_Default_State = 1U;
    } else {
      chartInstance->c2_tp_Default_State = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Disable) {
      chartInstance->c2_tp_Disable = 1U;
    } else {
      chartInstance->c2_tp_Disable = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_IdleRun) {
      chartInstance->c2_tp_IdleRun = 1U;
    } else {
      chartInstance->c2_tp_IdleRun = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Key_On_FuelPump) {
      chartInstance->c2_tp_Key_On_FuelPump = 1U;
    } else {
      chartInstance->c2_tp_Key_On_FuelPump = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_LoadReady) {
      chartInstance->c2_tp_LoadReady = 1U;
    } else {
      chartInstance->c2_tp_LoadReady = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Overcrank) {
      chartInstance->c2_tp_Overcrank = 1U;
    } else {
      chartInstance->c2_tp_Overcrank = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Stall) {
      chartInstance->c2_tp_Stall = 1U;
    } else {
      chartInstance->c2_tp_Stall = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_Start) {
      chartInstance->c2_tp_Start = 1U;
    } else {
      chartInstance->c2_tp_Start = 0U;
    }

    if (chartInstance->c2_is_c2_Dyno_Fall_12 == c2_IN_WaitForStart) {
      chartInstance->c2_tp_WaitForStart = 1U;
    } else {
      chartInstance->c2_tp_WaitForStart = 0U;
    }

    if (chartInstance->c2_is_WaitForStart == c2_IN_WaitForStartFuelPumpTO) {
      chartInstance->c2_tp_WaitForStartFuelPumpTO = 1U;
    } else {
      chartInstance->c2_tp_WaitForStartFuelPumpTO = 0U;
    }

    if (chartInstance->c2_is_WaitForStart == c2_IN_WaitForStartStandard) {
      chartInstance->c2_tp_WaitForStartStandard = 1U;
    } else {
      chartInstance->c2_tp_WaitForStartStandard = 0U;
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  int32_T c2_previousEvent;
  boolean_T *c2_Start_Button;
  uint16_T *c2_Eng_Spd;
  uint16_T *c2_Eng_Idle_Speed;
  boolean_T *c2_E_Stop;
  uint16_T *c2_StartedRPM;
  uint16_T *c2_Crank_Time_Lim;
  uint16_T *c2_OvercrankStall_LockoutTime;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_EngKeyed;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_b_Stall;
  uint16_T *c2_KeyOn_FuelPumpRuntime;
  uint16_T *c2_KeyOn_FuelPumpTO;
  c2_KeyOn_FuelPumpTO = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c2_KeyOn_FuelPumpRuntime = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
    7);
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_OvercrankStall_LockoutTime = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 6);
  c2_Crank_Time_Lim = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_StartedRPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_Eng_Idle_Speed = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_Eng_Spd = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_Start_Button = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c2_set_sim_state_side_effects_c2_Dyno_Fall_12(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,1);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Start_Button, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Eng_Spd, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Eng_Idle_Speed, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_E_Stop, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_StartedRPM, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Time_Lim, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_OvercrankStall_LockoutTime, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_KeyOn_FuelPumpRuntime, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_KeyOn_FuelPumpTO, 15U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c2_c2_Dyno_Fall_12(chartInstance);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_Fall_12MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c2_c2_Dyno_Fall_12(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  boolean_T c2_b0;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  uint16_T c2_u0;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b8;
  boolean_T c2_b9;
  boolean_T c2_b10;
  boolean_T c2_b11;
  uint16_T c2_u1;
  boolean_T *c2_E_Stop;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  uint16_T *c2_Crank_Time_Lim;
  uint16_T *c2_Eng_Spd;
  uint16_T *c2_StartedRPM;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_Crank_Time_Lim = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_StartedRPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_Eng_Spd = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,1);
  if ((int16_T)chartInstance->c2_is_active_c2_Dyno_Fall_12 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,1);
    chartInstance->c2_is_active_c2_Dyno_Fall_12 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Default_State;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c2_tp_Default_State = 1U;
  } else {
    switch (chartInstance->c2_is_c2_Dyno_Fall_12) {
     case c2_IN_Default_State:
      CV_CHART_EVAL(1,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, !(_SFD_CCP_CALL(1,0,((*c2_E_Stop)!=0)) != 0))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c2_tp_Default_State = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Key_On_FuelPump;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c2_tp_Key_On_FuelPump = 1U;
        chartInstance->c2_counts = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c2_IN_Disable:
      CV_CHART_EVAL(1,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
      if (CV_TRANSITION_EVAL(17U, !(_SFD_CCP_CALL(17,0,((*c2_E_Stop)!=0)) != 0))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c2_tp_Disable = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Key_On_FuelPump;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c2_tp_Key_On_FuelPump = 1U;
        chartInstance->c2_counts = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      } else {
        *c2_Starter = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
        c2_b0 = *c2_Starter;
        sf_mex_printf("%s =\\n", "Starter");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b0);
        *c2_Fuel_Pump = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
        c2_b1 = *c2_Fuel_Pump;
        sf_mex_printf("%s =\\n", "Fuel_Pump");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b1);
        *c2_Crank_Timeout = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
        c2_b2 = *c2_Crank_Timeout;
        sf_mex_printf("%s =\\n", "Crank_Timeout");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b2);
        *c2_Load_Ready = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
        c2_b3 = *c2_Load_Ready;
        sf_mex_printf("%s =\\n", "Load_Ready");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b3);
        *c2_b_Stall = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
        c2_b4 = *c2_b_Stall;
        sf_mex_printf("%s =\\n", "Stall");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b4);
        *c2_EngKeyed = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
        c2_b5 = *c2_EngKeyed;
        sf_mex_printf("%s =\\n", "EngKeyed");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b5);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c2_IN_IdleRun:
      CV_CHART_EVAL(1,0,3);
      c2_IdleRun(chartInstance);
      break;

     case c2_IN_Key_On_FuelPump:
      CV_CHART_EVAL(1,0,4);
      c2_Key_On_FuelPump(chartInstance);
      break;

     case c2_IN_LoadReady:
      CV_CHART_EVAL(1,0,5);
      c2_LoadReady(chartInstance);
      break;

     case c2_IN_Overcrank:
      CV_CHART_EVAL(1,0,6);
      c2_Overcrank(chartInstance);
      break;

     case c2_IN_Stall:
      CV_CHART_EVAL(1,0,7);
      c2_Stall(chartInstance);
      break;

     case c2_IN_Start:
      CV_CHART_EVAL(1,0,8);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
      if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c2_E_Stop)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions= 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if (chartInstance->c2_counts > *c2_Crank_Time_Lim) {
            transitionList[numTransitions] = 18;
            numTransitions++;
          }

          if (*c2_Eng_Spd > *c2_StartedRPM) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
        chartInstance->c2_tp_Start = 0U;
        chartInstance->c2_is_c2_Dyno_Fall_12 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
        chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c2_tp_Disable = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
        if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
              ((chartInstance->c2_counts > *c2_Crank_Time_Lim)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 18;
            sf_debug_transition_conflict_check_begin();
            if (*c2_Eng_Spd > *c2_StartedRPM) {
              transitionList[numTransitions] = 8;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
          chartInstance->c2_tp_Start = 0U;
          chartInstance->c2_is_c2_Dyno_Fall_12 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
          chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Overcrank;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c2_tp_Overcrank = 1U;
          chartInstance->c2_counts = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
          c2_u0 = chartInstance->c2_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 11, c2_u0);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
          if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c2_Eng_Spd > *
                  c2_StartedRPM)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
            chartInstance->c2_tp_Start = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
            chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_IdleRun;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
            chartInstance->c2_tp_IdleRun = 1U;
          } else {
            *c2_Starter = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
            c2_b6 = *c2_Starter;
            sf_mex_printf("%s =\\n", "Starter");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b6);
            *c2_Fuel_Pump = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
            c2_b7 = *c2_Fuel_Pump;
            sf_mex_printf("%s =\\n", "Fuel_Pump");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b7);
            *c2_Crank_Timeout = FALSE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
            c2_b8 = *c2_Crank_Timeout;
            sf_mex_printf("%s =\\n", "Crank_Timeout");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b8);
            *c2_Load_Ready = FALSE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
            c2_b9 = *c2_Load_Ready;
            sf_mex_printf("%s =\\n", "Load_Ready");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b9);
            *c2_b_Stall = FALSE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
            c2_b10 = *c2_b_Stall;
            sf_mex_printf("%s =\\n", "Stall");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b10);
            *c2_EngKeyed = TRUE;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
            c2_b11 = *c2_EngKeyed;
            sf_mex_printf("%s =\\n", "EngKeyed");
            sf_mex_call_debug("disp", 0U, 1U, 3, c2_b11);
            chartInstance->c2_counts = c2__u16_s32_(chartInstance,
              chartInstance->c2_counts + 1);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
            c2_u1 = chartInstance->c2_counts;
            sf_mex_printf("%s =\\n", "counts");
            sf_mex_call_debug("disp", 0U, 1U, 11, c2_u1);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      break;

     case c2_IN_WaitForStart:
      CV_CHART_EVAL(1,0,9);
      c2_WaitForStart(chartInstance);
      break;

     default:
      CV_CHART_EVAL(1,0,0);
      chartInstance->c2_is_c2_Dyno_Fall_12 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c2_Key_On_FuelPump(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  boolean_T c2_temp;
  uint16_T c2_u2;
  boolean_T c2_b12;
  boolean_T c2_b13;
  boolean_T c2_b14;
  boolean_T c2_b15;
  boolean_T c2_b16;
  boolean_T c2_b17;
  uint16_T c2_u3;
  boolean_T *c2_E_Stop;
  uint16_T *c2_KeyOn_FuelPumpRuntime;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  c2_KeyOn_FuelPumpRuntime = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
    7);
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
  if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c2_E_Stop)!=0))) != 0)
  {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 2;
      sf_debug_transition_conflict_check_begin();
      if ((!(*c2_E_Stop)) && (chartInstance->c2_counts >
                              *c2_KeyOn_FuelPumpRuntime)) {
        transitionList[numTransitions] = 3;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
    chartInstance->c2_tp_Key_On_FuelPump = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_Disable = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
    c2_temp = !(_SFD_CCP_CALL(3,0,((*c2_E_Stop)!=0)) != 0);
    if (c2_temp) {
      c2_temp = (_SFD_CCP_CALL(3,1,((chartInstance->c2_counts >
        *c2_KeyOn_FuelPumpRuntime)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(3U, (int32_T)c2_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c2_tp_Key_On_FuelPump = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_WaitForStart;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c2_tp_WaitForStart = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
      chartInstance->c2_is_WaitForStart = c2_IN_WaitForStartStandard;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
      chartInstance->c2_tp_WaitForStartStandard = 1U;
      chartInstance->c2_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u2 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u2);
    } else {
      *c2_Starter = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
      c2_b12 = *c2_Starter;
      sf_mex_printf("%s =\\n", "Starter");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b12);
      *c2_Fuel_Pump = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
      c2_b13 = *c2_Fuel_Pump;
      sf_mex_printf("%s =\\n", "Fuel_Pump");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b13);
      *c2_Crank_Timeout = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
      c2_b14 = *c2_Crank_Timeout;
      sf_mex_printf("%s =\\n", "Crank_Timeout");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b14);
      *c2_Load_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
      c2_b15 = *c2_Load_Ready;
      sf_mex_printf("%s =\\n", "Load_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b15);
      *c2_b_Stall = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
      c2_b16 = *c2_b_Stall;
      sf_mex_printf("%s =\\n", "Stall");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b16);
      *c2_EngKeyed = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
      c2_b17 = *c2_EngKeyed;
      sf_mex_printf("%s =\\n", "EngKeyed");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b17);
      chartInstance->c2_counts = c2__u16_s32_(chartInstance,
        chartInstance->c2_counts + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u3 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u3);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
}

static void c2_Overcrank(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint16_T c2_u4;
  boolean_T c2_b18;
  boolean_T c2_b19;
  boolean_T c2_b20;
  boolean_T c2_b21;
  boolean_T c2_b22;
  boolean_T c2_b23;
  uint16_T c2_u5;
  boolean_T *c2_E_Stop;
  uint16_T *c2_OvercrankStall_LockoutTime;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_OvercrankStall_LockoutTime = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 6);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
  if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,((*c2_E_Stop)!=0))) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 10;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c2_counts > *c2_OvercrankStall_LockoutTime) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c2_tp_Overcrank = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_Disable = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,
          ((chartInstance->c2_counts > *c2_OvercrankStall_LockoutTime)!=0))) !=
        0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
      chartInstance->c2_tp_Overcrank = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_WaitForStart;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c2_tp_WaitForStart = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
      chartInstance->c2_is_WaitForStart = c2_IN_WaitForStartStandard;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
      chartInstance->c2_tp_WaitForStartStandard = 1U;
      chartInstance->c2_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u4 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u4);
    } else {
      *c2_Starter = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
      c2_b18 = *c2_Starter;
      sf_mex_printf("%s =\\n", "Starter");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b18);
      *c2_Fuel_Pump = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
      c2_b19 = *c2_Fuel_Pump;
      sf_mex_printf("%s =\\n", "Fuel_Pump");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b19);
      *c2_Crank_Timeout = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
      c2_b20 = *c2_Crank_Timeout;
      sf_mex_printf("%s =\\n", "Crank_Timeout");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b20);
      *c2_Load_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
      c2_b21 = *c2_Load_Ready;
      sf_mex_printf("%s =\\n", "Load_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b21);
      *c2_b_Stall = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
      c2_b22 = *c2_b_Stall;
      sf_mex_printf("%s =\\n", "Stall");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b22);
      *c2_EngKeyed = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
      c2_b23 = *c2_EngKeyed;
      sf_mex_printf("%s =\\n", "EngKeyed");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b23);
      chartInstance->c2_counts = c2__u16_s32_(chartInstance,
        chartInstance->c2_counts + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u5 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u5);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
}

static void c2_IdleRun(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint16_T c2_u6;
  boolean_T c2_b24;
  boolean_T c2_b25;
  boolean_T c2_b26;
  boolean_T c2_b27;
  boolean_T c2_b28;
  boolean_T c2_b29;
  boolean_T *c2_E_Stop;
  uint16_T *c2_Eng_Spd;
  uint16_T *c2_StartedRPM;
  uint16_T *c2_Eng_Idle_Speed;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_StartedRPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_Eng_Idle_Speed = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_Eng_Spd = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
  if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,((*c2_E_Stop)!=0))) != 0)
  {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 9;
      sf_debug_transition_conflict_check_begin();
      if (*c2_Eng_Spd < *c2_StartedRPM) {
        transitionList[numTransitions] = 11;
        numTransitions++;
      }

      if (*c2_Eng_Spd > *c2_Eng_Idle_Speed) {
        transitionList[numTransitions] = 14;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c2_tp_IdleRun = 0U;
    chartInstance->c2_is_c2_Dyno_Fall_12 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_Disable = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
    if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11,0,((*c2_Eng_Spd <
            *c2_StartedRPM)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 11;
        sf_debug_transition_conflict_check_begin();
        if (*c2_Eng_Spd > *c2_Eng_Idle_Speed) {
          transitionList[numTransitions] = 14;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c2_tp_IdleRun = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Stall;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
      chartInstance->c2_tp_Stall = 1U;
      chartInstance->c2_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u6 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u6);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
      if (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14,0,((*c2_Eng_Spd >
              *c2_Eng_Idle_Speed)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c2_tp_IdleRun = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_LoadReady;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c2_tp_LoadReady = 1U;
      } else {
        *c2_Starter = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
        c2_b24 = *c2_Starter;
        sf_mex_printf("%s =\\n", "Starter");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b24);
        *c2_Fuel_Pump = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
        c2_b25 = *c2_Fuel_Pump;
        sf_mex_printf("%s =\\n", "Fuel_Pump");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b25);
        *c2_Crank_Timeout = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
        c2_b26 = *c2_Crank_Timeout;
        sf_mex_printf("%s =\\n", "Crank_Timeout");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b26);
        *c2_Load_Ready = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
        c2_b27 = *c2_Load_Ready;
        sf_mex_printf("%s =\\n", "Load_Ready");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b27);
        *c2_b_Stall = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
        c2_b28 = *c2_b_Stall;
        sf_mex_printf("%s =\\n", "Stall");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b28);
        *c2_EngKeyed = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
        c2_b29 = *c2_EngKeyed;
        sf_mex_printf("%s =\\n", "EngKeyed");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b29);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c2_Stall(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint16_T c2_u7;
  boolean_T c2_b30;
  boolean_T c2_b31;
  boolean_T c2_b32;
  boolean_T c2_b33;
  boolean_T c2_b34;
  boolean_T c2_b35;
  uint16_T c2_u8;
  boolean_T *c2_E_Stop;
  uint16_T *c2_OvercrankStall_LockoutTime;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_OvercrankStall_LockoutTime = (uint16_T *)ssGetInputPortSignal
    (chartInstance->S, 6);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
  if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13,0,((*c2_E_Stop)!=0))) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 13;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c2_counts > *c2_OvercrankStall_LockoutTime) {
        transitionList[numTransitions] = 12;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c2_tp_Stall = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_Disable = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
    if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12,0,
          ((chartInstance->c2_counts > *c2_OvercrankStall_LockoutTime)!=0))) !=
        0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
      chartInstance->c2_tp_Stall = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_WaitForStart;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c2_tp_WaitForStart = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
      chartInstance->c2_is_WaitForStart = c2_IN_WaitForStartStandard;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
      chartInstance->c2_tp_WaitForStartStandard = 1U;
      chartInstance->c2_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u7 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u7);
    } else {
      *c2_Starter = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
      c2_b30 = *c2_Starter;
      sf_mex_printf("%s =\\n", "Starter");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b30);
      *c2_Fuel_Pump = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
      c2_b31 = *c2_Fuel_Pump;
      sf_mex_printf("%s =\\n", "Fuel_Pump");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b31);
      *c2_Crank_Timeout = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
      c2_b32 = *c2_Crank_Timeout;
      sf_mex_printf("%s =\\n", "Crank_Timeout");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b32);
      *c2_Load_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
      c2_b33 = *c2_Load_Ready;
      sf_mex_printf("%s =\\n", "Load_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b33);
      *c2_b_Stall = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
      c2_b34 = *c2_b_Stall;
      sf_mex_printf("%s =\\n", "Stall");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b34);
      *c2_EngKeyed = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
      c2_b35 = *c2_EngKeyed;
      sf_mex_printf("%s =\\n", "EngKeyed");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b35);
      chartInstance->c2_counts = c2__u16_s32_(chartInstance,
        chartInstance->c2_counts + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
      c2_u8 = chartInstance->c2_counts;
      sf_mex_printf("%s =\\n", "counts");
      sf_mex_call_debug("disp", 0U, 1U, 11, c2_u8);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
}

static void c2_LoadReady(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  uint16_T c2_u9;
  boolean_T c2_b36;
  boolean_T c2_b37;
  boolean_T c2_b38;
  boolean_T c2_b39;
  boolean_T c2_b40;
  boolean_T c2_b41;
  uint16_T *c2_Eng_Spd;
  uint16_T *c2_StartedRPM;
  boolean_T *c2_E_Stop;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_StartedRPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_Eng_Spd = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
  if (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15,0,((*c2_Eng_Spd <
          *c2_StartedRPM - 100)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 15;
      sf_debug_transition_conflict_check_begin();
      if (*c2_E_Stop) {
        transitionList[numTransitions] = 16;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c2_tp_LoadReady = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Stall;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
    chartInstance->c2_tp_Stall = 1U;
    chartInstance->c2_counts = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
    c2_u9 = chartInstance->c2_counts;
    sf_mex_printf("%s =\\n", "counts");
    sf_mex_call_debug("disp", 0U, 1U, 11, c2_u9);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
    if (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16,0,((*c2_E_Stop)!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
      chartInstance->c2_tp_LoadReady = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance->c2_tp_Disable = 1U;
    } else {
      *c2_Starter = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
      c2_b36 = *c2_Starter;
      sf_mex_printf("%s =\\n", "Starter");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b36);
      *c2_Fuel_Pump = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
      c2_b37 = *c2_Fuel_Pump;
      sf_mex_printf("%s =\\n", "Fuel_Pump");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b37);
      *c2_Crank_Timeout = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
      c2_b38 = *c2_Crank_Timeout;
      sf_mex_printf("%s =\\n", "Crank_Timeout");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b38);
      *c2_Load_Ready = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
      c2_b39 = *c2_Load_Ready;
      sf_mex_printf("%s =\\n", "Load_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b39);
      *c2_b_Stall = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
      c2_b40 = *c2_b_Stall;
      sf_mex_printf("%s =\\n", "Stall");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b40);
      *c2_EngKeyed = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
      c2_b41 = *c2_EngKeyed;
      sf_mex_printf("%s =\\n", "EngKeyed");
      sf_mex_call_debug("disp", 0U, 1U, 3, c2_b41);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
}

static void c2_WaitForStart(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  boolean_T c2_b42;
  boolean_T c2_b43;
  boolean_T c2_b44;
  boolean_T c2_b45;
  boolean_T c2_b46;
  boolean_T c2_b47;
  boolean_T c2_b48;
  boolean_T c2_b49;
  boolean_T c2_b50;
  boolean_T c2_b51;
  boolean_T c2_b52;
  boolean_T c2_b53;
  uint16_T c2_u10;
  boolean_T *c2_E_Stop;
  boolean_T *c2_Start_Button;
  boolean_T *c2_Starter;
  boolean_T *c2_Fuel_Pump;
  boolean_T *c2_Crank_Timeout;
  boolean_T *c2_Load_Ready;
  boolean_T *c2_b_Stall;
  boolean_T *c2_EngKeyed;
  uint16_T *c2_KeyOn_FuelPumpTO;
  c2_KeyOn_FuelPumpTO = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_Start_Button = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
  if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c2_E_Stop)!=0))) != 0)
  {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 4;
      sf_debug_transition_conflict_check_begin();
      if (*c2_Start_Button) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
    c2_exit_internal_WaitForStart(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
    chartInstance->c2_tp_WaitForStart = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
    chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Disable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c2_tp_Disable = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
    if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c2_Start_Button)!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
      c2_exit_internal_WaitForStart(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
      chartInstance->c2_tp_WaitForStart = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
      chartInstance->c2_is_c2_Dyno_Fall_12 = c2_IN_Start;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance->c2_tp_Start = 1U;
      chartInstance->c2_counts = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
    } else {
      switch (chartInstance->c2_is_WaitForStart) {
       case c2_IN_WaitForStartFuelPumpTO:
        CV_STATE_EVAL(8,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,9);
        *c2_Starter = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
        c2_b42 = *c2_Starter;
        sf_mex_printf("%s =\\n", "Starter");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b42);
        *c2_Fuel_Pump = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
        c2_b43 = *c2_Fuel_Pump;
        sf_mex_printf("%s =\\n", "Fuel_Pump");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b43);
        *c2_Crank_Timeout = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
        c2_b44 = *c2_Crank_Timeout;
        sf_mex_printf("%s =\\n", "Crank_Timeout");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b44);
        *c2_Load_Ready = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
        c2_b45 = *c2_Load_Ready;
        sf_mex_printf("%s =\\n", "Load_Ready");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b45);
        *c2_b_Stall = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
        c2_b46 = *c2_b_Stall;
        sf_mex_printf("%s =\\n", "Stall");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b46);
        *c2_EngKeyed = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
        c2_b47 = *c2_EngKeyed;
        sf_mex_printf("%s =\\n", "EngKeyed");
        sf_mex_call_debug("disp", 0U, 1U, 3, c2_b47);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
        break;

       case c2_IN_WaitForStartStandard:
        CV_STATE_EVAL(8,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,10);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
        if (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19,0,
              ((chartInstance->c2_counts > *c2_KeyOn_FuelPumpTO)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
          chartInstance->c2_tp_WaitForStartStandard = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
          chartInstance->c2_is_WaitForStart = c2_IN_WaitForStartFuelPumpTO;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
          chartInstance->c2_tp_WaitForStartFuelPumpTO = 1U;
        } else {
          *c2_Starter = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_Starter, 8U);
          c2_b48 = *c2_Starter;
          sf_mex_printf("%s =\\n", "Starter");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b48);
          *c2_Fuel_Pump = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_Fuel_Pump, 9U);
          c2_b49 = *c2_Fuel_Pump;
          sf_mex_printf("%s =\\n", "Fuel_Pump");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b49);
          *c2_Crank_Timeout = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_Crank_Timeout, 12U);
          c2_b50 = *c2_Crank_Timeout;
          sf_mex_printf("%s =\\n", "Crank_Timeout");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b50);
          *c2_Load_Ready = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_Load_Ready, 11U);
          c2_b51 = *c2_Load_Ready;
          sf_mex_printf("%s =\\n", "Load_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b51);
          *c2_b_Stall = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_b_Stall, 13U);
          c2_b52 = *c2_b_Stall;
          sf_mex_printf("%s =\\n", "Stall");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b52);
          *c2_EngKeyed = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_EngKeyed, 10U);
          c2_b53 = *c2_EngKeyed;
          sf_mex_printf("%s =\\n", "EngKeyed");
          sf_mex_call_debug("disp", 0U, 1U, 3, c2_b53);
          chartInstance->c2_counts = c2__u16_s32_(chartInstance,
            chartInstance->c2_counts + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_counts, 7U);
          c2_u10 = chartInstance->c2_counts;
          sf_mex_printf("%s =\\n", "counts");
          sf_mex_call_debug("disp", 0U, 1U, 11, c2_u10);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
        break;

       default:
        CV_STATE_EVAL(8,0,0);
        chartInstance->c2_is_WaitForStart = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
}

static void c2_exit_internal_WaitForStart(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c2_is_WaitForStart) {
   case c2_IN_WaitForStartFuelPumpTO:
    CV_STATE_EVAL(8,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
    chartInstance->c2_tp_WaitForStartFuelPumpTO = 0U;
    chartInstance->c2_is_WaitForStart = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    break;

   case c2_IN_WaitForStartStandard:
    CV_STATE_EVAL(8,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
    chartInstance->c2_tp_WaitForStartStandard = 0U;
    chartInstance->c2_is_WaitForStart = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
    break;

   default:
    CV_STATE_EVAL(8,1,0);
    chartInstance->c2_is_WaitForStart = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
    break;
  }
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

const mxArray *sf_c2_Dyno_Fall_12_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c2_nameCaptureInfo;
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint16_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint16_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static boolean_T c2_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_Crank_Timeout, const char_T *
  c2_name)
{
  boolean_T c2_y;
  boolean_T c2_b54;
  sf_mex_import(c2_name, sf_mex_dup(c2_Crank_Timeout), &c2_b54, 1, 11, 0U, 0, 0U,
                0);
  c2_y = c2_b54;
  sf_mex_destroy(&c2_Crank_Timeout);
  return c2_y;
}

static uint16_T c2_b_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_b_counts, const char_T *
  c2_name)
{
  uint16_T c2_y;
  uint16_T c2_u11;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_counts), &c2_u11, 1, 5, 0U, 0, 0U, 0);
  c2_y = c2_u11;
  sf_mex_destroy(&c2_b_counts);
  return c2_y;
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Dyno_Fall_12,
  const char_T *c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u12;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_is_active_c2_Dyno_Fall_12), &c2_u12, 1,
                3, 0U, 0, 0U, 0);
  c2_y = c2_u12;
  sf_mex_destroy(&c2_b_is_active_c2_Dyno_Fall_12);
  return c2_y;
}

static const mxArray *c2_d_emlrt_marshallIn(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance, const mxArray *
  c2_b_setSimStateSideEffectsInfo, const char_T *c2_name)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe
                (&c2_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static uint16_T c2__u16_s32_(SFc2_Dyno_Fall_12InstanceStruct *chartInstance,
  int32_T c2_b)
{
  uint16_T c2_a;
  c2_a = (uint16_T)c2_b;
  if (c2_a != c2_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static void init_test_point_addr_map(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  chartInstance->c2_testPointAddrMap[0] = &chartInstance->c2_counts;
  chartInstance->c2_testPointAddrMap[1] = &chartInstance->c2_tp_Default_State;
  chartInstance->c2_testPointAddrMap[2] = &chartInstance->c2_tp_Disable;
  chartInstance->c2_testPointAddrMap[3] = &chartInstance->c2_tp_IdleRun;
  chartInstance->c2_testPointAddrMap[4] = &chartInstance->c2_tp_Key_On_FuelPump;
  chartInstance->c2_testPointAddrMap[5] = &chartInstance->c2_tp_LoadReady;
  chartInstance->c2_testPointAddrMap[6] = &chartInstance->c2_tp_Overcrank;
  chartInstance->c2_testPointAddrMap[7] = &chartInstance->c2_tp_Stall;
  chartInstance->c2_testPointAddrMap[8] = &chartInstance->c2_tp_Start;
  chartInstance->c2_testPointAddrMap[9] = &chartInstance->c2_tp_WaitForStart;
  chartInstance->c2_testPointAddrMap[10] =
    &chartInstance->c2_tp_WaitForStartFuelPumpTO;
  chartInstance->c2_testPointAddrMap[11] =
    &chartInstance->c2_tp_WaitForStartStandard;
}

static void **get_test_point_address_map(SFc2_Dyno_Fall_12InstanceStruct
  *chartInstance)
{
  return &chartInstance->c2_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
  return &chartInstance->c2_testPointMappingInfo;
}

static void init_dsm_address_info(SFc2_Dyno_Fall_12InstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c2_Dyno_Fall_12_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2156707436U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3261211846U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3180724580U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2087586065U);
}

mxArray *sf_c2_Dyno_Fall_12_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2247850913U);
    pr[1] = (double)(918085212U);
    pr[2] = (double)(2888582412U);
    pr[3] = (double)(1013882781U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_Dyno_Fall_12(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[11],T\"Crank_Timeout\",},{M[1],M[28],T\"EngKeyed\",},{M[1],M[10],T\"Fuel_Pump\",},{M[1],M[12],T\"Load_Ready\",},{M[1],M[13],T\"Stall\",},{M[1],M[8],T\"Starter\",},{M[3],M[7],T\"counts\",},{M[8],M[0],T\"is_active_c2_Dyno_Fall_12\",},{M[9],M[0],T\"is_c2_Dyno_Fall_12\",},{M[9],M[76],T\"is_WaitForStart\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_Dyno_Fall_12_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
    chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_Fall_12MachineNumber_,
           2,
           11,
           21,
           16,
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
                              "Start_Button",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"Eng_Spd",
                              0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Eng_Idle_Speed",0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"E_Stop",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "StartedRPM",0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "Crank_Time_Lim",0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "OvercrankStall_LockoutTime",0,(MexFcnForType)
                              c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,0,0,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"counts",
                              0,(MexFcnForType)c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Starter",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(9,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Fuel_Pump",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(10,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "EngKeyed",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Load_Ready",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(12,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Crank_Timeout",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(13,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Stall",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(14,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "KeyOn_FuelPumpRuntime",0,(MexFcnForType)
                              c2_c_sf_marshall);
          _SFD_SET_DATA_PROPS(15,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "KeyOn_FuelPumpTO",0,(MexFcnForType)
                              c2_c_sf_marshall);
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
          _SFD_CH_SUBSTATE_COUNT(9);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_CH_SUBSTATE_INDEX(8,8);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,2);
          _SFD_ST_SUBSTATE_INDEX(8,0,9);
          _SFD_ST_SUBSTATE_INDEX(8,1,10);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
        }

        _SFD_CV_INIT_CHART(9,1,0,0);

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
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 12 };

          static unsigned int sEndGuardMap[] = { 8, 40 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

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

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 24 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 12 };

          static unsigned int sEndGuardMap[] = { 8, 40 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(20,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(20,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

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

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 34 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 24 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c2_Start_Button;
          uint16_T *c2_Eng_Spd;
          uint16_T *c2_Eng_Idle_Speed;
          boolean_T *c2_E_Stop;
          uint16_T *c2_StartedRPM;
          uint16_T *c2_Crank_Time_Lim;
          uint16_T *c2_OvercrankStall_LockoutTime;
          boolean_T *c2_Starter;
          boolean_T *c2_Fuel_Pump;
          boolean_T *c2_EngKeyed;
          boolean_T *c2_Load_Ready;
          boolean_T *c2_Crank_Timeout;
          boolean_T *c2_b_Stall;
          uint16_T *c2_KeyOn_FuelPumpRuntime;
          uint16_T *c2_KeyOn_FuelPumpTO;
          c2_KeyOn_FuelPumpTO = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 8);
          c2_KeyOn_FuelPumpRuntime = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 7);
          c2_b_Stall = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c2_Crank_Timeout = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c2_Load_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c2_EngKeyed = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c2_Fuel_Pump = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c2_Starter = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c2_OvercrankStall_LockoutTime = (uint16_T *)ssGetInputPortSignal
            (chartInstance->S, 6);
          c2_Crank_Time_Lim = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            5);
          c2_StartedRPM = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c2_E_Stop = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c2_Eng_Idle_Speed = (uint16_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c2_Eng_Spd = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_Start_Button = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_Start_Button);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_Eng_Spd);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_Eng_Idle_Speed);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_E_Stop);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_StartedRPM);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_Crank_Time_Lim);
          _SFD_SET_DATA_VALUE_PTR(6U, c2_OvercrankStall_LockoutTime);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c2_counts);
          _SFD_SET_DATA_VALUE_PTR(8U, c2_Starter);
          _SFD_SET_DATA_VALUE_PTR(9U, c2_Fuel_Pump);
          _SFD_SET_DATA_VALUE_PTR(10U, c2_EngKeyed);
          _SFD_SET_DATA_VALUE_PTR(11U, c2_Load_Ready);
          _SFD_SET_DATA_VALUE_PTR(12U, c2_Crank_Timeout);
          _SFD_SET_DATA_VALUE_PTR(13U, c2_b_Stall);
          _SFD_SET_DATA_VALUE_PTR(14U, c2_KeyOn_FuelPumpRuntime);
          _SFD_SET_DATA_VALUE_PTR(15U, c2_KeyOn_FuelPumpTO);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_Fall_12MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_Dyno_Fall_12(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_Dyno_Fall_12InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*)
    chartInstanceVar);
  initialize_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_Dyno_Fall_12(void *chartInstanceVar)
{
  enable_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_Dyno_Fall_12(void *chartInstanceVar)
{
  disable_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_Dyno_Fall_12(void *chartInstanceVar)
{
  sf_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_Dyno_Fall_12(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_Dyno_Fall_12
    ((SFc2_Dyno_Fall_12InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_Dyno_Fall_12();/* state var info */
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

static void sf_internal_set_sim_state_c2_Dyno_Fall_12(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_Dyno_Fall_12();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_Dyno_Fall_12(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_Dyno_Fall_12(S);
}

static void sf_opaque_set_sim_state_c2_Dyno_Fall_12(SimStruct* S, const mxArray *
  st)
{
  sf_internal_set_sim_state_c2_Dyno_Fall_12(S, st);
}

static void sf_opaque_terminate_c2_Dyno_Fall_12(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_Dyno_Fall_12(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_Dyno_Fall_12((SFc2_Dyno_Fall_12InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_Dyno_Fall_12(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_Fall_12","Dyno_Fall_12",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_Fall_12","Dyno_Fall_12",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_Fall_12",
      "Dyno_Fall_12",2,"gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"Dyno_Fall_12","Dyno_Fall_12",2,9);
      sf_mark_chart_reusable_outputs(S,"Dyno_Fall_12","Dyno_Fall_12",2,6);
    }

    sf_set_rtw_dwork_info(S,"Dyno_Fall_12","Dyno_Fall_12",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(4073520048U));
  ssSetChecksum1(S,(1588204043U));
  ssSetChecksum2(S,(3523201498U));
  ssSetChecksum3(S,(3559461524U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_Dyno_Fall_12(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_Fall_12", "Dyno_Fall_12",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_Dyno_Fall_12(SimStruct *S)
{
  SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *)malloc(sizeof
    (SFc2_Dyno_Fall_12InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_Dyno_Fall_12InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_Dyno_Fall_12;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_Dyno_Fall_12;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_Dyno_Fall_12;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_Dyno_Fall_12;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_Dyno_Fall_12;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_Dyno_Fall_12;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_Dyno_Fall_12;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_Dyno_Fall_12;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_Dyno_Fall_12;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_Dyno_Fall_12;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_Dyno_Fall_12;
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

void c2_Dyno_Fall_12_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_Dyno_Fall_12(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_Dyno_Fall_12(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_Dyno_Fall_12(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_Dyno_Fall_12_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/counts", "counts", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Default_State", "Default_State", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/Disable", "Disable", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/IdleRun", "IdleRun", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/Key_On_FuelPump", "Key_On_FuelPump", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/LoadReady", "LoadReady", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/Overcrank", "Overcrank", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/Stall", "Stall", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/Start", "Start", 0, 1, 0, 0, 0 },

  { 9, 0, "StateflowChart/WaitForStart", "WaitForStart", 0, 1, 0, 0, 0 },

  { 10, 0, "StateflowChart/WaitForStart.WaitForStartFuelPumpTO",
    "WaitForStartFuelPumpTO", 0, 1, 0, 0, 0 },

  { 11, 0, "StateflowChart/WaitForStart.WaitForStartStandard",
    "WaitForStartStandard", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    12                                 /* Num Block IO signals */
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
  SFc2_Dyno_Fall_12InstanceStruct *chartInstance;
  chartInstance = (SFc2_Dyno_Fall_12InstanceStruct *) ((ChartInfoStruct *)
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
