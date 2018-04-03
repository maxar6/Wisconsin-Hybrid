/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c6_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c6_debug_family_names[8] = { "nargin", "nargout",
  "sport_mode", "neutral", "reverse", "braking", "clutching", "state" };

/* Function Declarations */
static void initialize_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance);
static void disable_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_st);
static void finalize_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance);
static void sf_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber);
static const mxArray *c6_sf_marshall(void *chartInstanceVoid, void *c6_u);
static const mxArray *c6_b_sf_marshall(void *chartInstanceVoid, void *c6_u);
static real_T c6_emlrt_marshallIn(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_state, const char_T *c6_name);
static uint8_T c6_b_emlrt_marshallIn(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_cx06_MA, const char_T *c6_name);
static void init_dsm_address_info(SFc6_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c6_is_active_c6_cx06_MA = 0U;
}

static void initialize_params_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c6_update_debugger_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c6_st = NULL;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  real_T c6_u;
  const mxArray *c6_b_y = NULL;
  uint8_T c6_b_hoistedGlobal;
  uint8_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  real_T *c6_state;
  c6_state = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellarray(2));
  c6_hoistedGlobal = *c6_state;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = chartInstance->c6_is_active_c6_cx06_MA;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c6_y, 1, c6_c_y);
  sf_mex_assign(&c6_st, c6_y);
  return c6_st;
}

static void set_sim_state_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_st)
{
  const mxArray *c6_u;
  real_T *c6_state;
  c6_state = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c6_doneDoubleBufferReInit = TRUE;
  c6_u = sf_mex_dup(c6_st);
  *c6_state = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u,
    0)), "state");
  chartInstance->c6_is_active_c6_cx06_MA = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 1)),
    "is_active_c6_cx06_MA");
  sf_mex_destroy(&c6_u);
  c6_update_debugger_state_c6_cx06_MA(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void finalize_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance)
{
}

static void sf_c6_cx06_MA(SFc6_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c6_previousEvent;
  boolean_T c6_hoistedGlobal;
  boolean_T c6_b_hoistedGlobal;
  boolean_T c6_c_hoistedGlobal;
  boolean_T c6_d_hoistedGlobal;
  boolean_T c6_e_hoistedGlobal;
  boolean_T c6_sport_mode;
  boolean_T c6_neutral;
  boolean_T c6_reverse;
  boolean_T c6_braking;
  boolean_T c6_clutching;
  uint32_T c6_debug_family_var_map[8];
  real_T c6_nargin = 5.0;
  real_T c6_nargout = 1.0;
  real_T c6_state;
  boolean_T *c6_b_sport_mode;
  boolean_T *c6_b_neutral;
  real_T *c6_b_state;
  boolean_T *c6_b_reverse;
  boolean_T *c6_b_braking;
  boolean_T *c6_b_clutching;
  c6_b_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c6_b_braking = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c6_b_reverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c6_b_state = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_b_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c6_b_sport_mode = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,2);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_b_sport_mode, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_b_neutral, 1U);
  _SFD_DATA_RANGE_CHECK(*c6_b_state, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_b_reverse, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_b_braking, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c6_b_clutching, 5U);
  c6_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,2);
  c6_hoistedGlobal = *c6_b_sport_mode;
  c6_b_hoistedGlobal = *c6_b_neutral;
  c6_c_hoistedGlobal = *c6_b_reverse;
  c6_d_hoistedGlobal = *c6_b_braking;
  c6_e_hoistedGlobal = *c6_b_clutching;
  c6_sport_mode = c6_hoistedGlobal;
  c6_neutral = c6_b_hoistedGlobal;
  c6_reverse = c6_c_hoistedGlobal;
  c6_braking = c6_d_hoistedGlobal;
  c6_clutching = c6_e_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c6_debug_family_names,
    c6_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c6_nargin, c6_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c6_nargout, c6_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c6_sport_mode, c6_b_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c6_neutral, c6_b_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c6_reverse, c6_b_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c6_braking, c6_b_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c6_clutching, c6_b_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c6_state, c6_sf_marshall, 7U);
  CV_EML_FCN(0, 0);

  /*  This block supports an embeddable subset of the MATLAB language. */
  /*  See the help menu for details.  */
  /* reverse assist possible implementation */
  /* if(braking == 1) */
  /*     state = 2;%regen */
  /* elseif((neutral == 1) && (clutching == 0)) */
  /*     state = 4;%ZEV */
  /* elseif((clutching == 1) && (sport_mode == 0)) */
  /*     state = 1;%diesel */
  /* else */
  /*     state = 3;%HEV */
  /* end */
  /* note: don't care about reverse (reverse is effectively any other gear) */
  /* sport mode (5/22/2007) */
  _SFD_EML_CALL(0,23);
  if (CV_EML_IF(0, 0, (real_T)c6_braking == 1.0)) {
    _SFD_EML_CALL(0,24);
    c6_state = 2.0;

    /* regen */
  } else {
    _SFD_EML_CALL(0,25);
    if (CV_EML_IF(0, 1, (real_T)c6_reverse == 1.0)) {
      _SFD_EML_CALL(0,26);
      c6_state = 1.0;

      /* diesel */
    } else {
      _SFD_EML_CALL(0,27);
      if (CV_EML_COND(0, 0, (real_T)c6_neutral == 1.0)) {
        if (CV_EML_COND(0, 1, (real_T)c6_clutching == 0.0)) {
          CV_EML_MCDC(0, 0, TRUE);
          CV_EML_IF(0, 2, TRUE);
          _SFD_EML_CALL(0,28);
          c6_state = 4.0;

          /* ZEV */
          goto label_1;
        }
      }

      CV_EML_MCDC(0, 0, FALSE);
      CV_EML_IF(0, 2, FALSE);
      _SFD_EML_CALL(0,29);
      if (CV_EML_COND(0, 2, (real_T)c6_clutching == 1.0)) {
        if (CV_EML_COND(0, 3, (real_T)c6_sport_mode == 0.0)) {
          CV_EML_MCDC(0, 1, TRUE);
          CV_EML_IF(0, 3, TRUE);
          _SFD_EML_CALL(0,30);
          c6_state = 1.0;

          /* diesel */
          goto label_2;
        }
      }

      CV_EML_MCDC(0, 1, FALSE);
      CV_EML_IF(0, 3, FALSE);
      _SFD_EML_CALL(0,32);
      c6_state = 3.0;

      /* HEV */
     label_2:
      ;
     label_1:
      ;
    }
  }

  _SFD_EML_CALL(0,-32);
  sf_debug_symbol_scope_pop();
  *c6_b_state = c6_state;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
  _sfEvent_ = c6_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber)
{
}

static const mxArray *c6_sf_marshall(void *chartInstanceVoid, void *c6_u)
{
  const mxArray *c6_y = NULL;
  real_T c6_b_u;
  const mxArray *c6_b_y = NULL;
  SFc6_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc6_cx06_MAInstanceStruct *)chartInstanceVoid;
  c6_y = NULL;
  c6_b_u = *((real_T *)c6_u);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_y, c6_b_y);
  return c6_y;
}

static const mxArray *c6_b_sf_marshall(void *chartInstanceVoid, void *c6_u)
{
  const mxArray *c6_y = NULL;
  boolean_T c6_b_u;
  const mxArray *c6_b_y = NULL;
  SFc6_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc6_cx06_MAInstanceStruct *)chartInstanceVoid;
  c6_y = NULL;
  c6_b_u = *((boolean_T *)c6_u);
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c6_y, c6_b_y);
  return c6_y;
}

const mxArray *sf_c6_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_ResolvedFunctionInfo c6_info[1];
  c6_ResolvedFunctionInfo (*c6_b_info)[1];
  const mxArray *c6_m0 = NULL;
  int32_T c6_i0;
  c6_ResolvedFunctionInfo *c6_r0;
  c6_nameCaptureInfo = NULL;
  c6_b_info = (c6_ResolvedFunctionInfo (*)[1])c6_info;
  (*c6_b_info)[0].context = "";
  (*c6_b_info)[0].name = "eq";
  (*c6_b_info)[0].dominantType = "double";
  (*c6_b_info)[0].resolved = "[B]eq";
  (*c6_b_info)[0].fileLength = 0U;
  (*c6_b_info)[0].fileTime1 = 0U;
  (*c6_b_info)[0].fileTime2 = 0U;
  sf_mex_assign(&c6_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1));
  for (c6_i0 = 0; c6_i0 < 1; c6_i0 = c6_i0 + 1) {
    c6_r0 = &c6_info[c6_i0];
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c6_r0->context)), "context",
                    "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c6_r0->name)), "name",
                    "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c6_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", c6_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c6_r0->resolved)), "resolved"
                    , "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->fileTime1, 7,
      0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c6_i0);
    sf_mex_addfield(c6_m0, sf_mex_create("nameCaptureInfo", &c6_r0->fileTime2, 7,
      0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c6_i0);
  }

  sf_mex_assign(&c6_nameCaptureInfo, c6_m0);
  return c6_nameCaptureInfo;
}

static real_T c6_emlrt_marshallIn(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_state, const char_T *c6_name)
{
  real_T c6_y;
  real_T c6_d0;
  sf_mex_import(c6_name, sf_mex_dup(c6_state), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_state);
  return c6_y;
}

static uint8_T c6_b_emlrt_marshallIn(SFc6_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c6_b_is_active_c6_cx06_MA, const
  char_T *c6_name)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  sf_mex_import(c6_name, sf_mex_dup(c6_b_is_active_c6_cx06_MA), &c6_u0, 1, 3, 0U,
                0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_b_is_active_c6_cx06_MA);
  return c6_y;
}

static void init_dsm_address_info(SFc6_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c6_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3441694594U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3310434466U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3066520081U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2612304195U);
}

mxArray *sf_c6_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2148845168U);
    pr[1] = (double)(1887576123U);
    pr[2] = (double)(1558719184U);
    pr[3] = (double)(2767916078U);
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

static mxArray *sf_get_sim_state_info_c6_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[6],T\"state\",},{M[8],M[0],T\"is_active_c6_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc6_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          6,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "sport_mode",0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"neutral",
                              0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c6_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"reverse",
                              0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"braking",
                              0,(MexFcnForType)c6_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "clutching",0,(MexFcnForType)c6_b_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,4,0,0,0,0,4,2);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,759);
        _SFD_CV_INIT_EML_IF(0,0,520,536,558,759);
        _SFD_CV_INIT_EML_IF(0,1,558,579,602,759);
        _SFD_CV_INIT_EML_IF(0,2,602,644,664,759);
        _SFD_CV_INIT_EML_IF(0,3,664,709,732,759);

        {
          static int condStart[] = { 610, 628 };

          static int condEnd[] = { 622, 642 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,609,643,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 672, 692 };

          static int condEnd[] = { 686, 707 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,671,708,2,2,&(condStart[0]),&(condEnd[0]),3,
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
          boolean_T *c6_sport_mode;
          boolean_T *c6_neutral;
          real_T *c6_state;
          boolean_T *c6_reverse;
          boolean_T *c6_braking;
          boolean_T *c6_clutching;
          c6_clutching = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c6_braking = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c6_reverse = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c6_state = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c6_neutral = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c6_sport_mode = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c6_sport_mode);
          _SFD_SET_DATA_VALUE_PTR(1U, c6_neutral);
          _SFD_SET_DATA_VALUE_PTR(2U, c6_state);
          _SFD_SET_DATA_VALUE_PTR(3U, c6_reverse);
          _SFD_SET_DATA_VALUE_PTR(4U, c6_braking);
          _SFD_SET_DATA_VALUE_PTR(5U, c6_clutching);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c6_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_cx06_MAInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_cx06_MA(void *chartInstanceVar)
{
  enable_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_cx06_MA(void *chartInstanceVar)
{
  disable_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_cx06_MA(void *chartInstanceVar)
{
  sf_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c6_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c6_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c6_cx06_MA(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c6_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c6_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c6_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c6_cx06_MA(S, st);
}

static void sf_opaque_terminate_c6_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_cx06_MA((SFc6_cx06_MAInstanceStruct*)(((ChartInfoStruct
      *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",6,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",6,5);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",6,1);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3958214835U));
  ssSetChecksum1(S,(1163342669U));
  ssSetChecksum2(S,(2037561178U));
  ssSetChecksum3(S,(1880052729U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c6_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",6);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c6_cx06_MA(SimStruct *S)
{
  SFc6_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc6_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc6_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c6_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c6_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c6_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_cx06_MA;
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

void c6_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_cx06_MA_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
