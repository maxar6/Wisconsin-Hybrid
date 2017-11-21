/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c29_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c29_IN_NO_ACTIVE_CHILD         (0U)
#define c29_IN_default                 (6U)
#define c29_IN_Off                     (2U)
#define c29_IN_SetMinus                (4U)
#define c29_IN_SetPlus                 (5U)
#define c29_IN_RSM                     (3U)
#define c29_IN_ON                      (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c29_update_debugger_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c29_st);
static void c29_set_sim_state_side_effects_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c29_Mooventure2016_Rev5(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void c29_chartstep_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initSimStructsc29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber);
static const mxArray *c29_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData);
static int32_T c29_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void c29_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData);
static const mxArray *c29_b_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData);
static uint8_T c29_b_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_b_tp_default, const char_T *c29_identifier);
static uint8_T c29_c_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void c29_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData);
static const mxArray *c29_c_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData);
static real_T c29_d_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_Out, const char_T *c29_identifier);
static real_T c29_e_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId);
static void c29_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData);
static const mxArray *c29_f_emlrt_marshallIn
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c29_b_setSimStateSideEffectsInfo, const char_T *c29_identifier);
static const mxArray *c29_g_emlrt_marshallIn
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c29_u,
   const emlrtMsgIdentifier *c29_parentId);
static void init_dsm_address_info(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  real_T *c29_Out;
  c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c29_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c29_doSetSimStateSideEffects = 0U;
  chartInstance->c29_setSimStateSideEffectsInfo = NULL;
  chartInstance->c29_tp_ON = 0U;
  chartInstance->c29_tp_Off = 0U;
  chartInstance->c29_tp_RSM = 0U;
  chartInstance->c29_tp_SetMinus = 0U;
  chartInstance->c29_tp_SetPlus = 0U;
  chartInstance->c29_tp_default = 0U;
  chartInstance->c29_is_active_c29_Mooventure2016_Rev5 = 0U;
  chartInstance->c29_is_c29_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c29_Out = 0.0;
  }
}

static void initialize_params_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c29_update_debugger_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c29_prevAniVal;
  c29_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c29_is_active_c29_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 28U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_default) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_SetMinus) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_SetPlus) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_RSM) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c29_sfEvent);
  }

  if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_ON) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
  }

  sf_debug_set_animation(c29_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c29_st;
  const mxArray *c29_y = NULL;
  real_T c29_hoistedGlobal;
  real_T c29_u;
  const mxArray *c29_b_y = NULL;
  uint8_T c29_b_hoistedGlobal;
  uint8_T c29_b_u;
  const mxArray *c29_c_y = NULL;
  uint8_T c29_c_hoistedGlobal;
  uint8_T c29_c_u;
  const mxArray *c29_d_y = NULL;
  real_T *c29_Out;
  c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_st = NULL;
  c29_st = NULL;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_createcellarray(3));
  c29_hoistedGlobal = *c29_Out;
  c29_u = c29_hoistedGlobal;
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 0, c29_b_y);
  c29_b_hoistedGlobal = chartInstance->c29_is_active_c29_Mooventure2016_Rev5;
  c29_b_u = c29_b_hoistedGlobal;
  c29_c_y = NULL;
  sf_mex_assign(&c29_c_y, sf_mex_create("y", &c29_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 1, c29_c_y);
  c29_c_hoistedGlobal = chartInstance->c29_is_c29_Mooventure2016_Rev5;
  c29_c_u = c29_c_hoistedGlobal;
  c29_d_y = NULL;
  sf_mex_assign(&c29_d_y, sf_mex_create("y", &c29_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 2, c29_d_y);
  sf_mex_assign(&c29_st, c29_y);
  return c29_st;
}

static void set_sim_state_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c29_st)
{
  const mxArray *c29_u;
  real_T *c29_Out;
  c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_u = sf_mex_dup(c29_st);
  *c29_Out = c29_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c29_u, 0)), "Out");
  chartInstance->c29_is_active_c29_Mooventure2016_Rev5 = c29_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c29_u, 1)),
     "is_active_c29_Mooventure2016_Rev5");
  chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c29_u, 2)),
     "is_c29_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c29_setSimStateSideEffectsInfo,
                c29_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c29_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c29_u);
  chartInstance->c29_doSetSimStateSideEffects = 1U;
  c29_update_debugger_state_c29_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c29_st);
}

static void c29_set_sim_state_side_effects_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c29_doSetSimStateSideEffects != 0) {
    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_ON) {
      chartInstance->c29_tp_ON = 1U;
    } else {
      chartInstance->c29_tp_ON = 0U;
    }

    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_Off) {
      chartInstance->c29_tp_Off = 1U;
    } else {
      chartInstance->c29_tp_Off = 0U;
    }

    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_RSM) {
      chartInstance->c29_tp_RSM = 1U;
    } else {
      chartInstance->c29_tp_RSM = 0U;
    }

    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_SetMinus) {
      chartInstance->c29_tp_SetMinus = 1U;
    } else {
      chartInstance->c29_tp_SetMinus = 0U;
    }

    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_SetPlus) {
      chartInstance->c29_tp_SetPlus = 1U;
    } else {
      chartInstance->c29_tp_SetPlus = 0U;
    }

    if (chartInstance->c29_is_c29_Mooventure2016_Rev5 == c29_IN_default) {
      chartInstance->c29_tp_default = 1U;
    } else {
      chartInstance->c29_tp_default = 0U;
    }

    chartInstance->c29_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c29_setSimStateSideEffectsInfo);
}

static void sf_c29_Mooventure2016_Rev5(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  real_T *c29_Switch;
  real_T *c29_Off;
  real_T *c29_SetMinus;
  real_T *c29_SetPlus;
  real_T *c29_RSM;
  real_T *c29_ON;
  real_T *c29_HYST;
  real_T *c29_Out;
  real_T *c29_Default;
  c29_Default = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_HYST = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c29_ON = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c29_RSM = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c29_SetPlus = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c29_SetMinus = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c29_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c29_Switch = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c29_set_sim_state_side_effects_c29_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c29_Switch, 0U);
  _SFD_DATA_RANGE_CHECK(*c29_Off, 1U);
  _SFD_DATA_RANGE_CHECK(*c29_SetMinus, 2U);
  _SFD_DATA_RANGE_CHECK(*c29_SetPlus, 3U);
  _SFD_DATA_RANGE_CHECK(*c29_RSM, 4U);
  _SFD_DATA_RANGE_CHECK(*c29_ON, 5U);
  _SFD_DATA_RANGE_CHECK(*c29_HYST, 6U);
  _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
  _SFD_DATA_RANGE_CHECK(*c29_Default, 8U);
  chartInstance->c29_sfEvent = CALL_EVENT;
  c29_chartstep_c29_Mooventure2016_Rev5(chartInstance);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c29_chartstep_c29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T c29_temp;
  boolean_T c29_b_temp;
  boolean_T c29_c_temp;
  boolean_T c29_d_temp;
  boolean_T c29_e_temp;
  boolean_T c29_f_temp;
  boolean_T c29_g_temp;
  boolean_T c29_h_temp;
  boolean_T c29_i_temp;
  boolean_T c29_j_temp;
  real_T *c29_Switch;
  real_T *c29_Default;
  real_T *c29_HYST;
  real_T *c29_Out;
  real_T *c29_Off;
  real_T *c29_SetPlus;
  real_T *c29_RSM;
  real_T *c29_ON;
  real_T *c29_SetMinus;
  c29_Default = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_HYST = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c29_ON = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c29_RSM = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c29_SetPlus = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c29_SetMinus = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c29_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c29_Switch = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
  if ((int16_T)chartInstance->c29_is_active_c29_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
    chartInstance->c29_is_active_c29_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c29_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
    chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
    chartInstance->c29_tp_default = 1U;
  } else {
    switch (chartInstance->c29_is_c29_Mooventure2016_Rev5) {
     case c29_IN_ON:
      CV_CHART_EVAL(28, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   chartInstance->c29_sfEvent);
      c29_temp = (_SFD_CCP_CALL(8U, 0, *c29_Switch < *c29_Default + *c29_HYST !=
        0U, chartInstance->c29_sfEvent) != 0);
      if (c29_temp) {
        c29_temp = (_SFD_CCP_CALL(8U, 1, *c29_Switch > *c29_Default - *c29_HYST
          != 0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(8U, (int32_T)c29_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_ON = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 1U;
      } else {
        *c29_Out = 5.0;
        _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c29_sfEvent);
      break;

     case c29_IN_Off:
      CV_CHART_EVAL(28, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   chartInstance->c29_sfEvent);
      c29_b_temp = (_SFD_CCP_CALL(9U, 0, *c29_Switch < *c29_Default + *c29_HYST
        != 0U, chartInstance->c29_sfEvent) != 0);
      if (c29_b_temp) {
        c29_b_temp = (_SFD_CCP_CALL(9U, 1, *c29_Switch > *c29_Default -
          *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(9U, (int32_T)c29_b_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 1U;
      } else {
        *c29_Out = 1.0;
        _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c29_sfEvent);
      break;

     case c29_IN_RSM:
      CV_CHART_EVAL(28, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   chartInstance->c29_sfEvent);
      c29_c_temp = (_SFD_CCP_CALL(6U, 0, *c29_Switch < *c29_Default + *c29_HYST
        != 0U, chartInstance->c29_sfEvent) != 0);
      if (c29_c_temp) {
        c29_c_temp = (_SFD_CCP_CALL(6U, 1, *c29_Switch > *c29_Default -
          *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(6U, (int32_T)c29_c_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_RSM = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 1U;
      } else {
        *c29_Out = 4.0;
        _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c29_sfEvent);
      break;

     case c29_IN_SetMinus:
      CV_CHART_EVAL(28, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c29_sfEvent);
      c29_d_temp = (_SFD_CCP_CALL(2U, 0, *c29_Switch < *c29_Default + *c29_HYST
        != 0U, chartInstance->c29_sfEvent) != 0);
      if (c29_d_temp) {
        c29_d_temp = (_SFD_CCP_CALL(2U, 1, *c29_Switch > *c29_Default -
          *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c29_d_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_SetMinus = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 1U;
      } else {
        *c29_Out = 2.0;
        _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c29_sfEvent);
      break;

     case c29_IN_SetPlus:
      CV_CHART_EVAL(28, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c29_sfEvent);
      c29_e_temp = (_SFD_CCP_CALL(4U, 0, *c29_Switch < *c29_Default + *c29_HYST
        != 0U, chartInstance->c29_sfEvent) != 0);
      if (c29_e_temp) {
        c29_e_temp = (_SFD_CCP_CALL(4U, 1, *c29_Switch > *c29_Default -
          *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(4U, (int32_T)c29_e_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_SetPlus = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_default;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 1U;
      } else {
        *c29_Out = 3.0;
        _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c29_sfEvent);
      break;

     case c29_IN_default:
      CV_CHART_EVAL(28, 0, 6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                   chartInstance->c29_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c29_sfEvent);
      c29_f_temp = (_SFD_CCP_CALL(1U, 0, *c29_Switch < *c29_Off + *c29_HYST !=
        0U, chartInstance->c29_sfEvent) != 0);
      if (c29_f_temp) {
        c29_f_temp = (_SFD_CCP_CALL(1U, 1, *c29_Switch > *c29_Off - *c29_HYST !=
          0U, chartInstance->c29_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c29_f_temp)) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[5];
          unsigned int numTransitions = 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((*c29_Switch < *c29_SetPlus + *c29_HYST) && (*c29_Switch >
               *c29_SetPlus - *c29_HYST)) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          if ((*c29_Switch < *c29_RSM + *c29_HYST) && (*c29_Switch > *c29_RSM - *
               c29_HYST)) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          if ((*c29_Switch < *c29_ON + *c29_HYST) && (*c29_Switch > *c29_ON -
               *c29_HYST)) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          if ((*c29_Switch < *c29_SetMinus + *c29_HYST) && (*c29_Switch >
               *c29_SetMinus - *c29_HYST)) {
            transitionList[numTransitions] = 10;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_default = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
        chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c29_sfEvent);
        chartInstance->c29_tp_Off = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c29_sfEvent);
        c29_g_temp = (_SFD_CCP_CALL(3U, 0, *c29_Switch < *c29_SetPlus +
          *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
        if (c29_g_temp) {
          c29_g_temp = (_SFD_CCP_CALL(3U, 1, *c29_Switch > *c29_SetPlus -
            *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
        }

        if (CV_TRANSITION_EVAL(3U, (int32_T)c29_g_temp)) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[4];
            unsigned int numTransitions = 1;
            transitionList[0] = 3;
            sf_debug_transition_conflict_check_begin();
            if ((*c29_Switch < *c29_RSM + *c29_HYST) && (*c29_Switch > *c29_RSM
                 - *c29_HYST)) {
              transitionList[numTransitions] = 5;
              numTransitions++;
            }

            if ((*c29_Switch < *c29_ON + *c29_HYST) && (*c29_Switch > *c29_ON - *
                 c29_HYST)) {
              transitionList[numTransitions] = 7;
              numTransitions++;
            }

            if ((*c29_Switch < *c29_SetMinus + *c29_HYST) && (*c29_Switch >
                 *c29_SetMinus - *c29_HYST)) {
              transitionList[numTransitions] = 10;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c29_sfEvent);
          chartInstance->c29_tp_default = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
          chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_SetPlus;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, chartInstance->c29_sfEvent);
          chartInstance->c29_tp_SetPlus = 1U;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       chartInstance->c29_sfEvent);
          c29_h_temp = (_SFD_CCP_CALL(5U, 0, *c29_Switch < *c29_RSM + *c29_HYST
            != 0U, chartInstance->c29_sfEvent) != 0);
          if (c29_h_temp) {
            c29_h_temp = (_SFD_CCP_CALL(5U, 1, *c29_Switch > *c29_RSM -
              *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
          }

          if (CV_TRANSITION_EVAL(5U, (int32_T)c29_h_temp)) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[3];
              unsigned int numTransitions = 1;
              transitionList[0] = 5;
              sf_debug_transition_conflict_check_begin();
              if ((*c29_Switch < *c29_ON + *c29_HYST) && (*c29_Switch > *c29_ON
                   - *c29_HYST)) {
                transitionList[numTransitions] = 7;
                numTransitions++;
              }

              if ((*c29_Switch < *c29_SetMinus + *c29_HYST) && (*c29_Switch >
                   *c29_SetMinus - *c29_HYST)) {
                transitionList[numTransitions] = 10;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions > 1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
            chartInstance->c29_tp_default = 0U;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
            chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_RSM;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c29_sfEvent);
            chartInstance->c29_tp_RSM = 1U;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                         chartInstance->c29_sfEvent);
            c29_i_temp = (_SFD_CCP_CALL(7U, 0, *c29_Switch < *c29_ON + *c29_HYST
              != 0U, chartInstance->c29_sfEvent) != 0);
            if (c29_i_temp) {
              c29_i_temp = (_SFD_CCP_CALL(7U, 1, *c29_Switch > *c29_ON -
                *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
            }

            if (CV_TRANSITION_EVAL(7U, (int32_T)c29_i_temp)) {
              if (sf_debug_transition_conflict_check_enabled()) {
                unsigned int transitionList[2];
                unsigned int numTransitions = 1;
                transitionList[0] = 7;
                sf_debug_transition_conflict_check_begin();
                if ((*c29_Switch < *c29_SetMinus + *c29_HYST) && (*c29_Switch > *
                     c29_SetMinus - *c29_HYST)) {
                  transitionList[numTransitions] = 10;
                  numTransitions++;
                }

                sf_debug_transition_conflict_check_end();
                if (numTransitions > 1) {
                  _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
                }
              }

              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, chartInstance->c29_sfEvent);
              chartInstance->c29_tp_default = 0U;
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
              chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_ON;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
              chartInstance->c29_tp_ON = 1U;
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                           chartInstance->c29_sfEvent);
              c29_j_temp = (_SFD_CCP_CALL(10U, 0, *c29_Switch < *c29_SetMinus + *
                c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
              if (c29_j_temp) {
                c29_j_temp = (_SFD_CCP_CALL(10U, 1, *c29_Switch > *c29_SetMinus
                  - *c29_HYST != 0U, chartInstance->c29_sfEvent) != 0);
              }

              if (CV_TRANSITION_EVAL(10U, (int32_T)c29_j_temp)) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U,
                             chartInstance->c29_sfEvent);
                chartInstance->c29_tp_default = 0U;
                _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, chartInstance->c29_sfEvent);
                chartInstance->c29_is_c29_Mooventure2016_Rev5 = c29_IN_SetMinus;
                _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c29_sfEvent);
                chartInstance->c29_tp_SetMinus = 1U;
              } else {
                *c29_Out = 0.0;
                _SFD_DATA_RANGE_CHECK(*c29_Out, 7U);
              }
            }
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, chartInstance->c29_sfEvent);
      break;

     default:
      CV_CHART_EVAL(28, 0, 0);
      chartInstance->c29_is_c29_Mooventure2016_Rev5 = (uint8_T)
        c29_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c29_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, chartInstance->c29_sfEvent);
}

static void initSimStructsc29_Mooventure2016_Rev5
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber)
{
}

const mxArray *sf_c29_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c29_nameCaptureInfo = NULL;
  c29_nameCaptureInfo = NULL;
  sf_mex_assign(&c29_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c29_nameCaptureInfo;
}

static const mxArray *c29_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData)
{
  const mxArray *c29_mxArrayOutData = NULL;
  int32_T c29_u;
  const mxArray *c29_y = NULL;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_mxArrayOutData = NULL;
  c29_u = *(int32_T *)c29_inData;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_create("y", &c29_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_mxArrayOutData, c29_y);
  return c29_mxArrayOutData;
}

static int32_T c29_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  int32_T c29_y;
  int32_T c29_i0;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_i0, 1, 6, 0U, 0, 0U, 0);
  c29_y = c29_i0;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void c29_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData)
{
  const mxArray *c29_b_sfEvent;
  const char_T *c29_identifier;
  emlrtMsgIdentifier c29_thisId;
  int32_T c29_y;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_b_sfEvent = sf_mex_dup(c29_mxArrayInData);
  c29_identifier = c29_varName;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_b_sfEvent),
    &c29_thisId);
  sf_mex_destroy(&c29_b_sfEvent);
  *(int32_T *)c29_outData = c29_y;
  sf_mex_destroy(&c29_mxArrayInData);
}

static const mxArray *c29_b_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData)
{
  const mxArray *c29_mxArrayOutData = NULL;
  uint8_T c29_u;
  const mxArray *c29_y = NULL;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_mxArrayOutData = NULL;
  c29_u = *(uint8_T *)c29_inData;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_create("y", &c29_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_mxArrayOutData, c29_y);
  return c29_mxArrayOutData;
}

static uint8_T c29_b_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_b_tp_default, const char_T *c29_identifier)
{
  uint8_T c29_y;
  emlrtMsgIdentifier c29_thisId;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_b_tp_default),
    &c29_thisId);
  sf_mex_destroy(&c29_b_tp_default);
  return c29_y;
}

static uint8_T c29_c_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  uint8_T c29_y;
  uint8_T c29_u0;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_u0, 1, 3, 0U, 0, 0U, 0);
  c29_y = c29_u0;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void c29_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData)
{
  const mxArray *c29_b_tp_default;
  const char_T *c29_identifier;
  emlrtMsgIdentifier c29_thisId;
  uint8_T c29_y;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_b_tp_default = sf_mex_dup(c29_mxArrayInData);
  c29_identifier = c29_varName;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_b_tp_default),
    &c29_thisId);
  sf_mex_destroy(&c29_b_tp_default);
  *(uint8_T *)c29_outData = c29_y;
  sf_mex_destroy(&c29_mxArrayInData);
}

static const mxArray *c29_c_sf_marshallOut(void *chartInstanceVoid, void
  *c29_inData)
{
  const mxArray *c29_mxArrayOutData = NULL;
  real_T c29_u;
  const mxArray *c29_y = NULL;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_mxArrayOutData = NULL;
  c29_u = *(real_T *)c29_inData;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_create("y", &c29_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_mxArrayOutData, c29_y);
  return c29_mxArrayOutData;
}

static real_T c29_d_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_Out, const char_T *c29_identifier)
{
  real_T c29_y;
  emlrtMsgIdentifier c29_thisId;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_Out), &c29_thisId);
  sf_mex_destroy(&c29_Out);
  return c29_y;
}

static real_T c29_e_emlrt_marshallIn(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c29_u, const emlrtMsgIdentifier *c29_parentId)
{
  real_T c29_y;
  real_T c29_d0;
  sf_mex_import(c29_parentId, sf_mex_dup(c29_u), &c29_d0, 1, 0, 0U, 0, 0U, 0);
  c29_y = c29_d0;
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void c29_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c29_mxArrayInData, const char_T *c29_varName, void *c29_outData)
{
  const mxArray *c29_Out;
  const char_T *c29_identifier;
  emlrtMsgIdentifier c29_thisId;
  real_T c29_y;
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c29_Out = sf_mex_dup(c29_mxArrayInData);
  c29_identifier = c29_varName;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  c29_y = c29_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c29_Out), &c29_thisId);
  sf_mex_destroy(&c29_Out);
  *(real_T *)c29_outData = c29_y;
  sf_mex_destroy(&c29_mxArrayInData);
}

static const mxArray *c29_f_emlrt_marshallIn
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c29_b_setSimStateSideEffectsInfo, const char_T *c29_identifier)
{
  const mxArray *c29_y = NULL;
  emlrtMsgIdentifier c29_thisId;
  c29_y = NULL;
  c29_thisId.fIdentifier = c29_identifier;
  c29_thisId.fParent = NULL;
  sf_mex_assign(&c29_y, c29_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c29_b_setSimStateSideEffectsInfo), &c29_thisId));
  sf_mex_destroy(&c29_b_setSimStateSideEffectsInfo);
  return c29_y;
}

static const mxArray *c29_g_emlrt_marshallIn
  (SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c29_u,
   const emlrtMsgIdentifier *c29_parentId)
{
  const mxArray *c29_y = NULL;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_duplicatearraysafe(&c29_u));
  sf_mex_destroy(&c29_u);
  return c29_y;
}

static void init_dsm_address_info(SFc29_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c29_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4023225032U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1515401551U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(559027531U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2277945709U);
}

mxArray *sf_c29_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(586180591U);
    pr[1] = (double)(1355485341U);
    pr[2] = (double)(3989233470U);
    pr[3] = (double)(2231633295U);
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

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c29_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[8],T\"Out\",},{M[8],M[0],T\"is_active_c29_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c29_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c29_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           29,
           6,
           11,
           9,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"Switch");
          _SFD_SET_DATA_PROPS(1,1,1,0,"Off");
          _SFD_SET_DATA_PROPS(2,1,1,0,"SetMinus");
          _SFD_SET_DATA_PROPS(3,1,1,0,"SetPlus");
          _SFD_SET_DATA_PROPS(4,1,1,0,"RSM");
          _SFD_SET_DATA_PROPS(5,1,1,0,"ON");
          _SFD_SET_DATA_PROPS(6,1,1,0,"HYST");
          _SFD_SET_DATA_PROPS(7,2,0,1,"Out");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Default");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(6);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(6,1,0,0);

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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 25 };

          static unsigned int sEndGuardMap[] = { 21, 45 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(3,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(4,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 15, 33 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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

        _SFD_TRANS_COV_WTS(1,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 25 };

          static unsigned int sEndGuardMap[] = { 21, 45 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 20 };

          static unsigned int sEndGuardMap[] = { 16, 35 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 19 };

          static unsigned int sEndGuardMap[] = { 15, 33 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 24 };

          static unsigned int sEndGuardMap[] = { 20, 43 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)
          c29_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c29_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c29_Switch;
          real_T *c29_Off;
          real_T *c29_SetMinus;
          real_T *c29_SetPlus;
          real_T *c29_RSM;
          real_T *c29_ON;
          real_T *c29_HYST;
          real_T *c29_Out;
          real_T *c29_Default;
          c29_Default = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c29_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c29_HYST = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c29_ON = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c29_RSM = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c29_SetPlus = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c29_SetMinus = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c29_Off = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c29_Switch = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c29_Switch);
          _SFD_SET_DATA_VALUE_PTR(1U, c29_Off);
          _SFD_SET_DATA_VALUE_PTR(2U, c29_SetMinus);
          _SFD_SET_DATA_VALUE_PTR(3U, c29_SetPlus);
          _SFD_SET_DATA_VALUE_PTR(4U, c29_RSM);
          _SFD_SET_DATA_VALUE_PTR(5U, c29_ON);
          _SFD_SET_DATA_VALUE_PTR(6U, c29_HYST);
          _SFD_SET_DATA_VALUE_PTR(7U, c29_Out);
          _SFD_SET_DATA_VALUE_PTR(8U, c29_Default);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c29_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c29_Mooventure2016_Rev5
    ((SFc29_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c29_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c29_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c29_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c29_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c29_Mooventure2016_Rev5
    ((SFc29_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c29_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c29_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c29_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c29_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c29_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c29_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c29_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c29_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc29_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc29_Mooventure2016_Rev5((SFc29_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c29_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c29_Mooventure2016_Rev5
      ((SFc29_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c29_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      29);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",29,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",29,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",29,8);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",29,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",29);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1104238034U));
  ssSetChecksum1(S,(2623670850U));
  ssSetChecksum2(S,(3256907192U));
  ssSetChecksum3(S,(1523608999U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c29_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",29);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c29_Mooventure2016_Rev5(SimStruct *S)
{
  SFc29_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc29_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc29_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc29_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c29_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c29_Mooventure2016_Rev5;
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

void c29_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c29_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c29_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c29_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c29_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
