/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c30_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c30_IN_NO_ACTIVE_CHILD         (0U)
#define c30_IN_Off                     (1U)
#define c30_IN_On                      (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c30_update_debugger_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c30_st);
static void c30_set_sim_state_side_effects_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c30_Mooventure2016_Rev5(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c30_machineNumber, uint32_T
  c30_chartNumber);
static const mxArray *c30_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData);
static int32_T c30_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId);
static void c30_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData);
static const mxArray *c30_b_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData);
static uint8_T c30_b_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_b_tp_Off, const char_T *c30_identifier);
static uint8_T c30_c_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId);
static void c30_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData);
static const mxArray *c30_c_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData);
static boolean_T c30_d_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c30_System, const char_T *c30_identifier);
static boolean_T c30_e_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId);
static void c30_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData);
static const mxArray *c30_f_emlrt_marshallIn
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c30_b_setSimStateSideEffectsInfo, const char_T *c30_identifier);
static const mxArray *c30_g_emlrt_marshallIn
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c30_u,
   const emlrtMsgIdentifier *c30_parentId);
static void init_dsm_address_info(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c30_System;
  c30_System = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c30_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c30_doSetSimStateSideEffects = 0U;
  chartInstance->c30_setSimStateSideEffectsInfo = NULL;
  chartInstance->c30_tp_Off = 0U;
  chartInstance->c30_tp_On = 0U;
  chartInstance->c30_is_active_c30_Mooventure2016_Rev5 = 0U;
  chartInstance->c30_is_c30_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c30_System = FALSE;
  }
}

static void initialize_params_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c30_update_debugger_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c30_prevAniVal;
  c30_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c30_is_active_c30_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 29U, chartInstance->c30_sfEvent);
  }

  if (chartInstance->c30_is_c30_Mooventure2016_Rev5 == c30_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
  }

  if (chartInstance->c30_is_c30_Mooventure2016_Rev5 == c30_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c30_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c30_sfEvent);
  }

  sf_debug_set_animation(c30_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c30_st;
  const mxArray *c30_y = NULL;
  boolean_T c30_hoistedGlobal;
  boolean_T c30_u;
  const mxArray *c30_b_y = NULL;
  uint8_T c30_b_hoistedGlobal;
  uint8_T c30_b_u;
  const mxArray *c30_c_y = NULL;
  uint8_T c30_c_hoistedGlobal;
  uint8_T c30_c_u;
  const mxArray *c30_d_y = NULL;
  boolean_T *c30_System;
  c30_System = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c30_st = NULL;
  c30_st = NULL;
  c30_y = NULL;
  sf_mex_assign(&c30_y, sf_mex_createcellarray(3));
  c30_hoistedGlobal = *c30_System;
  c30_u = c30_hoistedGlobal;
  c30_b_y = NULL;
  sf_mex_assign(&c30_b_y, sf_mex_create("y", &c30_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c30_y, 0, c30_b_y);
  c30_b_hoistedGlobal = chartInstance->c30_is_active_c30_Mooventure2016_Rev5;
  c30_b_u = c30_b_hoistedGlobal;
  c30_c_y = NULL;
  sf_mex_assign(&c30_c_y, sf_mex_create("y", &c30_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c30_y, 1, c30_c_y);
  c30_c_hoistedGlobal = chartInstance->c30_is_c30_Mooventure2016_Rev5;
  c30_c_u = c30_c_hoistedGlobal;
  c30_d_y = NULL;
  sf_mex_assign(&c30_d_y, sf_mex_create("y", &c30_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c30_y, 2, c30_d_y);
  sf_mex_assign(&c30_st, c30_y);
  return c30_st;
}

static void set_sim_state_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c30_st)
{
  const mxArray *c30_u;
  boolean_T *c30_System;
  c30_System = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c30_u = sf_mex_dup(c30_st);
  *c30_System = c30_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c30_u, 0)), "System");
  chartInstance->c30_is_active_c30_Mooventure2016_Rev5 = c30_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c30_u, 1)),
     "is_active_c30_Mooventure2016_Rev5");
  chartInstance->c30_is_c30_Mooventure2016_Rev5 = c30_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c30_u, 2)),
     "is_c30_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c30_setSimStateSideEffectsInfo,
                c30_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c30_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c30_u);
  chartInstance->c30_doSetSimStateSideEffects = 1U;
  c30_update_debugger_state_c30_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c30_st);
}

static void c30_set_sim_state_side_effects_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c30_doSetSimStateSideEffects != 0) {
    if (chartInstance->c30_is_c30_Mooventure2016_Rev5 == c30_IN_Off) {
      chartInstance->c30_tp_Off = 1U;
    } else {
      chartInstance->c30_tp_Off = 0U;
    }

    if (chartInstance->c30_is_c30_Mooventure2016_Rev5 == c30_IN_On) {
      chartInstance->c30_tp_On = 1U;
    } else {
      chartInstance->c30_tp_On = 0U;
    }

    chartInstance->c30_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c30_setSimStateSideEffectsInfo);
}

static void sf_c30_Mooventure2016_Rev5(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c30_temp;
  boolean_T c30_b_temp;
  boolean_T *c30_CruiseOff;
  boolean_T *c30_System;
  boolean_T *c30_CruiseOn;
  boolean_T *c30_CruiseEnable;
  c30_CruiseEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c30_CruiseOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c30_System = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c30_CruiseOff = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c30_set_sim_state_side_effects_c30_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 29U, chartInstance->c30_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c30_CruiseOff, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c30_System, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c30_CruiseOn, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c30_CruiseEnable, 3U);
  chartInstance->c30_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 29U, chartInstance->c30_sfEvent);
  if ((int16_T)chartInstance->c30_is_active_c30_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 29U, chartInstance->c30_sfEvent);
    chartInstance->c30_is_active_c30_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, chartInstance->c30_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c30_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
    chartInstance->c30_is_c30_Mooventure2016_Rev5 = c30_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
    chartInstance->c30_tp_Off = 1U;
  } else {
    switch (chartInstance->c30_is_c30_Mooventure2016_Rev5) {
     case c30_IN_Off:
      CV_CHART_EVAL(29, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c30_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c30_sfEvent);
      c30_temp = (_SFD_CCP_CALL(1U, 0, (int16_T)*c30_CruiseOn == 1 != 0U,
        chartInstance->c30_sfEvent) != 0);
      if (c30_temp) {
        c30_temp = (_SFD_CCP_CALL(1U, 1, (int16_T)*c30_CruiseEnable == 1 != 0U,
          chartInstance->c30_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c30_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c30_sfEvent);
        chartInstance->c30_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
        chartInstance->c30_is_c30_Mooventure2016_Rev5 = c30_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c30_sfEvent);
        chartInstance->c30_tp_On = 1U;
      } else {
        *c30_System = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c30_System, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c30_sfEvent);
      break;

     case c30_IN_On:
      CV_CHART_EVAL(29, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c30_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c30_sfEvent);
      c30_b_temp = (_SFD_CCP_CALL(2U, 0, (int16_T)*c30_CruiseOff == 1 != 0U,
        chartInstance->c30_sfEvent) != 0);
      if (!c30_b_temp) {
        c30_b_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)*c30_CruiseEnable == 0 != 0U,
          chartInstance->c30_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c30_b_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c30_sfEvent);
        chartInstance->c30_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c30_sfEvent);
        chartInstance->c30_is_c30_Mooventure2016_Rev5 = c30_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
        chartInstance->c30_tp_Off = 1U;
      } else {
        *c30_System = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c30_System, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c30_sfEvent);
      break;

     default:
      CV_CHART_EVAL(29, 0, 0);
      chartInstance->c30_is_c30_Mooventure2016_Rev5 = (uint8_T)
        c30_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c30_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, chartInstance->c30_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc30_Mooventure2016_Rev5
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c30_machineNumber, uint32_T
  c30_chartNumber)
{
}

const mxArray *sf_c30_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c30_nameCaptureInfo = NULL;
  c30_nameCaptureInfo = NULL;
  sf_mex_assign(&c30_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c30_nameCaptureInfo;
}

static const mxArray *c30_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData)
{
  const mxArray *c30_mxArrayOutData = NULL;
  int32_T c30_u;
  const mxArray *c30_y = NULL;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_mxArrayOutData = NULL;
  c30_u = *(int32_T *)c30_inData;
  c30_y = NULL;
  sf_mex_assign(&c30_y, sf_mex_create("y", &c30_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c30_mxArrayOutData, c30_y);
  return c30_mxArrayOutData;
}

static int32_T c30_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId)
{
  int32_T c30_y;
  int32_T c30_i0;
  sf_mex_import(c30_parentId, sf_mex_dup(c30_u), &c30_i0, 1, 6, 0U, 0, 0U, 0);
  c30_y = c30_i0;
  sf_mex_destroy(&c30_u);
  return c30_y;
}

static void c30_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData)
{
  const mxArray *c30_b_sfEvent;
  const char_T *c30_identifier;
  emlrtMsgIdentifier c30_thisId;
  int32_T c30_y;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_b_sfEvent = sf_mex_dup(c30_mxArrayInData);
  c30_identifier = c30_varName;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  c30_y = c30_emlrt_marshallIn(chartInstance, sf_mex_dup(c30_b_sfEvent),
    &c30_thisId);
  sf_mex_destroy(&c30_b_sfEvent);
  *(int32_T *)c30_outData = c30_y;
  sf_mex_destroy(&c30_mxArrayInData);
}

static const mxArray *c30_b_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData)
{
  const mxArray *c30_mxArrayOutData = NULL;
  uint8_T c30_u;
  const mxArray *c30_y = NULL;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_mxArrayOutData = NULL;
  c30_u = *(uint8_T *)c30_inData;
  c30_y = NULL;
  sf_mex_assign(&c30_y, sf_mex_create("y", &c30_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c30_mxArrayOutData, c30_y);
  return c30_mxArrayOutData;
}

static uint8_T c30_b_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_b_tp_Off, const char_T *c30_identifier)
{
  uint8_T c30_y;
  emlrtMsgIdentifier c30_thisId;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  c30_y = c30_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c30_b_tp_Off),
    &c30_thisId);
  sf_mex_destroy(&c30_b_tp_Off);
  return c30_y;
}

static uint8_T c30_c_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId)
{
  uint8_T c30_y;
  uint8_T c30_u0;
  sf_mex_import(c30_parentId, sf_mex_dup(c30_u), &c30_u0, 1, 3, 0U, 0, 0U, 0);
  c30_y = c30_u0;
  sf_mex_destroy(&c30_u);
  return c30_y;
}

static void c30_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData)
{
  const mxArray *c30_b_tp_Off;
  const char_T *c30_identifier;
  emlrtMsgIdentifier c30_thisId;
  uint8_T c30_y;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_b_tp_Off = sf_mex_dup(c30_mxArrayInData);
  c30_identifier = c30_varName;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  c30_y = c30_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c30_b_tp_Off),
    &c30_thisId);
  sf_mex_destroy(&c30_b_tp_Off);
  *(uint8_T *)c30_outData = c30_y;
  sf_mex_destroy(&c30_mxArrayInData);
}

static const mxArray *c30_c_sf_marshallOut(void *chartInstanceVoid, void
  *c30_inData)
{
  const mxArray *c30_mxArrayOutData = NULL;
  boolean_T c30_u;
  const mxArray *c30_y = NULL;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_mxArrayOutData = NULL;
  c30_u = *(boolean_T *)c30_inData;
  c30_y = NULL;
  sf_mex_assign(&c30_y, sf_mex_create("y", &c30_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c30_mxArrayOutData, c30_y);
  return c30_mxArrayOutData;
}

static boolean_T c30_d_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c30_System, const char_T *c30_identifier)
{
  boolean_T c30_y;
  emlrtMsgIdentifier c30_thisId;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  c30_y = c30_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c30_System),
    &c30_thisId);
  sf_mex_destroy(&c30_System);
  return c30_y;
}

static boolean_T c30_e_emlrt_marshallIn(SFc30_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c30_u, const emlrtMsgIdentifier *c30_parentId)
{
  boolean_T c30_y;
  boolean_T c30_b0;
  sf_mex_import(c30_parentId, sf_mex_dup(c30_u), &c30_b0, 1, 11, 0U, 0, 0U, 0);
  c30_y = c30_b0;
  sf_mex_destroy(&c30_u);
  return c30_y;
}

static void c30_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c30_mxArrayInData, const char_T *c30_varName, void *c30_outData)
{
  const mxArray *c30_System;
  const char_T *c30_identifier;
  emlrtMsgIdentifier c30_thisId;
  boolean_T c30_y;
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c30_System = sf_mex_dup(c30_mxArrayInData);
  c30_identifier = c30_varName;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  c30_y = c30_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c30_System),
    &c30_thisId);
  sf_mex_destroy(&c30_System);
  *(boolean_T *)c30_outData = c30_y;
  sf_mex_destroy(&c30_mxArrayInData);
}

static const mxArray *c30_f_emlrt_marshallIn
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c30_b_setSimStateSideEffectsInfo, const char_T *c30_identifier)
{
  const mxArray *c30_y = NULL;
  emlrtMsgIdentifier c30_thisId;
  c30_y = NULL;
  c30_thisId.fIdentifier = c30_identifier;
  c30_thisId.fParent = NULL;
  sf_mex_assign(&c30_y, c30_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c30_b_setSimStateSideEffectsInfo), &c30_thisId));
  sf_mex_destroy(&c30_b_setSimStateSideEffectsInfo);
  return c30_y;
}

static const mxArray *c30_g_emlrt_marshallIn
  (SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c30_u,
   const emlrtMsgIdentifier *c30_parentId)
{
  const mxArray *c30_y = NULL;
  c30_y = NULL;
  sf_mex_assign(&c30_y, sf_mex_duplicatearraysafe(&c30_u));
  sf_mex_destroy(&c30_u);
  return c30_y;
}

static void init_dsm_address_info(SFc30_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c30_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1905983424U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1783675756U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(62564065U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3155772838U);
}

mxArray *sf_c30_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2614289506U);
    pr[1] = (double)(3678618704U);
    pr[2] = (double)(168474095U);
    pr[3] = (double)(4186414607U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

static const mxArray *sf_get_sim_state_info_c30_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[7],T\"System\",},{M[8],M[0],T\"is_active_c30_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c30_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c30_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           30,
           2,
           3,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"CruiseOff");
          _SFD_SET_DATA_PROPS(1,2,0,1,"System");
          _SFD_SET_DATA_PROPS(2,1,1,0,"CruiseOn");
          _SFD_SET_DATA_PROPS(3,1,1,0,"CruiseEnable");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 12, 31 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 13, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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
          static unsigned int sStartGuardMap[] = { 1, 16 };

          static unsigned int sEndGuardMap[] = { 12, 31 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 17 };

          static unsigned int sEndGuardMap[] = { 13, 32 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c30_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c30_c_sf_marshallOut,(MexInFcnForType)
          c30_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c30_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c30_c_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c30_CruiseOff;
          boolean_T *c30_System;
          boolean_T *c30_CruiseOn;
          boolean_T *c30_CruiseEnable;
          c30_CruiseEnable = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            2);
          c30_CruiseOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c30_System = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c30_CruiseOff = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c30_CruiseOff);
          _SFD_SET_DATA_VALUE_PTR(1U, c30_System);
          _SFD_SET_DATA_VALUE_PTR(2U, c30_CruiseOn);
          _SFD_SET_DATA_VALUE_PTR(3U, c30_CruiseEnable);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c30_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c30_Mooventure2016_Rev5
    ((SFc30_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c30_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c30_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c30_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c30_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c30_Mooventure2016_Rev5
    ((SFc30_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c30_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c30_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c30_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c30_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c30_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c30_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c30_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c30_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc30_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc30_Mooventure2016_Rev5((SFc30_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c30_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c30_Mooventure2016_Rev5
      ((SFc30_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c30_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      30);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",30,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",30,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",30,3);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",30,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",30);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3100282410U));
  ssSetChecksum1(S,(1018676124U));
  ssSetChecksum2(S,(3010512414U));
  ssSetChecksum3(S,(4005730567U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c30_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",30);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c30_Mooventure2016_Rev5(SimStruct *S)
{
  SFc30_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc30_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc30_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc30_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c30_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c30_Mooventure2016_Rev5;
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

void c30_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c30_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c30_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c30_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c30_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}