/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c7_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c7_debug_family_names[4] = { "nargin", "nargout", "u", "y" };

/* Function Declarations */
static void initialize_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance);
static void disable_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance);
static void c7_update_debugger_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_st);
static void finalize_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance);
static void sf_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber);
static const mxArray *c7_sf_marshall(void *chartInstanceVoid, void *c7_u);
static const mxArray *c7_b_sf_marshall(void *chartInstanceVoid, void *c7_u);
static const mxArray *c7_c_sf_marshall(void *chartInstanceVoid, void *c7_u);
static real_T c7_emlrt_marshallIn(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_y, const char_T *c7_name);
static uint8_T c7_b_emlrt_marshallIn(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_b_is_active_c7_cx06_MA, const char_T *c7_name);
static void init_dsm_address_info(SFc7_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c7_is_active_c7_cx06_MA = 0U;
}

static void initialize_params_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c7_update_debugger_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c7_st = NULL;
  const mxArray *c7_y = NULL;
  real_T c7_hoistedGlobal;
  real_T c7_u;
  const mxArray *c7_b_y = NULL;
  uint8_T c7_b_hoistedGlobal;
  uint8_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  real_T *c7_d_y;
  c7_d_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellarray(2));
  c7_hoistedGlobal = *c7_d_y;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = chartInstance->c7_is_active_c7_cx06_MA;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 1, c7_c_y);
  sf_mex_assign(&c7_st, c7_y);
  return c7_st;
}

static void set_sim_state_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_st)
{
  const mxArray *c7_u;
  real_T *c7_y;
  c7_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c7_doneDoubleBufferReInit = TRUE;
  c7_u = sf_mex_dup(c7_st);
  *c7_y = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 0)),
    "y");
  chartInstance->c7_is_active_c7_cx06_MA = c7_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c7_u, 1)),
    "is_active_c7_cx06_MA");
  sf_mex_destroy(&c7_u);
  c7_update_debugger_state_c7_cx06_MA(chartInstance);
  sf_mex_destroy(&c7_st);
}

static void finalize_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance)
{
}

static void sf_c7_cx06_MA(SFc7_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c7_previousEvent;
  int8_T c7_hoistedGlobal;
  int8_T c7_u;
  uint32_T c7_debug_family_var_map[4];
  real_T c7_nargin = 1.0;
  real_T c7_nargout = 1.0;
  real_T c7_y;
  int8_T *c7_b_u;
  real_T *c7_b_y;
  c7_b_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_b_u = (int8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,3);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_u, 0U);
  _SFD_DATA_RANGE_CHECK(*c7_b_y, 1U);
  c7_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,3);
  c7_hoistedGlobal = *c7_b_u;
  c7_u = c7_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 4U, 4U, c7_debug_family_names,
    c7_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c7_nargin, c7_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c7_nargout, c7_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c7_u, c7_b_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c7_y, c7_sf_marshall, 3U);
  CV_EML_FCN(0, 0);

  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,5);
  if (CV_EML_IF(0, 0, (real_T)c7_u == -1.0)) {
    _SFD_EML_CALL(0,6);
    c7_y = 8.0;
  } else {
    _SFD_EML_CALL(0,7);
    if (CV_EML_IF(0, 1, (real_T)c7_u == 0.0)) {
      _SFD_EML_CALL(0,8);
      c7_y = 9.0;
    } else {
      _SFD_EML_CALL(0,9);
      if (CV_EML_IF(0, 2, (real_T)c7_u <= 6.0)) {
        _SFD_EML_CALL(0,10);
        c7_y = (real_T)c7_u;
      } else {
        _SFD_EML_CALL(0,12);
        c7_y = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0,-12);
  sf_debug_symbol_scope_pop();
  *c7_b_y = c7_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
  _sfEvent_ = c7_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber)
{
}

static const mxArray *c7_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  real_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc7_cx06_MAInstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((real_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static const mxArray *c7_b_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  int8_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc7_cx06_MAInstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((int8_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 2, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

const mxArray *sf_c7_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_ResolvedFunctionInfo c7_info[4];
  c7_ResolvedFunctionInfo (*c7_b_info)[4];
  const mxArray *c7_m0 = NULL;
  int32_T c7_i0;
  c7_ResolvedFunctionInfo *c7_r0;
  c7_nameCaptureInfo = NULL;
  c7_b_info = (c7_ResolvedFunctionInfo (*)[4])c7_info;
  (*c7_b_info)[0].context = "";
  (*c7_b_info)[0].name = "uminus";
  (*c7_b_info)[0].dominantType = "double";
  (*c7_b_info)[0].resolved = "[B]uminus";
  (*c7_b_info)[0].fileLength = 0U;
  (*c7_b_info)[0].fileTime1 = 0U;
  (*c7_b_info)[0].fileTime2 = 0U;
  (*c7_b_info)[1].context = "";
  (*c7_b_info)[1].name = "eq";
  (*c7_b_info)[1].dominantType = "int8";
  (*c7_b_info)[1].resolved = "[B]eq";
  (*c7_b_info)[1].fileLength = 0U;
  (*c7_b_info)[1].fileTime1 = 0U;
  (*c7_b_info)[1].fileTime2 = 0U;
  (*c7_b_info)[2].context = "";
  (*c7_b_info)[2].name = "le";
  (*c7_b_info)[2].dominantType = "int8";
  (*c7_b_info)[2].resolved = "[B]le";
  (*c7_b_info)[2].fileLength = 0U;
  (*c7_b_info)[2].fileTime1 = 0U;
  (*c7_b_info)[2].fileTime2 = 0U;
  (*c7_b_info)[3].context = "";
  (*c7_b_info)[3].name = "double";
  (*c7_b_info)[3].dominantType = "int8";
  (*c7_b_info)[3].resolved = "[B]double";
  (*c7_b_info)[3].fileLength = 0U;
  (*c7_b_info)[3].fileTime1 = 0U;
  (*c7_b_info)[3].fileTime2 = 0U;
  sf_mex_assign(&c7_m0, sf_mex_createstruct("nameCaptureInfo", 1, 4));
  for (c7_i0 = 0; c7_i0 < 4; c7_i0 = c7_i0 + 1) {
    c7_r0 = &c7_info[c7_i0];
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", c7_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c7_r0->context)), "context",
                    "nameCaptureInfo", c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", c7_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c7_r0->name)), "name",
                    "nameCaptureInfo", c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", c7_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c7_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", c7_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c7_r0->resolved)), "resolved"
                    , "nameCaptureInfo", c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", &c7_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", &c7_r0->fileTime1, 7,
      0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c7_i0);
    sf_mex_addfield(c7_m0, sf_mex_create("nameCaptureInfo", &c7_r0->fileTime2, 7,
      0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c7_i0);
  }

  sf_mex_assign(&c7_nameCaptureInfo, c7_m0);
  return c7_nameCaptureInfo;
}

static const mxArray *c7_c_sf_marshall(void *chartInstanceVoid, void *c7_u)
{
  const mxArray *c7_y = NULL;
  boolean_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc7_cx06_MAInstanceStruct *)chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((boolean_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

static real_T c7_emlrt_marshallIn(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_y, const char_T *c7_name)
{
  real_T c7_b_y;
  real_T c7_d0;
  sf_mex_import(c7_name, sf_mex_dup(c7_y), &c7_d0, 1, 0, 0U, 0, 0U, 0);
  c7_b_y = c7_d0;
  sf_mex_destroy(&c7_y);
  return c7_b_y;
}

static uint8_T c7_b_emlrt_marshallIn(SFc7_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c7_b_is_active_c7_cx06_MA, const
  char_T *c7_name)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  sf_mex_import(c7_name, sf_mex_dup(c7_b_is_active_c7_cx06_MA), &c7_u0, 1, 3, 0U,
                0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_b_is_active_c7_cx06_MA);
  return c7_y;
}

static void init_dsm_address_info(SFc7_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c7_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2361406757U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2991445414U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2274011244U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1757425627U);
}

mxArray *sf_c7_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1985023551U);
    pr[1] = (double)(466646854U);
    pr[2] = (double)(2493717296U);
    pr[3] = (double)(890966581U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(4));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c7_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c7_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc7_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          7,
          1,
          1,
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
          init_script_number_translation(_cx06_MAMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_cx06_MAMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_INT8,0,NULL,0,0,0,0.0,1.0,0,"u",0,
                              (MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"y",0,
                              (MexFcnForType)c7_sf_marshall);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,3,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,223);
        _SFD_CV_INIT_EML_IF(0,0,122,133,145,223);
        _SFD_CV_INIT_EML_IF(0,1,145,159,171,223);
        _SFD_CV_INIT_EML_IF(0,2,171,184,204,223);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          int8_T *c7_u;
          real_T *c7_y;
          c7_y = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c7_u = (int8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c7_u);
          _SFD_SET_DATA_VALUE_PTR(1U, c7_y);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c7_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc7_cx06_MAInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_cx06_MA(void *chartInstanceVar)
{
  enable_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_cx06_MA(void *chartInstanceVar)
{
  disable_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_cx06_MA(void *chartInstanceVar)
{
  sf_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c7_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c7_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c7_cx06_MA(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c7_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c7_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c7_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c7_cx06_MA(S, st);
}

static void sf_opaque_terminate_c7_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_cx06_MA((SFc7_cx06_MAInstanceStruct*)(((ChartInfoStruct
      *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c7_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",7,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",7,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",7,1);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",7,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1736326363U));
  ssSetChecksum1(S,(3598229976U));
  ssSetChecksum2(S,(1316669271U));
  ssSetChecksum3(S,(2747150047U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c7_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",7);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c7_cx06_MA(SimStruct *S)
{
  SFc7_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc7_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc7_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc7_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c7_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c7_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c7_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c7_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c7_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c7_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c7_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c7_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c7_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c7_cx06_MA;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  if (!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info(chartInstance);
  }

  chart_debug_initialization(S,1);
}

void c7_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c7_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
