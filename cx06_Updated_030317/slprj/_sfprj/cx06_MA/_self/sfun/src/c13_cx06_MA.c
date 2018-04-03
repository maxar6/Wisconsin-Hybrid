/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c13_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c13_IN_NO_ACTIVE_CHILD         (0U)
#define c13_IN_Neutral                 (4U)
#define c13_IN_Lean                    (2U)
#define c13_IN_Lean2Rich               (3U)
#define c13_IN_Rich2Lean               (6U)
#define c13_IN_Rich                    (5U)
#define c13_IN_Error                   (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance);
static void disable_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance);
static void c13_update_debugger_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_st);
static void c13_set_sim_state_side_effects_c13_cx06_MA
  (SFc13_cx06_MAInstanceStruct *chartInstance);
static void finalize_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance);
static void sf_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance);
static void c13_Neutral(SFc13_cx06_MAInstanceStruct *chartInstance);
static void c13_Lean(SFc13_cx06_MAInstanceStruct *chartInstance);
static void c13_Lean2Rich(SFc13_cx06_MAInstanceStruct *chartInstance);
static void c13_Rich(SFc13_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber);
static const mxArray *c13_sf_marshall(void *chartInstanceVoid, void *c13_u);
static const mxArray *c13_b_sf_marshall(void *chartInstanceVoid, void *c13_u);
static const mxArray *c13_c_sf_marshall(void *chartInstanceVoid, void *c13_u);
static const mxArray *c13_d_sf_marshall(void *chartInstanceVoid, void *c13_u);
static uint8_T c13_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_Ammonia, const char_T *c13_name);
static uint16_T c13_b_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c13_LeanCnt, const char_T *c13_name);
static real_T c13_c_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_mult, const char_T *c13_name);
static const mxArray *c13_d_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c13_b_setSimStateSideEffectsInfo, const char_T *
  c13_name);
static uint8_T c13__u8_s32_(SFc13_cx06_MAInstanceStruct *chartInstance, int32_T
  c13_b);
static uint16_T c13__u16_s32_(SFc13_cx06_MAInstanceStruct *chartInstance,
  int32_T c13_b);
static void init_test_point_addr_map(SFc13_cx06_MAInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc13_cx06_MAInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc13_cx06_MAInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc13_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  uint8_T *c13_Ammonia;
  uint16_T *c13_LeanCnt;
  uint16_T *c13_RichCnt;
  real_T *c13_mult;
  uint8_T *c13_State;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c13_doSetSimStateSideEffects = 0U;
  chartInstance->c13_setSimStateSideEffectsInfo = NULL;
  chartInstance->c13_tp_Error = 0U;
  chartInstance->c13_tp_Lean = 0U;
  chartInstance->c13_tp_Lean2Rich = 0U;
  chartInstance->c13_tp_Neutral = 0U;
  chartInstance->c13_tp_Rich = 0U;
  chartInstance->c13_tp_Rich2Lean = 0U;
  chartInstance->c13_is_active_c13_cx06_MA = 0U;
  chartInstance->c13_is_c13_cx06_MA = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c13_Ammonia = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c13_LeanCnt = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c13_RichCnt = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c13_mult = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c13_State = 0U;
  }
}

static void initialize_params_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c13_update_debugger_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance)
{
  uint32_T c13_prevAniVal;
  c13_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c13_is_active_c13_cx06_MA == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,9);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Neutral) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Lean) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Lean2Rich) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Rich2Lean) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Rich) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Error) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  sf_debug_set_animation(c13_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c13_st = NULL;
  const mxArray *c13_y = NULL;
  uint8_T c13_hoistedGlobal;
  uint8_T c13_u;
  const mxArray *c13_b_y = NULL;
  uint16_T c13_b_hoistedGlobal;
  uint16_T c13_b_u;
  const mxArray *c13_c_y = NULL;
  uint16_T c13_c_hoistedGlobal;
  uint16_T c13_c_u;
  const mxArray *c13_d_y = NULL;
  uint8_T c13_d_hoistedGlobal;
  uint8_T c13_d_u;
  const mxArray *c13_e_y = NULL;
  real_T c13_e_hoistedGlobal;
  real_T c13_e_u;
  const mxArray *c13_f_y = NULL;
  uint8_T c13_f_hoistedGlobal;
  uint8_T c13_f_u;
  const mxArray *c13_g_y = NULL;
  uint8_T c13_g_hoistedGlobal;
  uint8_T c13_g_u;
  const mxArray *c13_h_y = NULL;
  uint8_T *c13_Ammonia;
  uint16_T *c13_LeanCnt;
  uint16_T *c13_RichCnt;
  uint8_T *c13_State;
  real_T *c13_mult;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_st = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_createcellarray(7));
  c13_hoistedGlobal = *c13_Ammonia;
  c13_u = c13_hoistedGlobal;
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 0, c13_b_y);
  c13_b_hoistedGlobal = *c13_LeanCnt;
  c13_b_u = c13_b_hoistedGlobal;
  c13_c_y = NULL;
  sf_mex_assign(&c13_c_y, sf_mex_create("y", &c13_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 1, c13_c_y);
  c13_c_hoistedGlobal = *c13_RichCnt;
  c13_c_u = c13_c_hoistedGlobal;
  c13_d_y = NULL;
  sf_mex_assign(&c13_d_y, sf_mex_create("y", &c13_c_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 2, c13_d_y);
  c13_d_hoistedGlobal = *c13_State;
  c13_d_u = c13_d_hoistedGlobal;
  c13_e_y = NULL;
  sf_mex_assign(&c13_e_y, sf_mex_create("y", &c13_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 3, c13_e_y);
  c13_e_hoistedGlobal = *c13_mult;
  c13_e_u = c13_e_hoistedGlobal;
  c13_f_y = NULL;
  sf_mex_assign(&c13_f_y, sf_mex_create("y", &c13_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 4, c13_f_y);
  c13_f_hoistedGlobal = chartInstance->c13_is_active_c13_cx06_MA;
  c13_f_u = c13_f_hoistedGlobal;
  c13_g_y = NULL;
  sf_mex_assign(&c13_g_y, sf_mex_create("y", &c13_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 5, c13_g_y);
  c13_g_hoistedGlobal = chartInstance->c13_is_c13_cx06_MA;
  c13_g_u = c13_g_hoistedGlobal;
  c13_h_y = NULL;
  sf_mex_assign(&c13_h_y, sf_mex_create("y", &c13_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c13_y, 6, c13_h_y);
  sf_mex_assign(&c13_st, c13_y);
  return c13_st;
}

static void set_sim_state_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_st)
{
  const mxArray *c13_u;
  uint8_T *c13_Ammonia;
  uint16_T *c13_LeanCnt;
  uint16_T *c13_RichCnt;
  uint8_T *c13_State;
  real_T *c13_mult;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_u = sf_mex_dup(c13_st);
  *c13_Ammonia = c13_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 0)), "Ammonia");
  *c13_LeanCnt = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 1)), "LeanCnt");
  *c13_RichCnt = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 2)), "RichCnt");
  *c13_State = c13_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 3)), "State");
  *c13_mult = c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u, 4)), "mult");
  chartInstance->c13_is_active_c13_cx06_MA = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 5)),
    "is_active_c13_cx06_MA");
  chartInstance->c13_is_c13_cx06_MA = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c13_u, 6)), "is_c13_cx06_MA");
  sf_mex_assign(&chartInstance->c13_setSimStateSideEffectsInfo,
                c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c13_u
     , 7)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c13_u);
  chartInstance->c13_doSetSimStateSideEffects = 1U;
  c13_update_debugger_state_c13_cx06_MA(chartInstance);
  sf_mex_destroy(&c13_st);
}

static void c13_set_sim_state_side_effects_c13_cx06_MA
  (SFc13_cx06_MAInstanceStruct *chartInstance)
{
  if (chartInstance->c13_doSetSimStateSideEffects != 0) {
    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Error) {
      chartInstance->c13_tp_Error = 1U;
    } else {
      chartInstance->c13_tp_Error = 0U;
    }

    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Lean) {
      chartInstance->c13_tp_Lean = 1U;
    } else {
      chartInstance->c13_tp_Lean = 0U;
    }

    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Lean2Rich) {
      chartInstance->c13_tp_Lean2Rich = 1U;
    } else {
      chartInstance->c13_tp_Lean2Rich = 0U;
    }

    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Neutral) {
      chartInstance->c13_tp_Neutral = 1U;
    } else {
      chartInstance->c13_tp_Neutral = 0U;
    }

    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Rich) {
      chartInstance->c13_tp_Rich = 1U;
    } else {
      chartInstance->c13_tp_Rich = 0U;
    }

    if (chartInstance->c13_is_c13_cx06_MA == c13_IN_Rich2Lean) {
      chartInstance->c13_tp_Rich2Lean = 1U;
    } else {
      chartInstance->c13_tp_Rich2Lean = 0U;
    }

    chartInstance->c13_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c13_setSimStateSideEffectsInfo);
}

static void sf_c13_cx06_MA(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c13_previousEvent;
  boolean_T *c13_errorIn;
  uint8_T *c13_Ammonia;
  real_T *c13_mult;
  uint8_T *c13_State;
  real_T *c13_NOx;
  real_T *c13_temp;
  uint16_T *c13_LeanCnt;
  real_T *c13_LeanMult;
  real_T *c13_LeanTime;
  uint16_T *c13_RichCnt;
  real_T *c13_RichMult;
  real_T *c13_RichTime;
  real_T *c13_NOxThres;
  real_T *c13_minTemp;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_RichTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c13_RichMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_LeanTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_LeanMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c13_set_sim_state_side_effects_c13_cx06_MA(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,9);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_errorIn, 0U);
  _SFD_DATA_RANGE_CHECK(*c13_NOx, 1U);
  _SFD_DATA_RANGE_CHECK(*c13_temp, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_LeanCnt, 4U);
  _SFD_DATA_RANGE_CHECK(*c13_LeanMult, 5U);
  _SFD_DATA_RANGE_CHECK(*c13_LeanTime, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_RichCnt, 7U);
  _SFD_DATA_RANGE_CHECK(*c13_RichMult, 8U);
  _SFD_DATA_RANGE_CHECK(*c13_RichTime, 9U);
  _SFD_DATA_RANGE_CHECK(*c13_NOxThres, 10U);
  _SFD_DATA_RANGE_CHECK(*c13_minTemp, 11U);
  _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
  _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  c13_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,9);
  if ((int16_T)chartInstance->c13_is_active_c13_cx06_MA == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,9);
    chartInstance->c13_is_active_c13_cx06_MA = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c13_tp_Neutral = 1U;
    *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
    _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
    *c13_mult = 1.0;
    _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
    *c13_State = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  } else {
    switch (chartInstance->c13_is_c13_cx06_MA) {
     case c13_IN_Error:
      CV_CHART_EVAL(9,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
      if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,(((int16_T)
              *c13_errorIn == 0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c13_tp_Error = 0U;
        chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c13_tp_Neutral = 1U;
        *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_mult = 1.0;
        _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
        *c13_State = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c13_IN_Lean:
      CV_CHART_EVAL(9,0,2);
      c13_Lean(chartInstance);
      break;

     case c13_IN_Lean2Rich:
      CV_CHART_EVAL(9,0,3);
      c13_Lean2Rich(chartInstance);
      break;

     case c13_IN_Neutral:
      CV_CHART_EVAL(9,0,4);
      c13_Neutral(chartInstance);
      break;

     case c13_IN_Rich:
      CV_CHART_EVAL(9,0,5);
      c13_Rich(chartInstance);
      break;

     case c13_IN_Rich2Lean:
      CV_CHART_EVAL(9,0,6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
      if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,(((real_T)
              *c13_RichCnt > *c13_RichTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[4];
          unsigned int numTransitions= 1;
          transitionList[0] = 9;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c13_errorIn == 1) {
            transitionList[numTransitions] = 15;
            numTransitions++;
          }

          if (*c13_NOx < *c13_NOxThres) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          if (*c13_temp < *c13_minTemp) {
            transitionList[numTransitions] = 12;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c13_tp_Rich2Lean = 0U;
        chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Lean2Rich;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c13_tp_Lean2Rich = 1U;
        *c13_Ammonia = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_LeanCnt = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_LeanCnt, 4U);
        *c13_State = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
        if (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15,0,(((int16_T)
                *c13_errorIn == 1)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions= 1;
            transitionList[0] = 15;
            sf_debug_transition_conflict_check_begin();
            if (*c13_NOx < *c13_NOxThres) {
              transitionList[numTransitions] = 8;
              numTransitions++;
            }

            if (*c13_temp < *c13_minTemp) {
              transitionList[numTransitions] = 12;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
          chartInstance->c13_tp_Rich2Lean = 0U;
          chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
          chartInstance->c13_is_c13_cx06_MA = c13_IN_Error;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
          chartInstance->c13_tp_Error = 1U;
          *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
          _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
          *c13_mult = 1.0;
          _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
          *c13_State = 6U;
          _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
          if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c13_NOx <
                  *c13_NOxThres)!=0))) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 8;
              sf_debug_transition_conflict_check_begin();
              if (*c13_temp < *c13_minTemp) {
                transitionList[numTransitions] = 12;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
            chartInstance->c13_tp_Rich2Lean = 0U;
            chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
            chartInstance->c13_is_c13_cx06_MA = c13_IN_Rich;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
            chartInstance->c13_tp_Rich = 1U;
            *c13_Ammonia = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
            *c13_State = 5U;
            _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
            *c13_mult = *c13_RichMult;
            _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
            if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12,0,((*c13_temp <
                    *c13_minTemp)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
              chartInstance->c13_tp_Rich2Lean = 0U;
              chartInstance->c13_is_c13_cx06_MA = (uint8_T)
                c13_IN_NO_ACTIVE_CHILD;
              _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
              chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
              _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
              chartInstance->c13_tp_Neutral = 1U;
              *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
              _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
              *c13_mult = 1.0;
              _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
              *c13_State = 1U;
              _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
            } else {
              *c13_RichCnt = c13__u16_s32_(chartInstance, *c13_RichCnt + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c13_RichCnt, 7U);
            }
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     default:
      CV_CHART_EVAL(9,0,0);
      chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
  _sfEvent_ = c13_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c13_Neutral(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  boolean_T c13_temp;
  boolean_T c13_b_temp;
  real_T *c13_c_temp;
  real_T *c13_minTemp;
  real_T *c13_NOx;
  real_T *c13_NOxThres;
  boolean_T *c13_errorIn;
  uint8_T *c13_Ammonia;
  uint8_T *c13_State;
  real_T *c13_RichMult;
  real_T *c13_mult;
  real_T *c13_LeanMult;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_RichMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c13_LeanMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_c_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
  c13_temp = (_SFD_CCP_CALL(1,0,((*c13_c_temp > *c13_minTemp)!=0)) != 0);
  if (c13_temp) {
    c13_temp = (_SFD_CCP_CALL(1,1,((*c13_NOx > *c13_NOxThres)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(1U, (int32_T)c13_temp) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 1;
      sf_debug_transition_conflict_check_begin();
      if ((int16_T)*c13_errorIn == 1) {
        transitionList[numTransitions] = 17;
        numTransitions++;
      }

      if ((*c13_c_temp > *c13_minTemp) && (*c13_NOx < *c13_NOxThres)) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
    chartInstance->c13_tp_Neutral = 0U;
    chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    chartInstance->c13_is_c13_cx06_MA = c13_IN_Lean;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c13_tp_Lean = 1U;
    *c13_Ammonia = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
    *c13_mult = *c13_LeanMult;
    _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
    *c13_State = 2U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
    if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,(((int16_T)
            *c13_errorIn == 1)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 17;
        sf_debug_transition_conflict_check_begin();
        if ((*c13_c_temp > *c13_minTemp) && (*c13_NOx < *c13_NOxThres)) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c13_tp_Neutral = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      chartInstance->c13_is_c13_cx06_MA = c13_IN_Error;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c13_tp_Error = 1U;
      *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
      _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
      *c13_mult = 1.0;
      _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
      *c13_State = 6U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      c13_b_temp = (_SFD_CCP_CALL(5,0,((*c13_c_temp > *c13_minTemp)!=0)) != 0);
      if (c13_b_temp) {
        c13_b_temp = (_SFD_CCP_CALL(5,1,((*c13_NOx < *c13_NOxThres)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(5U, (int32_T)c13_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c13_tp_Neutral = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Rich;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance->c13_tp_Rich = 1U;
        *c13_Ammonia = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_State = 5U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
        *c13_mult = *c13_RichMult;
        _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
}

static void c13_Lean(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  boolean_T *c13_errorIn;
  real_T *c13_NOx;
  real_T *c13_NOxThres;
  real_T *c13_temp;
  real_T *c13_minTemp;
  uint8_T *c13_Ammonia;
  real_T *c13_mult;
  uint8_T *c13_State;
  uint16_T *c13_LeanCnt;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
  if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13,0,(((int16_T)
          *c13_errorIn == 1)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 13;
      sf_debug_transition_conflict_check_begin();
      if (*c13_NOx < *c13_NOxThres) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      if (*c13_temp < *c13_minTemp) {
        transitionList[numTransitions] = 3;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c13_tp_Lean = 0U;
    chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c13_is_c13_cx06_MA = c13_IN_Error;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c13_tp_Error = 1U;
    *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
    _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
    *c13_mult = 1.0;
    _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
    *c13_State = 6U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c13_NOx <
            *c13_NOxThres)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 2;
        sf_debug_transition_conflict_check_begin();
        if (*c13_temp < *c13_minTemp) {
          transitionList[numTransitions] = 3;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c13_tp_Lean = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c13_is_c13_cx06_MA = c13_IN_Lean2Rich;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c13_tp_Lean2Rich = 1U;
      *c13_Ammonia = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
      *c13_LeanCnt = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_LeanCnt, 4U);
      *c13_State = 3U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c13_temp <
              *c13_minTemp)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c13_tp_Lean = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c13_tp_Neutral = 1U;
        *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_mult = 1.0;
        _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
        *c13_State = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c13_Lean2Rich(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  real_T *c13_NOx;
  real_T *c13_NOxThres;
  boolean_T *c13_errorIn;
  uint16_T *c13_LeanCnt;
  real_T *c13_LeanTime;
  real_T *c13_temp;
  real_T *c13_minTemp;
  uint8_T *c13_Ammonia;
  real_T *c13_mult;
  uint8_T *c13_State;
  uint16_T *c13_RichCnt;
  real_T *c13_LeanMult;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_LeanTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c13_LeanMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
  if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c13_NOx >
          *c13_NOxThres)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[4];
      unsigned int numTransitions= 1;
      transitionList[0] = 4;
      sf_debug_transition_conflict_check_begin();
      if ((int16_T)*c13_errorIn == 1) {
        transitionList[numTransitions] = 14;
        numTransitions++;
      }

      if ((real_T)*c13_LeanCnt > *c13_LeanTime) {
        transitionList[numTransitions] = 10;
        numTransitions++;
      }

      if (*c13_temp < *c13_minTemp) {
        transitionList[numTransitions] = 11;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c13_tp_Lean2Rich = 0U;
    chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    chartInstance->c13_is_c13_cx06_MA = c13_IN_Lean;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c13_tp_Lean = 1U;
    *c13_Ammonia = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
    *c13_mult = *c13_LeanMult;
    _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
    *c13_State = 2U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
    if (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14,0,(((int16_T)
            *c13_errorIn == 1)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 14;
        sf_debug_transition_conflict_check_begin();
        if ((real_T)*c13_LeanCnt > *c13_LeanTime) {
          transitionList[numTransitions] = 10;
          numTransitions++;
        }

        if (*c13_temp < *c13_minTemp) {
          transitionList[numTransitions] = 11;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c13_tp_Lean2Rich = 0U;
      chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      chartInstance->c13_is_c13_cx06_MA = c13_IN_Error;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance->c13_tp_Error = 1U;
      *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
      _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
      *c13_mult = 1.0;
      _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
      *c13_State = 6U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,(((real_T)
              *c13_LeanCnt > *c13_LeanTime)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 10;
          sf_debug_transition_conflict_check_begin();
          if (*c13_temp < *c13_minTemp) {
            transitionList[numTransitions] = 11;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c13_tp_Lean2Rich = 0U;
        chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Rich2Lean;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
        chartInstance->c13_tp_Rich2Lean = 1U;
        *c13_Ammonia = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_RichCnt = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_RichCnt, 7U);
        *c13_State = 4U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
        if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11,0,((*c13_temp <
                *c13_minTemp)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c13_tp_Lean2Rich = 0U;
          chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c13_tp_Neutral = 1U;
          *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
          _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
          *c13_mult = 1.0;
          _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
          *c13_State = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
        } else {
          *c13_LeanCnt = c13__u16_s32_(chartInstance, *c13_LeanCnt + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c13_LeanCnt, 4U);
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c13_Rich(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  real_T *c13_temp;
  real_T *c13_minTemp;
  real_T *c13_NOx;
  real_T *c13_NOxThres;
  boolean_T *c13_errorIn;
  uint8_T *c13_Ammonia;
  real_T *c13_mult;
  uint8_T *c13_State;
  uint16_T *c13_RichCnt;
  c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c13_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c13_temp <
          *c13_minTemp)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 6;
      sf_debug_transition_conflict_check_begin();
      if (*c13_NOx > *c13_NOxThres) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      if ((int16_T)*c13_errorIn == 1) {
        transitionList[numTransitions] = 16;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c13_tp_Rich = 0U;
    chartInstance->c13_is_c13_cx06_MA = (uint8_T)c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    chartInstance->c13_is_c13_cx06_MA = c13_IN_Neutral;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c13_tp_Neutral = 1U;
    *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
    _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
    *c13_mult = 1.0;
    _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
    *c13_State = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c13_NOx >
            *c13_NOxThres)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 7;
        sf_debug_transition_conflict_check_begin();
        if ((int16_T)*c13_errorIn == 1) {
          transitionList[numTransitions] = 16;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
      chartInstance->c13_tp_Rich = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      chartInstance->c13_is_c13_cx06_MA = c13_IN_Rich2Lean;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
      chartInstance->c13_tp_Rich2Lean = 1U;
      *c13_Ammonia = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
      *c13_RichCnt = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_RichCnt, 7U);
      *c13_State = 4U;
      _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
      if (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16,0,(((int16_T)
              *c13_errorIn == 1)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c13_tp_Rich = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c13_is_c13_cx06_MA = c13_IN_Error;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c13_tp_Error = 1U;
        *c13_Ammonia = c13__u8_s32_(chartInstance, -1);
        _SFD_DATA_RANGE_CHECK((real_T)*c13_Ammonia, 3U);
        *c13_mult = 1.0;
        _SFD_DATA_RANGE_CHECK(*c13_mult, 12U);
        *c13_State = 6U;
        _SFD_DATA_RANGE_CHECK((real_T)*c13_State, 13U);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
}

static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber)
{
}

const mxArray *sf_c13_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c13_nameCaptureInfo = NULL;
  c13_nameCaptureInfo = NULL;
  sf_mex_assign(&c13_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c13_nameCaptureInfo;
}

static const mxArray *c13_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  uint8_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *)chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((uint8_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static const mxArray *c13_b_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  boolean_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *)chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((boolean_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static const mxArray *c13_c_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  real_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *)chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((real_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static const mxArray *c13_d_sf_marshall(void *chartInstanceVoid, void *c13_u)
{
  const mxArray *c13_y = NULL;
  uint16_T c13_b_u;
  const mxArray *c13_b_y = NULL;
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *)chartInstanceVoid;
  c13_y = NULL;
  c13_b_u = *((uint16_T *)c13_u);
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c13_y, c13_b_y);
  return c13_y;
}

static uint8_T c13_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_Ammonia, const char_T *c13_name)
{
  uint8_T c13_y;
  uint8_T c13_u0;
  sf_mex_import(c13_name, sf_mex_dup(c13_Ammonia), &c13_u0, 1, 3, 0U, 0, 0U, 0);
  c13_y = c13_u0;
  sf_mex_destroy(&c13_Ammonia);
  return c13_y;
}

static uint16_T c13_b_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c13_LeanCnt, const char_T *
  c13_name)
{
  uint16_T c13_y;
  uint16_T c13_u1;
  sf_mex_import(c13_name, sf_mex_dup(c13_LeanCnt), &c13_u1, 1, 5, 0U, 0, 0U, 0);
  c13_y = c13_u1;
  sf_mex_destroy(&c13_LeanCnt);
  return c13_y;
}

static real_T c13_c_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c13_mult, const char_T *c13_name)
{
  real_T c13_y;
  real_T c13_d0;
  sf_mex_import(c13_name, sf_mex_dup(c13_mult), &c13_d0, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d0;
  sf_mex_destroy(&c13_mult);
  return c13_y;
}

static const mxArray *c13_d_emlrt_marshallIn(SFc13_cx06_MAInstanceStruct
  *chartInstance, const mxArray *
  c13_b_setSimStateSideEffectsInfo, const char_T *c13_name)
{
  const mxArray *c13_y = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_duplicatearraysafe
                (&c13_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c13_b_setSimStateSideEffectsInfo);
  return c13_y;
}

static uint8_T c13__u8_s32_(SFc13_cx06_MAInstanceStruct *chartInstance, int32_T
  c13_b)
{
  uint8_T c13_a;
  c13_a = (uint8_T)c13_b;
  if (c13_a != c13_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c13_a;
}

static uint16_T c13__u16_s32_(SFc13_cx06_MAInstanceStruct *chartInstance,
  int32_T c13_b)
{
  uint16_T c13_a;
  c13_a = (uint16_T)c13_b;
  if (c13_a != c13_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c13_a;
}

static void init_test_point_addr_map(SFc13_cx06_MAInstanceStruct *chartInstance)
{
  chartInstance->c13_testPointAddrMap[0] = &chartInstance->c13_tp_Error;
  chartInstance->c13_testPointAddrMap[1] = &chartInstance->c13_tp_Lean;
  chartInstance->c13_testPointAddrMap[2] = &chartInstance->c13_tp_Lean2Rich;
  chartInstance->c13_testPointAddrMap[3] = &chartInstance->c13_tp_Neutral;
  chartInstance->c13_testPointAddrMap[4] = &chartInstance->c13_tp_Rich;
  chartInstance->c13_testPointAddrMap[5] = &chartInstance->c13_tp_Rich2Lean;
}

static void **get_test_point_address_map(SFc13_cx06_MAInstanceStruct
  *chartInstance)
{
  return &chartInstance->c13_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc13_cx06_MAInstanceStruct *chartInstance)
{
  return &chartInstance->c13_testPointMappingInfo;
}

static void init_dsm_address_info(SFc13_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c13_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2941763961U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3789231116U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(9950476U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(292385080U);
}

mxArray *sf_c13_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2700682867U);
    pr[1] = (double)(1223868491U);
    pr[2] = (double)(3963946691U);
    pr[3] = (double)(2954522737U);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c13_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x7'type','srcId','name','auxInfo'{{M[1],M[29],T\"Ammonia\",},{M[1],M[30],T\"LeanCnt\",},{M[1],M[33],T\"RichCnt\",},{M[1],M[39],T\"State\",},{M[1],M[38],T\"mult\",},{M[8],M[0],T\"is_active_c13_cx06_MA\",},{M[9],M[0],T\"is_c13_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 7, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c13_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc13_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc13_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          13,
          6,
          19,
          14,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"errorIn",
                              0,(MexFcnForType)c13_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"NOx",0,
                              (MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"temp",0,
                              (MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Ammonia",
                              0,(MexFcnForType)c13_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"LeanCnt",
                              0,(MexFcnForType)c13_d_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "LeanMult",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "LeanTime",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"RichCnt",
                              0,(MexFcnForType)c13_d_sf_marshall);
          _SFD_SET_DATA_PROPS(8,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "RichMult",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(9,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "RichTime",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(10,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "NOxThres",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(11,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "minTemp",0,(MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(12,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"mult",0,
                              (MexFcnForType)c13_c_sf_marshall);
          _SFD_SET_DATA_PROPS(13,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"State",0,
                              (MexFcnForType)c13_sf_marshall);
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
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 16, 38 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 16, 38 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 16, 38 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
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

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 24 };

          static unsigned int sEndGuardMap[] = { 16, 38 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c13_errorIn;
          real_T *c13_NOx;
          real_T *c13_temp;
          uint8_T *c13_Ammonia;
          uint16_T *c13_LeanCnt;
          real_T *c13_LeanMult;
          real_T *c13_LeanTime;
          uint16_T *c13_RichCnt;
          real_T *c13_RichMult;
          real_T *c13_RichTime;
          real_T *c13_NOxThres;
          real_T *c13_minTemp;
          real_T *c13_mult;
          uint8_T *c13_State;
          c13_State = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c13_mult = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c13_minTemp = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c13_NOxThres = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c13_RichTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c13_RichMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c13_RichCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c13_LeanTime = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c13_LeanMult = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c13_LeanCnt = (uint16_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c13_Ammonia = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c13_temp = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c13_NOx = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c13_errorIn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c13_errorIn);
          _SFD_SET_DATA_VALUE_PTR(1U, c13_NOx);
          _SFD_SET_DATA_VALUE_PTR(2U, c13_temp);
          _SFD_SET_DATA_VALUE_PTR(3U, c13_Ammonia);
          _SFD_SET_DATA_VALUE_PTR(4U, c13_LeanCnt);
          _SFD_SET_DATA_VALUE_PTR(5U, c13_LeanMult);
          _SFD_SET_DATA_VALUE_PTR(6U, c13_LeanTime);
          _SFD_SET_DATA_VALUE_PTR(7U, c13_RichCnt);
          _SFD_SET_DATA_VALUE_PTR(8U, c13_RichMult);
          _SFD_SET_DATA_VALUE_PTR(9U, c13_RichTime);
          _SFD_SET_DATA_VALUE_PTR(10U, c13_NOxThres);
          _SFD_SET_DATA_VALUE_PTR(11U, c13_minTemp);
          _SFD_SET_DATA_VALUE_PTR(12U, c13_mult);
          _SFD_SET_DATA_VALUE_PTR(13U, c13_State);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c13_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc13_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c13_cx06_MA(void *chartInstanceVar)
{
  enable_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c13_cx06_MA(void *chartInstanceVar)
{
  disable_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c13_cx06_MA(void *chartInstanceVar)
{
  sf_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c13_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c13_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c13_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c13_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c13_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c13_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c13_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c13_cx06_MA(S, st);
}

static void sf_opaque_terminate_c13_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc13_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c13_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c13_cx06_MA((SFc13_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c13_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",13);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",13,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",13,
      "gatewayCannotBeInlinedMultipleTimes"));
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
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",13,9);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",13,5);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",13);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3795918723U));
  ssSetChecksum1(S,(703658855U));
  ssSetChecksum2(S,(3585537331U));
  ssSetChecksum3(S,(3214033393U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c13_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",13);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c13_cx06_MA(SimStruct *S)
{
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc13_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc13_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c13_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c13_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c13_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c13_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c13_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c13_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c13_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c13_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c13_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c13_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c13_cx06_MA;
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

void c13_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c13_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c13_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c13_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c13_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
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
  { 0, 0, "StateflowChart/Error", "Error", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Lean", "Lean", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Lean2Rich", "Lean2Rich", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Neutral", "Neutral", 0, 0, 0, 0, 0 },

  { 4, 0, "StateflowChart/Rich", "Rich", 0, 0, 0, 0, 0 },

  { 5, 0, "StateflowChart/Rich2Lean", "Rich2Lean", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    6                                  /* Num Block IO signals */
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
  SFc13_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc13_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
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
