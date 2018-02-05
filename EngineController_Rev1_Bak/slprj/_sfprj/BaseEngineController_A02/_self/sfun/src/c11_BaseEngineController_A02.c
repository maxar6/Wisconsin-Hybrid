/* Include files */

#include "blascompat32.h"
#include "BaseEngineController_A02_sfun.h"
#include "c11_BaseEngineController_A02.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BaseEngineController_A02_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c11_debug_family_names[8] = { "nargin", "nargout",
  "CounterEnabled", "EngineState", "State", "CounterReset", "ESTEnable",
  "StateO" };

/* Function Declarations */
static void initialize_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void initialize_params_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void enable_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void disable_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void c11_update_debugger_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void set_sim_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_st);
static void finalize_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void sf_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void initSimStructsc11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber);
static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static real_T c11_emlrt_marshallIn(SFc11_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c11_StateO, const char_T *c11_identifier);
static real_T c11_b_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_c_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_d_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static int32_T c11_c_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static uint8_T c11_d_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_b_is_active_c11_BaseEngineController_A02, const char_T *c11_identifier);
static uint8_T c11_e_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void init_dsm_address_info(SFc11_BaseEngineController_A02InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
  chartInstance->c11_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c11_is_active_c11_BaseEngineController_A02 = 0U;
}

static void initialize_params_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void enable_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c11_update_debugger_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  real_T c11_hoistedGlobal;
  real_T c11_u;
  const mxArray *c11_b_y = NULL;
  real_T c11_b_hoistedGlobal;
  real_T c11_b_u;
  const mxArray *c11_c_y = NULL;
  real_T c11_c_hoistedGlobal;
  real_T c11_c_u;
  const mxArray *c11_d_y = NULL;
  uint8_T c11_d_hoistedGlobal;
  uint8_T c11_d_u;
  const mxArray *c11_e_y = NULL;
  real_T *c11_CounterReset;
  real_T *c11_ESTEnable;
  real_T *c11_StateO;
  c11_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c11_ESTEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_CounterReset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellarray(4));
  c11_hoistedGlobal = *c11_CounterReset;
  c11_u = c11_hoistedGlobal;
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_b_hoistedGlobal = *c11_ESTEnable;
  c11_b_u = c11_b_hoistedGlobal;
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", &c11_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_c_hoistedGlobal = *c11_StateO;
  c11_c_u = c11_c_hoistedGlobal;
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", &c11_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_d_hoistedGlobal =
    chartInstance->c11_is_active_c11_BaseEngineController_A02;
  c11_d_u = c11_d_hoistedGlobal;
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", &c11_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c11_y, 3, c11_e_y);
  sf_mex_assign(&c11_st, c11_y);
  return c11_st;
}

static void set_sim_state_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_st)
{
  const mxArray *c11_u;
  real_T *c11_CounterReset;
  real_T *c11_ESTEnable;
  real_T *c11_StateO;
  c11_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c11_ESTEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_CounterReset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c11_doneDoubleBufferReInit = TRUE;
  c11_u = sf_mex_dup(c11_st);
  *c11_CounterReset = c11_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c11_u, 0)), "CounterReset");
  *c11_ESTEnable = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 1)), "ESTEnable");
  *c11_StateO = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c11_u, 2)), "StateO");
  chartInstance->c11_is_active_c11_BaseEngineController_A02 =
    c11_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c11_u, 3)),
    "is_active_c11_BaseEngineController_A02");
  sf_mex_destroy(&c11_u);
  c11_update_debugger_state_c11_BaseEngineController_A02(chartInstance);
  sf_mex_destroy(&c11_st);
}

static void finalize_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void sf_c11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
  boolean_T c11_hoistedGlobal;
  uint8_T c11_b_hoistedGlobal;
  real_T c11_c_hoistedGlobal;
  boolean_T c11_CounterEnabled;
  uint8_T c11_EngineState;
  real_T c11_State;
  uint32_T c11_debug_family_var_map[8];
  real_T c11_nargin = 3.0;
  real_T c11_nargout = 3.0;
  real_T c11_CounterReset;
  real_T c11_ESTEnable;
  real_T c11_StateO;
  boolean_T *c11_b_CounterEnabled;
  real_T *c11_b_CounterReset;
  uint8_T *c11_b_EngineState;
  real_T *c11_b_State;
  real_T *c11_b_ESTEnable;
  real_T *c11_b_StateO;
  boolean_T guard1 = FALSE;
  boolean_T guard2 = FALSE;
  boolean_T guard3 = FALSE;
  boolean_T guard4 = FALSE;
  boolean_T guard5 = FALSE;
  boolean_T guard6 = FALSE;
  c11_b_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c11_b_ESTEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c11_b_State = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c11_b_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c11_b_CounterReset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c11_b_CounterEnabled = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 9U, chartInstance->c11_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*c11_b_CounterEnabled, 0U);
  _SFD_DATA_RANGE_CHECK(*c11_b_CounterReset, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c11_b_EngineState, 2U);
  _SFD_DATA_RANGE_CHECK(*c11_b_State, 3U);
  _SFD_DATA_RANGE_CHECK(*c11_b_ESTEnable, 4U);
  _SFD_DATA_RANGE_CHECK(*c11_b_StateO, 5U);
  chartInstance->c11_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 9U, chartInstance->c11_sfEvent);
  c11_hoistedGlobal = *c11_b_CounterEnabled;
  c11_b_hoistedGlobal = *c11_b_EngineState;
  c11_c_hoistedGlobal = *c11_b_State;
  c11_CounterEnabled = c11_hoistedGlobal;
  c11_EngineState = c11_b_hoistedGlobal;
  c11_State = c11_c_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c11_debug_family_names,
    c11_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c11_nargin, 0U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c11_nargout, 1U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c11_CounterEnabled, 2U, c11_c_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c11_EngineState, 3U, c11_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c11_State, 4U, c11_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c11_CounterReset, 5U,
    c11_sf_marshallOut, c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c11_ESTEnable, 6U,
    c11_sf_marshallOut, c11_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c11_StateO, 7U, c11_sf_marshallOut,
    c11_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 3);
  guard1 = FALSE;
  if (CV_EML_COND(0, 0, c11_State == 0.0)) {
    if (CV_EML_COND(0, 1, (real_T)c11_CounterEnabled == 1.0)) {
      CV_EML_MCDC(0, 0, TRUE);
      CV_EML_IF(0, 0, TRUE);
      _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 4);
      c11_StateO = 1.0;
    } else {
      guard1 = TRUE;
    }
  } else {
    guard1 = TRUE;
  }

  if (guard1 == TRUE) {
    CV_EML_MCDC(0, 0, FALSE);
    CV_EML_IF(0, 0, FALSE);
    _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 5);
    guard2 = FALSE;
    guard3 = FALSE;
    if (CV_EML_COND(0, 2, c11_State == 1.0)) {
      if (CV_EML_COND(0, 3, (real_T)c11_EngineState == 2.0)) {
        if (CV_EML_COND(0, 4, (real_T)c11_CounterEnabled == 1.0)) {
          CV_EML_MCDC(0, 1, TRUE);
          CV_EML_IF(0, 1, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 6);
          c11_StateO = 2.0;
        } else {
          guard2 = TRUE;
        }
      } else {
        guard3 = TRUE;
      }
    } else {
      guard3 = TRUE;
    }

    if (guard3 == TRUE) {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      CV_EML_MCDC(0, 1, FALSE);
      CV_EML_IF(0, 1, FALSE);
      _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 7);
      guard4 = FALSE;
      if (CV_EML_COND(0, 5, c11_State == 2.0)) {
        if (CV_EML_COND(0, 6, (real_T)c11_EngineState == 3.0)) {
          CV_EML_MCDC(0, 2, TRUE);
          CV_EML_IF(0, 2, TRUE);
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 8);
          c11_StateO = 3.0;
        } else {
          guard4 = TRUE;
        }
      } else {
        guard4 = TRUE;
      }

      if (guard4 == TRUE) {
        CV_EML_MCDC(0, 2, FALSE);
        CV_EML_IF(0, 2, FALSE);
        _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 9);
        guard5 = FALSE;
        if (CV_EML_COND(0, 7, c11_State == 2.0)) {
          if (CV_EML_COND(0, 8, (real_T)c11_EngineState == 1.0)) {
            CV_EML_MCDC(0, 3, TRUE);
            CV_EML_IF(0, 3, TRUE);
            _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 10);
            c11_StateO = 0.0;
          } else {
            guard5 = TRUE;
          }
        } else {
          guard5 = TRUE;
        }

        if (guard5 == TRUE) {
          CV_EML_MCDC(0, 3, FALSE);
          CV_EML_IF(0, 3, FALSE);
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 11);
          guard6 = FALSE;
          if (CV_EML_COND(0, 9, c11_State == 3.0)) {
            if (CV_EML_COND(0, 10, (real_T)c11_EngineState == 1.0)) {
              CV_EML_MCDC(0, 4, TRUE);
              CV_EML_IF(0, 4, TRUE);
              _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 12);
              c11_StateO = 0.0;
            } else {
              guard6 = TRUE;
            }
          } else {
            guard6 = TRUE;
          }

          if (guard6 == TRUE) {
            CV_EML_MCDC(0, 4, FALSE);
            CV_EML_IF(0, 4, FALSE);
            _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 14);
            c11_StateO = c11_State;
          }
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 17);
  if (CV_EML_IF(0, 5, c11_State == 0.0)) {
    _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 18);
    c11_ESTEnable = 0.0;
    _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 19);
    c11_CounterReset = 0.0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 20);
    if (CV_EML_IF(0, 6, c11_State == 1.0)) {
      _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 21);
      c11_ESTEnable = 1.0;
      _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 22);
      c11_CounterReset = 0.0;
    } else {
      _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 23);
      if (CV_EML_IF(0, 7, c11_State == 2.0)) {
        _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 24);
        c11_ESTEnable = 1.0;
        _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 25);
        c11_CounterReset = 1.0;
      } else {
        _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 26);
        if (CV_EML_IF(0, 8, c11_State == 3.0)) {
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 27);
          c11_ESTEnable = 1.0;
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 28);
          c11_CounterReset = 1.0;
        } else {
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 30);
          c11_ESTEnable = 0.0;
          _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, 31);
          c11_CounterReset = 0.0;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c11_sfEvent, -31);
  sf_debug_symbol_scope_pop();
  *c11_b_CounterReset = c11_CounterReset;
  *c11_b_ESTEnable = c11_ESTEnable;
  *c11_b_StateO = c11_StateO;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, chartInstance->c11_sfEvent);
  sf_debug_check_for_state_inconsistency(_BaseEngineController_A02MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc11_BaseEngineController_A02
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber)
{
}

static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  real_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(real_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_mxArrayOutData, c11_y);
  return c11_mxArrayOutData;
}

static real_T c11_emlrt_marshallIn(SFc11_BaseEngineController_A02InstanceStruct *
  chartInstance, const mxArray *c11_StateO, const char_T *c11_identifier)
{
  real_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_StateO),
    &c11_thisId);
  sf_mex_destroy(&c11_StateO);
  return c11_y;
}

static real_T c11_b_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_y;
  real_T c11_d0;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d0, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d0;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_StateO;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_StateO = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_StateO),
    &c11_thisId);
  sf_mex_destroy(&c11_StateO);
  *(real_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  uint8_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(uint8_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_mxArrayOutData, c11_y);
  return c11_mxArrayOutData;
}

static const mxArray *c11_c_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  boolean_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(boolean_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_mxArrayOutData, c11_y);
  return c11_mxArrayOutData;
}

const mxArray *sf_c11_BaseEngineController_A02_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c11_nameCaptureInfo;
}

static const mxArray *c11_d_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(int32_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c11_mxArrayOutData, c11_y);
  return c11_mxArrayOutData;
}

static int32_T c11_c_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  int32_T c11_y;
  int32_T c11_i0;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_i0, 1, 6, 0U, 0, 0U, 0);
  c11_y = c11_i0;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_sfEvent;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  int32_T c11_y;
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
    chartInstanceVoid;
  c11_b_sfEvent = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_sfEvent),
    &c11_thisId);
  sf_mex_destroy(&c11_b_sfEvent);
  *(int32_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static uint8_T c11_d_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_b_is_active_c11_BaseEngineController_A02, const char_T *c11_identifier)
{
  uint8_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_is_active_c11_BaseEngineController_A02), &c11_thisId);
  sf_mex_destroy(&c11_b_is_active_c11_BaseEngineController_A02);
  return c11_y;
}

static uint8_T c11_e_emlrt_marshallIn
  (SFc11_BaseEngineController_A02InstanceStruct *chartInstance, const mxArray
   *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint8_T c11_y;
  uint8_T c11_u0;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_u0, 1, 3, 0U, 0, 0U, 0);
  c11_y = c11_u0;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void init_dsm_address_info(SFc11_BaseEngineController_A02InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c11_BaseEngineController_A02_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2260397264U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3211373131U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(324633406U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1112270451U);
}

mxArray *sf_c11_BaseEngineController_A02_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2498799810U);
    pr[1] = (double)(3708317258U);
    pr[2] = (double)(1811299526U);
    pr[3] = (double)(930967815U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c11_BaseEngineController_A02(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"CounterReset\",},{M[1],M[8],T\"ESTEnable\",},{M[1],M[9],T\"StateO\",},{M[8],M[0],T\"is_active_c11_BaseEngineController_A02\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_BaseEngineController_A02_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
    chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BaseEngineController_A02MachineNumber_,
           11,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"CounterEnabled");
          _SFD_SET_DATA_PROPS(1,2,0,1,"CounterReset");
          _SFD_SET_DATA_PROPS(2,1,1,0,"EngineState");
          _SFD_SET_DATA_PROPS(3,1,1,0,"State");
          _SFD_SET_DATA_PROPS(4,2,0,1,"ESTEnable");
          _SFD_SET_DATA_PROPS(5,2,0,1,"StateO");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,9,0,0,0,0,11,5);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,659);
        _SFD_CV_INIT_EML_IF(0,0,82,120,135,398);
        _SFD_CV_INIT_EML_IF(0,1,135,197,212,398);
        _SFD_CV_INIT_EML_IF(0,2,212,250,265,398);
        _SFD_CV_INIT_EML_IF(0,3,265,304,319,398);
        _SFD_CV_INIT_EML_IF(0,4,319,357,372,398);
        _SFD_CV_INIT_EML_IF(0,5,400,413,449,659);
        _SFD_CV_INIT_EML_IF(0,6,449,466,504,659);
        _SFD_CV_INIT_EML_IF(0,7,504,521,559,659);
        _SFD_CV_INIT_EML_IF(0,8,559,576,614,659);

        {
          static int condStart[] = { 86, 100 };

          static int condEnd[] = { 96, 119 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,86,119,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 143, 157, 177 };

          static int condEnd[] = { 153, 173, 196 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,143,196,3,2,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 220, 234 };

          static int condEnd[] = { 230, 249 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,2,220,249,2,5,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 273, 287 };

          static int condEnd[] = { 283, 303 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,3,273,303,2,7,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        {
          static int condStart[] = { 327, 340 };

          static int condEnd[] = { 336, 356 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,4,327,356,2,9,&(condStart[0]),&(condEnd[0]),3,
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)c11_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)c11_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_sf_marshallOut,(MexInFcnForType)c11_sf_marshallIn);

        {
          boolean_T *c11_CounterEnabled;
          real_T *c11_CounterReset;
          uint8_T *c11_EngineState;
          real_T *c11_State;
          real_T *c11_ESTEnable;
          real_T *c11_StateO;
          c11_StateO = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c11_ESTEnable = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c11_State = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c11_EngineState = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c11_CounterReset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c11_CounterEnabled = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c11_CounterEnabled);
          _SFD_SET_DATA_VALUE_PTR(1U, c11_CounterReset);
          _SFD_SET_DATA_VALUE_PTR(2U, c11_EngineState);
          _SFD_SET_DATA_VALUE_PTR(3U, c11_State);
          _SFD_SET_DATA_VALUE_PTR(4U, c11_ESTEnable);
          _SFD_SET_DATA_VALUE_PTR(5U, c11_StateO);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_BaseEngineController_A02MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c11_BaseEngineController_A02(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc11_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
  initialize_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c11_BaseEngineController_A02(void *chartInstanceVar)
{
  enable_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c11_BaseEngineController_A02(void
  *chartInstanceVar)
{
  disable_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c11_BaseEngineController_A02(void
  *chartInstanceVar)
{
  sf_c11_BaseEngineController_A02((SFc11_BaseEngineController_A02InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c11_BaseEngineController_A02
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c11_BaseEngineController_A02();/* state var info */
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

extern void sf_internal_set_sim_state_c11_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c11_BaseEngineController_A02();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c11_BaseEngineController_A02
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c11_BaseEngineController_A02(S);
}

static void sf_opaque_set_sim_state_c11_BaseEngineController_A02(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c11_BaseEngineController_A02(S, st);
}

static void sf_opaque_terminate_c11_BaseEngineController_A02(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_BaseEngineController_A02InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c11_BaseEngineController_A02
      ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc11_BaseEngineController_A02
    ((SFc11_BaseEngineController_A02InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_BaseEngineController_A02(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c11_BaseEngineController_A02
      ((SFc11_BaseEngineController_A02InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c11_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"BaseEngineController_A02",
      "BaseEngineController_A02",11);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"BaseEngineController_A02",
                "BaseEngineController_A02",11,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      "BaseEngineController_A02","BaseEngineController_A02",11,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",11,3);
      sf_mark_chart_reusable_outputs(S,"BaseEngineController_A02",
        "BaseEngineController_A02",11,3);
    }

    sf_set_rtw_dwork_info(S,"BaseEngineController_A02",
                          "BaseEngineController_A02",11);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(630544074U));
  ssSetChecksum1(S,(2354165603U));
  ssSetChecksum2(S,(2561102977U));
  ssSetChecksum3(S,(4205869946U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c11_BaseEngineController_A02(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BaseEngineController_A02",
      "BaseEngineController_A02",11);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c11_BaseEngineController_A02(SimStruct *S)
{
  SFc11_BaseEngineController_A02InstanceStruct *chartInstance;
  chartInstance = (SFc11_BaseEngineController_A02InstanceStruct *)malloc(sizeof
    (SFc11_BaseEngineController_A02InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc11_BaseEngineController_A02InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_BaseEngineController_A02;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_BaseEngineController_A02;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c11_BaseEngineController_A02;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_BaseEngineController_A02;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_BaseEngineController_A02;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_BaseEngineController_A02;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_BaseEngineController_A02;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_BaseEngineController_A02;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_BaseEngineController_A02;
  chartInstance->chartInfo.mdlStart = mdlStart_c11_BaseEngineController_A02;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_BaseEngineController_A02;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c11_BaseEngineController_A02_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c11_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_BaseEngineController_A02(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_BaseEngineController_A02(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_BaseEngineController_A02_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
