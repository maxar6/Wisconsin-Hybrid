/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c15_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c15_IN_NO_ACTIVE_CHILD         (0U)
#define c15_IN_Off                     (1U)
#define c15_IN_On                      (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance);
static void disable_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance);
static void c15_update_debugger_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_st);
static void c15_set_sim_state_side_effects_c15_cx06_MA
  (SFc15_cx06_MAInstanceStruct *chartInstance);
static void finalize_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance);
static void sf_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber);
static const mxArray *c15_sf_marshall(void *chartInstanceVoid, void *c15_u);
static const mxArray *c15_b_sf_marshall(void *chartInstanceVoid, void *c15_u);
static const mxArray *c15_c_sf_marshall(void *chartInstanceVoid, void *c15_u);
static boolean_T c15_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_activate, const char_T *c15_name);
static uint8_T c15_b_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_b_is_active_c15_cx06_MA, const char_T *c15_name);
static const mxArray *c15_c_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c15_b_setSimStateSideEffectsInfo, const char_T *
  c15_name);
static void init_test_point_addr_map(SFc15_cx06_MAInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc15_cx06_MAInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc15_cx06_MAInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc15_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  boolean_T *c15_activate;
  c15_activate = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c15_doSetSimStateSideEffects = 0U;
  chartInstance->c15_setSimStateSideEffectsInfo = NULL;
  chartInstance->c15_tp_Off = 0U;
  chartInstance->c15_tp_On = 0U;
  chartInstance->c15_is_active_c15_cx06_MA = 0U;
  chartInstance->c15_is_c15_cx06_MA = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c15_activate = FALSE;
  }
}

static void initialize_params_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c15_update_debugger_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance)
{
  uint32_T c15_prevAniVal;
  c15_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c15_is_active_c15_cx06_MA == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,11);
  }

  if (chartInstance->c15_is_c15_cx06_MA == c15_IN_Off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c15_is_c15_cx06_MA == c15_IN_On) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  sf_debug_set_animation(c15_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c15_st = NULL;
  const mxArray *c15_y = NULL;
  boolean_T c15_hoistedGlobal;
  boolean_T c15_u;
  const mxArray *c15_b_y = NULL;
  uint8_T c15_b_hoistedGlobal;
  uint8_T c15_b_u;
  const mxArray *c15_c_y = NULL;
  uint8_T c15_c_hoistedGlobal;
  uint8_T c15_c_u;
  const mxArray *c15_d_y = NULL;
  boolean_T *c15_activate;
  c15_activate = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_st = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_createcellarray(3));
  c15_hoistedGlobal = *c15_activate;
  c15_u = c15_hoistedGlobal;
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 0, c15_b_y);
  c15_b_hoistedGlobal = chartInstance->c15_is_active_c15_cx06_MA;
  c15_b_u = c15_b_hoistedGlobal;
  c15_c_y = NULL;
  sf_mex_assign(&c15_c_y, sf_mex_create("y", &c15_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 1, c15_c_y);
  c15_c_hoistedGlobal = chartInstance->c15_is_c15_cx06_MA;
  c15_c_u = c15_c_hoistedGlobal;
  c15_d_y = NULL;
  sf_mex_assign(&c15_d_y, sf_mex_create("y", &c15_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c15_y, 2, c15_d_y);
  sf_mex_assign(&c15_st, c15_y);
  return c15_st;
}

static void set_sim_state_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_st)
{
  const mxArray *c15_u;
  boolean_T *c15_activate;
  c15_activate = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_u = sf_mex_dup(c15_st);
  *c15_activate = c15_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c15_u, 0)), "activate");
  chartInstance->c15_is_active_c15_cx06_MA = c15_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c15_u, 1)),
     "is_active_c15_cx06_MA");
  chartInstance->c15_is_c15_cx06_MA = c15_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c15_u, 2)), "is_c15_cx06_MA");
  sf_mex_assign(&chartInstance->c15_setSimStateSideEffectsInfo,
                c15_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c15_u
     , 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c15_u);
  chartInstance->c15_doSetSimStateSideEffects = 1U;
  c15_update_debugger_state_c15_cx06_MA(chartInstance);
  sf_mex_destroy(&c15_st);
}

static void c15_set_sim_state_side_effects_c15_cx06_MA
  (SFc15_cx06_MAInstanceStruct *chartInstance)
{
  if (chartInstance->c15_doSetSimStateSideEffects != 0) {
    if (chartInstance->c15_is_c15_cx06_MA == c15_IN_Off) {
      chartInstance->c15_tp_Off = 1U;
    } else {
      chartInstance->c15_tp_Off = 0U;
    }

    if (chartInstance->c15_is_c15_cx06_MA == c15_IN_On) {
      chartInstance->c15_tp_On = 1U;
    } else {
      chartInstance->c15_tp_On = 0U;
    }

    chartInstance->c15_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c15_setSimStateSideEffectsInfo);
}

static void sf_c15_cx06_MA(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c15_previousEvent;
  real_T *c15_Pressure;
  real_T *c15_off_Pres;
  real_T *c15_on_Pres;
  boolean_T *c15_activate;
  c15_activate = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c15_on_Pres = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c15_off_Pres = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c15_Pressure = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c15_set_sim_state_side_effects_c15_cx06_MA(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,11);
  _SFD_DATA_RANGE_CHECK(*c15_Pressure, 0U);
  _SFD_DATA_RANGE_CHECK(*c15_off_Pres, 1U);
  _SFD_DATA_RANGE_CHECK(*c15_on_Pres, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c15_activate, 3U);
  c15_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,11);
  if ((int16_T)chartInstance->c15_is_active_c15_cx06_MA == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,11);
    chartInstance->c15_is_active_c15_cx06_MA = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
    chartInstance->c15_is_c15_cx06_MA = c15_IN_Off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c15_tp_Off = 1U;
    *c15_activate = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c15_activate, 3U);
  } else {
    switch (chartInstance->c15_is_c15_cx06_MA) {
     case c15_IN_Off:
      CV_CHART_EVAL(11,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0,0,((*c15_Pressure <
              *c15_on_Pres)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c15_tp_Off = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c15_is_c15_cx06_MA = c15_IN_On;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c15_tp_On = 1U;
        *c15_activate = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c15_activate, 3U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c15_IN_On:
      CV_CHART_EVAL(11,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,((*c15_Pressure >
              *c15_off_Pres)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c15_tp_On = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c15_is_c15_cx06_MA = c15_IN_Off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c15_tp_Off = 1U;
        *c15_activate = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c15_activate, 3U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     default:
      CV_CHART_EVAL(11,0,0);
      chartInstance->c15_is_c15_cx06_MA = (uint8_T)c15_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
  _sfEvent_ = c15_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c15_machineNumber, uint32_T
  c15_chartNumber)
{
}

const mxArray *sf_c15_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c15_nameCaptureInfo = NULL;
  c15_nameCaptureInfo = NULL;
  sf_mex_assign(&c15_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c15_nameCaptureInfo;
}

static const mxArray *c15_sf_marshall(void *chartInstanceVoid, void *c15_u)
{
  const mxArray *c15_y = NULL;
  uint8_T c15_b_u;
  const mxArray *c15_b_y = NULL;
  SFc15_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc15_cx06_MAInstanceStruct *)chartInstanceVoid;
  c15_y = NULL;
  c15_b_u = *((uint8_T *)c15_u);
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_y, c15_b_y);
  return c15_y;
}

static const mxArray *c15_b_sf_marshall(void *chartInstanceVoid, void *c15_u)
{
  const mxArray *c15_y = NULL;
  boolean_T c15_b_u;
  const mxArray *c15_b_y = NULL;
  SFc15_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc15_cx06_MAInstanceStruct *)chartInstanceVoid;
  c15_y = NULL;
  c15_b_u = *((boolean_T *)c15_u);
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_y, c15_b_y);
  return c15_y;
}

static const mxArray *c15_c_sf_marshall(void *chartInstanceVoid, void *c15_u)
{
  const mxArray *c15_y = NULL;
  real_T c15_b_u;
  const mxArray *c15_b_y = NULL;
  SFc15_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc15_cx06_MAInstanceStruct *)chartInstanceVoid;
  c15_y = NULL;
  c15_b_u = *((real_T *)c15_u);
  c15_b_y = NULL;
  sf_mex_assign(&c15_b_y, sf_mex_create("y", &c15_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c15_y, c15_b_y);
  return c15_y;
}

static boolean_T c15_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_activate, const char_T *
  c15_name)
{
  boolean_T c15_y;
  boolean_T c15_b0;
  sf_mex_import(c15_name, sf_mex_dup(c15_activate), &c15_b0, 1, 11, 0U, 0, 0U, 0);
  c15_y = c15_b0;
  sf_mex_destroy(&c15_activate);
  return c15_y;
}

static uint8_T c15_b_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c15_b_is_active_c15_cx06_MA, const
  char_T *c15_name)
{
  uint8_T c15_y;
  uint8_T c15_u0;
  sf_mex_import(c15_name, sf_mex_dup(c15_b_is_active_c15_cx06_MA), &c15_u0, 1, 3,
                0U, 0, 0U, 0);
  c15_y = c15_u0;
  sf_mex_destroy(&c15_b_is_active_c15_cx06_MA);
  return c15_y;
}

static const mxArray *c15_c_emlrt_marshallIn(SFc15_cx06_MAInstanceStruct
  *chartInstance, const mxArray *
  c15_b_setSimStateSideEffectsInfo, const char_T *c15_name)
{
  const mxArray *c15_y = NULL;
  c15_y = NULL;
  sf_mex_assign(&c15_y, sf_mex_duplicatearraysafe
                (&c15_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c15_b_setSimStateSideEffectsInfo);
  return c15_y;
}

static void init_test_point_addr_map(SFc15_cx06_MAInstanceStruct *chartInstance)
{
  chartInstance->c15_testPointAddrMap[0] = &chartInstance->c15_tp_Off;
  chartInstance->c15_testPointAddrMap[1] = &chartInstance->c15_tp_On;
}

static void **get_test_point_address_map(SFc15_cx06_MAInstanceStruct
  *chartInstance)
{
  return &chartInstance->c15_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc15_cx06_MAInstanceStruct *chartInstance)
{
  return &chartInstance->c15_testPointMappingInfo;
}

static void init_dsm_address_info(SFc15_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c15_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1700789636U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2096191298U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3441580170U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1805801803U);
}

mxArray *sf_c15_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2055474403U);
    pr[1] = (double)(1862327259U);
    pr[2] = (double)(4232280507U);
    pr[3] = (double)(1394387705U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c15_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[9],T\"activate\",},{M[8],M[0],T\"is_active_c15_cx06_MA\",},{M[9],M[0],T\"is_c15_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c15_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc15_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc15_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          15,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Pressure",0,(MexFcnForType)c15_c_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "off_Pres",0,(MexFcnForType)c15_c_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"on_Pres",
                              0,(MexFcnForType)c15_c_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"activate",
                              0,(MexFcnForType)c15_b_sf_marshall);
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

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 20 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c15_Pressure;
          real_T *c15_off_Pres;
          real_T *c15_on_Pres;
          boolean_T *c15_activate;
          c15_activate = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c15_on_Pres = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c15_off_Pres = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c15_Pressure = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c15_Pressure);
          _SFD_SET_DATA_VALUE_PTR(1U, c15_off_Pres);
          _SFD_SET_DATA_VALUE_PTR(2U, c15_on_Pres);
          _SFD_SET_DATA_VALUE_PTR(3U, c15_activate);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c15_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc15_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c15_cx06_MA(void *chartInstanceVar)
{
  enable_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c15_cx06_MA(void *chartInstanceVar)
{
  disable_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c15_cx06_MA(void *chartInstanceVar)
{
  sf_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c15_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c15_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c15_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c15_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c15_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c15_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c15_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c15_cx06_MA(S, st);
}

static void sf_opaque_terminate_c15_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc15_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c15_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c15_cx06_MA((SFc15_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c15_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",15);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",15,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",15,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",15,3);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",15,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",15);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3804627276U));
  ssSetChecksum1(S,(2373391743U));
  ssSetChecksum2(S,(1689552442U));
  ssSetChecksum3(S,(3327929188U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c15_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",15);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c15_cx06_MA(SimStruct *S)
{
  SFc15_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc15_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc15_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc15_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c15_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c15_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c15_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c15_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c15_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c15_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c15_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c15_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c15_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c15_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c15_cx06_MA;
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

void c15_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c15_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c15_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c15_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c15_cx06_MA_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Off", "Off", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/On", "On", 0, 0, 0, 0, 0 } };

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
  SFc15_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc15_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
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
