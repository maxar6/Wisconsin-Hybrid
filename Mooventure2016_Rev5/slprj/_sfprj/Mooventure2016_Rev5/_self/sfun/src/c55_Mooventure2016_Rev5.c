/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c55_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c55_IN_NO_ACTIVE_CHILD         (0U)
#define c55_IN_Init                    (3U)
#define c55_IN_Counting                (2U)
#define c55_IN_Write                   (4U)
#define c55_IN_Clear                   (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c55_update_debugger_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c55_st);
static void c55_set_sim_state_side_effects_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void finalize_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c55_Mooventure2016_Rev5(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c55_machineNumber, uint32_T
  c55_chartNumber);
static const mxArray *c55_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData);
static int32_T c55_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId);
static void c55_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData);
static const mxArray *c55_b_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData);
static uint8_T c55_b_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_b_tp_Init, const char_T *c55_identifier);
static uint8_T c55_c_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId);
static void c55_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData);
static const mxArray *c55_c_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData);
static boolean_T c55_d_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c55_write, const char_T *c55_identifier);
static boolean_T c55_e_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId);
static void c55_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData);
static const mxArray *c55_d_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData);
static real_T c55_f_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_b_count, const char_T *c55_identifier);
static real_T c55_g_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId);
static void c55_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData);
static const mxArray *c55_h_emlrt_marshallIn
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c55_b_setSimStateSideEffectsInfo, const char_T *c55_identifier);
static const mxArray *c55_i_emlrt_marshallIn
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c55_u,
   const emlrtMsgIdentifier *c55_parentId);
static void init_dsm_address_info(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  boolean_T *c55_write;
  c55_write = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c55_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c55_doSetSimStateSideEffects = 0U;
  chartInstance->c55_setSimStateSideEffectsInfo = NULL;
  chartInstance->c55_tp_Clear = 0U;
  chartInstance->c55_tp_Counting = 0U;
  chartInstance->c55_tp_Init = 0U;
  chartInstance->c55_tp_Write = 0U;
  chartInstance->c55_is_active_c55_Mooventure2016_Rev5 = 0U;
  chartInstance->c55_is_c55_Mooventure2016_Rev5 = 0U;
  chartInstance->c55_count = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c55_write = FALSE;
  }
}

static void initialize_params_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c55_update_debugger_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  uint32_T c55_prevAniVal;
  c55_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c55_is_active_c55_Mooventure2016_Rev5 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 54U, chartInstance->c55_sfEvent);
  }

  if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
  }

  if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Counting) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c55_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c55_sfEvent);
  }

  if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Write) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c55_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c55_sfEvent);
  }

  if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Clear) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
  }

  sf_debug_set_animation(c55_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c55_st;
  const mxArray *c55_y = NULL;
  boolean_T c55_hoistedGlobal;
  boolean_T c55_u;
  const mxArray *c55_b_y = NULL;
  real_T c55_b_hoistedGlobal;
  real_T c55_b_u;
  const mxArray *c55_c_y = NULL;
  uint8_T c55_c_hoistedGlobal;
  uint8_T c55_c_u;
  const mxArray *c55_d_y = NULL;
  uint8_T c55_d_hoistedGlobal;
  uint8_T c55_d_u;
  const mxArray *c55_e_y = NULL;
  boolean_T *c55_write;
  c55_write = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c55_st = NULL;
  c55_st = NULL;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_createcellarray(4));
  c55_hoistedGlobal = *c55_write;
  c55_u = c55_hoistedGlobal;
  c55_b_y = NULL;
  sf_mex_assign(&c55_b_y, sf_mex_create("y", &c55_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c55_y, 0, c55_b_y);
  c55_b_hoistedGlobal = chartInstance->c55_count;
  c55_b_u = c55_b_hoistedGlobal;
  c55_c_y = NULL;
  sf_mex_assign(&c55_c_y, sf_mex_create("y", &c55_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c55_y, 1, c55_c_y);
  c55_c_hoistedGlobal = chartInstance->c55_is_active_c55_Mooventure2016_Rev5;
  c55_c_u = c55_c_hoistedGlobal;
  c55_d_y = NULL;
  sf_mex_assign(&c55_d_y, sf_mex_create("y", &c55_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c55_y, 2, c55_d_y);
  c55_d_hoistedGlobal = chartInstance->c55_is_c55_Mooventure2016_Rev5;
  c55_d_u = c55_d_hoistedGlobal;
  c55_e_y = NULL;
  sf_mex_assign(&c55_e_y, sf_mex_create("y", &c55_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c55_y, 3, c55_e_y);
  sf_mex_assign(&c55_st, c55_y);
  return c55_st;
}

static void set_sim_state_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c55_st)
{
  const mxArray *c55_u;
  boolean_T *c55_write;
  c55_write = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c55_u = sf_mex_dup(c55_st);
  *c55_write = c55_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c55_u, 0)), "write");
  chartInstance->c55_count = c55_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c55_u, 1)), "count");
  chartInstance->c55_is_active_c55_Mooventure2016_Rev5 = c55_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c55_u, 2)),
     "is_active_c55_Mooventure2016_Rev5");
  chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c55_u, 3)),
     "is_c55_Mooventure2016_Rev5");
  sf_mex_assign(&chartInstance->c55_setSimStateSideEffectsInfo,
                c55_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c55_u, 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c55_u);
  chartInstance->c55_doSetSimStateSideEffects = 1U;
  c55_update_debugger_state_c55_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c55_st);
}

static void c55_set_sim_state_side_effects_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  if (chartInstance->c55_doSetSimStateSideEffects != 0) {
    if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Clear) {
      chartInstance->c55_tp_Clear = 1U;
    } else {
      chartInstance->c55_tp_Clear = 0U;
    }

    if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Counting) {
      chartInstance->c55_tp_Counting = 1U;
    } else {
      chartInstance->c55_tp_Counting = 0U;
    }

    if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Init) {
      chartInstance->c55_tp_Init = 1U;
    } else {
      chartInstance->c55_tp_Init = 0U;
    }

    if (chartInstance->c55_is_c55_Mooventure2016_Rev5 == c55_IN_Write) {
      chartInstance->c55_tp_Write = 1U;
    } else {
      chartInstance->c55_tp_Write = 0U;
    }

    chartInstance->c55_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c55_setSimStateSideEffectsInfo);
}

static void sf_c55_Mooventure2016_Rev5(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  boolean_T *c55_write;
  real_T *c55_delay;
  c55_delay = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c55_write = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c55_set_sim_state_side_effects_c55_Mooventure2016_Rev5(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 54U, chartInstance->c55_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c55_write, 0U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c55_count, 1U);
  _SFD_DATA_RANGE_CHECK(*c55_delay, 2U);
  chartInstance->c55_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 54U, chartInstance->c55_sfEvent);
  if ((int16_T)chartInstance->c55_is_active_c55_Mooventure2016_Rev5 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 54U, chartInstance->c55_sfEvent);
    chartInstance->c55_is_active_c55_Mooventure2016_Rev5 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 54U, chartInstance->c55_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c55_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
    chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
    chartInstance->c55_tp_Init = 1U;
  } else {
    switch (chartInstance->c55_is_c55_Mooventure2016_Rev5) {
     case c55_IN_Clear:
      CV_CHART_EVAL(54, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c55_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c55_sfEvent);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, (int16_T)
            *c55_write == 0 != 0U, chartInstance->c55_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Clear = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
        chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_IN_Init;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Init = 1U;
      } else {
        *c55_write = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c55_write, 0U);
        chartInstance->c55_count = 0.0;
        _SFD_DATA_RANGE_CHECK(chartInstance->c55_count, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c55_sfEvent);
      break;

     case c55_IN_Counting:
      CV_CHART_EVAL(54, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c55_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c55_sfEvent);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
            chartInstance->c55_count >= *c55_delay != 0U,
            chartInstance->c55_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Counting = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c55_sfEvent);
        chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_IN_Write;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Write = 1U;
      } else {
        chartInstance->c55_count++;
        _SFD_DATA_RANGE_CHECK(chartInstance->c55_count, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c55_sfEvent);
      break;

     case c55_IN_Init:
      CV_CHART_EVAL(54, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c55_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c55_sfEvent);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, (int16_T)
            *c55_write == 0 != 0U, chartInstance->c55_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Init = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c55_sfEvent);
        chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_IN_Counting;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Counting = 1U;
      } else {
        *c55_write = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c55_write, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c55_sfEvent);
      break;

     case c55_IN_Write:
      CV_CHART_EVAL(54, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c55_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   chartInstance->c55_sfEvent);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, (int16_T)
            *c55_write == 1 != 0U, chartInstance->c55_sfEvent))) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Write = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c55_sfEvent);
        chartInstance->c55_is_c55_Mooventure2016_Rev5 = c55_IN_Clear;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
        chartInstance->c55_tp_Clear = 1U;
      } else {
        *c55_write = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c55_write, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c55_sfEvent);
      break;

     default:
      CV_CHART_EVAL(54, 0, 0);
      chartInstance->c55_is_c55_Mooventure2016_Rev5 = (uint8_T)
        c55_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c55_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 54U, chartInstance->c55_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc55_Mooventure2016_Rev5
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c55_machineNumber, uint32_T
  c55_chartNumber)
{
}

const mxArray *sf_c55_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c55_nameCaptureInfo = NULL;
  c55_nameCaptureInfo = NULL;
  sf_mex_assign(&c55_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c55_nameCaptureInfo;
}

static const mxArray *c55_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData)
{
  const mxArray *c55_mxArrayOutData = NULL;
  int32_T c55_u;
  const mxArray *c55_y = NULL;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_mxArrayOutData = NULL;
  c55_u = *(int32_T *)c55_inData;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_create("y", &c55_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c55_mxArrayOutData, c55_y);
  return c55_mxArrayOutData;
}

static int32_T c55_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId)
{
  int32_T c55_y;
  int32_T c55_i0;
  sf_mex_import(c55_parentId, sf_mex_dup(c55_u), &c55_i0, 1, 6, 0U, 0, 0U, 0);
  c55_y = c55_i0;
  sf_mex_destroy(&c55_u);
  return c55_y;
}

static void c55_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData)
{
  const mxArray *c55_b_sfEvent;
  const char_T *c55_identifier;
  emlrtMsgIdentifier c55_thisId;
  int32_T c55_y;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_b_sfEvent = sf_mex_dup(c55_mxArrayInData);
  c55_identifier = c55_varName;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_b_sfEvent),
    &c55_thisId);
  sf_mex_destroy(&c55_b_sfEvent);
  *(int32_T *)c55_outData = c55_y;
  sf_mex_destroy(&c55_mxArrayInData);
}

static const mxArray *c55_b_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData)
{
  const mxArray *c55_mxArrayOutData = NULL;
  uint8_T c55_u;
  const mxArray *c55_y = NULL;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_mxArrayOutData = NULL;
  c55_u = *(uint8_T *)c55_inData;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_create("y", &c55_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c55_mxArrayOutData, c55_y);
  return c55_mxArrayOutData;
}

static uint8_T c55_b_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_b_tp_Init, const char_T *c55_identifier)
{
  uint8_T c55_y;
  emlrtMsgIdentifier c55_thisId;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_b_tp_Init),
    &c55_thisId);
  sf_mex_destroy(&c55_b_tp_Init);
  return c55_y;
}

static uint8_T c55_c_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId)
{
  uint8_T c55_y;
  uint8_T c55_u0;
  sf_mex_import(c55_parentId, sf_mex_dup(c55_u), &c55_u0, 1, 3, 0U, 0, 0U, 0);
  c55_y = c55_u0;
  sf_mex_destroy(&c55_u);
  return c55_y;
}

static void c55_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData)
{
  const mxArray *c55_b_tp_Init;
  const char_T *c55_identifier;
  emlrtMsgIdentifier c55_thisId;
  uint8_T c55_y;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_b_tp_Init = sf_mex_dup(c55_mxArrayInData);
  c55_identifier = c55_varName;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_b_tp_Init),
    &c55_thisId);
  sf_mex_destroy(&c55_b_tp_Init);
  *(uint8_T *)c55_outData = c55_y;
  sf_mex_destroy(&c55_mxArrayInData);
}

static const mxArray *c55_c_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData)
{
  const mxArray *c55_mxArrayOutData = NULL;
  boolean_T c55_u;
  const mxArray *c55_y = NULL;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_mxArrayOutData = NULL;
  c55_u = *(boolean_T *)c55_inData;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_create("y", &c55_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c55_mxArrayOutData, c55_y);
  return c55_mxArrayOutData;
}

static boolean_T c55_d_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c55_write, const char_T *c55_identifier)
{
  boolean_T c55_y;
  emlrtMsgIdentifier c55_thisId;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_write),
    &c55_thisId);
  sf_mex_destroy(&c55_write);
  return c55_y;
}

static boolean_T c55_e_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct *
  chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId)
{
  boolean_T c55_y;
  boolean_T c55_b0;
  sf_mex_import(c55_parentId, sf_mex_dup(c55_u), &c55_b0, 1, 11, 0U, 0, 0U, 0);
  c55_y = c55_b0;
  sf_mex_destroy(&c55_u);
  return c55_y;
}

static void c55_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData)
{
  const mxArray *c55_write;
  const char_T *c55_identifier;
  emlrtMsgIdentifier c55_thisId;
  boolean_T c55_y;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_write = sf_mex_dup(c55_mxArrayInData);
  c55_identifier = c55_varName;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_write),
    &c55_thisId);
  sf_mex_destroy(&c55_write);
  *(boolean_T *)c55_outData = c55_y;
  sf_mex_destroy(&c55_mxArrayInData);
}

static const mxArray *c55_d_sf_marshallOut(void *chartInstanceVoid, void
  *c55_inData)
{
  const mxArray *c55_mxArrayOutData = NULL;
  real_T c55_u;
  const mxArray *c55_y = NULL;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_mxArrayOutData = NULL;
  c55_u = *(real_T *)c55_inData;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_create("y", &c55_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c55_mxArrayOutData, c55_y);
  return c55_mxArrayOutData;
}

static real_T c55_f_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_b_count, const char_T *c55_identifier)
{
  real_T c55_y;
  emlrtMsgIdentifier c55_thisId;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_b_count),
    &c55_thisId);
  sf_mex_destroy(&c55_b_count);
  return c55_y;
}

static real_T c55_g_emlrt_marshallIn(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c55_u, const emlrtMsgIdentifier *c55_parentId)
{
  real_T c55_y;
  real_T c55_d0;
  sf_mex_import(c55_parentId, sf_mex_dup(c55_u), &c55_d0, 1, 0, 0U, 0, 0U, 0);
  c55_y = c55_d0;
  sf_mex_destroy(&c55_u);
  return c55_y;
}

static void c55_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c55_mxArrayInData, const char_T *c55_varName, void *c55_outData)
{
  const mxArray *c55_b_count;
  const char_T *c55_identifier;
  emlrtMsgIdentifier c55_thisId;
  real_T c55_y;
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c55_b_count = sf_mex_dup(c55_mxArrayInData);
  c55_identifier = c55_varName;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  c55_y = c55_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c55_b_count),
    &c55_thisId);
  sf_mex_destroy(&c55_b_count);
  *(real_T *)c55_outData = c55_y;
  sf_mex_destroy(&c55_mxArrayInData);
}

static const mxArray *c55_h_emlrt_marshallIn
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray
   *c55_b_setSimStateSideEffectsInfo, const char_T *c55_identifier)
{
  const mxArray *c55_y = NULL;
  emlrtMsgIdentifier c55_thisId;
  c55_y = NULL;
  c55_thisId.fIdentifier = c55_identifier;
  c55_thisId.fParent = NULL;
  sf_mex_assign(&c55_y, c55_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c55_b_setSimStateSideEffectsInfo), &c55_thisId));
  sf_mex_destroy(&c55_b_setSimStateSideEffectsInfo);
  return c55_y;
}

static const mxArray *c55_i_emlrt_marshallIn
  (SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c55_u,
   const emlrtMsgIdentifier *c55_parentId)
{
  const mxArray *c55_y = NULL;
  c55_y = NULL;
  sf_mex_assign(&c55_y, sf_mex_duplicatearraysafe(&c55_u));
  sf_mex_destroy(&c55_u);
  return c55_y;
}

static void init_dsm_address_info(SFc55_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c55_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3079696329U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3845526195U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1000273972U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(195022786U);
}

mxArray *sf_c55_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1122144327U);
    pr[1] = (double)(502549442U);
    pr[2] = (double)(3056549932U);
    pr[3] = (double)(4082196575U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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

static const mxArray *sf_get_sim_state_info_c55_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[11],T\"write\",},{M[3],M[12],T\"count\",},{M[8],M[0],T\"is_active_c55_Mooventure2016_Rev5\",},{M[9],M[0],T\"is_c55_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c55_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           55,
           4,
           5,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,"write");
          _SFD_SET_DATA_PROPS(1,0,0,0,"count");
          _SFD_SET_DATA_PROPS(2,1,1,0,"delay");
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

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c55_c_sf_marshallOut,(MexInFcnForType)
          c55_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c55_d_sf_marshallOut,(MexInFcnForType)
          c55_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c55_d_sf_marshallOut,(MexInFcnForType)NULL);

        {
          boolean_T *c55_write;
          real_T *c55_delay;
          c55_delay = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c55_write = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c55_write);
          _SFD_SET_DATA_VALUE_PTR(1U, &chartInstance->c55_count);
          _SFD_SET_DATA_VALUE_PTR(2U, c55_delay);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c55_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c55_Mooventure2016_Rev5
    ((SFc55_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c55_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c55_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c55_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c55_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c55_Mooventure2016_Rev5
    ((SFc55_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c55_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c55_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c55_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c55_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c55_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c55_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c55_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c55_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc55_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc55_Mooventure2016_Rev5((SFc55_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c55_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c55_Mooventure2016_Rev5
      ((SFc55_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c55_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      55);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",55,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",55,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",55,1);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",55,1);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",55);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2535523662U));
  ssSetChecksum1(S,(952842065U));
  ssSetChecksum2(S,(2162511837U));
  ssSetChecksum3(S,(802550158U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c55_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",55);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c55_Mooventure2016_Rev5(SimStruct *S)
{
  SFc55_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc55_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc55_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc55_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c55_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c55_Mooventure2016_Rev5;
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

void c55_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c55_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c55_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c55_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c55_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
