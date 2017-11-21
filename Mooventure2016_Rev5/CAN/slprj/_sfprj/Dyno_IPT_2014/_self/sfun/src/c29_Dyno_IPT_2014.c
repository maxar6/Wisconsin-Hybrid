/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c29_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c29_IN_NO_ACTIVE_CHILD         (0U)
#define c29_IN_StandBy                 (1U)
#define c29_IN_TempCheck               (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance);
static void enable_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c29_update_debugger_state_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_st);
static void c29_set_sim_state_side_effects_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber);
static const mxArray *c29_sf_marshall(void *chartInstanceVoid, void *c29_u);
static const mxArray *c29_b_sf_marshall(void *chartInstanceVoid, void *c29_u);
static const mxArray *c29_c_sf_marshall(void *chartInstanceVoid, void *c29_u);
static boolean_T c29_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_eng_en, const char_T *c29_name);
static uint32_T c29_b_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_b_count, const char_T *c29_name);
static uint8_T c29_c_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_b_is_active_c29_Dyno_IPT_2014, const char_T
  *c29_name);
static const mxArray *c29_d_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_b_setSimStateSideEffectsInfo, const char_T *
  c29_name);
static uint32_T c29__u32_s8_(SFc29_Dyno_IPT_2014InstanceStruct *chartInstance,
  int8_T c29_b);
static uint32_T c29__u32_add__(SFc29_Dyno_IPT_2014InstanceStruct *chartInstance,
  uint32_T c29_b, uint32_T c29_c);
static void init_test_point_addr_map(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  boolean_T *c29_eng_en;
  c29_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c29_doSetSimStateSideEffects = 0U;
  chartInstance->c29_setSimStateSideEffectsInfo = NULL;
  chartInstance->c29_tp_StandBy = 0U;
  chartInstance->c29_tp_TempCheck = 0U;
  chartInstance->c29_is_active_c29_Dyno_IPT_2014 = 0U;
  chartInstance->c29_is_c29_Dyno_IPT_2014 = 0U;
  chartInstance->c29_count = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c29_eng_en = FALSE;
  }
}

static void initialize_params_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance)
{
}

static void enable_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c29_update_debugger_state_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c29_prevAniVal;
  c29_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c29_is_active_c29_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,9);
  }

  if (chartInstance->c29_is_c29_Dyno_IPT_2014 == c29_IN_StandBy) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c29_is_c29_Dyno_IPT_2014 == c29_IN_TempCheck) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c29_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c29_st = NULL;
  const mxArray *c29_y = NULL;
  boolean_T c29_hoistedGlobal;
  boolean_T c29_u;
  const mxArray *c29_b_y = NULL;
  uint32_T c29_b_hoistedGlobal;
  uint32_T c29_b_u;
  const mxArray *c29_c_y = NULL;
  uint8_T c29_c_hoistedGlobal;
  uint8_T c29_c_u;
  const mxArray *c29_d_y = NULL;
  uint8_T c29_d_hoistedGlobal;
  uint8_T c29_d_u;
  const mxArray *c29_e_y = NULL;
  boolean_T *c29_eng_en;
  c29_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_st = NULL;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_createcellarray(4));
  c29_hoistedGlobal = *c29_eng_en;
  c29_u = c29_hoistedGlobal;
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 0, c29_b_y);
  c29_b_hoistedGlobal = chartInstance->c29_count;
  c29_b_u = c29_b_hoistedGlobal;
  c29_c_y = NULL;
  sf_mex_assign(&c29_c_y, sf_mex_create("y", &c29_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 1, c29_c_y);
  c29_c_hoistedGlobal = chartInstance->c29_is_active_c29_Dyno_IPT_2014;
  c29_c_u = c29_c_hoistedGlobal;
  c29_d_y = NULL;
  sf_mex_assign(&c29_d_y, sf_mex_create("y", &c29_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 2, c29_d_y);
  c29_d_hoistedGlobal = chartInstance->c29_is_c29_Dyno_IPT_2014;
  c29_d_u = c29_d_hoistedGlobal;
  c29_e_y = NULL;
  sf_mex_assign(&c29_e_y, sf_mex_create("y", &c29_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c29_y, 3, c29_e_y);
  sf_mex_assign(&c29_st, c29_y);
  return c29_st;
}

static void set_sim_state_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_st)
{
  const mxArray *c29_u;
  boolean_T *c29_eng_en;
  c29_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_u = sf_mex_dup(c29_st);
  *c29_eng_en = c29_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c29_u, 0)), "eng_en");
  chartInstance->c29_count = c29_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c29_u, 1)), "count");
  chartInstance->c29_is_active_c29_Dyno_IPT_2014 = c29_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c29_u, 2)),
     "is_active_c29_Dyno_IPT_2014");
  chartInstance->c29_is_c29_Dyno_IPT_2014 = c29_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c29_u, 3)),
    "is_c29_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c29_setSimStateSideEffectsInfo,
                c29_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c29_u
     , 4)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c29_u);
  chartInstance->c29_doSetSimStateSideEffects = 1U;
  c29_update_debugger_state_c29_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c29_st);
}

static void c29_set_sim_state_side_effects_c29_Dyno_IPT_2014
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c29_doSetSimStateSideEffects != 0) {
    if (chartInstance->c29_is_c29_Dyno_IPT_2014 == c29_IN_StandBy) {
      chartInstance->c29_tp_StandBy = 1U;
    } else {
      chartInstance->c29_tp_StandBy = 0U;
    }

    if (chartInstance->c29_is_c29_Dyno_IPT_2014 == c29_IN_TempCheck) {
      chartInstance->c29_tp_TempCheck = 1U;
    } else {
      chartInstance->c29_tp_TempCheck = 0U;
    }

    chartInstance->c29_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c29_setSimStateSideEffectsInfo);
}

static void sf_c29_Dyno_IPT_2014(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c29_previousEvent;
  uint32_T c29_u0;
  uint32_T c29_u1;
  boolean_T c29_b0;
  uint32_T c29_u2;
  uint32_T c29_u3;
  boolean_T c29_b1;
  uint32_T c29_u4;
  boolean_T *c29_eng_en;
  uint32_T *c29_standby_time;
  uint32_T *c29_check_time;
  c29_check_time = (uint32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c29_standby_time = (uint32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c29_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c29_set_sim_state_side_effects_c29_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,9);
  _SFD_DATA_RANGE_CHECK((real_T)*c29_eng_en, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c29_standby_time, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c29_check_time, 3U);
  c29_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,9);
  if ((int16_T)chartInstance->c29_is_active_c29_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,9);
    chartInstance->c29_is_active_c29_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c29_is_c29_Dyno_IPT_2014 = c29_IN_StandBy;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c29_tp_StandBy = 1U;
    chartInstance->c29_count = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
    c29_u0 = chartInstance->c29_count;
    sf_mex_printf("%s =\\n", "count");
    sf_mex_call_debug("disp", 0U, 1U, 13, c29_u0);
  } else {
    switch (chartInstance->c29_is_c29_Dyno_IPT_2014) {
     case c29_IN_StandBy:
      CV_CHART_EVAL(9,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,
            ((chartInstance->c29_count > *c29_standby_time)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c29_tp_StandBy = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c29_is_c29_Dyno_IPT_2014 = c29_IN_TempCheck;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c29_tp_TempCheck = 1U;
        chartInstance->c29_count = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
        c29_u1 = chartInstance->c29_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 13, c29_u1);
      } else {
        *c29_eng_en = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c29_eng_en, 0U);
        c29_b0 = *c29_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c29_b0);
        chartInstance->c29_count = c29__u32_add__(chartInstance,
          chartInstance->c29_count, c29__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
        c29_u2 = chartInstance->c29_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 13, c29_u2);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c29_IN_TempCheck:
      CV_CHART_EVAL(9,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,
            ((chartInstance->c29_count > *c29_check_time)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c29_tp_TempCheck = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c29_is_c29_Dyno_IPT_2014 = c29_IN_StandBy;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c29_tp_StandBy = 1U;
        chartInstance->c29_count = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
        c29_u3 = chartInstance->c29_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 13, c29_u3);
      } else {
        *c29_eng_en = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c29_eng_en, 0U);
        c29_b1 = *c29_eng_en;
        sf_mex_printf("%s =\\n", "eng_en");
        sf_mex_call_debug("disp", 0U, 1U, 3, c29_b1);
        chartInstance->c29_count = c29__u32_add__(chartInstance,
          chartInstance->c29_count, c29__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c29_count, 1U);
        c29_u4 = chartInstance->c29_count;
        sf_mex_printf("%s =\\n", "count");
        sf_mex_call_debug("disp", 0U, 1U, 13, c29_u4);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     default:
      CV_CHART_EVAL(9,0,0);
      chartInstance->c29_is_c29_Dyno_IPT_2014 = (uint8_T)c29_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
  _sfEvent_ = c29_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c29_machineNumber, uint32_T
  c29_chartNumber)
{
}

const mxArray *sf_c29_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c29_nameCaptureInfo = NULL;
  c29_nameCaptureInfo = NULL;
  sf_mex_assign(&c29_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c29_nameCaptureInfo;
}

static const mxArray *c29_sf_marshall(void *chartInstanceVoid, void *c29_u)
{
  const mxArray *c29_y = NULL;
  uint8_T c29_b_u;
  const mxArray *c29_b_y = NULL;
  SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c29_y = NULL;
  c29_b_u = *((uint8_T *)c29_u);
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_y, c29_b_y);
  return c29_y;
}

static const mxArray *c29_b_sf_marshall(void *chartInstanceVoid, void *c29_u)
{
  const mxArray *c29_y = NULL;
  boolean_T c29_b_u;
  const mxArray *c29_b_y = NULL;
  SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c29_y = NULL;
  c29_b_u = *((boolean_T *)c29_u);
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_y, c29_b_y);
  return c29_y;
}

static const mxArray *c29_c_sf_marshall(void *chartInstanceVoid, void *c29_u)
{
  const mxArray *c29_y = NULL;
  uint32_T c29_b_u;
  const mxArray *c29_b_y = NULL;
  SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c29_y = NULL;
  c29_b_u = *((uint32_T *)c29_u);
  c29_b_y = NULL;
  sf_mex_assign(&c29_b_y, sf_mex_create("y", &c29_b_u, 7, 0U, 0U, 0U, 0));
  sf_mex_assign(&c29_y, c29_b_y);
  return c29_y;
}

static boolean_T c29_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_eng_en, const char_T *
  c29_name)
{
  boolean_T c29_y;
  boolean_T c29_b2;
  sf_mex_import(c29_name, sf_mex_dup(c29_eng_en), &c29_b2, 1, 11, 0U, 0, 0U, 0);
  c29_y = c29_b2;
  sf_mex_destroy(&c29_eng_en);
  return c29_y;
}

static uint32_T c29_b_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c29_b_count, const char_T *
  c29_name)
{
  uint32_T c29_y;
  uint32_T c29_u5;
  sf_mex_import(c29_name, sf_mex_dup(c29_b_count), &c29_u5, 1, 7, 0U, 0, 0U, 0);
  c29_y = c29_u5;
  sf_mex_destroy(&c29_b_count);
  return c29_y;
}

static uint8_T c29_c_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c29_b_is_active_c29_Dyno_IPT_2014, const char_T *c29_name)
{
  uint8_T c29_y;
  uint8_T c29_u6;
  sf_mex_import(c29_name, sf_mex_dup(c29_b_is_active_c29_Dyno_IPT_2014), &c29_u6,
                1, 3, 0U, 0, 0U, 0);
  c29_y = c29_u6;
  sf_mex_destroy(&c29_b_is_active_c29_Dyno_IPT_2014);
  return c29_y;
}

static const mxArray *c29_d_emlrt_marshallIn(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c29_b_setSimStateSideEffectsInfo, const char_T *c29_name)
{
  const mxArray *c29_y = NULL;
  c29_y = NULL;
  sf_mex_assign(&c29_y, sf_mex_duplicatearraysafe
                (&c29_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c29_b_setSimStateSideEffectsInfo);
  return c29_y;
}

static uint32_T c29__u32_s8_(SFc29_Dyno_IPT_2014InstanceStruct *chartInstance,
  int8_T c29_b)
{
  uint32_T c29_a;
  c29_a = (uint32_T)c29_b;
  if (c29_b < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c29_a;
}

static uint32_T c29__u32_add__(SFc29_Dyno_IPT_2014InstanceStruct *chartInstance,
  uint32_T c29_b, uint32_T c29_c)
{
  uint32_T c29_a;
  c29_a = c29_b + c29_c;
  if (c29_a < c29_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c29_a;
}

static void init_test_point_addr_map(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c29_testPointAddrMap[0] = &chartInstance->c29_count;
  chartInstance->c29_testPointAddrMap[1] = &chartInstance->c29_tp_StandBy;
  chartInstance->c29_testPointAddrMap[2] = &chartInstance->c29_tp_TempCheck;
}

static void **get_test_point_address_map(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c29_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc29_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c29_testPointMappingInfo;
}

static void init_dsm_address_info(SFc29_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c29_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2175765939U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1214239562U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1740398255U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3551514104U);
}

mxArray *sf_c29_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1289764795U);
    pr[1] = (double)(3350373040U);
    pr[2] = (double)(2256309246U);
    pr[3] = (double)(2818198319U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c29_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[1],T\"eng_en\",},{M[3],M[8],T\"count\",},{M[8],M[0],T\"is_active_c29_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c29_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c29_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           29,
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
          init_script_number_translation(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Dyno_IPT_2014MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Dyno_IPT_2014MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"eng_en",0,
                              (MexFcnForType)c29_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,0,0,0,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,"count",0,
                              (MexFcnForType)c29_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,
                              "standby_time",0,(MexFcnForType)c29_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,
                              "check_time",0,(MexFcnForType)c29_c_sf_marshall);
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

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

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

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c29_eng_en;
          uint32_T *c29_standby_time;
          uint32_T *c29_check_time;
          c29_check_time = (uint32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c29_standby_time = (uint32_T *)ssGetInputPortSignal(chartInstance->S,
            0);
          c29_eng_en = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c29_eng_en);
          _SFD_SET_DATA_VALUE_PTR(1U, &chartInstance->c29_count);
          _SFD_SET_DATA_VALUE_PTR(2U, c29_standby_time);
          _SFD_SET_DATA_VALUE_PTR(3U, c29_check_time);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c29_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc29_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c29_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c29_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c29_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c29_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c29_Dyno_IPT_2014
    ((SFc29_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c29_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c29_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c29_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c29_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c29_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c29_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c29_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c29_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc29_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c29_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c29_Dyno_IPT_2014((SFc29_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c29_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",29);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",29,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",29,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",29,2);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",29,1);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",29);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3301139393U));
  ssSetChecksum1(S,(2795273075U));
  ssSetChecksum2(S,(3603180984U));
  ssSetChecksum3(S,(2470105710U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c29_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",29);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c29_Dyno_IPT_2014(SimStruct *S)
{
  SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc29_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc29_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c29_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c29_Dyno_IPT_2014;
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

void c29_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c29_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c29_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c29_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c29_Dyno_IPT_2014_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "uint32_T", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

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
  { 0, 0, "StateflowChart/count", "count", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/StandBy", "StandBy", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/TempCheck", "TempCheck", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    3                                  /* Num Block IO signals */
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
  SFc29_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc29_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
