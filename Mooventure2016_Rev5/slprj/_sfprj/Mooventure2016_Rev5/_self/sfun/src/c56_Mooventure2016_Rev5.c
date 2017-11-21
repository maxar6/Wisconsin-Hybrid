/* Include files */

#include "blascompat32.h"
#include "Mooventure2016_Rev5_sfun.h"
#include "c56_Mooventure2016_Rev5.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Mooventure2016_Rev5_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char * c56_debug_family_names[8] = { "i", "nargin", "nargout",
  "dataIn", "currentRow", "data", "row", "col" };

/* Function Declarations */
static void initialize_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void initialize_params_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void enable_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void disable_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void c56_update_debugger_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void set_sim_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c56_st);
static void finalize_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void sf_c56_Mooventure2016_Rev5(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance);
static void initSimStructsc56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c56_machineNumber, uint32_T
  c56_chartNumber);
static const mxArray *c56_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData);
static real_T c56_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_col, const char_T *c56_identifier);
static real_T c56_b_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId);
static void c56_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData);
static const mxArray *c56_b_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData);
static uint32_T c56_c_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_row, const char_T *c56_identifier);
static uint32_T c56_d_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId);
static void c56_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData);
static const mxArray *c56_c_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData);
static const mxArray *c56_d_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData);
static int32_T c56_e_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId);
static void c56_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData);
static uint8_T c56_f_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_b_is_active_c56_Mooventure2016_Rev5, const
  char_T *c56_identifier);
static uint8_T c56_g_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId);
static void init_dsm_address_info(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  chartInstance->c56_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c56_is_active_c56_Mooventure2016_Rev5 = 0U;
}

static void initialize_params_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void enable_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c56_update_debugger_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
  const mxArray *c56_st;
  const mxArray *c56_y = NULL;
  real_T c56_hoistedGlobal;
  real_T c56_u;
  const mxArray *c56_b_y = NULL;
  real_T c56_b_hoistedGlobal;
  real_T c56_b_u;
  const mxArray *c56_c_y = NULL;
  uint32_T c56_c_hoistedGlobal;
  uint32_T c56_c_u;
  const mxArray *c56_d_y = NULL;
  uint8_T c56_d_hoistedGlobal;
  uint8_T c56_d_u;
  const mxArray *c56_e_y = NULL;
  real_T *c56_col;
  real_T *c56_data;
  uint32_T *c56_row;
  c56_col = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c56_row = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c56_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c56_st = NULL;
  c56_st = NULL;
  c56_y = NULL;
  sf_mex_assign(&c56_y, sf_mex_createcellarray(4));
  c56_hoistedGlobal = *c56_col;
  c56_u = c56_hoistedGlobal;
  c56_b_y = NULL;
  sf_mex_assign(&c56_b_y, sf_mex_create("y", &c56_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c56_y, 0, c56_b_y);
  c56_b_hoistedGlobal = *c56_data;
  c56_b_u = c56_b_hoistedGlobal;
  c56_c_y = NULL;
  sf_mex_assign(&c56_c_y, sf_mex_create("y", &c56_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c56_y, 1, c56_c_y);
  c56_c_hoistedGlobal = *c56_row;
  c56_c_u = c56_c_hoistedGlobal;
  c56_d_y = NULL;
  sf_mex_assign(&c56_d_y, sf_mex_create("y", &c56_c_u, 7, 0U, 0U, 0U, 0));
  sf_mex_setcell(c56_y, 2, c56_d_y);
  c56_d_hoistedGlobal = chartInstance->c56_is_active_c56_Mooventure2016_Rev5;
  c56_d_u = c56_d_hoistedGlobal;
  c56_e_y = NULL;
  sf_mex_assign(&c56_e_y, sf_mex_create("y", &c56_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c56_y, 3, c56_e_y);
  sf_mex_assign(&c56_st, c56_y);
  return c56_st;
}

static void set_sim_state_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance, const mxArray *c56_st)
{
  const mxArray *c56_u;
  real_T *c56_col;
  real_T *c56_data;
  uint32_T *c56_row;
  c56_col = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c56_row = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c56_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c56_doneDoubleBufferReInit = TRUE;
  c56_u = sf_mex_dup(c56_st);
  *c56_col = c56_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c56_u,
    0)), "col");
  *c56_data = c56_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c56_u, 1)), "data");
  *c56_row = c56_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c56_u, 2)), "row");
  chartInstance->c56_is_active_c56_Mooventure2016_Rev5 = c56_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c56_u, 3)),
     "is_active_c56_Mooventure2016_Rev5");
  sf_mex_destroy(&c56_u);
  c56_update_debugger_state_c56_Mooventure2016_Rev5(chartInstance);
  sf_mex_destroy(&c56_st);
}

static void finalize_c56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void sf_c56_Mooventure2016_Rev5(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
  int32_T c56_i0;
  uint32_T c56_hoistedGlobal;
  int32_T c56_i1;
  real_T c56_dataIn[6];
  uint32_T c56_currentRow;
  uint32_T c56_debug_family_var_map[8];
  real_T c56_i;
  real_T c56_nargin = 2.0;
  real_T c56_nargout = 3.0;
  real_T c56_data;
  uint32_T c56_row;
  real_T c56_col;
  uint32_T c56_q0;
  uint32_T c56_qY;
  real_T c56_b_i;
  real_T *c56_b_data;
  uint32_T *c56_b_row;
  real_T *c56_b_col;
  uint32_T *c56_b_currentRow;
  real_T (*c56_b_dataIn)[6];
  c56_b_currentRow = (uint32_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c56_b_col = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c56_b_row = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c56_b_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c56_b_dataIn = (real_T (*)[6])ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 55U, chartInstance->c56_sfEvent);
  for (c56_i0 = 0; c56_i0 < 6; c56_i0++) {
    _SFD_DATA_RANGE_CHECK((*c56_b_dataIn)[c56_i0], 0U);
  }

  _SFD_DATA_RANGE_CHECK(*c56_b_data, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c56_b_row, 2U);
  _SFD_DATA_RANGE_CHECK(*c56_b_col, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c56_b_currentRow, 4U);
  chartInstance->c56_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 55U, chartInstance->c56_sfEvent);
  c56_hoistedGlobal = *c56_b_currentRow;
  for (c56_i1 = 0; c56_i1 < 6; c56_i1++) {
    c56_dataIn[c56_i1] = (*c56_b_dataIn)[c56_i1];
  }

  c56_currentRow = c56_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 8U, 8U, c56_debug_family_names,
    c56_debug_family_var_map);
  sf_debug_symbol_scope_add_eml_importable(&c56_i, 0U, c56_sf_marshallOut,
    c56_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c56_nargin, 1U, c56_sf_marshallOut,
    c56_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c56_nargout, 2U, c56_sf_marshallOut,
    c56_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(c56_dataIn, 3U, c56_c_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c56_currentRow, 4U, c56_b_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c56_data, 5U, c56_sf_marshallOut,
    c56_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c56_row, 6U, c56_b_sf_marshallOut,
    c56_b_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c56_col, 7U, c56_sf_marshallOut,
    c56_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c56_sfEvent, 3);
  c56_q0 = c56_currentRow;
  c56_qY = c56_q0 + 1U;
  if (c56_qY < c56_q0) {
    c56_qY = MAX_uint32_T;
  }

  c56_row = c56_qY;
  c56_i = 1.0;
  c56_b_i = 1.0;
  while (c56_b_i <= 6.0) {
    c56_i = c56_b_i;
    CV_EML_FOR(0, 0, 1);
    _SFD_EML_CALL(0U, chartInstance->c56_sfEvent, 5);
    c56_col = c56_i;
    _SFD_EML_CALL(0U, chartInstance->c56_sfEvent, 6);
    c56_data = c56_dataIn[_SFD_EML_ARRAY_BOUNDS_CHECK("dataIn", (int32_T)
      _SFD_INTEGER_CHECK("i", c56_i), 1, 6, 1, 0) - 1];
    c56_b_i++;
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  CV_EML_FOR(0, 0, 0);
  _SFD_EML_CALL(0U, chartInstance->c56_sfEvent, -6);
  sf_debug_symbol_scope_pop();
  *c56_b_data = c56_data;
  *c56_b_row = c56_row;
  *c56_b_col = c56_col;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 55U, chartInstance->c56_sfEvent);
  sf_debug_check_for_state_inconsistency(_Mooventure2016_Rev5MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc56_Mooventure2016_Rev5
  (SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c56_machineNumber, uint32_T
  c56_chartNumber)
{
}

static const mxArray *c56_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData)
{
  const mxArray *c56_mxArrayOutData = NULL;
  real_T c56_u;
  const mxArray *c56_y = NULL;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_mxArrayOutData = NULL;
  c56_u = *(real_T *)c56_inData;
  c56_y = NULL;
  sf_mex_assign(&c56_y, sf_mex_create("y", &c56_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c56_mxArrayOutData, c56_y);
  return c56_mxArrayOutData;
}

static real_T c56_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_col, const char_T *c56_identifier)
{
  real_T c56_y;
  emlrtMsgIdentifier c56_thisId;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c56_col), &c56_thisId);
  sf_mex_destroy(&c56_col);
  return c56_y;
}

static real_T c56_b_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId)
{
  real_T c56_y;
  real_T c56_d0;
  sf_mex_import(c56_parentId, sf_mex_dup(c56_u), &c56_d0, 1, 0, 0U, 0, 0U, 0);
  c56_y = c56_d0;
  sf_mex_destroy(&c56_u);
  return c56_y;
}

static void c56_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData)
{
  const mxArray *c56_col;
  const char_T *c56_identifier;
  emlrtMsgIdentifier c56_thisId;
  real_T c56_y;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_col = sf_mex_dup(c56_mxArrayInData);
  c56_identifier = c56_varName;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c56_col), &c56_thisId);
  sf_mex_destroy(&c56_col);
  *(real_T *)c56_outData = c56_y;
  sf_mex_destroy(&c56_mxArrayInData);
}

static const mxArray *c56_b_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData)
{
  const mxArray *c56_mxArrayOutData = NULL;
  uint32_T c56_u;
  const mxArray *c56_y = NULL;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_mxArrayOutData = NULL;
  c56_u = *(uint32_T *)c56_inData;
  c56_y = NULL;
  sf_mex_assign(&c56_y, sf_mex_create("y", &c56_u, 7, 0U, 0U, 0U, 0));
  sf_mex_assign(&c56_mxArrayOutData, c56_y);
  return c56_mxArrayOutData;
}

static uint32_T c56_c_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_row, const char_T *c56_identifier)
{
  uint32_T c56_y;
  emlrtMsgIdentifier c56_thisId;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c56_row), &c56_thisId);
  sf_mex_destroy(&c56_row);
  return c56_y;
}

static uint32_T c56_d_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId)
{
  uint32_T c56_y;
  uint32_T c56_u0;
  sf_mex_import(c56_parentId, sf_mex_dup(c56_u), &c56_u0, 1, 7, 0U, 0, 0U, 0);
  c56_y = c56_u0;
  sf_mex_destroy(&c56_u);
  return c56_y;
}

static void c56_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData)
{
  const mxArray *c56_row;
  const char_T *c56_identifier;
  emlrtMsgIdentifier c56_thisId;
  uint32_T c56_y;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_row = sf_mex_dup(c56_mxArrayInData);
  c56_identifier = c56_varName;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c56_row), &c56_thisId);
  sf_mex_destroy(&c56_row);
  *(uint32_T *)c56_outData = c56_y;
  sf_mex_destroy(&c56_mxArrayInData);
}

static const mxArray *c56_c_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData)
{
  const mxArray *c56_mxArrayOutData = NULL;
  int32_T c56_i2;
  real_T c56_b_inData[6];
  int32_T c56_i3;
  real_T c56_u[6];
  const mxArray *c56_y = NULL;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_mxArrayOutData = NULL;
  for (c56_i2 = 0; c56_i2 < 6; c56_i2++) {
    c56_b_inData[c56_i2] = (*(real_T (*)[6])c56_inData)[c56_i2];
  }

  for (c56_i3 = 0; c56_i3 < 6; c56_i3++) {
    c56_u[c56_i3] = c56_b_inData[c56_i3];
  }

  c56_y = NULL;
  sf_mex_assign(&c56_y, sf_mex_create("y", c56_u, 0, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c56_mxArrayOutData, c56_y);
  return c56_mxArrayOutData;
}

const mxArray *sf_c56_Mooventure2016_Rev5_get_eml_resolved_functions_info(void)
{
  const mxArray *c56_nameCaptureInfo = NULL;
  c56_nameCaptureInfo = NULL;
  sf_mex_assign(&c56_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c56_nameCaptureInfo;
}

static const mxArray *c56_d_sf_marshallOut(void *chartInstanceVoid, void
  *c56_inData)
{
  const mxArray *c56_mxArrayOutData = NULL;
  int32_T c56_u;
  const mxArray *c56_y = NULL;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_mxArrayOutData = NULL;
  c56_u = *(int32_T *)c56_inData;
  c56_y = NULL;
  sf_mex_assign(&c56_y, sf_mex_create("y", &c56_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c56_mxArrayOutData, c56_y);
  return c56_mxArrayOutData;
}

static int32_T c56_e_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId)
{
  int32_T c56_y;
  int32_T c56_i4;
  sf_mex_import(c56_parentId, sf_mex_dup(c56_u), &c56_i4, 1, 6, 0U, 0, 0U, 0);
  c56_y = c56_i4;
  sf_mex_destroy(&c56_u);
  return c56_y;
}

static void c56_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c56_mxArrayInData, const char_T *c56_varName, void *c56_outData)
{
  const mxArray *c56_b_sfEvent;
  const char_T *c56_identifier;
  emlrtMsgIdentifier c56_thisId;
  int32_T c56_y;
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)chartInstanceVoid;
  c56_b_sfEvent = sf_mex_dup(c56_mxArrayInData);
  c56_identifier = c56_varName;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c56_b_sfEvent),
    &c56_thisId);
  sf_mex_destroy(&c56_b_sfEvent);
  *(int32_T *)c56_outData = c56_y;
  sf_mex_destroy(&c56_mxArrayInData);
}

static uint8_T c56_f_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_b_is_active_c56_Mooventure2016_Rev5, const
  char_T *c56_identifier)
{
  uint8_T c56_y;
  emlrtMsgIdentifier c56_thisId;
  c56_thisId.fIdentifier = c56_identifier;
  c56_thisId.fParent = NULL;
  c56_y = c56_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c56_b_is_active_c56_Mooventure2016_Rev5), &c56_thisId);
  sf_mex_destroy(&c56_b_is_active_c56_Mooventure2016_Rev5);
  return c56_y;
}

static uint8_T c56_g_emlrt_marshallIn(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance, const mxArray *c56_u, const emlrtMsgIdentifier *c56_parentId)
{
  uint8_T c56_y;
  uint8_T c56_u1;
  sf_mex_import(c56_parentId, sf_mex_dup(c56_u), &c56_u1, 1, 3, 0U, 0, 0U, 0);
  c56_y = c56_u1;
  sf_mex_destroy(&c56_u);
  return c56_y;
}

static void init_dsm_address_info(SFc56_Mooventure2016_Rev5InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c56_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1443804433U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1812740328U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1363007895U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2533385331U);
}

mxArray *sf_c56_Mooventure2016_Rev5_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2244514932U);
    pr[1] = (double)(4050547236U);
    pr[2] = (double)(2470447733U);
    pr[3] = (double)(530721439U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
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

static const mxArray *sf_get_sim_state_info_c56_Mooventure2016_Rev5(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[12],T\"col\",},{M[1],M[5],T\"data\",},{M[1],M[11],T\"row\",},{M[8],M[0],T\"is_active_c56_Mooventure2016_Rev5\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c56_Mooventure2016_Rev5_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
    chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Mooventure2016_Rev5MachineNumber_,
           56,
           1,
           1,
           5,
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
          init_script_number_translation(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Mooventure2016_Rev5MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"dataIn");
          _SFD_SET_DATA_PROPS(1,2,0,1,"data");
          _SFD_SET_DATA_PROPS(2,2,0,1,"row");
          _SFD_SET_DATA_PROPS(3,2,0,1,"col");
          _SFD_SET_DATA_PROPS(4,1,1,0,"currentRow");
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
        _SFD_CV_INIT_EML(0,1,0,0,0,1,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,126);
        _SFD_CV_INIT_EML_FOR(0,0,70,82,120);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c56_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c56_sf_marshallOut,(MexInFcnForType)c56_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c56_b_sf_marshallOut,(MexInFcnForType)
          c56_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c56_sf_marshallOut,(MexInFcnForType)c56_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c56_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c56_data;
          uint32_T *c56_row;
          real_T *c56_col;
          uint32_T *c56_currentRow;
          real_T (*c56_dataIn)[6];
          c56_currentRow = (uint32_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c56_col = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c56_row = (uint32_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c56_data = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c56_dataIn = (real_T (*)[6])ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c56_dataIn);
          _SFD_SET_DATA_VALUE_PTR(1U, c56_data);
          _SFD_SET_DATA_VALUE_PTR(2U, c56_row);
          _SFD_SET_DATA_VALUE_PTR(3U, c56_col);
          _SFD_SET_DATA_VALUE_PTR(4U, c56_currentRow);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Mooventure2016_Rev5MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c56_Mooventure2016_Rev5(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c56_Mooventure2016_Rev5
    ((SFc56_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar);
  initialize_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c56_Mooventure2016_Rev5(void *chartInstanceVar)
{
  enable_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c56_Mooventure2016_Rev5(void *chartInstanceVar)
{
  disable_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c56_Mooventure2016_Rev5(void *chartInstanceVar)
{
  sf_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c56_Mooventure2016_Rev5
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c56_Mooventure2016_Rev5
    ((SFc56_Mooventure2016_Rev5InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c56_Mooventure2016_Rev5();/* state var info */
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

extern void sf_internal_set_sim_state_c56_Mooventure2016_Rev5(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c56_Mooventure2016_Rev5();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c56_Mooventure2016_Rev5(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c56_Mooventure2016_Rev5(S);
}

static void sf_opaque_set_sim_state_c56_Mooventure2016_Rev5(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c56_Mooventure2016_Rev5(S, st);
}

static void sf_opaque_terminate_c56_Mooventure2016_Rev5(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc56_Mooventure2016_Rev5InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc56_Mooventure2016_Rev5((SFc56_Mooventure2016_Rev5InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c56_Mooventure2016_Rev5(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c56_Mooventure2016_Rev5
      ((SFc56_Mooventure2016_Rev5InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c56_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",
      56);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
                "Mooventure2016_Rev5",56,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Mooventure2016_Rev5",
      "Mooventure2016_Rev5",56,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",56,2);
      sf_mark_chart_reusable_outputs(S,"Mooventure2016_Rev5",
        "Mooventure2016_Rev5",56,3);
    }

    sf_set_rtw_dwork_info(S,"Mooventure2016_Rev5","Mooventure2016_Rev5",56);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1538384037U));
  ssSetChecksum1(S,(3452502537U));
  ssSetChecksum2(S,(2005835618U));
  ssSetChecksum3(S,(4210566347U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c56_Mooventure2016_Rev5(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Mooventure2016_Rev5", "Mooventure2016_Rev5",56);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c56_Mooventure2016_Rev5(SimStruct *S)
{
  SFc56_Mooventure2016_Rev5InstanceStruct *chartInstance;
  chartInstance = (SFc56_Mooventure2016_Rev5InstanceStruct *)malloc(sizeof
    (SFc56_Mooventure2016_Rev5InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc56_Mooventure2016_Rev5InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlStart = mdlStart_c56_Mooventure2016_Rev5;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c56_Mooventure2016_Rev5;
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

void c56_Mooventure2016_Rev5_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c56_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c56_Mooventure2016_Rev5(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c56_Mooventure2016_Rev5(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c56_Mooventure2016_Rev5_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
