/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c12_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c12_debug_family_names[8] = { "nargin", "nargout", "state",
  "nDiesel", "nHEV", "nZEV", "nRegen", "nState" };

/* Function Declarations */
static void initialize_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance);
static void disable_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance);
static void c12_update_debugger_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_st);
static void finalize_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance);
static void sf_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber);
static const mxArray *c12_sf_marshall(void *chartInstanceVoid, void *c12_u);
static const mxArray *c12_b_sf_marshall(void *chartInstanceVoid, void *c12_u);
static real_T c12_emlrt_marshallIn(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_nState, const char_T *c12_name);
static uint8_T c12_b_emlrt_marshallIn(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_b_is_active_c12_cx06_MA, const char_T *c12_name);
static void init_dsm_address_info(SFc12_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c12_is_active_c12_cx06_MA = 0U;
}

static void initialize_params_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c12_update_debugger_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c12_st = NULL;
  const mxArray *c12_y = NULL;
  real_T c12_hoistedGlobal;
  real_T c12_u;
  const mxArray *c12_b_y = NULL;
  uint8_T c12_b_hoistedGlobal;
  uint8_T c12_b_u;
  const mxArray *c12_c_y = NULL;
  real_T *c12_nState;
  c12_nState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_st = NULL;
  c12_y = NULL;
  sf_mex_assign(&c12_y, sf_mex_createcellarray(2));
  c12_hoistedGlobal = *c12_nState;
  c12_u = c12_hoistedGlobal;
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 0, c12_b_y);
  c12_b_hoistedGlobal = chartInstance->c12_is_active_c12_cx06_MA;
  c12_b_u = c12_b_hoistedGlobal;
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", &c12_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c12_y, 1, c12_c_y);
  sf_mex_assign(&c12_st, c12_y);
  return c12_st;
}

static void set_sim_state_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_st)
{
  const mxArray *c12_u;
  real_T *c12_nState;
  c12_nState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c12_doneDoubleBufferReInit = TRUE;
  c12_u = sf_mex_dup(c12_st);
  *c12_nState = c12_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c12_u, 0)), "nState");
  chartInstance->c12_is_active_c12_cx06_MA = c12_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1)),
     "is_active_c12_cx06_MA");
  sf_mex_destroy(&c12_u);
  c12_update_debugger_state_c12_cx06_MA(chartInstance);
  sf_mex_destroy(&c12_st);
}

static void finalize_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance)
{
}

static void sf_c12_cx06_MA(SFc12_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c12_previousEvent;
  real_T c12_hoistedGlobal;
  boolean_T c12_b_hoistedGlobal;
  boolean_T c12_c_hoistedGlobal;
  boolean_T c12_d_hoistedGlobal;
  boolean_T c12_e_hoistedGlobal;
  real_T c12_state;
  boolean_T c12_nDiesel;
  boolean_T c12_nHEV;
  boolean_T c12_nZEV;
  boolean_T c12_nRegen;
  uint32_T c12_debug_family_var_map[8];
  real_T c12_nargin = 5.0;
  real_T c12_nargout = 1.0;
  real_T c12_nState;
  real_T *c12_b_state;
  real_T *c12_b_nState;
  boolean_T *c12_b_nDiesel;
  boolean_T *c12_b_nHEV;
  boolean_T *c12_b_nZEV;
  boolean_T *c12_b_nRegen;
  c12_b_nRegen = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c12_b_nZEV = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c12_b_nHEV = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c12_b_nDiesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c12_b_nState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c12_b_state = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,8);
  _SFD_DATA_RANGE_CHECK(*c12_b_state, 0U);
  _SFD_DATA_RANGE_CHECK(*c12_b_nState, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_nDiesel, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_nHEV, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_nZEV, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c12_b_nRegen, 5U);
  c12_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,8);
  c12_hoistedGlobal = *c12_b_state;
  c12_b_hoistedGlobal = *c12_b_nDiesel;
  c12_c_hoistedGlobal = *c12_b_nHEV;
  c12_d_hoistedGlobal = *c12_b_nZEV;
  c12_e_hoistedGlobal = *c12_b_nRegen;
  c12_state = c12_hoistedGlobal;
  c12_nDiesel = c12_b_hoistedGlobal;
  c12_nHEV = c12_c_hoistedGlobal;
  c12_nZEV = c12_d_hoistedGlobal;
  c12_nRegen = c12_e_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c12_debug_family_names,
    c12_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c12_nargin, c12_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c12_nargout, c12_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c12_state, c12_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c12_nDiesel, c12_b_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c12_nHEV, c12_b_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c12_nZEV, c12_b_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c12_nRegen, c12_b_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c12_nState, c12_sf_marshall, 7U);
  CV_EML_FCN(0, 0);

  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,5);
  c12_nState = c12_state;
  _SFD_EML_CALL(0,6);
  if (CV_EML_COND(0, 0, c12_state == 2.0)) {
    if (CV_EML_COND(0, 1, (real_T)c12_nRegen == 1.0)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0,7);
      c12_nState = 1.0;
      goto label_1;
    }
  }

  CV_EML_MCDC(0, 0, FALSE);
  CV_EML_IF(0, 0, FALSE);
 label_1:
  ;
  _SFD_EML_CALL(0,9);
  if (CV_EML_COND(0, 2, c12_state == 3.0)) {
    if (CV_EML_COND(0, 3, (real_T)c12_nHEV == 1.0)) {
      CV_EML_MCDC(0, 1, TRUE);
      CV_EML_IF(0, 1, TRUE);
      _SFD_EML_CALL(0,10);
      c12_nState = 1.0;
      goto label_2;
    }
  }

  CV_EML_MCDC(0, 1, FALSE);
  CV_EML_IF(0, 1, FALSE);
 label_2:
  ;
  _SFD_EML_CALL(0,12);
  if (CV_EML_COND(0, 4, c12_state == 4.0)) {
    if (CV_EML_COND(0, 5, (real_T)c12_nZEV == 1.0)) {
      CV_EML_MCDC(0, 2, TRUE);
      CV_EML_IF(0, 2, TRUE);
      _SFD_EML_CALL(0,13);
      c12_nState = 1.0;
      goto label_3;
    }
  }

  CV_EML_MCDC(0, 2, FALSE);
  CV_EML_IF(0, 2, FALSE);
 label_3:
  ;
  _SFD_EML_CALL(0,15);
  if (CV_EML_COND(0, 6, c12_state == 1.0)) {
    if (CV_EML_COND(0, 7, (real_T)c12_nDiesel == 1.0)) {
      CV_EML_MCDC(0, 3, TRUE);
      CV_EML_IF(0, 3, TRUE);
      _SFD_EML_CALL(0,16);
      c12_nState = 0.0;
      goto label_4;
    }
  }

  CV_EML_MCDC(0, 3, FALSE);
  CV_EML_IF(0, 3, FALSE);
 label_4:
  ;
  _SFD_EML_CALL(0,-16);
  sf_debug_symbol_scope_pop();
  *c12_b_nState = c12_nState;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
  _sfEvent_ = c12_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c12_machineNumber, uint32_T
  c12_chartNumber)
{
}

static const mxArray *c12_sf_marshall(void *chartInstanceVoid, void *c12_u)
{
  const mxArray *c12_y = NULL;
  real_T c12_b_u;
  const mxArray *c12_b_y = NULL;
  SFc12_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc12_cx06_MAInstanceStruct *)chartInstanceVoid;
  c12_y = NULL;
  c12_b_u = *((real_T *)c12_u);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_y, c12_b_y);
  return c12_y;
}

static const mxArray *c12_b_sf_marshall(void *chartInstanceVoid, void *c12_u)
{
  const mxArray *c12_y = NULL;
  boolean_T c12_b_u;
  const mxArray *c12_b_y = NULL;
  SFc12_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc12_cx06_MAInstanceStruct *)chartInstanceVoid;
  c12_y = NULL;
  c12_b_u = *((boolean_T *)c12_u);
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_create("y", &c12_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c12_y, c12_b_y);
  return c12_y;
}

const mxArray *sf_c12_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c12_nameCaptureInfo = NULL;
  c12_ResolvedFunctionInfo c12_info[1];
  c12_ResolvedFunctionInfo (*c12_b_info)[1];
  const mxArray *c12_m0 = NULL;
  int32_T c12_i0;
  c12_ResolvedFunctionInfo *c12_r0;
  c12_nameCaptureInfo = NULL;
  c12_b_info = (c12_ResolvedFunctionInfo (*)[1])c12_info;
  (*c12_b_info)[0].context = "";
  (*c12_b_info)[0].name = "eq";
  (*c12_b_info)[0].dominantType = "double";
  (*c12_b_info)[0].resolved = "[B]eq";
  (*c12_b_info)[0].fileLength = 0U;
  (*c12_b_info)[0].fileTime1 = 0U;
  (*c12_b_info)[0].fileTime2 = 0U;
  sf_mex_assign(&c12_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1));
  for (c12_i0 = 0; c12_i0 < 1; c12_i0 = c12_i0 + 1) {
    c12_r0 = &c12_info[c12_i0];
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", c12_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c12_r0->context)), "context"
                    , "nameCaptureInfo", c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", c12_r0->name, 15,
      0U, 0U, 0U, 2, 1, strlen(c12_r0->name)), "name",
                    "nameCaptureInfo", c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo",
      c12_r0->dominantType, 15, 0U, 0U, 0U, 2, 1, strlen(c12_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", c12_r0->resolved,
      15, 0U, 0U, 0U, 2, 1, strlen(c12_r0->resolved)),
                    "resolved", "nameCaptureInfo", c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", &c12_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", &c12_r0->fileTime1,
      7, 0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo",
                    c12_i0);
    sf_mex_addfield(c12_m0, sf_mex_create("nameCaptureInfo", &c12_r0->fileTime2,
      7, 0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo",
                    c12_i0);
  }

  sf_mex_assign(&c12_nameCaptureInfo, c12_m0);
  return c12_nameCaptureInfo;
}

static real_T c12_emlrt_marshallIn(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_nState, const char_T *c12_name)
{
  real_T c12_y;
  real_T c12_d0;
  sf_mex_import(c12_name, sf_mex_dup(c12_nState), &c12_d0, 1, 0, 0U, 0, 0U, 0);
  c12_y = c12_d0;
  sf_mex_destroy(&c12_nState);
  return c12_y;
}

static uint8_T c12_b_emlrt_marshallIn(SFc12_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c12_b_is_active_c12_cx06_MA, const
  char_T *c12_name)
{
  uint8_T c12_y;
  uint8_T c12_u0;
  sf_mex_import(c12_name, sf_mex_dup(c12_b_is_active_c12_cx06_MA), &c12_u0, 1, 3,
                0U, 0, 0U, 0);
  c12_y = c12_u0;
  sf_mex_destroy(&c12_b_is_active_c12_cx06_MA);
  return c12_y;
}

static void init_dsm_address_info(SFc12_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c12_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(152476521U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3967184073U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2504219835U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2921945143U);
}

mxArray *sf_c12_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1195874318U);
    pr[1] = (double)(1424861680U);
    pr[2] = (double)(2037277709U);
    pr[3] = (double)(522289697U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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

static mxArray *sf_get_sim_state_info_c12_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"nState\",},{M[8],M[0],T\"is_active_c12_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc12_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc12_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          12,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c12_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"nState",
                              0,(MexFcnForType)c12_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"nDiesel",
                              0,(MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"nHEV",0,
                              (MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"nZEV",0,
                              (MexFcnForType)c12_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"nRegen",0,
                              (MexFcnForType)c12_b_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,4,0,0,0,0,8,4);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,385);
        _SFD_CV_INIT_EML_IF(0,0,173,206,-1,226);
        _SFD_CV_INIT_EML_IF(0,1,227,258,-1,278);
        _SFD_CV_INIT_EML_IF(0,2,279,310,-1,330);
        _SFD_CV_INIT_EML_IF(0,3,331,365,-1,385);

        {
          static int condStart[] = { 177, 193 };

          static int condEnd[] = { 187, 204 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,176,205,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 231, 247 };

          static int condEnd[] = { 241, 256 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,230,257,2,2,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 283, 299 };

          static int condEnd[] = { 293, 308 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,2,282,309,2,4,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 335, 351 };

          static int condEnd[] = { 345, 363 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,3,334,364,2,6,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c12_state;
          real_T *c12_nState;
          boolean_T *c12_nDiesel;
          boolean_T *c12_nHEV;
          boolean_T *c12_nZEV;
          boolean_T *c12_nRegen;
          c12_nRegen = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c12_nZEV = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c12_nHEV = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c12_nDiesel = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c12_nState = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c12_state = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c12_state);
          _SFD_SET_DATA_VALUE_PTR(1U, c12_nState);
          _SFD_SET_DATA_VALUE_PTR(2U, c12_nDiesel);
          _SFD_SET_DATA_VALUE_PTR(3U, c12_nHEV);
          _SFD_SET_DATA_VALUE_PTR(4U, c12_nZEV);
          _SFD_SET_DATA_VALUE_PTR(5U, c12_nRegen);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c12_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc12_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c12_cx06_MA(void *chartInstanceVar)
{
  enable_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c12_cx06_MA(void *chartInstanceVar)
{
  disable_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c12_cx06_MA(void *chartInstanceVar)
{
  sf_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c12_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c12_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c12_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c12_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c12_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c12_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c12_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c12_cx06_MA(S, st);
}

static void sf_opaque_terminate_c12_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_cx06_MA((SFc12_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c12_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",12);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",12,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",12,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",12,5);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",12,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",12);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(68116024U));
  ssSetChecksum1(S,(2631735864U));
  ssSetChecksum2(S,(816491342U));
  ssSetChecksum3(S,(2245112864U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c12_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",12);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c12_cx06_MA(SimStruct *S)
{
  SFc12_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc12_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc12_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc12_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c12_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c12_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c12_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c12_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c12_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c12_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c12_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c12_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c12_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c12_cx06_MA;
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

void c12_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c12_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
