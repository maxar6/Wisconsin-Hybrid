/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c3_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c3_IN_NO_ACTIVE_CHILD          (0U)
#define c3_IN_standard                 (3U)
#define c3_IN_fill                     (1U)
#define c3_IN_sustain                  (4U)
#define c3_IN_standby                  (3U)
#define c3_IN_charge                   (1U)
#define c3_IN_init                     (2U)
#define c3_b_IN_charge                 (2U)
#define c3_b_IN_standby                (4U)
#define c3_IN_set_target               (3U)
#define c3_IN_enter                    (2U)
#define c3_IN_Locked_target            (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct *
  chartInstance);
static void enable_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c3_update_debugger_state_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c3_standard(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c3_exit_internal_standard(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c3_fill(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c3_exit_internal_fill(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c3_enter_internal_sustain(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c3_sustain(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c3_exit_internal_sustain(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_c_sf_marshall(void *chartInstanceVoid, void *c3_u);
static real_T c3_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_soc_charge_request, const char_T *c3_name);
static uint8_T c3_b_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_Dyno_IPT_2014, const char_T
  *c3_name);
static const mxArray *c3_c_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_name);
static void init_test_point_addr_map(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T *c3_soc_charge_request;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_is_fill = 0U;
  chartInstance->c3_tp_fill = 0U;
  chartInstance->c3_b_tp_charge = 0U;
  chartInstance->c3_b_tp_enter = 0U;
  chartInstance->c3_b_tp_standby = 0U;
  chartInstance->c3_tp_init = 0U;
  chartInstance->c3_is_standard = 0U;
  chartInstance->c3_tp_standard = 0U;
  chartInstance->c3_tp_charge = 0U;
  chartInstance->c3_tp_enter = 0U;
  chartInstance->c3_tp_standby = 0U;
  chartInstance->c3_is_sustain = 0U;
  chartInstance->c3_tp_sustain = 0U;
  chartInstance->c3_tp_Locked_target = 0U;
  chartInstance->c3_c_tp_charge = 0U;
  chartInstance->c3_tp_set_target = 0U;
  chartInstance->c3_c_tp_standby = 0U;
  chartInstance->c3_is_active_c3_Dyno_IPT_2014 = 0U;
  chartInstance->c3_is_c3_Dyno_IPT_2014 = 0U;
  chartInstance->c3_wascharging = 0.0;
  chartInstance->c3_target_SOC = 0.0;
  chartInstance->c3_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c3_soc_charge_request = 0.0;
  }
}

static void initialize_params_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct *
  chartInstance)
{
}

static void enable_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c3_is_active_c3_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,2);
  }

  if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_standard) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_fill) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_sustain) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
  }

  if (chartInstance->c3_is_standard == c3_IN_standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
  }

  if (chartInstance->c3_is_standard == c3_IN_charge) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c3_is_fill == c3_IN_charge) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c3_is_fill == c3_IN_standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c3_is_sustain == c3_b_IN_charge) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
  }

  if (chartInstance->c3_is_sustain == c3_b_IN_standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
  }

  if (chartInstance->c3_is_sustain == c3_IN_set_target) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,12);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
  }

  if (chartInstance->c3_is_standard == c3_IN_enter) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  if (chartInstance->c3_is_fill == c3_IN_enter) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c3_is_sustain == c3_IN_Locked_target) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c3_st = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  real_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  real_T c3_c_hoistedGlobal;
  real_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  real_T c3_d_hoistedGlobal;
  real_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  uint8_T c3_e_u;
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
  uint8_T c3_i_hoistedGlobal;
  uint8_T c3_i_u;
  const mxArray *c3_j_y = NULL;
  real_T *c3_soc_charge_request;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(9));
  c3_hoistedGlobal = *c3_soc_charge_request;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = chartInstance->c3_count;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = chartInstance->c3_target_SOC;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = chartInstance->c3_wascharging;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = chartInstance->c3_is_active_c3_Dyno_IPT_2014;
  c3_e_u = c3_e_hoistedGlobal;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = chartInstance->c3_is_c3_Dyno_IPT_2014;
  c3_f_u = c3_f_hoistedGlobal;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = chartInstance->c3_is_standard;
  c3_g_u = c3_g_hoistedGlobal;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_h_hoistedGlobal = chartInstance->c3_is_fill;
  c3_h_u = c3_h_hoistedGlobal;
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y", &c3_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 7, c3_i_y);
  c3_i_hoistedGlobal = chartInstance->c3_is_sustain;
  c3_i_u = c3_i_hoistedGlobal;
  c3_j_y = NULL;
  sf_mex_assign(&c3_j_y, sf_mex_create("y", &c3_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 8, c3_j_y);
  sf_mex_assign(&c3_st, c3_y);
  return c3_st;
}

static void set_sim_state_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T *c3_soc_charge_request;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_u = sf_mex_dup(c3_st);
  *c3_soc_charge_request = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 0)), "soc_charge_request");
  chartInstance->c3_count = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 1)), "count");
  chartInstance->c3_target_SOC = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "target_SOC");
  chartInstance->c3_wascharging = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "wascharging");
  chartInstance->c3_is_active_c3_Dyno_IPT_2014 = c3_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 4)),
     "is_active_c3_Dyno_IPT_2014");
  chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 5)),
    "is_c3_Dyno_IPT_2014");
  chartInstance->c3_is_standard = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c3_u, 6)), "is_standard");
  chartInstance->c3_is_fill = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 7)), "is_fill");
  chartInstance->c3_is_sustain = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 8)), "is_sustain");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 9)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_Dyno_IPT_2014
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_fill) {
      chartInstance->c3_tp_fill = 1U;
    } else {
      chartInstance->c3_tp_fill = 0U;
    }

    if (chartInstance->c3_is_fill == c3_IN_charge) {
      chartInstance->c3_b_tp_charge = 1U;
    } else {
      chartInstance->c3_b_tp_charge = 0U;
    }

    if (chartInstance->c3_is_fill == c3_IN_enter) {
      chartInstance->c3_b_tp_enter = 1U;
    } else {
      chartInstance->c3_b_tp_enter = 0U;
    }

    if (chartInstance->c3_is_fill == c3_IN_standby) {
      chartInstance->c3_b_tp_standby = 1U;
    } else {
      chartInstance->c3_b_tp_standby = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_init) {
      chartInstance->c3_tp_init = 1U;
    } else {
      chartInstance->c3_tp_init = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_standard) {
      chartInstance->c3_tp_standard = 1U;
    } else {
      chartInstance->c3_tp_standard = 0U;
    }

    if (chartInstance->c3_is_standard == c3_IN_charge) {
      chartInstance->c3_tp_charge = 1U;
    } else {
      chartInstance->c3_tp_charge = 0U;
    }

    if (chartInstance->c3_is_standard == c3_IN_enter) {
      chartInstance->c3_tp_enter = 1U;
    } else {
      chartInstance->c3_tp_enter = 0U;
    }

    if (chartInstance->c3_is_standard == c3_IN_standby) {
      chartInstance->c3_tp_standby = 1U;
    } else {
      chartInstance->c3_tp_standby = 0U;
    }

    if (chartInstance->c3_is_c3_Dyno_IPT_2014 == c3_IN_sustain) {
      chartInstance->c3_tp_sustain = 1U;
    } else {
      chartInstance->c3_tp_sustain = 0U;
    }

    if (chartInstance->c3_is_sustain == c3_IN_Locked_target) {
      chartInstance->c3_tp_Locked_target = 1U;
    } else {
      chartInstance->c3_tp_Locked_target = 0U;
    }

    if (chartInstance->c3_is_sustain == c3_b_IN_charge) {
      chartInstance->c3_c_tp_charge = 1U;
    } else {
      chartInstance->c3_c_tp_charge = 0U;
    }

    if (chartInstance->c3_is_sustain == c3_IN_set_target) {
      chartInstance->c3_tp_set_target = 1U;
    } else {
      chartInstance->c3_tp_set_target = 0U;
    }

    if (chartInstance->c3_is_sustain == c3_b_IN_standby) {
      chartInstance->c3_c_tp_standby = 1U;
    } else {
      chartInstance->c3_c_tp_standby = 0U;
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_c3_Dyno_IPT_2014(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c3_previousEvent;
  real_T c3_d0;
  real_T c3_d1;
  real_T c3_d2;
  real_T *c3_SOC;
  real_T *c3_cal_genset_min_SOC;
  real_T *c3_cal_genset_max_SOC;
  real_T *c3_cal_SOC_deadband;
  boolean_T *c3_fill_request;
  boolean_T *c3_sustain_request;
  real_T *c3_soc_charge_request;
  real_T *c3_Locked;
  real_T *c3_LockedSOC;
  c3_LockedSOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_Locked = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_sustain_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_fill_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_cal_SOC_deadband = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_cal_genset_max_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_cal_genset_min_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c3_set_sim_state_side_effects_c3_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,2);
  _SFD_DATA_RANGE_CHECK(*c3_SOC, 0U);
  _SFD_DATA_RANGE_CHECK(*c3_cal_genset_min_SOC, 1U);
  _SFD_DATA_RANGE_CHECK(*c3_cal_genset_max_SOC, 2U);
  _SFD_DATA_RANGE_CHECK(*c3_cal_SOC_deadband, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_fill_request, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c3_sustain_request, 5U);
  _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c3_target_SOC, 8U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c3_count, 9U);
  _SFD_DATA_RANGE_CHECK(*c3_Locked, 10U);
  _SFD_DATA_RANGE_CHECK(*c3_LockedSOC, 11U);
  c3_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,2);
  if ((int16_T)chartInstance->c3_is_active_c3_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,2);
    chartInstance->c3_is_active_c3_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c3_tp_init = 1U;
    chartInstance->c3_wascharging = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
    c3_d0 = chartInstance->c3_wascharging;
    sf_mex_printf("%s =\\n", "wascharging");
    sf_mex_call_debug("disp", 0U, 1U, 6, c3_d0);
    chartInstance->c3_count = 0.0;
    _SFD_DATA_RANGE_CHECK(chartInstance->c3_count, 9U);
    c3_d1 = chartInstance->c3_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 6, c3_d1);
  } else {
    switch (chartInstance->c3_is_c3_Dyno_IPT_2014) {
     case c3_IN_fill:
      CV_CHART_EVAL(2,0,1);
      c3_fill(chartInstance);
      break;

     case c3_IN_init:
      CV_CHART_EVAL(2,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,
            ((chartInstance->c3_count > 1000.0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c3_tp_init = 0U;
        chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_standard;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
        chartInstance->c3_tp_standard = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
        chartInstance->c3_is_standard = c3_IN_enter;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance->c3_tp_enter = 1U;
      } else {
        chartInstance->c3_count = chartInstance->c3_count + 1.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c3_count, 9U);
        c3_d2 = chartInstance->c3_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 6, c3_d2);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     case c3_IN_standard:
      CV_CHART_EVAL(2,0,3);
      c3_standard(chartInstance);
      break;

     case c3_IN_sustain:
      CV_CHART_EVAL(2,0,4);
      c3_sustain(chartInstance);
      break;

     default:
      CV_CHART_EVAL(2,0,0);
      chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
  _sfEvent_ = c3_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c3_standard(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  boolean_T c3_b_temp;
  real_T c3_d3;
  real_T c3_d4;
  real_T c3_d5;
  real_T c3_d6;
  real_T c3_d7;
  real_T c3_d8;
  boolean_T *c3_fill_request;
  boolean_T *c3_sustain_request;
  real_T *c3_SOC;
  real_T *c3_cal_genset_max_SOC;
  real_T *c3_soc_charge_request;
  real_T *c3_cal_genset_min_SOC;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_sustain_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_fill_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_cal_genset_max_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_cal_genset_min_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  c3_temp = (_SFD_CCP_CALL(6,0,((*c3_fill_request)!=0)) != 0);
  if (c3_temp) {
    c3_temp = !(_SFD_CCP_CALL(6,1,((*c3_sustain_request)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(6U, (int32_T)c3_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 6;
      sf_debug_transition_conflict_check_begin();
      if ((!(*c3_fill_request)) && (*c3_sustain_request)) {
        transitionList[numTransitions] = 8;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
    c3_exit_internal_standard(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c3_tp_standard = 0U;
    chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_fill;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c3_tp_fill = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,21);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,21);
    chartInstance->c3_is_fill = c3_IN_enter;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c3_b_tp_enter = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
    c3_b_temp = !(_SFD_CCP_CALL(8,0,((*c3_fill_request)!=0)) != 0);
    if (c3_b_temp) {
      c3_b_temp = (_SFD_CCP_CALL(8,1,((*c3_sustain_request)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(8U, (int32_T)c3_b_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
      c3_exit_internal_standard(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
      chartInstance->c3_tp_standard = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_sustain;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
      chartInstance->c3_tp_sustain = 1U;
      c3_enter_internal_sustain(chartInstance);
    } else {
      switch (chartInstance->c3_is_standard) {
       case c3_IN_charge:
        CV_STATE_EVAL(5,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c3_SOC >
                *c3_cal_genset_max_SOC)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
          chartInstance->c3_tp_charge = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
          chartInstance->c3_is_standard = c3_IN_standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
          chartInstance->c3_tp_standby = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d3 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d3);
        } else {
          *c3_soc_charge_request = 1.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d4 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d4);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
        break;

       case c3_IN_enter:
        CV_STATE_EVAL(5,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
        if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,
              ((chartInstance->c3_wascharging == 0.0)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 1;
            sf_debug_transition_conflict_check_begin();
            if (chartInstance->c3_wascharging == 1.0) {
              transitionList[numTransitions] = 4;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
          chartInstance->c3_tp_enter = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
          chartInstance->c3_is_standard = c3_IN_standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
          chartInstance->c3_tp_standby = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d5 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d5);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
          if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,
                ((chartInstance->c3_wascharging == 1.0)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
            chartInstance->c3_tp_enter = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
            chartInstance->c3_is_standard = c3_IN_charge;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
            chartInstance->c3_tp_charge = 1U;
            chartInstance->c3_wascharging = 1.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
            c3_d6 = chartInstance->c3_wascharging;
            sf_mex_printf("%s =\\n", "wascharging");
            sf_mex_call_debug("disp", 0U, 1U, 6, c3_d6);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
        break;

       case c3_IN_standby:
        CV_STATE_EVAL(5,0,3);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
        if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c3_SOC <
                *c3_cal_genset_min_SOC)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
          chartInstance->c3_tp_standby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
          chartInstance->c3_is_standard = c3_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
          chartInstance->c3_tp_charge = 1U;
          chartInstance->c3_wascharging = 1.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d7 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d7);
        } else {
          *c3_soc_charge_request = 0.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d8 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d8);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
        break;

       default:
        CV_STATE_EVAL(5,0,0);
        chartInstance->c3_is_standard = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
}

static void c3_exit_internal_standard(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c3_is_standard) {
   case c3_IN_charge:
    CV_STATE_EVAL(5,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c3_tp_charge = 0U;
    chartInstance->c3_is_standard = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    break;

   case c3_IN_enter:
    CV_STATE_EVAL(5,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
    chartInstance->c3_tp_enter = 0U;
    chartInstance->c3_is_standard = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    break;

   case c3_IN_standby:
    CV_STATE_EVAL(5,1,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
    chartInstance->c3_tp_standby = 0U;
    chartInstance->c3_is_standard = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
    break;

   default:
    CV_STATE_EVAL(5,1,0);
    chartInstance->c3_is_standard = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    break;
  }
}

static void c3_fill(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  boolean_T c3_b_temp;
  real_T c3_d9;
  real_T c3_d10;
  real_T c3_d11;
  real_T c3_d12;
  real_T c3_d13;
  real_T c3_d14;
  boolean_T *c3_fill_request;
  boolean_T *c3_sustain_request;
  real_T *c3_SOC;
  real_T *c3_cal_genset_max_SOC;
  real_T *c3_soc_charge_request;
  real_T *c3_cal_SOC_deadband;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_sustain_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_fill_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_cal_SOC_deadband = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_cal_genset_max_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
  c3_temp = !(_SFD_CCP_CALL(11,0,((*c3_fill_request)!=0)) != 0);
  if (c3_temp) {
    c3_temp = (_SFD_CCP_CALL(11,1,((*c3_sustain_request)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(11U, (int32_T)c3_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 11;
      sf_debug_transition_conflict_check_begin();
      if ((!(*c3_fill_request)) && (!(*c3_sustain_request))) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    c3_exit_internal_fill(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c3_tp_fill = 0U;
    chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_sustain;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
    chartInstance->c3_tp_sustain = 1U;
    c3_enter_internal_sustain(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    c3_b_temp = !(_SFD_CCP_CALL(7,0,((*c3_fill_request)!=0)) != 0);
    if (c3_b_temp) {
      c3_b_temp = !(_SFD_CCP_CALL(7,1,((*c3_sustain_request)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(7U, (int32_T)c3_b_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      c3_exit_internal_fill(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c3_tp_fill = 0U;
      chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_standard;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
      chartInstance->c3_tp_standard = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
      chartInstance->c3_is_standard = c3_IN_enter;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance->c3_tp_enter = 1U;
    } else {
      switch (chartInstance->c3_is_fill) {
       case c3_IN_charge:
        CV_STATE_EVAL(0,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
        if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12,0,((*c3_SOC >
                *c3_cal_genset_max_SOC)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
          chartInstance->c3_b_tp_charge = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
          chartInstance->c3_is_fill = c3_IN_standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c3_b_tp_standby = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d9 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d9);
        } else {
          *c3_soc_charge_request = 1.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d10 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d10);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        break;

       case c3_IN_enter:
        CV_STATE_EVAL(0,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
        if (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15,0,
              ((chartInstance->c3_wascharging == 1.0)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 15;
            sf_debug_transition_conflict_check_begin();
            if (chartInstance->c3_wascharging == 0.0) {
              transitionList[numTransitions] = 14;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c3_b_tp_enter = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c3_is_fill = c3_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c3_b_tp_charge = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d11 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d11);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
          if (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14,0,
                ((chartInstance->c3_wascharging == 0.0)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
            chartInstance->c3_b_tp_enter = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
            chartInstance->c3_is_fill = c3_IN_standby;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
            chartInstance->c3_b_tp_standby = 1U;
            chartInstance->c3_wascharging = 0.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
            c3_d12 = chartInstance->c3_wascharging;
            sf_mex_printf("%s =\\n", "wascharging");
            sf_mex_call_debug("disp", 0U, 1U, 6, c3_d12);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        break;

       case c3_IN_standby:
        CV_STATE_EVAL(0,0,3);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
        if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13,0,((*c3_SOC <
                *c3_cal_genset_max_SOC - *c3_cal_SOC_deadband)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
          chartInstance->c3_b_tp_standby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
          chartInstance->c3_is_fill = c3_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c3_b_tp_charge = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d13 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d13);
        } else {
          *c3_soc_charge_request = 0.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d14 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d14);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        break;

       default:
        CV_STATE_EVAL(0,0,0);
        chartInstance->c3_is_fill = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c3_exit_internal_fill(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c3_is_fill) {
   case c3_IN_charge:
    CV_STATE_EVAL(0,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c3_b_tp_charge = 0U;
    chartInstance->c3_is_fill = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    break;

   case c3_IN_enter:
    CV_STATE_EVAL(0,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c3_b_tp_enter = 0U;
    chartInstance->c3_is_fill = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    break;

   case c3_IN_standby:
    CV_STATE_EVAL(0,1,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
    chartInstance->c3_b_tp_standby = 0U;
    chartInstance->c3_is_fill = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    break;

   default:
    CV_STATE_EVAL(0,1,0);
    chartInstance->c3_is_fill = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    break;
  }
}

static void c3_enter_internal_sustain(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T c3_d15;
  real_T c3_d16;
  real_T *c3_Locked;
  real_T *c3_SOC;
  real_T *c3_LockedSOC;
  c3_LockedSOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c3_Locked = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,22);
  if (CV_TRANSITION_EVAL(22U, (int32_T)_SFD_CCP_CALL(22,0,((*c3_Locked)!=0))) !=
      0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,22);
    chartInstance->c3_is_sustain = c3_IN_Locked_target;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
    chartInstance->c3_tp_Locked_target = 1U;
    chartInstance->c3_target_SOC = *c3_LockedSOC;
    _SFD_DATA_RANGE_CHECK(chartInstance->c3_target_SOC, 8U);
    c3_d15 = chartInstance->c3_target_SOC;
    sf_mex_printf("%s =\\n", "target_SOC");
    sf_mex_call_debug("disp", 0U, 1U, 6, c3_d15);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,25);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,25);
    chartInstance->c3_is_sustain = c3_IN_set_target;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,12);
    chartInstance->c3_tp_set_target = 1U;
    chartInstance->c3_target_SOC = *c3_SOC;
    _SFD_DATA_RANGE_CHECK(chartInstance->c3_target_SOC, 8U);
    c3_d16 = chartInstance->c3_target_SOC;
    sf_mex_printf("%s =\\n", "target_SOC");
    sf_mex_call_debug("disp", 0U, 1U, 6, c3_d16);
  }
}

static void c3_sustain(SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  boolean_T c3_temp;
  boolean_T c3_b_temp;
  real_T c3_d17;
  real_T c3_d18;
  real_T c3_d19;
  real_T c3_d20;
  real_T c3_d21;
  real_T c3_d22;
  real_T c3_d23;
  real_T c3_d24;
  boolean_T *c3_fill_request;
  boolean_T *c3_sustain_request;
  real_T *c3_SOC;
  real_T *c3_cal_SOC_deadband;
  real_T *c3_soc_charge_request;
  c3_soc_charge_request = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_sustain_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c3_fill_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c3_cal_SOC_deadband = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,9);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
  c3_temp = (_SFD_CCP_CALL(10,0,((*c3_fill_request)!=0)) != 0);
  if (c3_temp) {
    c3_temp = !(_SFD_CCP_CALL(10,1,((*c3_sustain_request)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(10U, (int32_T)c3_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 10;
      sf_debug_transition_conflict_check_begin();
      if ((!(*c3_fill_request)) && (!(*c3_sustain_request))) {
        transitionList[numTransitions] = 9;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    c3_exit_internal_sustain(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
    chartInstance->c3_tp_sustain = 0U;
    chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_fill;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c3_tp_fill = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,21);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,21);
    chartInstance->c3_is_fill = c3_IN_enter;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c3_b_tp_enter = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
    c3_b_temp = !(_SFD_CCP_CALL(9,0,((*c3_fill_request)!=0)) != 0);
    if (c3_b_temp) {
      c3_b_temp = !(_SFD_CCP_CALL(9,1,((*c3_sustain_request)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(9U, (int32_T)c3_b_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      c3_exit_internal_sustain(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
      chartInstance->c3_tp_sustain = 0U;
      chartInstance->c3_is_c3_Dyno_IPT_2014 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
      chartInstance->c3_is_c3_Dyno_IPT_2014 = c3_IN_standard;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
      chartInstance->c3_tp_standard = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
      chartInstance->c3_is_standard = c3_IN_enter;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance->c3_tp_enter = 1U;
    } else {
      switch (chartInstance->c3_is_sustain) {
       case c3_IN_Locked_target:
        CV_STATE_EVAL(9,0,1);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,10);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,23);
        if (CV_TRANSITION_EVAL(23U, (int32_T)_SFD_CCP_CALL(23,0,
              ((chartInstance->c3_wascharging == 1.0)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 23;
            sf_debug_transition_conflict_check_begin();
            if (chartInstance->c3_wascharging == 0.0) {
              transitionList[numTransitions] = 24;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,23);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
          chartInstance->c3_tp_Locked_target = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
          chartInstance->c3_is_sustain = c3_b_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
          chartInstance->c3_c_tp_charge = 1U;
          chartInstance->c3_wascharging = 1.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d17 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d17);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,24);
          if (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24,0,
                ((chartInstance->c3_wascharging == 0.0)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,24);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
            chartInstance->c3_tp_Locked_target = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
            chartInstance->c3_is_sustain = c3_b_IN_standby;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
            chartInstance->c3_c_tp_standby = 1U;
            chartInstance->c3_wascharging = 0.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
            c3_d18 = chartInstance->c3_wascharging;
            sf_mex_printf("%s =\\n", "wascharging");
            sf_mex_call_debug("disp", 0U, 1U, 6, c3_d18);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
        break;

       case c3_b_IN_charge:
        CV_STATE_EVAL(9,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,11);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
        if (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16,0,((*c3_SOC >
                chartInstance->c3_target_SOC + *c3_cal_SOC_deadband)!=0))) != 0)
        {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,11);
          chartInstance->c3_c_tp_charge = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
          chartInstance->c3_is_sustain = c3_b_IN_standby;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
          chartInstance->c3_c_tp_standby = 1U;
          chartInstance->c3_wascharging = 0.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d19 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d19);
        } else {
          *c3_soc_charge_request = 1.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d20 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d20);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
        break;

       case c3_IN_set_target:
        CV_STATE_EVAL(9,0,3);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,12);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
        if (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19,0,
              ((chartInstance->c3_wascharging == 1.0)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 19;
            sf_debug_transition_conflict_check_begin();
            if (chartInstance->c3_wascharging == 0.0) {
              transitionList[numTransitions] = 18;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,12);
          chartInstance->c3_tp_set_target = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
          chartInstance->c3_is_sustain = c3_b_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
          chartInstance->c3_c_tp_charge = 1U;
          chartInstance->c3_wascharging = 1.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d21 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d21);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
          if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
                ((chartInstance->c3_wascharging == 0.0)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,12);
            chartInstance->c3_tp_set_target = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
            chartInstance->c3_is_sustain = c3_b_IN_standby;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
            chartInstance->c3_c_tp_standby = 1U;
            chartInstance->c3_wascharging = 0.0;
            _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
            c3_d22 = chartInstance->c3_wascharging;
            sf_mex_printf("%s =\\n", "wascharging");
            sf_mex_call_debug("disp", 0U, 1U, 6, c3_d22);
          }
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
        break;

       case c3_b_IN_standby:
        CV_STATE_EVAL(9,0,4);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,13);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
        if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,((*c3_SOC <
                chartInstance->c3_target_SOC - *c3_cal_SOC_deadband)!=0))) != 0)
        {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,13);
          chartInstance->c3_c_tp_standby = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
          chartInstance->c3_is_sustain = c3_b_IN_charge;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
          chartInstance->c3_c_tp_charge = 1U;
          chartInstance->c3_wascharging = 1.0;
          _SFD_DATA_RANGE_CHECK(chartInstance->c3_wascharging, 7U);
          c3_d23 = chartInstance->c3_wascharging;
          sf_mex_printf("%s =\\n", "wascharging");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d23);
        } else {
          *c3_soc_charge_request = 0.0;
          _SFD_DATA_RANGE_CHECK(*c3_soc_charge_request, 6U);
          c3_d24 = *c3_soc_charge_request;
          sf_mex_printf("%s =\\n", "soc_charge_request");
          sf_mex_call_debug("disp", 0U, 1U, 6, c3_d24);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
        break;

       default:
        CV_STATE_EVAL(9,0,0);
        chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
        break;
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
}

static void c3_exit_internal_sustain(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c3_is_sustain) {
   case c3_IN_Locked_target:
    CV_STATE_EVAL(9,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
    chartInstance->c3_tp_Locked_target = 0U;
    chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
    break;

   case c3_b_IN_charge:
    CV_STATE_EVAL(9,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,11);
    chartInstance->c3_c_tp_charge = 0U;
    chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
    break;

   case c3_IN_set_target:
    CV_STATE_EVAL(9,1,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,12);
    chartInstance->c3_tp_set_target = 0U;
    chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
    break;

   case c3_b_IN_standby:
    CV_STATE_EVAL(9,1,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,13);
    chartInstance->c3_c_tp_standby = 0U;
    chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
    break;

   default:
    CV_STATE_EVAL(9,1,0);
    chartInstance->c3_is_sustain = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
    break;
  }
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

const mxArray *sf_c3_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
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
  SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
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
  SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
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
  real_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((real_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static real_T c3_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_soc_charge_request, const
  char_T *c3_name)
{
  real_T c3_y;
  real_T c3_d25;
  sf_mex_import(c3_name, sf_mex_dup(c3_soc_charge_request), &c3_d25, 1, 0, 0U, 0,
                0U, 0);
  c3_y = c3_d25;
  sf_mex_destroy(&c3_soc_charge_request);
  return c3_y;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c3_b_is_active_c3_Dyno_IPT_2014
  , const char_T *c3_name)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_name, sf_mex_dup(c3_b_is_active_c3_Dyno_IPT_2014), &c3_u0, 1,
                3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_b_is_active_c3_Dyno_IPT_2014);
  return c3_y;
}

static const mxArray *c3_c_emlrt_marshallIn(SFc3_Dyno_IPT_2014InstanceStruct
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

static void init_test_point_addr_map(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c3_testPointAddrMap[0] = &chartInstance->c3_wascharging;
  chartInstance->c3_testPointAddrMap[1] = &chartInstance->c3_target_SOC;
  chartInstance->c3_testPointAddrMap[2] = &chartInstance->c3_count;
  chartInstance->c3_testPointAddrMap[3] = &chartInstance->c3_tp_fill;
  chartInstance->c3_testPointAddrMap[4] = &chartInstance->c3_b_tp_charge;
  chartInstance->c3_testPointAddrMap[5] = &chartInstance->c3_b_tp_enter;
  chartInstance->c3_testPointAddrMap[6] = &chartInstance->c3_b_tp_standby;
  chartInstance->c3_testPointAddrMap[7] = &chartInstance->c3_tp_init;
  chartInstance->c3_testPointAddrMap[8] = &chartInstance->c3_tp_standard;
  chartInstance->c3_testPointAddrMap[9] = &chartInstance->c3_tp_charge;
  chartInstance->c3_testPointAddrMap[10] = &chartInstance->c3_tp_enter;
  chartInstance->c3_testPointAddrMap[11] = &chartInstance->c3_tp_standby;
  chartInstance->c3_testPointAddrMap[12] = &chartInstance->c3_tp_sustain;
  chartInstance->c3_testPointAddrMap[13] = &chartInstance->c3_tp_Locked_target;
  chartInstance->c3_testPointAddrMap[14] = &chartInstance->c3_c_tp_charge;
  chartInstance->c3_testPointAddrMap[15] = &chartInstance->c3_tp_set_target;
  chartInstance->c3_testPointAddrMap[16] = &chartInstance->c3_c_tp_standby;
}

static void **get_test_point_address_map(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c3_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc3_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c3_testPointMappingInfo;
}

static void init_dsm_address_info(SFc3_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c3_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2735205385U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2195805246U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2345101821U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(681410327U);
}

mxArray *sf_c3_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3094703463U);
    pr[1] = (double)(4220086060U);
    pr[2] = (double)(1751024261U);
    pr[3] = (double)(1395457031U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c3_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[84],T\"soc_charge_request\",},{M[3],M[96],T\"count\",},{M[3],M[86],T\"target_SOC\",},{M[3],M[85],T\"wascharging\",},{M[8],M[0],T\"is_active_c3_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c3_Dyno_IPT_2014\",},{M[9],M[29],T\"is_standard\",},{M[9],M[30],T\"is_fill\",},{M[9],M[31],T\"is_sustain\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           3,
           14,
           26,
           12,
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
          init_script_number_translation(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Dyno_IPT_2014MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"SOC",0,
                              (MexFcnForType)c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_genset_min_SOC",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_genset_max_SOC",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_SOC_deadband",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "fill_request",0,(MexFcnForType)c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "sustain_request",0,(MexFcnForType)
                              c3_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "soc_charge_request",0,(MexFcnForType)
                              c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "wascharging",0,(MexFcnForType)c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(8,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "target_SOC",0,(MexFcnForType)c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,0,0,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Locked",
                              0,(MexFcnForType)c3_c_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "LockedSOC",0,(MexFcnForType)c3_c_sf_marshall);
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
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,4);
          _SFD_CH_SUBSTATE_INDEX(2,5);
          _SFD_CH_SUBSTATE_INDEX(3,9);
          _SFD_ST_SUBSTATE_COUNT(0,3);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,3);
          _SFD_ST_SUBSTATE_INDEX(5,0,6);
          _SFD_ST_SUBSTATE_INDEX(5,1,7);
          _SFD_ST_SUBSTATE_INDEX(5,2,8);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,4);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_INDEX(9,1,11);
          _SFD_ST_SUBSTATE_INDEX(9,2,12);
          _SFD_ST_SUBSTATE_INDEX(9,3,13);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,3,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(5,3,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

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
          static unsigned int sStartGuardMap[] = { 1, 18 };

          static unsigned int sEndGuardMap[] = { 13, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 14, 34 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 14, 34 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 18 };

          static unsigned int sEndGuardMap[] = { 13, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 46 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(24,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(23,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
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

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

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

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 18 };

          static unsigned int sEndGuardMap[] = { 13, 33 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 14, 34 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 18 };

          static unsigned int sEndGuardMap[] = { 14, 33 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 19 };

          static unsigned int sEndGuardMap[] = { 14, 34 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 18 };

          static unsigned int sEndGuardMap[] = { 13, 33 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 46 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(24,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(24,
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

        _SFD_TRANS_COV_WTS(21,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(21,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(22,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(22,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(23,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(23,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(25,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(25,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c3_SOC;
          real_T *c3_cal_genset_min_SOC;
          real_T *c3_cal_genset_max_SOC;
          real_T *c3_cal_SOC_deadband;
          boolean_T *c3_fill_request;
          boolean_T *c3_sustain_request;
          real_T *c3_soc_charge_request;
          real_T *c3_Locked;
          real_T *c3_LockedSOC;
          c3_LockedSOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c3_Locked = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c3_soc_charge_request = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c3_sustain_request = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 5);
          c3_fill_request = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            4);
          c3_cal_SOC_deadband = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c3_cal_genset_max_SOC = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c3_cal_genset_min_SOC = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c3_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_SOC);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_cal_genset_min_SOC);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_cal_genset_max_SOC);
          _SFD_SET_DATA_VALUE_PTR(3U, c3_cal_SOC_deadband);
          _SFD_SET_DATA_VALUE_PTR(4U, c3_fill_request);
          _SFD_SET_DATA_VALUE_PTR(5U, c3_sustain_request);
          _SFD_SET_DATA_VALUE_PTR(6U, c3_soc_charge_request);
          _SFD_SET_DATA_VALUE_PTR(7U, &chartInstance->c3_wascharging);
          _SFD_SET_DATA_VALUE_PTR(8U, &chartInstance->c3_target_SOC);
          _SFD_SET_DATA_VALUE_PTR(9U, &chartInstance->c3_count);
          _SFD_SET_DATA_VALUE_PTR(10U, c3_Locked);
          _SFD_SET_DATA_VALUE_PTR(11U, c3_LockedSOC);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c3_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c3_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c3_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_Dyno_IPT_2014
    ((SFc3_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c3_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c3_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c3_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c3_Dyno_IPT_2014(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c3_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c3_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_Dyno_IPT_2014((SFc3_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c3_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",3,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",3,8);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",3,1);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3079620368U));
  ssSetChecksum1(S,(479234203U));
  ssSetChecksum2(S,(557336786U));
  ssSetChecksum3(S,(2459066629U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",3);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_Dyno_IPT_2014(SimStruct *S)
{
  SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc3_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_Dyno_IPT_2014;
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

void c3_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_Dyno_IPT_2014_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/wascharging", "wascharging", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/target_SOC", "target_SOC", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/count", "count", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/fill", "fill", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/fill.charge", "charge", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/fill.enter", "enter", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/fill.standby", "standby", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/init", "init", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/standard", "standard", 0, 1, 0, 0, 0 },

  { 9, 0, "StateflowChart/standard.charge", "charge", 0, 1, 0, 0, 0 },

  { 10, 0, "StateflowChart/standard.enter", "enter", 0, 1, 0, 0, 0 },

  { 11, 0, "StateflowChart/standard.standby", "standby", 0, 1, 0, 0, 0 },

  { 12, 0, "StateflowChart/sustain", "sustain", 0, 1, 0, 0, 0 },

  { 13, 0, "StateflowChart/sustain.Locked_target", "Locked_target", 0, 1, 0, 0,
    0 },

  { 14, 0, "StateflowChart/sustain.charge", "charge", 0, 1, 0, 0, 0 },

  { 15, 0, "StateflowChart/sustain.set_target", "set_target", 0, 1, 0, 0, 0 },

  { 16, 0, "StateflowChart/sustain.standby", "standby", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    17                                 /* Num Block IO signals */
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
  SFc3_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc3_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
