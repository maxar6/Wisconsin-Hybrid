/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c28_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c28_IN_NO_ACTIVE_CHILD         (0U)
#define c28_IN_INIT                    (1U)
#define c28_IN_MotorRunning            (2U)
#define c28_IN_PowerSteeringOn         (4U)
#define c28_IN_PowerSteeringOff        (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c28_update_debugger_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c28_st);
static void c28_set_sim_state_side_effects_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c28_Mooventure2016_Rev5(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c28_machineNumber, uint32_T
  c28_chartNumber);
static const mxArray *c28_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static int32_T c28_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void c28_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData);
static const mxArray *c28_b_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static uint8_T c28_b_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_b_tp_INIT, const char_T *c28_identifier);
static uint8_T c28_c_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void c28_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData);
static const mxArray *c28_c_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static const mxArray *c28_d_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData);
static boolean_T c28_d_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c28_VehicleReadyOutput, const char_T
  *c28_identifier);
static boolean_T c28_e_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId);
static void c28_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData);
static const mxArray *c28_f_emlrt_marshallIn
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c28_b_setSimStateSideEffectsInfo, const char_T *c28_identifier);
static const mxArray *c28_g_emlrt_marshallIn
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c28_u,
   const emlrtMsgIdentifier *c28_parentId);
static void init_dsm_address_info(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c28_VehicleReadyOutput;
  c28_VehicleReadyOutput = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  chartInstance->c28_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c28_doSetSimStateSideEffects = 0U;
  chartInstance->c28_setSimStateSideEffectsInfo = NULL;
  chartInstance->c28_tp_INIT = 0U;
  chartInstance->c28_tp_MotorRunning = 0U;
  chartInstance->c28_tp_PowerSteeringOff = 0U;
  chartInstance->c28_tp_PowerSteeringOn = 0U;
  chartInstance->c28_is_active_c28_Mooventure2016_Rev5 = 0U;
  chartInstance->c28_is_c28_Mooventure2016_Rev5 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c28_VehicleReadyOutput = FALSE;
  }
}

static void initialize_params_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c28_update_debugger_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c28_prevAniVal;
  c28_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c28_is_active_c28_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 27U, chartInstance->c28_sfEvent);
  }

  if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_INIT) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
  }

  if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_MotorRunning) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c28_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c28_sfEvent);
  }

  if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_PowerSteeringOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c28_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c28_sfEvent);
  }

  if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_PowerSteeringOff)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c28_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c28_sfEvent);
  }

  sf_debug_set_animation(c28_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c28_st;
  const mxArray *c28_y = NULL;
  boolean_T c28_hoistedGlobal;
  boolean_T c28_u;
  const mxArray *c28_b_y = NULL;
  uint8_T c28_b_hoistedGlobal;
  uint8_T c28_b_u;
  const mxArray *c28_c_y = NULL;
  uint8_T c28_c_hoistedGlobal;
  uint8_T c28_c_u;
  const mxArray *c28_d_y = NULL;
  boolean_T *c28_VehicleReadyOutput;
  c28_VehicleReadyOutput = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  c28_st = NULL;
  c28_st = NULL;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_createcellarray(3));
  c28_hoistedGlobal = *c28_VehicleReadyOutput;
  c28_u = c28_hoistedGlobal;
  c28_b_y = NULL;
  sf_mex_assign(&c28_b_y, sf_mex_create("y", &c28_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c28_y, 0, c28_b_y);
  c28_b_hoistedGlobal = chartInstance->c28_is_active_c28_Mooventure2016_Rev5;
  c28_b_u = c28_b_hoistedGlobal;
  c28_c_y = NULL;
  sf_mex_assign(&c28_c_y, sf_mex_create("y", &c28_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c28_y, 1, c28_c_y);
  c28_c_hoistedGlobal = chartInstance->c28_is_c28_Mooventure2016_Rev5;
  c28_c_u = c28_c_hoistedGlobal;
  c28_d_y = NULL;
  sf_mex_assign(&c28_d_y, sf_mex_create("y", &c28_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c28_y, 2, c28_d_y);
  sf_mex_assign(&c28_st, c28_y);
  return c28_st;
}

static void set_sim_state_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c28_st)
{
  const mxArray *c28_u;
  boolean_T *c28_VehicleReadyOutput;
  c28_VehicleReadyOutput = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  c28_u = sf_mex_dup(c28_st);
  *c28_VehicleReadyOutput = c28_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c28_u, 0)), "VehicleReadyOutput");
  chartInstance->c28_is_active_c28_Mooventure2016_Rev5 = c28_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c28_u, 1)),
     "is_active_c28_Mooventure2016_Rev5");
  chartInstance->c28_is_c28_Mooventure2016_Rev5 = c28_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c28_u, 2)),
     "is_c28_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c28_setSimStateSideEffectsInfo,
                c28_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c28_u, 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c28_u);
  chartInstance->c28_doSetSimStateSideEffects = 1U;
  c28_update_debugger_state_c28_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c28_st);
}

static void c28_set_sim_state_side_effects_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c28_doSetSimStateSideEffects != 0) {
    if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_INIT) {
      chartInstance->c28_tp_INIT = 1U;
    } else {
      chartInstance->c28_tp_INIT = 0U;
    }

    if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_MotorRunning) {
      chartInstance->c28_tp_MotorRunning = 1U;
    } else {
      chartInstance->c28_tp_MotorRunning = 0U;
    }

    if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_PowerSteeringOff)
    {
      chartInstance->c28_tp_PowerSteeringOff = 1U;
    } else {
      chartInstance->c28_tp_PowerSteeringOff = 0U;
    }

    if (chartInstance->c28_is_c28_Mooventure2016_Rev5 == c28_IN_PowerSteeringOn)
    {
      chartInstance->c28_tp_PowerSteeringOn = 1U;
    } else {
      chartInstance->c28_tp_PowerSteeringOn = 0U;
    }

    chartInstance->c28_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c28_setSimStateSideEffectsInfo);
}

static void sf_c28_Mooventure2016_Rev5(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T *c28_VehicleReadyInput;
  real_T *c28_ShiftPosition;
  boolean_T *c28_MotorReady;
  boolean_T *c28_VehicleReadyOutput;
  c28_VehicleReadyOutput = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  c28_MotorReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c28_ShiftPosition = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c28_VehicleReadyInput = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c28_set_sim_state_side_effects_c28_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyInput, 0U);
  _SFD_DATA_RANGE_CHECK(*c28_ShiftPosition, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c28_MotorReady, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyOutput, 3U);
  chartInstance->c28_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
  if ((int16_T)chartInstance->c28_is_active_c28_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
    chartInstance->c28_is_active_c28_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c28_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
    chartInstance->c28_is_c28_Mooventure2016_Rev5 = c28_IN_INIT;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
    chartInstance->c28_tp_INIT = 1U;
  } else {
    switch (chartInstance->c28_is_c28_Mooventure2016_Rev5) {
     case c28_IN_INIT:
      CV_CHART_EVAL(27, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c28_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c28_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c28_MotorReady
            != 0U, chartInstance->c28_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_INIT = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
        chartInstance->c28_is_c28_Mooventure2016_Rev5 = c28_IN_MotorRunning;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_MotorRunning = 1U;
      } else {
        *c28_VehicleReadyOutput = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyOutput, 3U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c28_sfEvent);
      break;

     case c28_IN_MotorRunning:
      CV_CHART_EVAL(27, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c28_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c28_sfEvent);
      if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2U, 0, *c28_VehicleReadyInput
             != 0U, chartInstance->c28_sfEvent) != 0))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_MotorRunning = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c28_sfEvent);
        chartInstance->c28_is_c28_Mooventure2016_Rev5 = c28_IN_PowerSteeringOn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_PowerSteeringOn = 1U;
      } else {
        *c28_VehicleReadyOutput = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyOutput, 3U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c28_sfEvent);
      break;

     case c28_IN_PowerSteeringOff:
      CV_CHART_EVAL(27, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c28_sfEvent);
      *c28_VehicleReadyOutput = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyOutput, 3U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c28_sfEvent);
      break;

     case c28_IN_PowerSteeringOn:
      CV_CHART_EVAL(27, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c28_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c28_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
            *c28_ShiftPosition == 2.0 != 0U, chartInstance->c28_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_PowerSteeringOn = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c28_sfEvent);
        chartInstance->c28_is_c28_Mooventure2016_Rev5 = c28_IN_PowerSteeringOff;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c28_sfEvent);
        chartInstance->c28_tp_PowerSteeringOff = 1U;
      } else {
        *c28_VehicleReadyOutput = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c28_VehicleReadyOutput, 3U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c28_sfEvent);
      break;

     default:
      CV_CHART_EVAL(27, 0, 0);
      chartInstance->c28_is_c28_Mooventure2016_Rev5 = (uint8_T)
        c28_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c28_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, chartInstance->c28_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc28_Mooventure2016_Rev5
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c28_machineNumber, uint32_T
  c28_chartNumber)
{
}

const mxArray *sf_c28_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c28_nameCaptureInfo = NULL;
  c28_nameCaptureInfo = NULL;
  sf_mex_assign(&c28_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c28_nameCaptureInfo;
}

static const mxArray *c28_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  int32_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(int32_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c28_mxArrayOutData, c28_y);
  return c28_mxArrayOutData;
}

static int32_T c28_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  int32_T c28_y;
  int32_T c28_i0;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_i0, 1, 6, 0U, 0, 0U, 0);
  c28_y = c28_i0;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void c28_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData)
{
  const mxArray *c28_b_sfEvent;
  const char_T *c28_identifier;
  emlrtMsgIdentifier c28_thisId;
  int32_T c28_y;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_b_sfEvent = sf_mex_dup(c28_mxArrayInData);
  c28_identifier = c28_varName;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_b_sfEvent),
    &c28_thisId);
  sf_mex_destroy(&c28_b_sfEvent);
  *(int32_T *)c28_outData = c28_y;
  sf_mex_destroy(&c28_mxArrayInData);
}

static const mxArray *c28_b_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  uint8_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(uint8_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c28_mxArrayOutData, c28_y);
  return c28_mxArrayOutData;
}

static uint8_T c28_b_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_b_tp_INIT, const char_T *c28_identifier)
{
  uint8_T c28_y;
  emlrtMsgIdentifier c28_thisId;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_b_tp_INIT),
    &c28_thisId);
  sf_mex_destroy(&c28_b_tp_INIT);
  return c28_y;
}

static uint8_T c28_c_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  uint8_T c28_y;
  uint8_T c28_u0;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_u0, 1, 3, 0U, 0, 0U, 0);
  c28_y = c28_u0;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void c28_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData)
{
  const mxArray *c28_b_tp_INIT;
  const char_T *c28_identifier;
  emlrtMsgIdentifier c28_thisId;
  uint8_T c28_y;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_b_tp_INIT = sf_mex_dup(c28_mxArrayInData);
  c28_identifier = c28_varName;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c28_b_tp_INIT),
    &c28_thisId);
  sf_mex_destroy(&c28_b_tp_INIT);
  *(uint8_T *)c28_outData = c28_y;
  sf_mex_destroy(&c28_mxArrayInData);
}

static const mxArray *c28_c_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  boolean_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(boolean_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c28_mxArrayOutData, c28_y);
  return c28_mxArrayOutData;
}

static const mxArray *c28_d_sf_marshallOut(void *chartInstanceVoid, void
  *c28_inData)
{
  const mxArray *c28_mxArrayOutData = NULL;
  real_T c28_u;
  const mxArray *c28_y = NULL;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_mxArrayOutData = NULL;
  c28_u = *(real_T *)c28_inData;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_create("y", &c28_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c28_mxArrayOutData, c28_y);
  return c28_mxArrayOutData;
}

static boolean_T c28_d_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c28_VehicleReadyOutput, const char_T
  *c28_identifier)
{
  boolean_T c28_y;
  emlrtMsgIdentifier c28_thisId;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c28_VehicleReadyOutput), &c28_thisId);
  sf_mex_destroy(&c28_VehicleReadyOutput);
  return c28_y;
}

static boolean_T c28_e_emlrt_marshallIn(SFc28_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c28_u, const emlrtMsgIdentifier *c28_parentId)
{
  boolean_T c28_y;
  boolean_T c28_b0;
  sf_mex_import(c28_parentId, sf_mex_dup(c28_u), &c28_b0, 1, 11, 0U, 0, 0U, 0);
  c28_y = c28_b0;
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void c28_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c28_mxArrayInData, const char_T *c28_varName, void *c28_outData)
{
  const mxArray *c28_VehicleReadyOutput;
  const char_T *c28_identifier;
  emlrtMsgIdentifier c28_thisId;
  boolean_T c28_y;
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c28_VehicleReadyOutput = sf_mex_dup(c28_mxArrayInData);
  c28_identifier = c28_varName;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  c28_y = c28_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c28_VehicleReadyOutput), &c28_thisId);
  sf_mex_destroy(&c28_VehicleReadyOutput);
  *(boolean_T *)c28_outData = c28_y;
  sf_mex_destroy(&c28_mxArrayInData);
}

static const mxArray *c28_f_emlrt_marshallIn
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c28_b_setSimStateSideEffectsInfo, const char_T *c28_identifier)
{
  const mxArray *c28_y = NULL;
  emlrtMsgIdentifier c28_thisId;
  c28_y = NULL;
  c28_thisId.fIdentifier = c28_identifier;
  c28_thisId.fParent = NULL;
  sf_mex_assign(&c28_y, c28_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c28_b_setSimStateSideEffectsInfo), &c28_thisId));
  sf_mex_destroy(&c28_b_setSimStateSideEffectsInfo);
  return c28_y;
}

static const mxArray *c28_g_emlrt_marshallIn
  (SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c28_u,
   const emlrtMsgIdentifier *c28_parentId)
{
  const mxArray *c28_y = NULL;
  c28_y = NULL;
  sf_mex_assign(&c28_y, sf_mex_duplicatearraysafe(&c28_u));
  sf_mex_destroy(&c28_u);
  return c28_y;
}

static void init_dsm_address_info(SFc28_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c28_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(953975253U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3804032983U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3674290933U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2802006678U);
}

mxArray *sf_c28_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3702677299U);
    pr[1] = (double)(1867565485U);
    pr[2] = (double)(3613987778U);
    pr[3] = (double)(1849878421U);
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

static const mxArray *sf_get_sim_state_info_c28_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[36],T\"VehicleReadyOutput\",},{M[8],M[0],T\"is_active_c28_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c28_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c28_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           28,
           4,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"VehicleReadyInput");
          _SFD_SET_DATA_PROPS(1,1,1,0,"ShiftPosition");
          _SFD_SET_DATA_PROPS(2,1,1,0,"MotorReady");
          _SFD_SET_DATA_PROPS(3,2,0,1,"VehicleReadyOutput");
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

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c28_c_sf_marshallOut,(MexInFcnForType)
          c28_c_sf_marshallIn);

        {
          boolean_T *c28_VehicleReadyInput;
          real_T *c28_ShiftPosition;
          boolean_T *c28_MotorReady;
          boolean_T *c28_VehicleReadyOutput;
          c28_VehicleReadyOutput = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c28_MotorReady = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c28_ShiftPosition = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c28_VehicleReadyInput = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c28_VehicleReadyInput);
          _SFD_SET_DATA_VALUE_PTR(1U, c28_ShiftPosition);
          _SFD_SET_DATA_VALUE_PTR(2U, c28_MotorReady);
          _SFD_SET_DATA_VALUE_PTR(3U, c28_VehicleReadyOutput);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c28_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c28_Mooventure2016_Rev5
    ((SFc28_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c28_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c28_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c28_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c28_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c28_Mooventure2016_Rev5
    ((SFc28_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c28_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c28_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c28_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c28_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c28_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c28_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c28_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c28_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc28_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc28_Mooventure2016_Rev5((SFc28_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c28_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c28_Mooventure2016_Rev5
      ((SFc28_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c28_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      28);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",28,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",28,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",28,3);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",28,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",28);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3734419028U));
  ssSetChecksum1(S,(179050445U));
  ssSetChecksum2(S,(844290652U));
  ssSetChecksum3(S,(1969693052U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c28_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",28);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c28_Mooventure2016_Rev5(SimStruct *S)
{
  SFc28_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc28_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc28_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc28_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c28_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c28_Mooventure2016_Rev5;
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

void c28_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c28_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c28_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c28_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c28_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
