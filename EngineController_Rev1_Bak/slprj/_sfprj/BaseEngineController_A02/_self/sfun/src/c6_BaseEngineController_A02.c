/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c6_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c6_IN_NO_ACTIVE_CHILD          (0U)
#define c6_IN_Off                      (1U)
#define c6_IN_On                       (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_st);
static void c6_set_sim_state_side_effects_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static int32_T c6_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_b_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_b_tp_Off, const char_T *c6_identifier);
static uint8_T c6_c_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static boolean_T c6_d_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_HEATER, const char_T *c6_identifier);
static boolean_T c6_e_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_f_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier);
static const mxArray *c6_g_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void init_dsm_address_info(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  boolean_T *c6_HEATER;
  c6_HEATER = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  chartInstance->c6_tp_Off = 0U;
  chartInstance->c6_tp_On = 0U;
  chartInstance->c6_is_active_c6_BaseEngineController_A02 = 0U;
  chartInstance->c6_is_c6_BaseEngineController_A02 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c6_HEATER = FALSE;
  }
}

static void initialize_params_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c6_update_debugger_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c6_is_active_c6_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BaseEngineController_A02 == c6_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_BaseEngineController_A02 == c6_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  }

  sf_debug_set_animation(c6_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  boolean_T c6_hoistedGlobal;
  boolean_T c6_u;
  const mxArray *c6_b_y = NULL;
  uint8_T c6_b_hoistedGlobal;
  uint8_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  uint8_T c6_c_hoistedGlobal;
  uint8_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  boolean_T *c6_HEATER;
  c6_HEATER = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellarray(3));
  c6_hoistedGlobal = *c6_HEATER;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = chartInstance->c6_is_active_c6_BaseEngineController_A02;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = chartInstance->c6_is_c6_BaseEngineController_A02;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 2, c6_d_y);
  sf_mex_assign(&c6_st, c6_y);
  return c6_st;
}

static void set_sim_state_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_st)
{
  const mxArray *c6_u;
  boolean_T *c6_HEATER;
  c6_HEATER = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_u = sf_mex_dup(c6_st);
  *c6_HEATER = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 0)), "HEATER");
  chartInstance->c6_is_active_c6_BaseEngineController_A02 =
    c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 1)),
    "is_active_c6_BaseEngineController_A02");
  chartInstance->c6_is_c6_BaseEngineController_A02 = c6_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 2)),
     "is_c6_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (chartInstance->c6_is_c6_BaseEngineController_A02 == c6_IN_Off) {
      chartInstance->c6_tp_Off = 1U;
    } else {
      chartInstance->c6_tp_Off = 0U;
    }

    if (chartInstance->c6_is_c6_BaseEngineController_A02 == c6_IN_On) {
      chartInstance->c6_tp_On = 1U;
    } else {
      chartInstance->c6_tp_On = 0U;
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_c6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c6_NEECT;
  real_T *c6_CAL;
  boolean_T *c6_HEATER;
  c6_HEATER = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_CAL = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_NEECT = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c6_set_sim_state_side_effects_c6_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c6_NEECT, 0U);
  _SFD_DATA_RANGE_CHECK(*c6_CAL, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_HEATER, 2U);
  chartInstance->c6_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
  if ((int16_T)chartInstance->c6_is_active_c6_BaseEngineController_A02 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_active_c6_BaseEngineController_A02 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_c6_BaseEngineController_A02 = c6_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_Off = 1U;
  } else {
    switch (chartInstance->c6_is_c6_BaseEngineController_A02) {
     case c6_IN_Off:
      CV_CHART_EVAL(4, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c6_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c6_NEECT <=
            *c6_CAL - 1.0 != 0U, chartInstance->c6_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_c6_BaseEngineController_A02 = c6_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_On = 1U;
      } else {
        *c6_HEATER = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_HEATER, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c6_sfEvent);
      break;

     case c6_IN_On:
      CV_CHART_EVAL(4, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c6_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c6_NEECT >=
            *c6_CAL + 1.0 != 0U, chartInstance->c6_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        chartInstance->c6_is_c6_BaseEngineController_A02 = c6_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_Off = 1U;
      } else {
        *c6_HEATER = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c6_HEATER, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c6_sfEvent);
      break;

     default:
      CV_CHART_EVAL(4, 0, 0);
      chartInstance->c6_is_c6_BaseEngineController_A02 = (uint8_T)
        c6_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, chartInstance->c6_sfEvent);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc6_BaseEngineController_A02
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber)
{
}

const mxArray *sf_c6_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c6_nameCaptureInfo;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_mxArrayOutData, c6_y);
  return c6_mxArrayOutData;
}

static int32_T c6_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i0, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent), &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_mxArrayOutData, c6_y);
  return c6_mxArrayOutData;
}

static uint8_T c6_b_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_b_tp_Off, const char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_Off),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_Off);
  return c6_y;
}

static uint8_T c6_c_emlrt_marshallIn(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_tp_Off;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_b_tp_Off = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_Off),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_Off);
  *(uint8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_mxArrayOutData, c6_y);
  return c6_mxArrayOutData;
}

static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  boolean_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(boolean_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_mxArrayOutData, c6_y);
  return c6_mxArrayOutData;
}

static boolean_T c6_d_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_HEATER, const char_T *c6_identifier)
{
  boolean_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_HEATER), &c6_thisId);
  sf_mex_destroy(&c6_HEATER);
  return c6_y;
}

static boolean_T c6_e_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b0, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_HEATER;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  boolean_T c6_y;
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c6_HEATER = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_HEATER), &c6_thisId);
  sf_mex_destroy(&c6_HEATER);
  *(boolean_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_f_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  sf_mex_assign(&c6_y, c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId));
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_g_emlrt_marshallIn
  (SFc6_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u));
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void init_dsm_address_info(SFc6_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c6_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2023509343U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1873384252U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3339964571U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(486641379U);
}

mxArray *sf_c6_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1982016254U);
    pr[1] = (double)(2889265612U);
    pr[2] = (double)(4263048762U);
    pr[3] = (double)(575933756U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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

static const mxArray *sf_get_sim_state_info_c6_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[3],T\"HEATER\",},{M[8],M[0],T\"is_active_c6_BaseEngineController_A02\",},{M[9],M[0],T\"is_c6_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           6,
           2,
           3,
           3,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"NEECT");
          _SFD_SET_DATA_PROPS(1,1,1,0,"CAL");
          _SFD_SET_DATA_PROPS(2,2,0,1,"HEATER");
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
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_d_sf_marshallOut,(MexInFcnForType)c6_c_sf_marshallIn);

        {
          real_T *c6_NEECT;
          real_T *c6_CAL;
          boolean_T *c6_HEATER;
          c6_HEATER = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c6_CAL = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c6_NEECT = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c6_NEECT);
          _SFD_SET_DATA_VALUE_PTR(1U, c6_CAL);
          _SFD_SET_DATA_VALUE_PTR(2U, c6_HEATER);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c6_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_BaseEngineController_A02(void *chartInstanceVar)
{
  disable_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_BaseEngineController_A02(void *chartInstanceVar)
{
  sf_c6_BaseEngineController_A02((SFc6_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c6_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c6_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c6_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c6_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c6_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c6_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c6_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c6_BaseEngineController_A02
      ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_BaseEngineController_A02
    ((SFc6_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_BaseEngineController_A02
      ((SFc6_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",6,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",6,2);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",6,1);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3062274002U));
  ssSetChecksum1(S,(1101833783U));
  ssSetChecksum2(S,(820650794U));
  ssSetChecksum3(S,(1000624451U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c6_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",6);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_BaseEngineController_A02(SimStruct *S)
{
  SFc6_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc6_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc6_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c6_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_BaseEngineController_A02;
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

void c6_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
