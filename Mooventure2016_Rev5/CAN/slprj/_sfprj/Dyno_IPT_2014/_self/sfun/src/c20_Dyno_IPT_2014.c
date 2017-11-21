/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c20_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c20_IN_NO_ACTIVE_CHILD         (0U)
#define c20_IN_nomove                  (2U)
#define c20_IN_moved                   (1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance);
static void enable_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c20_update_debugger_state_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_st);
static void c20_set_sim_state_side_effects_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c20_machineNumber, uint32_T
  c20_chartNumber);
static const mxArray *c20_sf_marshall(void *chartInstanceVoid, void *c20_u);
static const mxArray *c20_b_sf_marshall(void *chartInstanceVoid, void *c20_u);
static boolean_T c20_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_moved, const char_T *c20_name);
static uint8_T c20_b_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_b_is_active_c20_Dyno_IPT_2014, const char_T
  *c20_name);
static const mxArray *c20_c_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_b_setSimStateSideEffectsInfo, const char_T *
  c20_name);
static void init_test_point_addr_map(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  boolean_T *c20_moved;
  c20_moved = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c20_doSetSimStateSideEffects = 0U;
  chartInstance->c20_setSimStateSideEffectsInfo = NULL;
  chartInstance->c20_tp_moved = 0U;
  chartInstance->c20_tp_nomove = 0U;
  chartInstance->c20_is_active_c20_Dyno_IPT_2014 = 0U;
  chartInstance->c20_is_c20_Dyno_IPT_2014 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c20_moved = FALSE;
  }
}

static void initialize_params_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance)
{
}

static void enable_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c20_update_debugger_state_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c20_prevAniVal;
  c20_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c20_is_active_c20_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,6);
  }

  if (chartInstance->c20_is_c20_Dyno_IPT_2014 == c20_IN_nomove) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c20_is_c20_Dyno_IPT_2014 == c20_IN_moved) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  sf_debug_set_animation(c20_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c20_st = NULL;
  const mxArray *c20_y = NULL;
  boolean_T c20_hoistedGlobal;
  boolean_T c20_u;
  const mxArray *c20_b_y = NULL;
  uint8_T c20_b_hoistedGlobal;
  uint8_T c20_b_u;
  const mxArray *c20_c_y = NULL;
  uint8_T c20_c_hoistedGlobal;
  uint8_T c20_c_u;
  const mxArray *c20_d_y = NULL;
  boolean_T *c20_moved;
  c20_moved = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_st = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_createcellarray(3));
  c20_hoistedGlobal = *c20_moved;
  c20_u = c20_hoistedGlobal;
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", &c20_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 0, c20_b_y);
  c20_b_hoistedGlobal = chartInstance->c20_is_active_c20_Dyno_IPT_2014;
  c20_b_u = c20_b_hoistedGlobal;
  c20_c_y = NULL;
  sf_mex_assign(&c20_c_y, sf_mex_create("y", &c20_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 1, c20_c_y);
  c20_c_hoistedGlobal = chartInstance->c20_is_c20_Dyno_IPT_2014;
  c20_c_u = c20_c_hoistedGlobal;
  c20_d_y = NULL;
  sf_mex_assign(&c20_d_y, sf_mex_create("y", &c20_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c20_y, 2, c20_d_y);
  sf_mex_assign(&c20_st, c20_y);
  return c20_st;
}

static void set_sim_state_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_st)
{
  const mxArray *c20_u;
  boolean_T *c20_moved;
  c20_moved = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_u = sf_mex_dup(c20_st);
  *c20_moved = c20_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c20_u, 0)), "moved");
  chartInstance->c20_is_active_c20_Dyno_IPT_2014 = c20_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c20_u, 1)),
     "is_active_c20_Dyno_IPT_2014");
  chartInstance->c20_is_c20_Dyno_IPT_2014 = c20_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c20_u, 2)),
    "is_c20_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c20_setSimStateSideEffectsInfo,
                c20_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c20_u
     , 3)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c20_u);
  chartInstance->c20_doSetSimStateSideEffects = 1U;
  c20_update_debugger_state_c20_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c20_st);
}

static void c20_set_sim_state_side_effects_c20_Dyno_IPT_2014
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c20_doSetSimStateSideEffects != 0) {
    if (chartInstance->c20_is_c20_Dyno_IPT_2014 == c20_IN_moved) {
      chartInstance->c20_tp_moved = 1U;
    } else {
      chartInstance->c20_tp_moved = 0U;
    }

    if (chartInstance->c20_is_c20_Dyno_IPT_2014 == c20_IN_nomove) {
      chartInstance->c20_tp_nomove = 1U;
    } else {
      chartInstance->c20_tp_nomove = 0U;
    }

    chartInstance->c20_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c20_setSimStateSideEffectsInfo);
}

static void sf_c20_Dyno_IPT_2014(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c20_previousEvent;
  boolean_T c20_b0;
  boolean_T c20_b1;
  boolean_T *c20_exceed_moved_speed;
  boolean_T *c20_moved;
  c20_exceed_moved_speed = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c20_moved = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c20_set_sim_state_side_effects_c20_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,6);
  _SFD_DATA_RANGE_CHECK((real_T)*c20_moved, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c20_exceed_moved_speed, 1U);
  c20_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,6);
  if ((int16_T)chartInstance->c20_is_active_c20_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,6);
    chartInstance->c20_is_active_c20_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c20_is_c20_Dyno_IPT_2014 = c20_IN_nomove;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
    chartInstance->c20_tp_nomove = 1U;
  } else {
    switch (chartInstance->c20_is_c20_Dyno_IPT_2014) {
     case c20_IN_moved:
      CV_CHART_EVAL(6,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      *c20_moved = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c20_moved, 0U);
      c20_b0 = *c20_moved;
      sf_mex_printf("%s =\\n", "moved");
      sf_mex_call_debug("disp", 0U, 1U, 3, c20_b0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c20_IN_nomove:
      CV_CHART_EVAL(6,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,
            ((*c20_exceed_moved_speed)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c20_tp_nomove = 0U;
        chartInstance->c20_is_c20_Dyno_IPT_2014 = (uint8_T)
          c20_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c20_is_c20_Dyno_IPT_2014 = c20_IN_moved;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c20_tp_moved = 1U;
      } else {
        *c20_moved = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c20_moved, 0U);
        c20_b1 = *c20_moved;
        sf_mex_printf("%s =\\n", "moved");
        sf_mex_call_debug("disp", 0U, 1U, 3, c20_b1);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     default:
      CV_CHART_EVAL(6,0,0);
      chartInstance->c20_is_c20_Dyno_IPT_2014 = (uint8_T)c20_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
  _sfEvent_ = c20_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c20_machineNumber, uint32_T
  c20_chartNumber)
{
}

const mxArray *sf_c20_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c20_nameCaptureInfo = NULL;
  c20_nameCaptureInfo = NULL;
  sf_mex_assign(&c20_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c20_nameCaptureInfo;
}

static const mxArray *c20_sf_marshall(void *chartInstanceVoid, void *c20_u)
{
  const mxArray *c20_y = NULL;
  uint8_T c20_b_u;
  const mxArray *c20_b_y = NULL;
  SFc20_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc20_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c20_y = NULL;
  c20_b_u = *((uint8_T *)c20_u);
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", &c20_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c20_y, c20_b_y);
  return c20_y;
}

static const mxArray *c20_b_sf_marshall(void *chartInstanceVoid, void *c20_u)
{
  const mxArray *c20_y = NULL;
  boolean_T c20_b_u;
  const mxArray *c20_b_y = NULL;
  SFc20_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc20_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c20_y = NULL;
  c20_b_u = *((boolean_T *)c20_u);
  c20_b_y = NULL;
  sf_mex_assign(&c20_b_y, sf_mex_create("y", &c20_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c20_y, c20_b_y);
  return c20_y;
}

static boolean_T c20_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c20_moved, const char_T *
  c20_name)
{
  boolean_T c20_y;
  boolean_T c20_b2;
  sf_mex_import(c20_name, sf_mex_dup(c20_moved), &c20_b2, 1, 11, 0U, 0, 0U, 0);
  c20_y = c20_b2;
  sf_mex_destroy(&c20_moved);
  return c20_y;
}

static uint8_T c20_b_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c20_b_is_active_c20_Dyno_IPT_2014, const char_T *c20_name)
{
  uint8_T c20_y;
  uint8_T c20_u0;
  sf_mex_import(c20_name, sf_mex_dup(c20_b_is_active_c20_Dyno_IPT_2014), &c20_u0,
                1, 3, 0U, 0, 0U, 0);
  c20_y = c20_u0;
  sf_mex_destroy(&c20_b_is_active_c20_Dyno_IPT_2014);
  return c20_y;
}

static const mxArray *c20_c_emlrt_marshallIn(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c20_b_setSimStateSideEffectsInfo, const char_T *c20_name)
{
  const mxArray *c20_y = NULL;
  c20_y = NULL;
  sf_mex_assign(&c20_y, sf_mex_duplicatearraysafe
                (&c20_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c20_b_setSimStateSideEffectsInfo);
  return c20_y;
}

static void init_test_point_addr_map(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c20_testPointAddrMap[0] = &chartInstance->c20_tp_moved;
  chartInstance->c20_testPointAddrMap[1] = &chartInstance->c20_tp_nomove;
}

static void **get_test_point_address_map(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c20_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc20_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c20_testPointMappingInfo;
}

static void init_dsm_address_info(SFc20_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c20_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3068633486U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3831389322U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(984066078U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(579483150U);
}

mxArray *sf_c20_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2079258872U);
    pr[1] = (double)(3475602659U);
    pr[2] = (double)(3539418348U);
    pr[3] = (double)(1538528618U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c20_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[1],T\"moved\",},{M[8],M[0],T\"is_active_c20_Dyno_IPT_2014\",},{M[9],M[0],T\"is_c20_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c20_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc20_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc20_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           20,
           2,
           2,
           2,
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
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"moved",0,
                              (MexFcnForType)c20_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "exceed_moved_speed",0,(MexFcnForType)
                              c20_b_sf_marshall);
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

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c20_moved;
          boolean_T *c20_exceed_moved_speed;
          c20_exceed_moved_speed = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          c20_moved = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c20_moved);
          _SFD_SET_DATA_VALUE_PTR(1U, c20_exceed_moved_speed);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c20_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc20_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c20_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c20_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c20_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c20_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c20_Dyno_IPT_2014
    ((SFc20_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c20_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c20_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c20_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c20_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c20_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c20_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c20_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c20_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc20_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c20_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c20_Dyno_IPT_2014((SFc20_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c20_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",20);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",20,
                "RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",20,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",20,1);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",20,1);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",20);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(233949414U));
  ssSetChecksum1(S,(354928187U));
  ssSetChecksum2(S,(1514824074U));
  ssSetChecksum3(S,(2173967127U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c20_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",20);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c20_Dyno_IPT_2014(SimStruct *S)
{
  SFc20_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc20_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc20_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc20_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c20_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c20_Dyno_IPT_2014;
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

void c20_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c20_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c20_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c20_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c20_Dyno_IPT_2014_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/moved", "moved", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/nomove", "nomove", 0, 0, 0, 0, 0 } };

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
  SFc20_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc20_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
