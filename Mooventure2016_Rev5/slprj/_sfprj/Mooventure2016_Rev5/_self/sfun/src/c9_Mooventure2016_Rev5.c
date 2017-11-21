/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c9_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c9_IN_NO_ACTIVE_CHILD          (0U)
#define c9_IN_Coil2Disabled            (1U)
#define c9_IN_Coil2Enabled             (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c9_Mooventure2016_Rev5(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void disable_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c9_update_debugger_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c9_st);
static void c9_set_sim_state_side_effects_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c9_Mooventure2016_Rev5(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber);
static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData);
static int32_T c9_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static uint8_T c9_b_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_b_tp_Coil2Disabled, const char_T
  *c9_identifier);
static uint8_T c9_c_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_c_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData);
static boolean_T c9_d_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_Coil2State, const char_T *c9_identifier);
static boolean_T c9_e_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData);
static const mxArray *c9_f_emlrt_marshallIn
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c9_b_setSimStateSideEffectsInfo, const char_T *c9_identifier);
static const mxArray *c9_g_emlrt_marshallIn
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c9_u,
   const emlrtMsgIdentifier *c9_parentId);
static void init_dsm_address_info(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c9_Coil2State;
  c9_Coil2State = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c9_doSetSimStateSideEffects = 0U;
  chartInstance->c9_setSimStateSideEffectsInfo = NULL;
  chartInstance->c9_tp_Coil2Disabled = 0U;
  chartInstance->c9_tp_Coil2Enabled = 0U;
  chartInstance->c9_is_active_c9_Mooventure2016_Rev5 = 0U;
  chartInstance->c9_is_c9_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c9_Coil2State = FALSE;
  }
}

static void initialize_params_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c9_Mooventure2016_Rev5(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c9_update_debugger_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c9_prevAniVal;
  c9_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c9_is_active_c9_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 8U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_Mooventure2016_Rev5 == c9_IN_Coil2Disabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
  }

  if (chartInstance->c9_is_c9_Mooventure2016_Rev5 == c9_IN_Coil2Enabled) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
  }

  sf_debug_set_animation(c9_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c9_st;
  const mxArray *c9_y = NULL;
  boolean_T c9_hoistedGlobal;
  boolean_T c9_u;
  const mxArray *c9_b_y = NULL;
  uint8_T c9_b_hoistedGlobal;
  uint8_T c9_b_u;
  const mxArray *c9_c_y = NULL;
  uint8_T c9_c_hoistedGlobal;
  uint8_T c9_c_u;
  const mxArray *c9_d_y = NULL;
  boolean_T *c9_Coil2State;
  c9_Coil2State = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_st = NULL;
  c9_st = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_createcellarray(3));
  c9_hoistedGlobal = *c9_Coil2State;
  c9_u = c9_hoistedGlobal;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", &c9_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 0, c9_b_y);
  c9_b_hoistedGlobal = chartInstance->c9_is_active_c9_Mooventure2016_Rev5;
  c9_b_u = c9_b_hoistedGlobal;
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", &c9_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 1, c9_c_y);
  c9_c_hoistedGlobal = chartInstance->c9_is_c9_Mooventure2016_Rev5;
  c9_c_u = c9_c_hoistedGlobal;
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c9_y, 2, c9_d_y);
  sf_mex_assign(&c9_st, c9_y);
  return c9_st;
}

static void set_sim_state_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c9_st)
{
  const mxArray *c9_u;
  boolean_T *c9_Coil2State;
  c9_Coil2State = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_u = sf_mex_dup(c9_st);
  *c9_Coil2State = c9_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 0)), "Coil2State");
  chartInstance->c9_is_active_c9_Mooventure2016_Rev5 = c9_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 1)),
     "is_active_c9_Mooventure2016_Rev5");
  chartInstance->c9_is_c9_Mooventure2016_Rev5 = c9_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 2)),
     "is_c9_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c9_setSimStateSideEffectsInfo,
                c9_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c9_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c9_u);
  chartInstance->c9_doSetSimStateSideEffects = 1U;
  c9_update_debugger_state_c9_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c9_st);
}

static void c9_set_sim_state_side_effects_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c9_doSetSimStateSideEffects != 0) {
    if (chartInstance->c9_is_c9_Mooventure2016_Rev5 == c9_IN_Coil2Disabled) {
      chartInstance->c9_tp_Coil2Disabled = 1U;
    } else {
      chartInstance->c9_tp_Coil2Disabled = 0U;
    }

    if (chartInstance->c9_is_c9_Mooventure2016_Rev5 == c9_IN_Coil2Enabled) {
      chartInstance->c9_tp_Coil2Enabled = 1U;
    } else {
      chartInstance->c9_tp_Coil2Enabled = 0U;
    }

    chartInstance->c9_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c9_setSimStateSideEffectsInfo);
}

static void sf_c9_Mooventure2016_Rev5(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T c9_temp;
  boolean_T c9_b_temp;
  boolean_T *c9_ChargerOn;
  boolean_T *c9_ComponentKeyed;
  boolean_T *c9_Coil2State;
  c9_Coil2State = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c9_ComponentKeyed = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c9_ChargerOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c9_set_sim_state_side_effects_c9_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_ChargerOn, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_ComponentKeyed, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c9_Coil2State, 2U);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  if ((int16_T)chartInstance->c9_is_active_c9_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
    chartInstance->c9_is_active_c9_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c9_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
    chartInstance->c9_is_c9_Mooventure2016_Rev5 = c9_IN_Coil2Disabled;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
    chartInstance->c9_tp_Coil2Disabled = 1U;
  } else {
    switch (chartInstance->c9_is_c9_Mooventure2016_Rev5) {
     case c9_IN_Coil2Disabled:
      CV_CHART_EVAL(8, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c9_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c9_sfEvent);
      c9_temp = !(_SFD_CCP_CALL(2U, 0, *c9_ChargerOn != 0U,
        chartInstance->c9_sfEvent) != 0);
      if (c9_temp) {
        c9_temp = (_SFD_CCP_CALL(2U, 1, *c9_ComponentKeyed != 0U,
                    chartInstance->c9_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c9_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_Coil2Disabled = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
        chartInstance->c9_is_c9_Mooventure2016_Rev5 = c9_IN_Coil2Enabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_Coil2Enabled = 1U;
      } else {
        *c9_Coil2State = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_Coil2State, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c9_sfEvent);
      break;

     case c9_IN_Coil2Enabled:
      CV_CHART_EVAL(8, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c9_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c9_sfEvent);
      c9_b_temp = !(_SFD_CCP_CALL(1U, 0, *c9_ChargerOn != 0U,
        chartInstance->c9_sfEvent) != 0);
      if (c9_b_temp) {
        c9_b_temp = !(_SFD_CCP_CALL(1U, 1, *c9_ComponentKeyed != 0U,
          chartInstance->c9_sfEvent) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c9_b_temp)) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_Coil2Enabled = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c9_sfEvent);
        chartInstance->c9_is_c9_Mooventure2016_Rev5 = c9_IN_Coil2Disabled;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
        chartInstance->c9_tp_Coil2Disabled = 1U;
      } else {
        *c9_Coil2State = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c9_Coil2State, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c9_sfEvent);
      break;

     default:
      CV_CHART_EVAL(8, 0, 0);
      chartInstance->c9_is_c9_Mooventure2016_Rev5 = (uint8_T)
        c9_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c9_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c9_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc9_Mooventure2016_Rev5
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c9_machineNumber, uint32_T
  c9_chartNumber)
{
}

const mxArray *sf_c9_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  sf_mex_assign(&c9_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c9_nameCaptureInfo;
}

static const mxArray *c9_sf_marshallOut(void *chartInstanceVoid, void *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  int32_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(int32_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static int32_T c9_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  int32_T c9_y;
  int32_T c9_i0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_i0, 1, 6, 0U, 0, 0U, 0);
  c9_y = c9_i0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_sfEvent;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  int32_T c9_y;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_b_sfEvent = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_sfEvent), &c9_thisId);
  sf_mex_destroy(&c9_b_sfEvent);
  *(int32_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_b_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  uint8_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(uint8_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static uint8_T c9_b_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_b_tp_Coil2Disabled, const char_T
  *c9_identifier)
{
  uint8_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_tp_Coil2Disabled),
    &c9_thisId);
  sf_mex_destroy(&c9_b_tp_Coil2Disabled);
  return c9_y;
}

static uint8_T c9_c_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_y;
  uint8_T c9_u0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_u0, 1, 3, 0U, 0, 0U, 0);
  c9_y = c9_u0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_b_tp_Coil2Disabled;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  uint8_T c9_y;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_b_tp_Coil2Disabled = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_tp_Coil2Disabled),
    &c9_thisId);
  sf_mex_destroy(&c9_b_tp_Coil2Disabled);
  *(uint8_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_c_sf_marshallOut(void *chartInstanceVoid, void
  *c9_inData)
{
  const mxArray *c9_mxArrayOutData = NULL;
  boolean_T c9_u;
  const mxArray *c9_y = NULL;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_mxArrayOutData = NULL;
  c9_u = *(boolean_T *)c9_inData;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_create("y", &c9_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c9_mxArrayOutData, c9_y);
  return c9_mxArrayOutData;
}

static boolean_T c9_d_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_Coil2State, const char_T *c9_identifier)
{
  boolean_T c9_y;
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_Coil2State),
    &c9_thisId);
  sf_mex_destroy(&c9_Coil2State);
  return c9_y;
}

static boolean_T c9_e_emlrt_marshallIn(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  boolean_T c9_y;
  boolean_T c9_b0;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b0, 1, 11, 0U, 0, 0U, 0);
  c9_y = c9_b0;
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void c9_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c9_mxArrayInData, const char_T *c9_varName, void *c9_outData)
{
  const mxArray *c9_Coil2State;
  const char_T *c9_identifier;
  emlrtMsgIdentifier c9_thisId;
  boolean_T c9_y;
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c9_Coil2State = sf_mex_dup(c9_mxArrayInData);
  c9_identifier = c9_varName;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  c9_y = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_Coil2State),
    &c9_thisId);
  sf_mex_destroy(&c9_Coil2State);
  *(boolean_T *)c9_outData = c9_y;
  sf_mex_destroy(&c9_mxArrayInData);
}

static const mxArray *c9_f_emlrt_marshallIn
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c9_b_setSimStateSideEffectsInfo, const char_T *c9_identifier)
{
  const mxArray *c9_y = NULL;
  emlrtMsgIdentifier c9_thisId;
  c9_y = NULL;
  c9_thisId.fIdentifier = c9_identifier;
  c9_thisId.fParent = NULL;
  sf_mex_assign(&c9_y, c9_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c9_b_setSimStateSideEffectsInfo), &c9_thisId));
  sf_mex_destroy(&c9_b_setSimStateSideEffectsInfo);
  return c9_y;
}

static const mxArray *c9_g_emlrt_marshallIn
  (SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c9_u,
   const emlrtMsgIdentifier *c9_parentId)
{
  const mxArray *c9_y = NULL;
  c9_y = NULL;
  sf_mex_assign(&c9_y, sf_mex_duplicatearraysafe(&c9_u));
  sf_mex_destroy(&c9_u);
  return c9_y;
}

static void init_dsm_address_info(SFc9_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c9_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3447654863U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2504432596U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3137361692U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(207744386U);
}

mxArray *sf_c9_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3816194049U);
    pr[1] = (double)(272805588U);
    pr[2] = (double)(4281663591U);
    pr[3] = (double)(3017488663U);
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

static const mxArray *sf_get_sim_state_info_c9_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[36],T\"Coil2State\",},{M[8],M[0],T\"is_active_c9_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c9_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           9,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"ChargerOn");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ComponentKeyed");
          _SFD_SET_DATA_PROPS(2,2,0,1,"Coil2State");
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
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 11, 30 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 15 };

          static unsigned int sEndGuardMap[] = { 11, 29 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
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
          static unsigned int sStartGuardMap[] = { 2, 16 };

          static unsigned int sEndGuardMap[] = { 11, 30 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 15 };

          static unsigned int sEndGuardMap[] = { 11, 29 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c9_c_sf_marshallOut,(MexInFcnForType)c9_c_sf_marshallIn);

        {
          boolean_T *c9_ChargerOn;
          boolean_T *c9_ComponentKeyed;
          boolean_T *c9_Coil2State;
          c9_Coil2State = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c9_ComponentKeyed = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c9_ChargerOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c9_ChargerOn);
          _SFD_SET_DATA_VALUE_PTR(1U, c9_ComponentKeyed);
          _SFD_SET_DATA_VALUE_PTR(2U, c9_Coil2State);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c9_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c9_Mooventure2016_Rev5
    ((SFc9_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c9_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c9_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c9_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c9_Mooventure2016_Rev5(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c9_Mooventure2016_Rev5
    ((SFc9_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c9_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c9_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c9_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c9_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c9_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c9_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c9_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_Mooventure2016_Rev5((SFc9_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_Mooventure2016_Rev5
      ((SFc9_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c9_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      9);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",9,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",9,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",9,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",9,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",9);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1657368145U));
  ssSetChecksum1(S,(1496859746U));
  ssSetChecksum2(S,(1487951846U));
  ssSetChecksum3(S,(1505464292U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c9_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",9);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c9_Mooventure2016_Rev5(SimStruct *S)
{
  SFc9_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc9_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc9_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc9_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c9_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_Mooventure2016_Rev5;
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

void c9_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c9_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
