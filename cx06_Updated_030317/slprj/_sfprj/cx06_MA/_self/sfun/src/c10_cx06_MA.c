/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c10_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c10_debug_family_names[8] = { "nargin", "nargout", "clutch",
  "start", "full", "ramp", "stop", "sw" };

/* Function Declarations */
static void initialize_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance);
static void disable_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance);
static void c10_update_debugger_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_st);
static void finalize_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance);
static void sf_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber);
static const mxArray *c10_sf_marshall(void *chartInstanceVoid, void *c10_u);
static const mxArray *c10_b_sf_marshall(void *chartInstanceVoid, void *c10_u);
static const mxArray *c10_c_sf_marshall(void *chartInstanceVoid, void *c10_u);
static real_T c10_emlrt_marshallIn(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_sw, const char_T *c10_name);
static uint8_T c10_b_emlrt_marshallIn(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_b_is_active_c10_cx06_MA, const char_T *c10_name);
static void init_dsm_address_info(SFc10_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c10_is_active_c10_cx06_MA = 0U;
}

static void initialize_params_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c10_update_debugger_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c10_st = NULL;
  const mxArray *c10_y = NULL;
  real_T c10_hoistedGlobal;
  real_T c10_u;
  const mxArray *c10_b_y = NULL;
  uint8_T c10_b_hoistedGlobal;
  uint8_T c10_b_u;
  const mxArray *c10_c_y = NULL;
  real_T *c10_sw;
  c10_sw = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c10_st = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_createcellarray(2));
  c10_hoistedGlobal = *c10_sw;
  c10_u = c10_hoistedGlobal;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 0, c10_b_y);
  c10_b_hoistedGlobal = chartInstance->c10_is_active_c10_cx06_MA;
  c10_b_u = c10_b_hoistedGlobal;
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", &c10_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c10_y, 1, c10_c_y);
  sf_mex_assign(&c10_st, c10_y);
  return c10_st;
}

static void set_sim_state_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_st)
{
  const mxArray *c10_u;
  real_T *c10_sw;
  c10_sw = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c10_doneDoubleBufferReInit = TRUE;
  c10_u = sf_mex_dup(c10_st);
  *c10_sw = c10_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c10_u,
    0)), "sw");
  chartInstance->c10_is_active_c10_cx06_MA = c10_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c10_u, 1)),
     "is_active_c10_cx06_MA");
  sf_mex_destroy(&c10_u);
  c10_update_debugger_state_c10_cx06_MA(chartInstance);
  sf_mex_destroy(&c10_st);
}

static void finalize_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance)
{
}

static void sf_c10_cx06_MA(SFc10_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c10_previousEvent;
  real32_T c10_hoistedGlobal;
  real_T c10_b_hoistedGlobal;
  real_T c10_c_hoistedGlobal;
  real_T c10_d_hoistedGlobal;
  real_T c10_e_hoistedGlobal;
  real32_T c10_clutch;
  real_T c10_start;
  real_T c10_full;
  real_T c10_ramp;
  real_T c10_stop;
  uint32_T c10_debug_family_var_map[8];
  real_T c10_nargin = 5.0;
  real_T c10_nargout = 1.0;
  real_T c10_sw;
  real32_T *c10_b_clutch;
  real_T *c10_b_sw;
  real_T *c10_b_start;
  real_T *c10_b_full;
  real_T *c10_b_ramp;
  real_T *c10_b_stop;
  c10_b_stop = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c10_b_ramp = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c10_b_full = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c10_b_start = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c10_b_sw = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c10_b_clutch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,6);
  _SFD_DATA_RANGE_CHECK((real_T)*c10_b_clutch, 0U);
  _SFD_DATA_RANGE_CHECK(*c10_b_sw, 1U);
  _SFD_DATA_RANGE_CHECK(*c10_b_start, 2U);
  _SFD_DATA_RANGE_CHECK(*c10_b_full, 3U);
  _SFD_DATA_RANGE_CHECK(*c10_b_ramp, 4U);
  _SFD_DATA_RANGE_CHECK(*c10_b_stop, 5U);
  c10_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,6);
  c10_hoistedGlobal = *c10_b_clutch;
  c10_b_hoistedGlobal = *c10_b_start;
  c10_c_hoistedGlobal = *c10_b_full;
  c10_d_hoistedGlobal = *c10_b_ramp;
  c10_e_hoistedGlobal = *c10_b_stop;
  c10_clutch = c10_hoistedGlobal;
  c10_start = c10_b_hoistedGlobal;
  c10_full = c10_c_hoistedGlobal;
  c10_ramp = c10_d_hoistedGlobal;
  c10_stop = c10_e_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c10_debug_family_names,
    c10_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c10_nargin, c10_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c10_nargout, c10_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c10_clutch, c10_b_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c10_start, c10_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c10_full, c10_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c10_ramp, c10_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c10_stop, c10_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c10_sw, c10_sf_marshall, 7U);
  CV_EML_FCN(0, 0);

  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,5);
  if (CV_EML_IF(0, 0, (real_T)c10_clutch > c10_start)) {
    _SFD_EML_CALL(0,6);
    c10_sw = 1.0;
  } else {
    _SFD_EML_CALL(0,7);
    if (CV_EML_IF(0, 1, (real_T)c10_clutch > c10_full)) {
      _SFD_EML_CALL(0,8);
      c10_sw = 2.0;
    } else {
      _SFD_EML_CALL(0,9);
      if (CV_EML_IF(0, 2, (real_T)c10_clutch > c10_ramp)) {
        _SFD_EML_CALL(0,10);
        c10_sw = 3.0;
      } else {
        _SFD_EML_CALL(0,11);
        if (CV_EML_IF(0, 3, (real_T)c10_clutch > c10_stop)) {
          _SFD_EML_CALL(0,12);
          c10_sw = 4.0;
        } else {
          _SFD_EML_CALL(0,14);
          c10_sw = 5.0;
        }
      }
    }
  }

  _SFD_EML_CALL(0,-14);
  sf_debug_symbol_scope_pop();
  *c10_b_sw = c10_sw;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
  _sfEvent_ = c10_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber)
{
}

static const mxArray *c10_sf_marshall(void *chartInstanceVoid, void *c10_u)
{
  const mxArray *c10_y = NULL;
  real_T c10_b_u;
  const mxArray *c10_b_y = NULL;
  SFc10_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc10_cx06_MAInstanceStruct *)chartInstanceVoid;
  c10_y = NULL;
  c10_b_u = *((real_T *)c10_u);
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_y, c10_b_y);
  return c10_y;
}

static const mxArray *c10_b_sf_marshall(void *chartInstanceVoid, void *c10_u)
{
  const mxArray *c10_y = NULL;
  real32_T c10_b_u;
  const mxArray *c10_b_y = NULL;
  SFc10_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc10_cx06_MAInstanceStruct *)chartInstanceVoid;
  c10_y = NULL;
  c10_b_u = *((real32_T *)c10_u);
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_b_u, 1, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_y, c10_b_y);
  return c10_y;
}

const mxArray *sf_c10_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_ResolvedFunctionInfo c10_info[1];
  c10_ResolvedFunctionInfo (*c10_b_info)[1];
  const mxArray *c10_m0 = NULL;
  int32_T c10_i0;
  c10_ResolvedFunctionInfo *c10_r0;
  c10_nameCaptureInfo = NULL;
  c10_b_info = (c10_ResolvedFunctionInfo (*)[1])c10_info;
  (*c10_b_info)[0].context = "";
  (*c10_b_info)[0].name = "gt";
  (*c10_b_info)[0].dominantType = "single";
  (*c10_b_info)[0].resolved = "[B]gt";
  (*c10_b_info)[0].fileLength = 0U;
  (*c10_b_info)[0].fileTime1 = 0U;
  (*c10_b_info)[0].fileTime2 = 0U;
  sf_mex_assign(&c10_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1));
  for (c10_i0 = 0; c10_i0 < 1; c10_i0 = c10_i0 + 1) {
    c10_r0 = &c10_info[c10_i0];
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", c10_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c10_r0->context)), "context"
                    , "nameCaptureInfo", c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", c10_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c10_r0->name)), "name",
                    "nameCaptureInfo", c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo",
      c10_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c10_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", c10_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c10_r0->resolved)),
                    "resolved", "nameCaptureInfo", c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", &c10_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", &c10_r0->fileTime1,
      7, 0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo",
                    c10_i0);
    sf_mex_addfield(c10_m0, sf_mex_create("nameCaptureInfo", &c10_r0->fileTime2,
      7, 0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo",
                    c10_i0);
  }

  sf_mex_assign(&c10_nameCaptureInfo, c10_m0);
  return c10_nameCaptureInfo;
}

static const mxArray *c10_c_sf_marshall(void *chartInstanceVoid, void *c10_u)
{
  const mxArray *c10_y = NULL;
  boolean_T c10_b_u;
  const mxArray *c10_b_y = NULL;
  SFc10_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc10_cx06_MAInstanceStruct *)chartInstanceVoid;
  c10_y = NULL;
  c10_b_u = *((boolean_T *)c10_u);
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c10_y, c10_b_y);
  return c10_y;
}

static real_T c10_emlrt_marshallIn(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_sw, const char_T *c10_name)
{
  real_T c10_y;
  real_T c10_d0;
  sf_mex_import(c10_name, sf_mex_dup(c10_sw), &c10_d0, 1, 0, 0U, 0, 0U, 0);
  c10_y = c10_d0;
  sf_mex_destroy(&c10_sw);
  return c10_y;
}

static uint8_T c10_b_emlrt_marshallIn(SFc10_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c10_b_is_active_c10_cx06_MA, const
  char_T *c10_name)
{
  uint8_T c10_y;
  uint8_T c10_u0;
  sf_mex_import(c10_name, sf_mex_dup(c10_b_is_active_c10_cx06_MA), &c10_u0, 1, 3,
                0U, 0, 0U, 0);
  c10_y = c10_u0;
  sf_mex_destroy(&c10_b_is_active_c10_cx06_MA);
  return c10_y;
}

static void init_dsm_address_info(SFc10_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c10_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2825580330U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3554187172U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3978352465U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2979373192U);
}

mxArray *sf_c10_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1246354181U);
    pr[1] = (double)(3934283458U);
    pr[2] = (double)(1595642511U);
    pr[3] = (double)(211985685U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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

static mxArray *sf_get_sim_state_info_c10_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"sw\",},{M[8],M[0],T\"is_active_c10_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc10_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc10_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          10,
          1,
          1,
          6,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,"clutch",
                              0,(MexFcnForType)c10_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"sw",0,
                              (MexFcnForType)c10_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"start",0,
                              (MexFcnForType)c10_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"full",0,
                              (MexFcnForType)c10_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ramp",0,
                              (MexFcnForType)c10_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"stop",0,
                              (MexFcnForType)c10_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,4,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,307);
        _SFD_CV_INIT_EML_IF(0,0,153,171,184,306);
        _SFD_CV_INIT_EML_IF(0,1,184,205,218,306);
        _SFD_CV_INIT_EML_IF(0,2,218,239,252,306);
        _SFD_CV_INIT_EML_IF(0,3,252,273,286,306);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real32_T *c10_clutch;
          real_T *c10_sw;
          real_T *c10_start;
          real_T *c10_full;
          real_T *c10_ramp;
          real_T *c10_stop;
          c10_stop = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c10_ramp = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c10_full = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c10_start = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c10_sw = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c10_clutch = (real32_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c10_clutch);
          _SFD_SET_DATA_VALUE_PTR(1U, c10_sw);
          _SFD_SET_DATA_VALUE_PTR(2U, c10_start);
          _SFD_SET_DATA_VALUE_PTR(3U, c10_full);
          _SFD_SET_DATA_VALUE_PTR(4U, c10_ramp);
          _SFD_SET_DATA_VALUE_PTR(5U, c10_stop);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c10_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc10_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c10_cx06_MA(void *chartInstanceVar)
{
  enable_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_cx06_MA(void *chartInstanceVar)
{
  disable_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c10_cx06_MA(void *chartInstanceVar)
{
  sf_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c10_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c10_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c10_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c10_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c10_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c10_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c10_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c10_cx06_MA(S, st);
}

static void sf_opaque_terminate_c10_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_cx06_MA((SFc10_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c10_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",10);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",10,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",10,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",10,5);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",10,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",10);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1832860516U));
  ssSetChecksum1(S,(1281560442U));
  ssSetChecksum2(S,(3033678477U));
  ssSetChecksum3(S,(623887351U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c10_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",10);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c10_cx06_MA(SimStruct *S)
{
  SFc10_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc10_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc10_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc10_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c10_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c10_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c10_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c10_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c10_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c10_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c10_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c10_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c10_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c10_cx06_MA;
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

void c10_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c10_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
