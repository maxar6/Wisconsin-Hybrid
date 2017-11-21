/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c7_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c7_debug_family_names[11] = { "nargin", "nargout", "OffToOn",
  "OnToTrans", "TransToOn", "TransToOff", "State", "ETCMode", "Reset", "Hold",
  "StateO" };

/* Function Declarations */
static void initialize_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void c7_update_debugger_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c7_st);
static void finalize_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c7_machineNumber, uint32_T
  c7_chartNumber);
static const mxArray *c7_sf_marshall(void *chartInstanceVoid, void *c7_u);
static const mxArray *c7_b_sf_marshall(void *chartInstanceVoid, void *c7_u);
static real_T c7_emlrt_marshallIn(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c7_ETCMode, const char_T *c7_name);
static uint8_T c7_b_emlrt_marshallIn(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_BaseEngineController_A02,
  const char_T *c7_name);
static void init_dsm_address_info(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c7_is_active_c7_BaseEngineController_A02 = 0U;
}

static void initialize_params_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c7_update_debugger_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c7_st = NULL;
  const mxArray *c7_y = NULL;
  real_T c7_hoistedGlobal;
  real_T c7_u;
  const mxArray *c7_b_y = NULL;
  real_T c7_b_hoistedGlobal;
  real_T c7_b_u;
  const mxArray *c7_c_y = NULL;
  real_T c7_c_hoistedGlobal;
  real_T c7_c_u;
  const mxArray *c7_d_y = NULL;
  real_T c7_d_hoistedGlobal;
  real_T c7_d_u;
  const mxArray *c7_e_y = NULL;
  uint8_T c7_e_hoistedGlobal;
  uint8_T c7_e_u;
  const mxArray *c7_f_y = NULL;
  real_T *c7_ETCMode;
  real_T *c7_Hold;
  real_T *c7_Reset;
  real_T *c7_StateO;
  c7_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c7_Hold = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c7_Reset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c7_ETCMode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellarray(5));
  c7_hoistedGlobal = *c7_ETCMode;
  c7_u = c7_hoistedGlobal;
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_b_hoistedGlobal = *c7_Hold;
  c7_b_u = c7_b_hoistedGlobal;
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", &c7_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 1, c7_c_y);
  c7_c_hoistedGlobal = *c7_Reset;
  c7_c_u = c7_c_hoistedGlobal;
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y", &c7_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 2, c7_d_y);
  c7_d_hoistedGlobal = *c7_StateO;
  c7_d_u = c7_d_hoistedGlobal;
  c7_e_y = NULL;
  sf_mex_assign(&c7_e_y, sf_mex_create("y", &c7_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 3, c7_e_y);
  c7_e_hoistedGlobal = chartInstance->c7_is_active_c7_BaseEngineController_A02;
  c7_e_u = c7_e_hoistedGlobal;
  c7_f_y = NULL;
  sf_mex_assign(&c7_f_y, sf_mex_create("y", &c7_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c7_y, 4, c7_f_y);
  sf_mex_assign(&c7_st, c7_y);
  return c7_st;
}

static void set_sim_state_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray *
   c7_st)
{
  const mxArray *c7_u;
  real_T *c7_ETCMode;
  real_T *c7_Hold;
  real_T *c7_Reset;
  real_T *c7_StateO;
  c7_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c7_Hold = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c7_Reset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c7_ETCMode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c7_doneDoubleBufferReInit = TRUE;
  c7_u = sf_mex_dup(c7_st);
  *c7_ETCMode = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c7_u, 0)), "ETCMode");
  *c7_Hold = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u,
    1)), "Hold");
  *c7_Reset = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u,
    2)), "Reset");
  *c7_StateO = c7_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u,
    3)), "StateO");
  chartInstance->c7_is_active_c7_BaseEngineController_A02 =
    c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 4)),
    "is_active_c7_BaseEngineController_A02");
  sf_mex_destroy(&c7_u);
  c7_update_debugger_state_c7_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c7_st);
}

static void finalize_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void sf_c7_BaseEngineController_A02
  (SFc7_BaseEngineController_A02InstanceStruct *chartInstance)
{
  int32_T c7_previousEvent;
  boolean_T c7_hoistedGlobal;
  boolean_T c7_b_hoistedGlobal;
  boolean_T c7_c_hoistedGlobal;
  boolean_T c7_d_hoistedGlobal;
  real_T c7_e_hoistedGlobal;
  boolean_T c7_OffToOn;
  boolean_T c7_OnToTrans;
  boolean_T c7_TransToOn;
  boolean_T c7_TransToOff;
  real_T c7_State;
  uint32_T c7_debug_family_var_map[11];
  real_T c7_nargin = 5.0;
  real_T c7_nargout = 4.0;
  real_T c7_ETCMode;
  real_T c7_Reset;
  real_T c7_Hold;
  real_T c7_StateO;
  boolean_T *c7_b_OffToOn;
  real_T *c7_b_ETCMode;
  boolean_T *c7_b_OnToTrans;
  boolean_T *c7_b_TransToOn;
  boolean_T *c7_b_TransToOff;
  real_T *c7_b_State;
  real_T *c7_b_Reset;
  real_T *c7_b_Hold;
  real_T *c7_b_StateO;
  c7_b_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c7_b_Hold = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c7_b_Reset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c7_b_State = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c7_b_TransToOff = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c7_b_TransToOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c7_b_OnToTrans = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c7_b_ETCMode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c7_b_OffToOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,6);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_OffToOn, 0U);
  _SFD_DATA_RANGE_CHECK(*c7_b_ETCMode, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_OnToTrans, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_TransToOn, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c7_b_TransToOff, 4U);
  _SFD_DATA_RANGE_CHECK(*c7_b_State, 5U);
  _SFD_DATA_RANGE_CHECK(*c7_b_Reset, 6U);
  _SFD_DATA_RANGE_CHECK(*c7_b_Hold, 7U);
  _SFD_DATA_RANGE_CHECK(*c7_b_StateO, 8U);
  c7_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,6);
  c7_hoistedGlobal = *c7_b_OffToOn;
  c7_b_hoistedGlobal = *c7_b_OnToTrans;
  c7_c_hoistedGlobal = *c7_b_TransToOn;
  c7_d_hoistedGlobal = *c7_b_TransToOff;
  c7_e_hoistedGlobal = *c7_b_State;
  c7_OffToOn = c7_hoistedGlobal;
  c7_OnToTrans = c7_b_hoistedGlobal;
  c7_TransToOn = c7_c_hoistedGlobal;
  c7_TransToOff = c7_d_hoistedGlobal;
  c7_State = c7_e_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 11U, 11U, c7_debug_family_names,
    c7_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c7_nargin, c7_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c7_nargout, c7_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c7_OffToOn, c7_b_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c7_OnToTrans, c7_b_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c7_TransToOn, c7_b_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c7_TransToOff, c7_b_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c7_State, c7_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c7_ETCMode, c7_sf_marshall, 7U);
  sf_debug_symbol_scope_add_eml(&c7_Reset, c7_sf_marshall, 8U);
  sf_debug_symbol_scope_add_eml(&c7_Hold, c7_sf_marshall, 9U);
  sf_debug_symbol_scope_add_eml(&c7_StateO, c7_sf_marshall, 10U);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0,3);
  if (CV_EML_COND(0, 0, c7_State == 0.0)) {
    if (CV_EML_COND(0, 1, (real_T)c7_OffToOn == 1.0)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0,4);
      c7_StateO = 1.0;
      goto label_1;
    }
  }

  CV_EML_MCDC(0, 0, FALSE);
  CV_EML_IF(0, 0, FALSE);
  _SFD_EML_CALL(0,5);
  if (CV_EML_COND(0, 2, c7_State == 1.0)) {
    if (CV_EML_COND(0, 3, (real_T)c7_OnToTrans == 1.0)) {
      CV_EML_MCDC(0, 1, TRUE);
      CV_EML_IF(0, 1, TRUE);
      _SFD_EML_CALL(0,6);
      c7_StateO = 2.0;
      goto label_2;
    }
  }

  CV_EML_MCDC(0, 1, FALSE);
  CV_EML_IF(0, 1, FALSE);
  _SFD_EML_CALL(0,7);
  if (CV_EML_COND(0, 4, c7_State == 2.0)) {
    if (CV_EML_COND(0, 5, (real_T)c7_TransToOn == 1.0)) {
      CV_EML_MCDC(0, 2, TRUE);
      CV_EML_IF(0, 2, TRUE);
      _SFD_EML_CALL(0,8);
      c7_StateO = 1.0;
      goto label_3;
    }
  }

  CV_EML_MCDC(0, 2, FALSE);
  CV_EML_IF(0, 2, FALSE);
  _SFD_EML_CALL(0,9);
  if (CV_EML_COND(0, 6, c7_State == 2.0)) {
    if (CV_EML_COND(0, 7, (real_T)c7_TransToOff == 1.0)) {
      CV_EML_MCDC(0, 3, TRUE);
      CV_EML_IF(0, 3, TRUE);
      _SFD_EML_CALL(0,10);
      c7_StateO = 0.0;
      goto label_4;
    }
  }

  CV_EML_MCDC(0, 3, FALSE);
  CV_EML_IF(0, 3, FALSE);
  _SFD_EML_CALL(0,12);
  c7_StateO = c7_State;
 label_4:
  ;
 label_3:
  ;
 label_2:
  ;
 label_1:
  ;
  _SFD_EML_CALL(0,15);
  if (CV_EML_IF(0, 4, c7_State == 0.0)) {
    _SFD_EML_CALL(0,16);
    c7_ETCMode = 0.0;
    _SFD_EML_CALL(0,17);
    c7_Hold = 0.0;
    _SFD_EML_CALL(0,18);
    c7_Reset = 0.0;
  } else {
    _SFD_EML_CALL(0,19);
    if (CV_EML_IF(0, 5, c7_State == 1.0)) {
      _SFD_EML_CALL(0,20);
      c7_ETCMode = 1.0;
      _SFD_EML_CALL(0,21);
      c7_Hold = 0.0;
      _SFD_EML_CALL(0,22);
      c7_Reset = 0.0;
    } else {
      _SFD_EML_CALL(0,23);
      if (CV_EML_IF(0, 6, c7_State == 2.0)) {
        _SFD_EML_CALL(0,24);
        c7_ETCMode = 0.0;
        _SFD_EML_CALL(0,25);
        c7_Hold = 1.0;
        _SFD_EML_CALL(0,26);
        c7_Reset = 0.0;
      } else {
        _SFD_EML_CALL(0,28);
        c7_ETCMode = 0.0;
        _SFD_EML_CALL(0,29);
        c7_Hold = 0.0;
        _SFD_EML_CALL(0,30);
        c7_Reset = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0,-30);
  sf_debug_symbol_scope_pop();
  *c7_b_ETCMode = c7_ETCMode;
  *c7_b_Reset = c7_Reset;
  *c7_b_Hold = c7_Hold;
  *c7_b_StateO = c7_StateO;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
  _sfEvent_ = c7_previousEvent;
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
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
  SFc7_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc7_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
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
  boolean_T c7_b_u;
  const mxArray *c7_b_y = NULL;
  SFc7_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc7_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c7_y = NULL;
  c7_b_u = *((boolean_T *)c7_u);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", &c7_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c7_y, c7_b_y);
  return c7_y;
}

const mxArray *sf_c7_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_ResolvedFunctionInfo c7_info[1];
  c7_ResolvedFunctionInfo (*c7_b_info)[1];
  const mxArray *c7_m0 = NULL;
  int32_T c7_i0;
  c7_ResolvedFunctionInfo *c7_r0;
  c7_nameCaptureInfo = NULL;
  c7_b_info = (c7_ResolvedFunctionInfo (*)[1])c7_info;
  (*c7_b_info)[0].context = "";
  (*c7_b_info)[0].name = "eq";
  (*c7_b_info)[0].dominantType = "double";
  (*c7_b_info)[0].resolved = "[B]eq";
  (*c7_b_info)[0].fileLength = 0U;
  (*c7_b_info)[0].fileTime1 = 0U;
  (*c7_b_info)[0].fileTime2 = 0U;
  sf_mex_assign(&c7_m0, sf_mex_createstruct("nameCaptureInfo", 1, 1));
  for (c7_i0 = 0; c7_i0 < 1; c7_i0 = c7_i0 + 1) {
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

static real_T c7_emlrt_marshallIn(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *c7_ETCMode, const
  char_T *c7_name)
{
  real_T c7_y;
  real_T c7_d0;
  sf_mex_import(c7_name, sf_mex_dup(c7_ETCMode), &c7_d0, 1, 0, 0U, 0, 0U, 0);
  c7_y = c7_d0;
  sf_mex_destroy(&c7_ETCMode);
  return c7_y;
}

static uint8_T c7_b_emlrt_marshallIn(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance, const mxArray *
  c7_b_is_active_c7_BaseEngineController_A02, const char_T *c7_name)
{
  uint8_T c7_y;
  uint8_T c7_u0;
  sf_mex_import(c7_name, sf_mex_dup(c7_b_is_active_c7_BaseEngineController_A02),
                &c7_u0, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_u0;
  sf_mex_destroy(&c7_b_is_active_c7_BaseEngineController_A02);
  return c7_y;
}

static void init_dsm_address_info(SFc7_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c7_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3231658818U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2143285303U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1767538776U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1575142399U);
}

mxArray *sf_c7_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(468328772U);
    pr[1] = (double)(710575924U);
    pr[2] = (double)(2896791987U);
    pr[3] = (double)(2992613214U);
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

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c7_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[5],T\"ETCMode\",},{M[1],M[10],T\"Hold\",},{M[1],M[9],T\"Reset\",},{M[1],M[11],T\"StateO\",},{M[8],M[0],T\"is_active_c7_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc7_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc7_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           7,
           1,
           1,
           9,
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
          init_script_number_translation(_BaseEngineController_A02MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
             1);
          sf_debug_set_chart_event_thresholds
            (_BaseEngineController_A02MachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"OffToOn",
                              0,(MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ETCMode",
                              0,(MexFcnForType)c7_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "OnToTrans",0,(MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "TransToOn",0,(MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "TransToOff",0,(MexFcnForType)c7_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"State",0,
                              (MexFcnForType)c7_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Reset",0,
                              (MexFcnForType)c7_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Hold",0,
                              (MexFcnForType)c7_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"StateO",
                              0,(MexFcnForType)c7_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,7,0,0,0,0,8,4);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,545);
        _SFD_CV_INIT_EML_IF(0,0,90,121,138,321);
        _SFD_CV_INIT_EML_IF(0,1,138,175,190,321);
        _SFD_CV_INIT_EML_IF(0,2,190,227,242,321);
        _SFD_CV_INIT_EML_IF(0,3,242,280,295,321);
        _SFD_CV_INIT_EML_IF(0,4,323,336,377,543);
        _SFD_CV_INIT_EML_IF(0,5,377,394,436,543);
        _SFD_CV_INIT_EML_IF(0,6,436,453,495,543);

        {
          static int condStart[] = { 94, 108 };

          static int condEnd[] = { 104, 120 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,94,120,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 146, 160 };

          static int condEnd[] = { 156, 174 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,146,174,2,2,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 198, 212 };

          static int condEnd[] = { 208, 226 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,2,198,226,2,4,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 250, 264 };

          static int condEnd[] = { 260, 279 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,3,250,279,2,6,&(condStart[0]),&(condEnd[0]),3,
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
          boolean_T *c7_OffToOn;
          real_T *c7_ETCMode;
          boolean_T *c7_OnToTrans;
          boolean_T *c7_TransToOn;
          boolean_T *c7_TransToOff;
          real_T *c7_State;
          real_T *c7_Reset;
          real_T *c7_Hold;
          real_T *c7_StateO;
          c7_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c7_Hold = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c7_Reset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c7_State = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c7_TransToOff = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c7_TransToOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c7_OnToTrans = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c7_ETCMode = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c7_OffToOn = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c7_OffToOn);
          _SFD_SET_DATA_VALUE_PTR(1U, c7_ETCMode);
          _SFD_SET_DATA_VALUE_PTR(2U, c7_OnToTrans);
          _SFD_SET_DATA_VALUE_PTR(3U, c7_TransToOn);
          _SFD_SET_DATA_VALUE_PTR(4U, c7_TransToOff);
          _SFD_SET_DATA_VALUE_PTR(5U, c7_State);
          _SFD_SET_DATA_VALUE_PTR(6U, c7_Reset);
          _SFD_SET_DATA_VALUE_PTR(7U, c7_Hold);
          _SFD_SET_DATA_VALUE_PTR(8U, c7_StateO);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c7_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc7_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c7_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_BaseEngineController_A02(void *chartInstanceVar)
{
  disable_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c7_BaseEngineController_A02(void *chartInstanceVar)
{
  sf_c7_BaseEngineController_A02((SFc7_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c7_BaseEngineController_A02(SimStruct*
  S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c7_BaseEngineController_A02();/* state var info */
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

static void sf_internal_set_sim_state_c7_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c7_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c7_BaseEngineController_A02
    ((SFc7_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c7_BaseEngineController_A02(SimStruct* S)
{
  return sf_internal_get_sim_state_c7_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c7_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c7_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c7_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c7_BaseEngineController_A02
      ((SFc7_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_BaseEngineController_A02
      ((SFc7_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c7_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BaseEngineController_A02",
      "BaseEngineController_A02",7);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
                "BaseEngineController_A02",7,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BaseEngineController_A02",
      "BaseEngineController_A02",7,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",7,5);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",7,4);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",7);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(818580730U));
  ssSetChecksum1(S,(2018429271U));
  ssSetChecksum2(S,(2203469149U));
  ssSetChecksum3(S,(474435399U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c7_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",7);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c7_BaseEngineController_A02(SimStruct *S)
{
  SFc7_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc7_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc7_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc7_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c7_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c7_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c7_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c7_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c7_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c7_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c7_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c7_BaseEngineController_A02;
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

void c7_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c7_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
