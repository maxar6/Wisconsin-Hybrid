/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c33_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c33_IN_NO_ACTIVE_CHILD         (0U)
#define c33_IN_default                 (4U)
#define c33_IN_Startup                 (3U)
#define c33_IN_Running                 (1U)
#define c33_IN_default_gen             (1U)
#define c33_IN_low_gen                 (3U)
#define c33_IN_medium_gen              (4U)
#define c33_IN_high_gen                (2U)
#define c33_IN_Shutdown                (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c33_update_debugger_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c33_st);
static void c33_set_sim_state_side_effects_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c33_Mooventure2016_Rev5(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c33_Running(SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c33_machineNumber, uint32_T
  c33_chartNumber);
static const mxArray *c33_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static int32_T c33_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static const mxArray *c33_b_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static uint8_T c33_b_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_b_tp_default, const char_T *c33_identifier);
static uint8_T c33_c_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static const mxArray *c33_c_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData);
static real_T c33_d_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_Genset_Enable, const char_T *c33_identifier);
static real_T c33_e_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId);
static void c33_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData);
static const mxArray *c33_f_emlrt_marshallIn
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c33_b_setSimStateSideEffectsInfo, const char_T *c33_identifier);
static const mxArray *c33_g_emlrt_marshallIn
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c33_u,
   const emlrtMsgIdentifier *c33_parentId);
static void init_dsm_address_info(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c33_Genset_Enable;
  real_T *c33_Genset_Load;
  real_T *c33_Genset_RPM;
  real_T *c33_Genset_Throttle;
  c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_Genset_Enable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c33_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c33_doSetSimStateSideEffects = 0U;
  chartInstance->c33_setSimStateSideEffectsInfo = NULL;
  chartInstance->c33_is_Running = 0U;
  chartInstance->c33_tp_Running = 0U;
  chartInstance->c33_tp_default_gen = 0U;
  chartInstance->c33_tp_high_gen = 0U;
  chartInstance->c33_tp_low_gen = 0U;
  chartInstance->c33_tp_medium_gen = 0U;
  chartInstance->c33_tp_Shutdown = 0U;
  chartInstance->c33_tp_Startup = 0U;
  chartInstance->c33_tp_default = 0U;
  chartInstance->c33_is_active_c33_Mooventure2016_Rev5 = 0U;
  chartInstance->c33_is_c33_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c33_Genset_Enable = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c33_Genset_Load = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c33_Genset_RPM = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c33_Genset_Throttle = 0.0;
  }
}

static void initialize_params_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c33_update_debugger_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c33_prevAniVal;
  c33_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c33_is_active_c33_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 32U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_default) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Startup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Running) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_Running == c33_IN_default_gen) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_Running == c33_IN_low_gen) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_Running == c33_IN_medium_gen) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_Running == c33_IN_high_gen) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
  }

  if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Shutdown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c33_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c33_sfEvent);
  }

  sf_debug_set_animation(c33_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c33_st;
  const mxArray *c33_y = NULL;
  real_T c33_hoistedGlobal;
  real_T c33_u;
  const mxArray *c33_b_y = NULL;
  real_T c33_b_hoistedGlobal;
  real_T c33_b_u;
  const mxArray *c33_c_y = NULL;
  real_T c33_c_hoistedGlobal;
  real_T c33_c_u;
  const mxArray *c33_d_y = NULL;
  real_T c33_d_hoistedGlobal;
  real_T c33_d_u;
  const mxArray *c33_e_y = NULL;
  uint8_T c33_e_hoistedGlobal;
  uint8_T c33_e_u;
  const mxArray *c33_f_y = NULL;
  uint8_T c33_f_hoistedGlobal;
  uint8_T c33_f_u;
  const mxArray *c33_g_y = NULL;
  uint8_T c33_g_hoistedGlobal;
  uint8_T c33_g_u;
  const mxArray *c33_h_y = NULL;
  real_T *c33_Genset_Enable;
  real_T *c33_Genset_Load;
  real_T *c33_Genset_RPM;
  real_T *c33_Genset_Throttle;
  c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_Genset_Enable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_st = NULL;
  c33_st = NULL;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_createcellarray(7));
  c33_hoistedGlobal = *c33_Genset_Enable;
  c33_u = c33_hoistedGlobal;
  c33_b_y = NULL;
  sf_mex_assign(&c33_b_y, sf_mex_create("y", &c33_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 0, c33_b_y);
  c33_b_hoistedGlobal = *c33_Genset_Load;
  c33_b_u = c33_b_hoistedGlobal;
  c33_c_y = NULL;
  sf_mex_assign(&c33_c_y, sf_mex_create("y", &c33_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 1, c33_c_y);
  c33_c_hoistedGlobal = *c33_Genset_RPM;
  c33_c_u = c33_c_hoistedGlobal;
  c33_d_y = NULL;
  sf_mex_assign(&c33_d_y, sf_mex_create("y", &c33_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 2, c33_d_y);
  c33_d_hoistedGlobal = *c33_Genset_Throttle;
  c33_d_u = c33_d_hoistedGlobal;
  c33_e_y = NULL;
  sf_mex_assign(&c33_e_y, sf_mex_create("y", &c33_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 3, c33_e_y);
  c33_e_hoistedGlobal = chartInstance->c33_is_active_c33_Mooventure2016_Rev5;
  c33_e_u = c33_e_hoistedGlobal;
  c33_f_y = NULL;
  sf_mex_assign(&c33_f_y, sf_mex_create("y", &c33_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 4, c33_f_y);
  c33_f_hoistedGlobal = chartInstance->c33_is_c33_Mooventure2016_Rev5;
  c33_f_u = c33_f_hoistedGlobal;
  c33_g_y = NULL;
  sf_mex_assign(&c33_g_y, sf_mex_create("y", &c33_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 5, c33_g_y);
  c33_g_hoistedGlobal = chartInstance->c33_is_Running;
  c33_g_u = c33_g_hoistedGlobal;
  c33_h_y = NULL;
  sf_mex_assign(&c33_h_y, sf_mex_create("y", &c33_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c33_y, 6, c33_h_y);
  sf_mex_assign(&c33_st, c33_y);
  return c33_st;
}

static void set_sim_state_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c33_st)
{
  const mxArray *c33_u;
  real_T *c33_Genset_Enable;
  real_T *c33_Genset_Load;
  real_T *c33_Genset_RPM;
  real_T *c33_Genset_Throttle;
  c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_Genset_Enable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_u = sf_mex_dup(c33_st);
  *c33_Genset_Enable = c33_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c33_u, 0)), "Genset_Enable");
  *c33_Genset_Load = c33_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c33_u, 1)), "Genset_Load");
  *c33_Genset_RPM = c33_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c33_u, 2)), "Genset_RPM");
  *c33_Genset_Throttle = c33_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c33_u, 3)), "Genset_Throttle");
  chartInstance->c33_is_active_c33_Mooventure2016_Rev5 = c33_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c33_u, 4)),
     "is_active_c33_Mooventure2016_Rev5");
  chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c33_u, 5)),
     "is_c33_Mooventure2016_Rev5");
  chartInstance->c33_is_Running = c33_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c33_u, 6)), "is_Running");
  sf_mex_assign(&chartInstance->c33_setSimStateSideEffectsInfo,
                c33_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c33_u, 7)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c33_u);
  chartInstance->c33_doSetSimStateSideEffects = 1U;
  c33_update_debugger_state_c33_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c33_st);
}

static void c33_set_sim_state_side_effects_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c33_doSetSimStateSideEffects != 0) {
    if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Running) {
      chartInstance->c33_tp_Running = 1U;
    } else {
      chartInstance->c33_tp_Running = 0U;
    }

    if (chartInstance->c33_is_Running == c33_IN_default_gen) {
      chartInstance->c33_tp_default_gen = 1U;
    } else {
      chartInstance->c33_tp_default_gen = 0U;
    }

    if (chartInstance->c33_is_Running == c33_IN_high_gen) {
      chartInstance->c33_tp_high_gen = 1U;
    } else {
      chartInstance->c33_tp_high_gen = 0U;
    }

    if (chartInstance->c33_is_Running == c33_IN_low_gen) {
      chartInstance->c33_tp_low_gen = 1U;
    } else {
      chartInstance->c33_tp_low_gen = 0U;
    }

    if (chartInstance->c33_is_Running == c33_IN_medium_gen) {
      chartInstance->c33_tp_medium_gen = 1U;
    } else {
      chartInstance->c33_tp_medium_gen = 0U;
    }

    if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Shutdown) {
      chartInstance->c33_tp_Shutdown = 1U;
    } else {
      chartInstance->c33_tp_Shutdown = 0U;
    }

    if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_Startup) {
      chartInstance->c33_tp_Startup = 1U;
    } else {
      chartInstance->c33_tp_Startup = 0U;
    }

    if (chartInstance->c33_is_c33_Mooventure2016_Rev5 == c33_IN_default) {
      chartInstance->c33_tp_default = 1U;
    } else {
      chartInstance->c33_tp_default = 0U;
    }

    chartInstance->c33_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c33_setSimStateSideEffectsInfo);
}

static void sf_c33_Mooventure2016_Rev5(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c33_temp;
  boolean_T c33_b_temp;
  real_T *c33_SOC_Low;
  real_T *c33_SOC_High;
  real_T *c33_SOC_Critical;
  real_T *c33_Speed_On;
  real_T *c33_Speed_Off;
  real_T *c33_SOC;
  real_T *c33_Coolant_Temp;
  real_T *c33_Coolant_Cold;
  real_T *c33_Coolant_Warm;
  real_T *c33_Coolant_Hot;
  real_T *c33_Low_RPM;
  real_T *c33_Medium_RPM;
  real_T *c33_High_RPM;
  real_T *c33_Low_Throttle;
  real_T *c33_Medium_Throttle;
  real_T *c33_High_Throttle;
  real_T *c33_Genset_Enable;
  real_T *c33_Genset_Load;
  real_T *c33_Genset_RPM;
  real_T *c33_Genset_Throttle;
  real_T *c33_Engine_On;
  real_T *c33_Engine_RPM;
  c33_Engine_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
  c33_Engine_On = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
  c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_Genset_Enable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c33_High_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c33_Medium_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c33_Low_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c33_High_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c33_Medium_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c33_Low_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c33_Coolant_Hot = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c33_Coolant_Warm = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c33_Coolant_Cold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c33_Coolant_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c33_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c33_Speed_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c33_Speed_On = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c33_SOC_Critical = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c33_SOC_High = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c33_SOC_Low = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c33_set_sim_state_side_effects_c33_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c33_SOC_Low, 0U);
  _SFD_DATA_RANGE_CHECK(*c33_SOC_High, 1U);
  _SFD_DATA_RANGE_CHECK(*c33_SOC_Critical, 2U);
  _SFD_DATA_RANGE_CHECK(*c33_Speed_On, 3U);
  _SFD_DATA_RANGE_CHECK(*c33_Speed_Off, 4U);
  _SFD_DATA_RANGE_CHECK(*c33_SOC, 5U);
  _SFD_DATA_RANGE_CHECK(*c33_Coolant_Temp, 6U);
  _SFD_DATA_RANGE_CHECK(*c33_Coolant_Cold, 7U);
  _SFD_DATA_RANGE_CHECK(*c33_Coolant_Warm, 8U);
  _SFD_DATA_RANGE_CHECK(*c33_Coolant_Hot, 9U);
  _SFD_DATA_RANGE_CHECK(*c33_Low_RPM, 10U);
  _SFD_DATA_RANGE_CHECK(*c33_Medium_RPM, 11U);
  _SFD_DATA_RANGE_CHECK(*c33_High_RPM, 12U);
  _SFD_DATA_RANGE_CHECK(*c33_Low_Throttle, 13U);
  _SFD_DATA_RANGE_CHECK(*c33_Medium_Throttle, 14U);
  _SFD_DATA_RANGE_CHECK(*c33_High_Throttle, 15U);
  _SFD_DATA_RANGE_CHECK(*c33_Genset_Enable, 16U);
  _SFD_DATA_RANGE_CHECK(*c33_Genset_Load, 17U);
  _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
  _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
  _SFD_DATA_RANGE_CHECK(*c33_Engine_On, 20U);
  _SFD_DATA_RANGE_CHECK(*c33_Engine_RPM, 21U);
  chartInstance->c33_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
  if ((int16_T)chartInstance->c33_is_active_c33_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
    chartInstance->c33_is_active_c33_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c33_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
    chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_IN_default;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
    chartInstance->c33_tp_default = 1U;
  } else {
    switch (chartInstance->c33_is_c33_Mooventure2016_Rev5) {
     case c33_IN_Running:
      CV_CHART_EVAL(32, 0, 1);
      c33_Running(chartInstance);
      break;

     case c33_IN_Shutdown:
      CV_CHART_EVAL(32, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   chartInstance->c33_sfEvent);
      if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13U, 0, *c33_Engine_RPM
            < 200.0 != 0U, chartInstance->c33_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_Shutdown = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_default = 1U;
      } else {
        *c33_Genset_Enable = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Enable, 16U);
        *c33_Genset_Throttle = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
        *c33_Genset_RPM = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_Startup:
      CV_CHART_EVAL(32, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c33_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c33_Engine_On !=
            0U, chartInstance->c33_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_Startup = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_IN_Running;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_Running = 1U;
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c33_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_Running = c33_IN_default_gen;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_default_gen = 1U;
      } else {
        *c33_Genset_Enable = 1.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Enable, 16U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_default:
      CV_CHART_EVAL(32, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c33_sfEvent);
      c33_temp = (_SFD_CCP_CALL(1U, 0, *c33_SOC_Critical != 0U,
        chartInstance->c33_sfEvent) != 0);
      if (!c33_temp) {
        c33_b_temp = (_SFD_CCP_CALL(1U, 1, *c33_SOC_Low != 0U,
          chartInstance->c33_sfEvent) != 0);
        if (c33_b_temp) {
          c33_b_temp = (_SFD_CCP_CALL(1U, 2, *c33_Speed_On != 0U,
            chartInstance->c33_sfEvent) != 0);
        }

        c33_temp = c33_b_temp;
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c33_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_default = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_IN_Startup;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_Startup = 1U;
      } else {
        *c33_Genset_Enable = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Enable, 16U);
        *c33_Genset_Load = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Load, 17U);
        *c33_Genset_RPM = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
        *c33_Genset_Throttle = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, chartInstance->c33_sfEvent);
      break;

     default:
      CV_CHART_EVAL(32, 0, 0);
      chartInstance->c33_is_c33_Mooventure2016_Rev5 = (uint8_T)
        c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, chartInstance->c33_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc33_Mooventure2016_Rev5
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void c33_Running(SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c33_temp;
  boolean_T c33_b_temp;
  boolean_T c33_c_temp;
  boolean_T c33_d_temp;
  boolean_T c33_e_temp;
  boolean_T c33_f_temp;
  real_T *c33_SOC_High;
  real_T *c33_Speed_Off;
  real_T *c33_SOC_Critical;
  real_T *c33_Genset_Load;
  real_T *c33_Coolant_Temp;
  real_T *c33_Coolant_Cold;
  real_T *c33_Genset_RPM;
  real_T *c33_Genset_Throttle;
  real_T *c33_High_RPM;
  real_T *c33_High_Throttle;
  real_T *c33_Coolant_Warm;
  real_T *c33_Low_RPM;
  real_T *c33_Low_Throttle;
  real_T *c33_Coolant_Hot;
  real_T *c33_Medium_RPM;
  real_T *c33_Medium_Throttle;
  c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c33_High_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 15);
  c33_Medium_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 14);
  c33_Low_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
  c33_High_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
  c33_Medium_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c33_Low_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
  c33_Coolant_Hot = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c33_Coolant_Warm = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c33_Coolant_Cold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c33_Coolant_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c33_Speed_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c33_SOC_Critical = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c33_SOC_High = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c33_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U, chartInstance->c33_sfEvent);
  c33_temp = (_SFD_CCP_CALL(12U, 0, *c33_SOC_High != 0U,
    chartInstance->c33_sfEvent) != 0);
  if (!c33_temp) {
    c33_b_temp = (_SFD_CCP_CALL(12U, 1, *c33_Speed_Off != 0U,
      chartInstance->c33_sfEvent) != 0);
    if (c33_b_temp) {
      c33_b_temp = !(_SFD_CCP_CALL(12U, 2, *c33_SOC_Critical != 0U,
        chartInstance->c33_sfEvent) != 0);
    }

    c33_temp = c33_b_temp;
  }

  if (CV_TRANSITION_EVAL(12U, (int32_T)c33_temp)) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, chartInstance->c33_sfEvent);
    switch (chartInstance->c33_is_Running) {
     case c33_IN_default_gen:
      CV_STATE_EVAL(0, 1, 1);
      chartInstance->c33_tp_default_gen = 0U;
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_high_gen:
      CV_STATE_EVAL(0, 1, 2);
      chartInstance->c33_tp_high_gen = 0U;
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_low_gen:
      CV_STATE_EVAL(0, 1, 3);
      chartInstance->c33_tp_low_gen = 0U;
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_medium_gen:
      CV_STATE_EVAL(0, 1, 4);
      chartInstance->c33_tp_medium_gen = 0U;
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
      break;

     default:
      CV_STATE_EVAL(0, 1, 0);
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
      break;
    }

    chartInstance->c33_tp_Running = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c33_sfEvent);
    chartInstance->c33_is_c33_Mooventure2016_Rev5 = c33_IN_Shutdown;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c33_sfEvent);
    chartInstance->c33_tp_Shutdown = 1U;
  } else {
    *c33_Genset_Load = 1.0;
    _SFD_DATA_RANGE_CHECK(*c33_Genset_Load, 17U);
    switch (chartInstance->c33_is_Running) {
     case c33_IN_default_gen:
      CV_STATE_EVAL(0, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c33_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c33_Coolant_Temp
            > *c33_Coolant_Cold != 0U, chartInstance->c33_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_default_gen = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_Running = c33_IN_low_gen;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_low_gen = 1U;
      } else {
        *c33_Genset_RPM = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
        *c33_Genset_Throttle = 0.0;
        _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_high_gen:
      CV_STATE_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   chartInstance->c33_sfEvent);
      if (CV_TRANSITION_EVAL(7U, !(_SFD_CCP_CALL(7U, 0, *c33_SOC_Critical != 0U,
             chartInstance->c33_sfEvent) != 0))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if (*c33_SOC_High) {
            transitionList[numTransitions] = 11;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_high_gen = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_Running = c33_IN_medium_gen;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_medium_gen = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                     chartInstance->c33_sfEvent);
        if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0, *c33_SOC_High
              != 0U, chartInstance->c33_sfEvent))) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_high_gen = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
          chartInstance->c33_is_Running = c33_IN_default_gen;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_default_gen = 1U;
        } else {
          *c33_Genset_RPM = *c33_High_RPM;
          _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
          *c33_Genset_Throttle = *c33_High_Throttle;
          _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_low_gen:
      CV_STATE_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   chartInstance->c33_sfEvent);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c33_Coolant_Temp
            > *c33_Coolant_Warm != 0U, chartInstance->c33_sfEvent))) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if ((*c33_Coolant_Temp < *c33_Coolant_Cold - 3.0) || (*c33_SOC_High !=
               0.0) || (*c33_Speed_Off != 0.0)) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_low_gen = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_Running = c33_IN_medium_gen;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_medium_gen = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     chartInstance->c33_sfEvent);
        c33_c_temp = (_SFD_CCP_CALL(9U, 0, *c33_Coolant_Temp < *c33_Coolant_Cold
          - 3.0 != 0U, chartInstance->c33_sfEvent) != 0);
        if (!c33_c_temp) {
          c33_c_temp = (_SFD_CCP_CALL(9U, 1, *c33_SOC_High != 0U,
            chartInstance->c33_sfEvent) != 0);
        }

        c33_d_temp = c33_c_temp;
        if (!c33_d_temp) {
          c33_d_temp = (_SFD_CCP_CALL(9U, 2, *c33_Speed_Off != 0U,
            chartInstance->c33_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(9U, (int32_T)c33_d_temp)) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_low_gen = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
          chartInstance->c33_is_Running = c33_IN_default_gen;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_default_gen = 1U;
        } else {
          *c33_Genset_RPM = *c33_Low_RPM;
          _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
          *c33_Genset_Throttle = *c33_Low_Throttle;
          _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c33_sfEvent);
      break;

     case c33_IN_medium_gen:
      CV_STATE_EVAL(0, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c33_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c33_sfEvent);
      c33_e_temp = (_SFD_CCP_CALL(6U, 0, *c33_Coolant_Temp > *c33_Coolant_Hot !=
        0U, chartInstance->c33_sfEvent) != 0);
      if (c33_e_temp) {
        c33_e_temp = (_SFD_CCP_CALL(6U, 1, *c33_SOC_Critical != 0U,
          chartInstance->c33_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(6U, (int32_T)c33_e_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions = 1;
          transitionList[0] = 6;
          sf_debug_transition_conflict_check_begin();
          if (*c33_Coolant_Temp < *c33_Coolant_Warm - 3.0) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          if ((*c33_SOC_High != 0.0) || (*c33_Speed_Off != 0.0)) {
            transitionList[numTransitions] = 10;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_medium_gen = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
        chartInstance->c33_is_Running = c33_IN_high_gen;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c33_sfEvent);
        chartInstance->c33_tp_high_gen = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                     chartInstance->c33_sfEvent);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
              *c33_Coolant_Temp < *c33_Coolant_Warm - 3.0 != 0U,
              chartInstance->c33_sfEvent))) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions = 1;
            transitionList[0] = 8;
            sf_debug_transition_conflict_check_begin();
            if ((*c33_SOC_High != 0.0) || (*c33_Speed_Off != 0.0)) {
              transitionList[numTransitions] = 10;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_medium_gen = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
          chartInstance->c33_is_Running = c33_IN_low_gen;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c33_sfEvent);
          chartInstance->c33_tp_low_gen = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                       chartInstance->c33_sfEvent);
          c33_f_temp = (_SFD_CCP_CALL(10U, 0, *c33_SOC_High != 0U,
            chartInstance->c33_sfEvent) != 0);
          if (!c33_f_temp) {
            c33_f_temp = (_SFD_CCP_CALL(10U, 1, *c33_Speed_Off != 0U,
              chartInstance->c33_sfEvent) != 0);
          }

          if (CV_TRANSITION_EVAL(10U, (int32_T)c33_f_temp)) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, chartInstance->c33_sfEvent);
            chartInstance->c33_tp_medium_gen = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c33_sfEvent);
            chartInstance->c33_is_Running = c33_IN_default_gen;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
            chartInstance->c33_tp_default_gen = 1U;
          } else {
            *c33_Genset_RPM = *c33_Medium_RPM;
            _SFD_DATA_RANGE_CHECK(*c33_Genset_RPM, 18U);
            *c33_Genset_Throttle = *c33_Medium_Throttle;
            _SFD_DATA_RANGE_CHECK(*c33_Genset_Throttle, 19U);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c33_sfEvent);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);
      chartInstance->c33_is_Running = (uint8_T)c33_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c33_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c33_sfEvent);
}

static void init_script_number_translation(uint32_T c33_machineNumber, uint32_T
  c33_chartNumber)
{
}

const mxArray *sf_c33_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c33_nameCaptureInfo = NULL;
  c33_nameCaptureInfo = NULL;
  sf_mex_assign(&c33_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c33_nameCaptureInfo;
}

static const mxArray *c33_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  int32_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(int32_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c33_mxArrayOutData, c33_y);
  return c33_mxArrayOutData;
}

static int32_T c33_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  int32_T c33_y;
  int32_T c33_i0;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_i0, 1, 6, 0U, 0, 0U, 0);
  c33_y = c33_i0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_b_sfEvent;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  int32_T c33_y;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_b_sfEvent = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_b_sfEvent),
    &c33_thisId);
  sf_mex_destroy(&c33_b_sfEvent);
  *(int32_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

static const mxArray *c33_b_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  uint8_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(uint8_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c33_mxArrayOutData, c33_y);
  return c33_mxArrayOutData;
}

static uint8_T c33_b_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_b_tp_default, const char_T *c33_identifier)
{
  uint8_T c33_y;
  emlrtMsgIdentifier c33_thisId;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_b_tp_default),
    &c33_thisId);
  sf_mex_destroy(&c33_b_tp_default);
  return c33_y;
}

static uint8_T c33_c_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  uint8_T c33_y;
  uint8_T c33_u0;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_u0, 1, 3, 0U, 0, 0U, 0);
  c33_y = c33_u0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_b_tp_default;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  uint8_T c33_y;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_b_tp_default = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_b_tp_default),
    &c33_thisId);
  sf_mex_destroy(&c33_b_tp_default);
  *(uint8_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

static const mxArray *c33_c_sf_marshallOut(void *chartInstanceVoid, void
  *c33_inData)
{
  const mxArray *c33_mxArrayOutData = NULL;
  real_T c33_u;
  const mxArray *c33_y = NULL;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_mxArrayOutData = NULL;
  c33_u = *(real_T *)c33_inData;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_create("y", &c33_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c33_mxArrayOutData, c33_y);
  return c33_mxArrayOutData;
}

static real_T c33_d_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_Genset_Enable, const char_T *c33_identifier)
{
  real_T c33_y;
  emlrtMsgIdentifier c33_thisId;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_Genset_Enable),
    &c33_thisId);
  sf_mex_destroy(&c33_Genset_Enable);
  return c33_y;
}

static real_T c33_e_emlrt_marshallIn(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c33_u, const emlrtMsgIdentifier *c33_parentId)
{
  real_T c33_y;
  real_T c33_d0;
  sf_mex_import(c33_parentId, sf_mex_dup(c33_u), &c33_d0, 1, 0, 0U, 0, 0U, 0);
  c33_y = c33_d0;
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void c33_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c33_mxArrayInData, const char_T *c33_varName, void *c33_outData)
{
  const mxArray *c33_Genset_Enable;
  const char_T *c33_identifier;
  emlrtMsgIdentifier c33_thisId;
  real_T c33_y;
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c33_Genset_Enable = sf_mex_dup(c33_mxArrayInData);
  c33_identifier = c33_varName;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  c33_y = c33_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c33_Genset_Enable),
    &c33_thisId);
  sf_mex_destroy(&c33_Genset_Enable);
  *(real_T *)c33_outData = c33_y;
  sf_mex_destroy(&c33_mxArrayInData);
}

static const mxArray *c33_f_emlrt_marshallIn
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c33_b_setSimStateSideEffectsInfo, const char_T *c33_identifier)
{
  const mxArray *c33_y = NULL;
  emlrtMsgIdentifier c33_thisId;
  c33_y = NULL;
  c33_thisId.fIdentifier = c33_identifier;
  c33_thisId.fParent = NULL;
  sf_mex_assign(&c33_y, c33_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c33_b_setSimStateSideEffectsInfo), &c33_thisId));
  sf_mex_destroy(&c33_b_setSimStateSideEffectsInfo);
  return c33_y;
}

static const mxArray *c33_g_emlrt_marshallIn
  (SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c33_u,
   const emlrtMsgIdentifier *c33_parentId)
{
  const mxArray *c33_y = NULL;
  c33_y = NULL;
  sf_mex_assign(&c33_y, sf_mex_duplicatearraysafe(&c33_u));
  sf_mex_destroy(&c33_u);
  return c33_y;
}

static void init_dsm_address_info(SFc33_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c33_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2140325353U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3025808506U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3677217961U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3628405267U);
}

mxArray *sf_c33_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2146404854U);
    pr[1] = (double)(905545354U);
    pr[2] = (double)(1209449483U);
    pr[3] = (double)(141890485U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,18,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,17,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,17,"type",mxType);
    }

    mxSetField(mxData,17,"complexity",mxCreateDoubleScalar(0));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c33_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[17],T\"Genset_Enable\",},{M[1],M[18],T\"Genset_Load\",},{M[1],M[19],T\"Genset_RPM\",},{M[1],M[20],T\"Genset_Throttle\",},{M[8],M[0],T\"is_active_c33_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c33_Mooventure2016_Rev5\",},{M[9],M[27],T\"is_Running\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c33_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           33,
           8,
           14,
           22,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"SOC_Low");
          _SFD_SET_DATA_PROPS(1,1,1,0,"SOC_High");
          _SFD_SET_DATA_PROPS(2,1,1,0,"SOC_Critical");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Speed_On");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Speed_Off");
          _SFD_SET_DATA_PROPS(5,1,1,0,"SOC");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Coolant_Temp");
          _SFD_SET_DATA_PROPS(7,1,1,0,"Coolant_Cold");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Coolant_Warm");
          _SFD_SET_DATA_PROPS(9,1,1,0,"Coolant_Hot");
          _SFD_SET_DATA_PROPS(10,1,1,0,"Low_RPM");
          _SFD_SET_DATA_PROPS(11,1,1,0,"Medium_RPM");
          _SFD_SET_DATA_PROPS(12,1,1,0,"High_RPM");
          _SFD_SET_DATA_PROPS(13,1,1,0,"Low_Throttle");
          _SFD_SET_DATA_PROPS(14,1,1,0,"Medium_Throttle");
          _SFD_SET_DATA_PROPS(15,1,1,0,"High_Throttle");
          _SFD_SET_DATA_PROPS(16,2,0,1,"Genset_Enable");
          _SFD_SET_DATA_PROPS(17,2,0,1,"Genset_Load");
          _SFD_SET_DATA_PROPS(18,2,0,1,"Genset_RPM");
          _SFD_SET_DATA_PROPS(19,2,0,1,"Genset_Throttle");
          _SFD_SET_DATA_PROPS(20,1,1,0,"Engine_On");
          _SFD_SET_DATA_PROPS(21,1,1,0,"Engine_RPM");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,5);
          _SFD_CH_SUBSTATE_INDEX(2,6);
          _SFD_CH_SUBSTATE_INDEX(3,7);
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
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 18, 29 };

          static unsigned int sEndGuardMap[] = { 13, 25, 37 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -3, -2 };

          _SFD_CV_INIT_TRANS(1,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 33 };

          static unsigned int sEndGuardMap[] = { 28, 45 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 32 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 39, 51 };

          static unsigned int sEndGuardMap[] = { 34, 47, 60 };

          static int sPostFixPredicateTree[] = { 0, 1, -2, 2, -2 };

          _SFD_CV_INIT_TRANS(9,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 13 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 14, 28 };

          static unsigned int sEndGuardMap[] = { 9, 23, 40 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -1, -3, -2 };

          _SFD_CV_INIT_TRANS(12,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),6,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(1,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 18, 29 };

          static unsigned int sEndGuardMap[] = { 13, 25, 37 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 28 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 33 };

          static unsigned int sEndGuardMap[] = { 28, 45 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 32 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 39, 51 };

          static unsigned int sEndGuardMap[] = { 34, 47, 60 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 13 };

          static unsigned int sEndGuardMap[] = { 9, 22 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,3,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 14, 28 };

          static unsigned int sEndGuardMap[] = { 9, 23, 40 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)
          c33_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)
          c33_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)
          c33_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)
          c33_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c33_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c33_SOC_Low;
          real_T *c33_SOC_High;
          real_T *c33_SOC_Critical;
          real_T *c33_Speed_On;
          real_T *c33_Speed_Off;
          real_T *c33_SOC;
          real_T *c33_Coolant_Temp;
          real_T *c33_Coolant_Cold;
          real_T *c33_Coolant_Warm;
          real_T *c33_Coolant_Hot;
          real_T *c33_Low_RPM;
          real_T *c33_Medium_RPM;
          real_T *c33_High_RPM;
          real_T *c33_Low_Throttle;
          real_T *c33_Medium_Throttle;
          real_T *c33_High_Throttle;
          real_T *c33_Genset_Enable;
          real_T *c33_Genset_Load;
          real_T *c33_Genset_RPM;
          real_T *c33_Genset_Throttle;
          real_T *c33_Engine_On;
          real_T *c33_Engine_RPM;
          c33_Engine_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 17);
          c33_Engine_On = (real_T *)ssGetInputPortSignal(chartInstance->S, 16);
          c33_Genset_Throttle = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c33_Genset_RPM = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c33_Genset_Load = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c33_Genset_Enable = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            1);
          c33_High_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S,
            15);
          c33_Medium_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S,
            14);
          c33_Low_Throttle = (real_T *)ssGetInputPortSignal(chartInstance->S, 13);
          c33_High_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 12);
          c33_Medium_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c33_Low_RPM = (real_T *)ssGetInputPortSignal(chartInstance->S, 10);
          c33_Coolant_Hot = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c33_Coolant_Warm = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c33_Coolant_Cold = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c33_Coolant_Temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c33_SOC = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c33_Speed_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c33_Speed_On = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c33_SOC_Critical = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c33_SOC_High = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c33_SOC_Low = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c33_SOC_Low);
          _SFD_SET_DATA_VALUE_PTR(1U, c33_SOC_High);
          _SFD_SET_DATA_VALUE_PTR(2U, c33_SOC_Critical);
          _SFD_SET_DATA_VALUE_PTR(3U, c33_Speed_On);
          _SFD_SET_DATA_VALUE_PTR(4U, c33_Speed_Off);
          _SFD_SET_DATA_VALUE_PTR(5U, c33_SOC);
          _SFD_SET_DATA_VALUE_PTR(6U, c33_Coolant_Temp);
          _SFD_SET_DATA_VALUE_PTR(7U, c33_Coolant_Cold);
          _SFD_SET_DATA_VALUE_PTR(8U, c33_Coolant_Warm);
          _SFD_SET_DATA_VALUE_PTR(9U, c33_Coolant_Hot);
          _SFD_SET_DATA_VALUE_PTR(10U, c33_Low_RPM);
          _SFD_SET_DATA_VALUE_PTR(11U, c33_Medium_RPM);
          _SFD_SET_DATA_VALUE_PTR(12U, c33_High_RPM);
          _SFD_SET_DATA_VALUE_PTR(13U, c33_Low_Throttle);
          _SFD_SET_DATA_VALUE_PTR(14U, c33_Medium_Throttle);
          _SFD_SET_DATA_VALUE_PTR(15U, c33_High_Throttle);
          _SFD_SET_DATA_VALUE_PTR(16U, c33_Genset_Enable);
          _SFD_SET_DATA_VALUE_PTR(17U, c33_Genset_Load);
          _SFD_SET_DATA_VALUE_PTR(18U, c33_Genset_RPM);
          _SFD_SET_DATA_VALUE_PTR(19U, c33_Genset_Throttle);
          _SFD_SET_DATA_VALUE_PTR(20U, c33_Engine_On);
          _SFD_SET_DATA_VALUE_PTR(21U, c33_Engine_RPM);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c33_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c33_Mooventure2016_Rev5
    ((SFc33_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c33_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c33_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c33_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c33_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c33_Mooventure2016_Rev5
    ((SFc33_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c33_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c33_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c33_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c33_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c33_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c33_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c33_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c33_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc33_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc33_Mooventure2016_Rev5((SFc33_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c33_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c33_Mooventure2016_Rev5
      ((SFc33_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c33_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      33);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",33,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",33,"gatewayCannotBeInlinedMultipleTimes"));
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
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",33,18);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",33,4);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",33);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2038806987U));
  ssSetChecksum1(S,(1036517074U));
  ssSetChecksum2(S,(3353438512U));
  ssSetChecksum3(S,(3079332235U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c33_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",33);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c33_Mooventure2016_Rev5(SimStruct *S)
{
  SFc33_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc33_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc33_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc33_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c33_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c33_Mooventure2016_Rev5;
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

void c33_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c33_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c33_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c33_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c33_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
