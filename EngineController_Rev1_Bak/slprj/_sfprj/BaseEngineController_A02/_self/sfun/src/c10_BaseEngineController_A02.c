/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c10_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c10_IN_NO_ACTIVE_CHILD         (0U)
#define c10_IN_PassThrough             (2U)
#define c10_IN_OverrideAPP             (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void c10_update_debugger_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_st);
static void c10_set_sim_state_side_effects_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void finalize_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber);
static const mxArray *c10_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static int32_T c10_emlrt_marshallIn(SFc10_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_b_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static uint8_T c10_b_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_b_tp_PassThrough, const char_T *c10_identifier);
static uint8_T c10_c_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_c_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static real_T c10_d_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_APP_Out, const char_T *c10_identifier);
static real_T c10_e_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_d_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static boolean_T c10_f_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_APP_Mode, const char_T *c10_identifier);
static boolean_T c10_g_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_h_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_b_setSimStateSideEffectsInfo, const char_T *c10_identifier);
static const mxArray *c10_i_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void init_dsm_address_info(SFc10_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  real_T *c10_APP_Out;
  boolean_T *c10_APP_Mode;
  c10_APP_Mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c10_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c10_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c10_doSetSimStateSideEffects = 0U;
  chartInstance->c10_setSimStateSideEffectsInfo = NULL;
  chartInstance->c10_tp_OverrideAPP = 0U;
  chartInstance->c10_tp_PassThrough = 0U;
  chartInstance->c10_is_active_c10_BaseEngineController_A02 = 0U;
  chartInstance->c10_is_c10_BaseEngineController_A02 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c10_APP_Out = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c10_APP_Mode = FALSE;
  }

  _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  chartInstance->c10_is_active_c10_BaseEngineController_A02 = 1U;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, chartInstance->c10_sfEvent);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
  chartInstance->c10_is_c10_BaseEngineController_A02 = c10_IN_PassThrough;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
  chartInstance->c10_tp_PassThrough = 1U;
  *c10_APP_Mode = FALSE;
  _SFD_DATA_RANGE_CHECK((real_T)*c10_APP_Mode, 4U);
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
}

static void initialize_params_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c10_update_debugger_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  uint32_T c10_prevAniVal;
  c10_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c10_is_active_c10_BaseEngineController_A02 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 8U, chartInstance->c10_sfEvent);
  }

  if (chartInstance->c10_is_c10_BaseEngineController_A02 == c10_IN_PassThrough)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
  }

  if (chartInstance->c10_is_c10_BaseEngineController_A02 == c10_IN_OverrideAPP)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
  }

  sf_debug_set_animation(c10_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c10_st;
  const mxArray *c10_y = NULL;
  boolean_T c10_hoistedGlobal;
  boolean_T c10_u;
  const mxArray *c10_b_y = NULL;
  real_T c10_b_hoistedGlobal;
  real_T c10_b_u;
  const mxArray *c10_c_y = NULL;
  uint8_T c10_c_hoistedGlobal;
  uint8_T c10_c_u;
  const mxArray *c10_d_y = NULL;
  uint8_T c10_d_hoistedGlobal;
  uint8_T c10_d_u;
  const mxArray *c10_e_y = NULL;
  boolean_T *c10_APP_Mode;
  real_T *c10_APP_Out;
  c10_APP_Mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c10_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c10_st = NULL;
  c10_st = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_createcellarray(4));
  c10_hoistedGlobal = *c10_APP_Mode;
  c10_u = c10_hoistedGlobal;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 0, c10_b_y);
  c10_b_hoistedGlobal = *c10_APP_Out;
  c10_b_u = c10_b_hoistedGlobal;
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", &c10_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 1, c10_c_y);
  c10_c_hoistedGlobal =
    chartInstance->c10_is_active_c10_BaseEngineController_A02;
  c10_c_u = c10_c_hoistedGlobal;
  c10_d_y = NULL;
  sf_mex_assign(&c10_d_y, sf_mex_create("y", &c10_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 2, c10_d_y);
  c10_d_hoistedGlobal = chartInstance->c10_is_c10_BaseEngineController_A02;
  c10_d_u = c10_d_hoistedGlobal;
  c10_e_y = NULL;
  sf_mex_assign(&c10_e_y, sf_mex_create("y", &c10_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 3, c10_e_y);
  sf_mex_assign(&c10_st, c10_y);
  return c10_st;
}

static void set_sim_state_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_st)
{
  const mxArray *c10_u;
  boolean_T *c10_APP_Mode;
  real_T *c10_APP_Out;
  c10_APP_Mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c10_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c10_doneDoubleBufferReInit = TRUE;
  c10_u = sf_mex_dup(c10_st);
  *c10_APP_Mode = c10_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c10_u, 0)), "APP_Mode");
  *c10_APP_Out = c10_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c10_u, 1)), "APP_Out");
  chartInstance->c10_is_active_c10_BaseEngineController_A02 =
    c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 2)),
    "is_active_c10_BaseEngineController_A02");
  chartInstance->c10_is_c10_BaseEngineController_A02 = c10_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 3)),
     "is_c10_BaseEngineController_A02");
  sf_mex_assign(&chartInstance->c10_setSimStateSideEffectsInfo,
                c10_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c10_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c10_u);
  chartInstance->c10_doSetSimStateSideEffects = 1U;
  c10_update_debugger_state_c10_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c10_st);
}

static void c10_set_sim_state_side_effects_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  if (chartInstance->c10_doSetSimStateSideEffects != 0) {
    if (chartInstance->c10_is_c10_BaseEngineController_A02 == c10_IN_OverrideAPP)
    {
      chartInstance->c10_tp_OverrideAPP = 1U;
    } else {
      chartInstance->c10_tp_OverrideAPP = 0U;
    }

    if (chartInstance->c10_is_c10_BaseEngineController_A02 == c10_IN_PassThrough)
    {
      chartInstance->c10_tp_PassThrough = 1U;
    } else {
      chartInstance->c10_tp_PassThrough = 0U;
    }

    chartInstance->c10_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c10_setSimStateSideEffectsInfo);
}

static void sf_c10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
  boolean_T c10_temp;
  boolean_T c10_b_temp;
  real_T *c10_APP_Out;
  uint8_T *c10_EngineState;
  uint8_T *c10_EngineState_Old;
  real_T *c10_APP_In;
  boolean_T *c10_APP_Mode;
  c10_APP_Mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c10_APP_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c10_EngineState_Old = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c10_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c10_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c10_set_sim_state_side_effects_c10_BaseEngineController_A02(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c10_APP_Out, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c10_EngineState, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c10_EngineState_Old, 2U);
  _SFD_DATA_RANGE_CHECK(*c10_APP_In, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c10_APP_Mode, 4U);
  chartInstance->c10_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  switch (chartInstance->c10_is_c10_BaseEngineController_A02) {
   case c10_IN_OverrideAPP:
    CV_CHART_EVAL(8, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                 chartInstance->c10_sfEvent);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c10_APP_In <= 3.0
          != 0U, chartInstance->c10_sfEvent))) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c10_sfEvent);
      chartInstance->c10_tp_OverrideAPP = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
      chartInstance->c10_is_c10_BaseEngineController_A02 = c10_IN_PassThrough;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
      chartInstance->c10_tp_PassThrough = 1U;
      *c10_APP_Mode = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c10_APP_Mode, 4U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c10_sfEvent);
    break;

   case c10_IN_PassThrough:
    CV_CHART_EVAL(8, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 chartInstance->c10_sfEvent);
    c10_temp = (_SFD_CCP_CALL(1U, 0, (int16_T)*c10_EngineState == 3 != 0U,
      chartInstance->c10_sfEvent) != 0);
    if (c10_temp) {
      c10_temp = (_SFD_CCP_CALL(1U, 1, (int16_T)*c10_EngineState_Old == 2 != 0U,
        chartInstance->c10_sfEvent) != 0);
    }

    c10_b_temp = c10_temp;
    if (c10_b_temp) {
      c10_b_temp = (_SFD_CCP_CALL(1U, 2, *c10_APP_In > 3.0 != 0U,
        chartInstance->c10_sfEvent) != 0);
    }

    if (CV_TRANSITION_EVAL(1U, (int32_T)c10_b_temp)) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
      chartInstance->c10_tp_PassThrough = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c10_sfEvent);
      chartInstance->c10_is_c10_BaseEngineController_A02 = c10_IN_OverrideAPP;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
      chartInstance->c10_tp_OverrideAPP = 1U;
      *c10_APP_Out = 0.0;
      _SFD_DATA_RANGE_CHECK(*c10_APP_Out, 0U);
      *c10_APP_Mode = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c10_APP_Mode, 4U);
    } else {
      *c10_APP_Out = *c10_APP_In;
      _SFD_DATA_RANGE_CHECK(*c10_APP_Out, 0U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c10_sfEvent);
    break;

   default:
    CV_CHART_EVAL(8, 0, 0);
    chartInstance->c10_is_c10_BaseEngineController_A02 = (uint8_T)
      c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, chartInstance->c10_sfEvent);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc10_BaseEngineController_A02
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber)
{
}

const mxArray *sf_c10_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_nameCaptureInfo = NULL;
  sf_mex_assign(&c10_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c10_nameCaptureInfo;
}

static const mxArray *c10_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData = NULL;
  int32_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_u = *(int32_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_mxArrayOutData, c10_y);
  return c10_mxArrayOutData;
}

static int32_T c10_emlrt_marshallIn(SFc10_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  int32_T c10_y;
  int32_T c10_i0;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_i0, 1, 6, 0U, 0, 0U, 0);
  c10_y = c10_i0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_b_sfEvent;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  int32_T c10_y;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_b_sfEvent = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_sfEvent),
    &c10_thisId);
  sf_mex_destroy(&c10_b_sfEvent);
  *(int32_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_b_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData = NULL;
  uint8_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_u = *(uint8_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_mxArrayOutData, c10_y);
  return c10_mxArrayOutData;
}

static uint8_T c10_b_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_b_tp_PassThrough, const char_T *c10_identifier)
{
  uint8_T c10_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_tp_PassThrough),
    &c10_thisId);
  sf_mex_destroy(&c10_b_tp_PassThrough);
  return c10_y;
}

static uint8_T c10_c_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  uint8_T c10_y;
  uint8_T c10_u0;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_u0, 1, 3, 0U, 0, 0U, 0);
  c10_y = c10_u0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_b_tp_PassThrough;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  uint8_T c10_y;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_b_tp_PassThrough = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_tp_PassThrough),
    &c10_thisId);
  sf_mex_destroy(&c10_b_tp_PassThrough);
  *(uint8_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_c_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData = NULL;
  real_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_u = *(real_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_mxArrayOutData, c10_y);
  return c10_mxArrayOutData;
}

static real_T c10_d_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_APP_Out, const char_T *c10_identifier)
{
  real_T c10_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_APP_Out),
    &c10_thisId);
  sf_mex_destroy(&c10_APP_Out);
  return c10_y;
}

static real_T c10_e_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  real_T c10_y;
  real_T c10_d0;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_d0, 1, 0, 0U, 0, 0U, 0);
  c10_y = c10_d0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_APP_Out;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  real_T c10_y;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_APP_Out = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_APP_Out),
    &c10_thisId);
  sf_mex_destroy(&c10_APP_Out);
  *(real_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_d_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData = NULL;
  boolean_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_u = *(boolean_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_mxArrayOutData, c10_y);
  return c10_mxArrayOutData;
}

static boolean_T c10_f_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_APP_Mode, const char_T *c10_identifier)
{
  boolean_T c10_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_APP_Mode),
    &c10_thisId);
  sf_mex_destroy(&c10_APP_Mode);
  return c10_y;
}

static boolean_T c10_g_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  boolean_T c10_y;
  boolean_T c10_b0;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_b0, 1, 11, 0U, 0, 0U, 0);
  c10_y = c10_b0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_APP_Mode;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  boolean_T c10_y;
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c10_APP_Mode = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_y = c10_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_APP_Mode),
    &c10_thisId);
  sf_mex_destroy(&c10_APP_Mode);
  *(boolean_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_h_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_b_setSimStateSideEffectsInfo, const char_T *c10_identifier)
{
  const mxArray *c10_y = NULL;
  emlrtMsgIdentifier c10_thisId;
  c10_y = NULL;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  sf_mex_assign(&c10_y, c10_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c10_b_setSimStateSideEffectsInfo), &c10_thisId));
  sf_mex_destroy(&c10_b_setSimStateSideEffectsInfo);
  return c10_y;
}

static const mxArray *c10_i_emlrt_marshallIn
  (SFc10_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  const mxArray *c10_y = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_duplicatearraysafe(&c10_u));
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void init_dsm_address_info(SFc10_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c10_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2456074919U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2386320430U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2941653769U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1193169601U);
}

mxArray *sf_c10_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2371370857U);
    pr[1] = (double)(648549922U);
    pr[2] = (double)(430070055U);
    pr[3] = (double)(2254546722U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c10_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[10],T\"APP_Mode\",},{M[1],M[6],T\"APP_Out\",},{M[8],M[0],T\"is_active_c10_BaseEngineController_A02\",},{M[9],M[0],T\"is_c10_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           10,
           2,
           3,
           5,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"APP_Out");
          _SFD_SET_DATA_PROPS(1,1,1,0,"EngineState");
          _SFD_SET_DATA_PROPS(2,1,1,0,"EngineState_Old");
          _SFD_SET_DATA_PROPS(3,1,1,0,"APP_In");
          _SFD_SET_DATA_PROPS(4,2,0,1,"APP_Mode");
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
          static unsigned int sStartGuardMap[] = { 1, 17, 37 };

          static unsigned int sEndGuardMap[] = { 15, 35, 45 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

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
          static unsigned int sStartGuardMap[] = { 1, 17, 37 };

          static unsigned int sEndGuardMap[] = { 15, 35, 45 };

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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_c_sf_marshallOut,(MexInFcnForType)
          c10_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_d_sf_marshallOut,(MexInFcnForType)
          c10_d_sf_marshallIn);

        {
          real_T *c10_APP_Out;
          uint8_T *c10_EngineState;
          uint8_T *c10_EngineState_Old;
          real_T *c10_APP_In;
          boolean_T *c10_APP_Mode;
          c10_APP_Mode = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c10_APP_In = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c10_EngineState_Old = (uint8_T *)ssGetInputPortSignal(chartInstance->S,
            1);
          c10_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c10_APP_Out = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c10_APP_Out);
          _SFD_SET_DATA_VALUE_PTR(1U, c10_EngineState);
          _SFD_SET_DATA_VALUE_PTR(2U, c10_EngineState_Old);
          _SFD_SET_DATA_VALUE_PTR(3U, c10_APP_In);
          _SFD_SET_DATA_VALUE_PTR(4U, c10_APP_Mode);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c10_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc10_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c10_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_BaseEngineController_A02(void
  *chartInstanceVar)
{
  disable_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c10_BaseEngineController_A02(void
  *chartInstanceVar)
{
  sf_c10_BaseEngineController_A02((SFc10_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c10_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c10_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c10_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c10_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c10_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c10_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c10_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c10_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c10_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c10_BaseEngineController_A02
      ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc10_BaseEngineController_A02
    ((SFc10_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_BaseEngineController_A02
      ((SFc10_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c10_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",10);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",10,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",10,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",10,3);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",10,2);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",10);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetCallsOutputInInitFcn(S,1);
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(554618382U));
  ssSetChecksum1(S,(3113206387U));
  ssSetChecksum2(S,(271921362U));
  ssSetChecksum3(S,(1258662936U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c10_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",10);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c10_BaseEngineController_A02(SimStruct *S)
{
  SFc10_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc10_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc10_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc10_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c10_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c10_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c10_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c10_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c10_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c10_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c10_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c10_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c10_BaseEngineController_A02;
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

void c10_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c10_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
