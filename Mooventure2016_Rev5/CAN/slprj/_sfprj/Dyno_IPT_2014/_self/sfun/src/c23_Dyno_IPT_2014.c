/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c23_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c23_IN_NO_ACTIVE_CHILD         (0U)
#define c23_IN_standby                 (1U)
#define c23_IN_turbo_needed            (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance);
static void enable_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c23_update_debugger_state_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_st);
static void c23_set_sim_state_side_effects_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber);
static const mxArray *c23_sf_marshall(void *chartInstanceVoid, void *c23_u);
static const mxArray *c23_b_sf_marshall(void *chartInstanceVoid, void *c23_u);
static const mxArray *c23_c_sf_marshall(void *chartInstanceVoid, void *c23_u);
static real_T c23_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_turbo, const char_T *c23_name);
static uint8_T c23_b_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_b_is_active_c23_Dyno_IPT_2014, const char_T
  *c23_name);
static const mxArray *c23_c_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_b_setSimStateSideEffectsInfo, const char_T *
  c23_name);
static void init_test_point_addr_map(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  real_T *c23_turbo;
  c23_turbo = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c23_doSetSimStateSideEffects = 0U;
  chartInstance->c23_setSimStateSideEffectsInfo = NULL;
  chartInstance->c23_tp_standby = 0U;
  chartInstance->c23_tp_turbo_needed = 0U;
  chartInstance->c23_is_active_c23_Dyno_IPT_2014 = 0U;
  chartInstance->c23_is_c23_Dyno_IPT_2014 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c23_turbo = 0.0;
  }
}

static void initialize_params_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance)
{
}

static void enable_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c23_update_debugger_state_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c23_prevAniVal;
  c23_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c23_is_active_c23_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,8);
  }

  if (chartInstance->c23_is_c23_Dyno_IPT_2014 == c23_IN_standby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c23_is_c23_Dyno_IPT_2014 == c23_IN_turbo_needed) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c23_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c23_st = NULL;
  const mxArray *c23_y = NULL;
  real_T c23_hoistedGlobal;
  real_T c23_u;
  const mxArray *c23_b_y = NULL;
  uint8_T c23_b_hoistedGlobal;
  uint8_T c23_b_u;
  const mxArray *c23_c_y = NULL;
  uint8_T c23_c_hoistedGlobal;
  uint8_T c23_c_u;
  const mxArray *c23_d_y = NULL;
  real_T *c23_turbo;
  c23_turbo = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_st = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_createcellarray(3));
  c23_hoistedGlobal = *c23_turbo;
  c23_u = c23_hoistedGlobal;
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 0, c23_b_y);
  c23_b_hoistedGlobal = chartInstance->c23_is_active_c23_Dyno_IPT_2014;
  c23_b_u = c23_b_hoistedGlobal;
  c23_c_y = NULL;
  sf_mex_assign(&c23_c_y, sf_mex_create("y", &c23_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 1, c23_c_y);
  c23_c_hoistedGlobal = chartInstance->c23_is_c23_Dyno_IPT_2014;
  c23_c_u = c23_c_hoistedGlobal;
  c23_d_y = NULL;
  sf_mex_assign(&c23_d_y, sf_mex_create("y", &c23_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c23_y, 2, c23_d_y);
  sf_mex_assign(&c23_st, c23_y);
  return c23_st;
}

static void set_sim_state_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_st)
{
  const mxArray *c23_u;
  real_T *c23_turbo;
  c23_turbo = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_u = sf_mex_dup(c23_st);
  *c23_turbo = c23_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c23_u, 0)), "turbo");
  chartInstance->c23_is_active_c23_Dyno_IPT_2014 = c23_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c23_u, 1)),
     "is_active_c23_Dyno_IPT_2014");
  chartInstance->c23_is_c23_Dyno_IPT_2014 = c23_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c23_u, 2)),
    "is_c23_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c23_setSimStateSideEffectsInfo,
                c23_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c23_u
     , 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c23_u);
  chartInstance->c23_doSetSimStateSideEffects = 1U;
  c23_update_debugger_state_c23_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c23_st);
}

static void c23_set_sim_state_side_effects_c23_Dyno_IPT_2014
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c23_doSetSimStateSideEffects != 0) {
    if (chartInstance->c23_is_c23_Dyno_IPT_2014 == c23_IN_standby) {
      chartInstance->c23_tp_standby = 1U;
    } else {
      chartInstance->c23_tp_standby = 0U;
    }

    if (chartInstance->c23_is_c23_Dyno_IPT_2014 == c23_IN_turbo_needed) {
      chartInstance->c23_tp_turbo_needed = 1U;
    } else {
      chartInstance->c23_tp_turbo_needed = 0U;
    }

    chartInstance->c23_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c23_setSimStateSideEffectsInfo);
}

static void sf_c23_Dyno_IPT_2014(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c23_previousEvent;
  real_T c23_d0;
  real_T c23_d1;
  real_T *c23_drive_current;
  real_T *c23_cal_turbo_current;
  real_T *c23_cal_turbo_off_current;
  real_T *c23_turbo;
  c23_turbo = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c23_cal_turbo_off_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c23_cal_turbo_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c23_drive_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c23_set_sim_state_side_effects_c23_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,8);
  _SFD_DATA_RANGE_CHECK(*c23_drive_current, 0U);
  _SFD_DATA_RANGE_CHECK(*c23_cal_turbo_current, 1U);
  _SFD_DATA_RANGE_CHECK(*c23_cal_turbo_off_current, 2U);
  _SFD_DATA_RANGE_CHECK(*c23_turbo, 3U);
  c23_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,8);
  if ((int16_T)chartInstance->c23_is_active_c23_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,8);
    chartInstance->c23_is_active_c23_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c23_is_c23_Dyno_IPT_2014 = c23_IN_standby;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c23_tp_standby = 1U;
  } else {
    switch (chartInstance->c23_is_c23_Dyno_IPT_2014) {
     case c23_IN_standby:
      CV_CHART_EVAL(8,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c23_drive_current
              > *c23_cal_turbo_current)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c23_tp_standby = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c23_is_c23_Dyno_IPT_2014 = c23_IN_turbo_needed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c23_tp_turbo_needed = 1U;
      } else {
        *c23_turbo = 0.0;
        _SFD_DATA_RANGE_CHECK(*c23_turbo, 3U);
        c23_d0 = *c23_turbo;
        sf_mex_printf("%s =\\n", "turbo");
        sf_mex_call_debug("disp", 0U, 1U, 6, c23_d0);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c23_IN_turbo_needed:
      CV_CHART_EVAL(8,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c23_drive_current
              < *c23_cal_turbo_off_current)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c23_tp_turbo_needed = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c23_is_c23_Dyno_IPT_2014 = c23_IN_standby;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c23_tp_standby = 1U;
      } else {
        *c23_turbo = 1.0;
        _SFD_DATA_RANGE_CHECK(*c23_turbo, 3U);
        c23_d1 = *c23_turbo;
        sf_mex_printf("%s =\\n", "turbo");
        sf_mex_call_debug("disp", 0U, 1U, 6, c23_d1);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     default:
      CV_CHART_EVAL(8,0,0);
      chartInstance->c23_is_c23_Dyno_IPT_2014 = (uint8_T)c23_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
  _sfEvent_ = c23_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c23_machineNumber, uint32_T
  c23_chartNumber)
{
}

const mxArray *sf_c23_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c23_nameCaptureInfo = NULL;
  c23_nameCaptureInfo = NULL;
  sf_mex_assign(&c23_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c23_nameCaptureInfo;
}

static const mxArray *c23_sf_marshall(void *chartInstanceVoid, void *c23_u)
{
  const mxArray *c23_y = NULL;
  uint8_T c23_b_u;
  const mxArray *c23_b_y = NULL;
  SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c23_y = NULL;
  c23_b_u = *((uint8_T *)c23_u);
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c23_y, c23_b_y);
  return c23_y;
}

static const mxArray *c23_b_sf_marshall(void *chartInstanceVoid, void *c23_u)
{
  const mxArray *c23_y = NULL;
  boolean_T c23_b_u;
  const mxArray *c23_b_y = NULL;
  SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c23_y = NULL;
  c23_b_u = *((boolean_T *)c23_u);
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c23_y, c23_b_y);
  return c23_y;
}

static const mxArray *c23_c_sf_marshall(void *chartInstanceVoid, void *c23_u)
{
  const mxArray *c23_y = NULL;
  real_T c23_b_u;
  const mxArray *c23_b_y = NULL;
  SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c23_y = NULL;
  c23_b_u = *((real_T *)c23_u);
  c23_b_y = NULL;
  sf_mex_assign(&c23_b_y, sf_mex_create("y", &c23_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c23_y, c23_b_y);
  return c23_y;
}

static real_T c23_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c23_turbo, const char_T *
  c23_name)
{
  real_T c23_y;
  real_T c23_d2;
  sf_mex_import(c23_name, sf_mex_dup(c23_turbo), &c23_d2, 1, 0, 0U, 0, 0U, 0);
  c23_y = c23_d2;
  sf_mex_destroy(&c23_turbo);
  return c23_y;
}

static uint8_T c23_b_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c23_b_is_active_c23_Dyno_IPT_2014, const char_T *c23_name)
{
  uint8_T c23_y;
  uint8_T c23_u0;
  sf_mex_import(c23_name, sf_mex_dup(c23_b_is_active_c23_Dyno_IPT_2014), &c23_u0,
                1, 3, 0U, 0, 0U, 0);
  c23_y = c23_u0;
  sf_mex_destroy(&c23_b_is_active_c23_Dyno_IPT_2014);
  return c23_y;
}

static const mxArray *c23_c_emlrt_marshallIn(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c23_b_setSimStateSideEffectsInfo, const char_T *c23_name)
{
  const mxArray *c23_y = NULL;
  c23_y = NULL;
  sf_mex_assign(&c23_y, sf_mex_duplicatearraysafe
                (&c23_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c23_b_setSimStateSideEffectsInfo);
  return c23_y;
}

static void init_test_point_addr_map(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c23_testPointAddrMap[0] = &chartInstance->c23_tp_standby;
  chartInstance->c23_testPointAddrMap[1] = &chartInstance->c23_tp_turbo_needed;
}

static void **get_test_point_address_map(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c23_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc23_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c23_testPointMappingInfo;
}

static void init_dsm_address_info(SFc23_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c23_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1698653389U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1492830466U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(792776898U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1336865023U);
}

mxArray *sf_c23_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2913708843U);
    pr[1] = (double)(2860447012U);
    pr[2] = (double)(889090000U);
    pr[3] = (double)(2125553296U);
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c23_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[39],T\"turbo\",},{M[8],M[0],T\"is_active_c23_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c23_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c23_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           23,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "drive_current",0,(MexFcnForType)c23_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_turbo_current",0,(MexFcnForType)
                              c23_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "cal_turbo_off_current",0,(MexFcnForType)
                              c23_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"turbo",0,
                              (MexFcnForType)c23_c_sf_marshall);
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

          static unsigned int sEndGuardMap[] = { 34 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

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

          static unsigned int sEndGuardMap[] = { 34 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c23_drive_current;
          real_T *c23_cal_turbo_current;
          real_T *c23_cal_turbo_off_current;
          real_T *c23_turbo;
          c23_turbo = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c23_cal_turbo_off_current = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c23_cal_turbo_current = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c23_drive_current = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c23_drive_current);
          _SFD_SET_DATA_VALUE_PTR(1U, c23_cal_turbo_current);
          _SFD_SET_DATA_VALUE_PTR(2U, c23_cal_turbo_off_current);
          _SFD_SET_DATA_VALUE_PTR(3U, c23_turbo);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c23_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc23_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c23_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c23_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c23_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c23_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c23_Dyno_IPT_2014
    ((SFc23_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c23_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c23_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c23_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c23_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c23_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c23_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c23_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c23_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc23_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c23_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c23_Dyno_IPT_2014((SFc23_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c23_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",23);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",23,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",23,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",23,3);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",23,1);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",23);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2849311072U));
  ssSetChecksum1(S,(620343407U));
  ssSetChecksum2(S,(1727138943U));
  ssSetChecksum3(S,(2530973302U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c23_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",23);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c23_Dyno_IPT_2014(SimStruct *S)
{
  SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc23_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc23_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c23_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c23_Dyno_IPT_2014;
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

void c23_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c23_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c23_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c23_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c23_Dyno_IPT_2014_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/standby", "standby", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/turbo_needed", "turbo_needed", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    2                                  /* Num Block IO signals */
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
  SFc23_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc23_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
