/* Include files */

#include "blascompat32.h"
#include "cx06_MA_sfun.h"
#include "c16_cx06_MA.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "cx06_MA_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c16_IN_NO_ACTIVE_CHILD         (0U)
#define c16_IN_Idle                    (4U)
#define c16_IN_About_to_Idle           (2U)
#define c16_IN_About_to_Crank          (1U)
#define c16_IN_Crank                   (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void initialize_params_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance);
static void enable_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void disable_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void c16_update_debugger_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance);
static void set_sim_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c16_st);
static void c16_set_sim_state_side_effects_c16_cx06_MA
  (SFc16_cx06_MAInstanceStruct *chartInstance);
static void finalize_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void sf_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void c16_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c16_machineNumber, uint32_T
  c16_chartNumber);
static const mxArray *c16_sf_marshall(void *chartInstanceVoid, void *c16_u);
static const mxArray *c16_b_sf_marshall(void *chartInstanceVoid, void *c16_u);
static uint8_T c16_emlrt_marshallIn(SFc16_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c16_LSD_Eng, const char_T *c16_name);
static const mxArray *c16_b_emlrt_marshallIn(SFc16_cx06_MAInstanceStruct
  *chartInstance, const mxArray *c16_b_setSimStateSideEffectsInfo, const char_T *
  c16_name);
static void init_test_point_addr_map(SFc16_cx06_MAInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc16_cx06_MAInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc16_cx06_MAInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc16_cx06_MAInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  uint8_T *c16_LSD_Eng;
  uint8_T *c16_LSD_Nav;
  uint8_T *c16_timer;
  uint8_T *c16_state;
  c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c16_doSetSimStateSideEffects = 0U;
  chartInstance->c16_setSimStateSideEffectsInfo = NULL;
  chartInstance->c16_tp_About_to_Crank = 0U;
  chartInstance->c16_tp_About_to_Idle = 0U;
  chartInstance->c16_tp_Crank = 0U;
  chartInstance->c16_tp_Idle = 0U;
  chartInstance->c16_is_active_c16_cx06_MA = 0U;
  chartInstance->c16_is_c16_cx06_MA = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c16_LSD_Eng = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c16_LSD_Nav = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c16_timer = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c16_state = 0U;
  }
}

static void initialize_params_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance)
{
}

static void enable_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c16_update_debugger_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance)
{
  uint32_T c16_prevAniVal;
  c16_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c16_is_active_c16_cx06_MA == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,12);
  }

  if (chartInstance->c16_is_c16_cx06_MA == c16_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c16_is_c16_cx06_MA == c16_IN_About_to_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c16_is_c16_cx06_MA == c16_IN_About_to_Crank) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c16_is_c16_cx06_MA == c16_IN_Crank) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  sf_debug_set_animation(c16_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct
  *chartInstance)
{
  const mxArray *c16_st = NULL;
  const mxArray *c16_y = NULL;
  uint8_T c16_hoistedGlobal;
  uint8_T c16_u;
  const mxArray *c16_b_y = NULL;
  uint8_T c16_b_hoistedGlobal;
  uint8_T c16_b_u;
  const mxArray *c16_c_y = NULL;
  uint8_T c16_c_hoistedGlobal;
  uint8_T c16_c_u;
  const mxArray *c16_d_y = NULL;
  uint8_T c16_d_hoistedGlobal;
  uint8_T c16_d_u;
  const mxArray *c16_e_y = NULL;
  uint8_T c16_e_hoistedGlobal;
  uint8_T c16_e_u;
  const mxArray *c16_f_y = NULL;
  uint8_T c16_f_hoistedGlobal;
  uint8_T c16_f_u;
  const mxArray *c16_g_y = NULL;
  uint8_T *c16_LSD_Eng;
  uint8_T *c16_LSD_Nav;
  uint8_T *c16_state;
  uint8_T *c16_timer;
  c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c16_st = NULL;
  c16_y = NULL;
  sf_mex_assign(&c16_y, sf_mex_createcellarray(6));
  c16_hoistedGlobal = *c16_LSD_Eng;
  c16_u = c16_hoistedGlobal;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 0, c16_b_y);
  c16_b_hoistedGlobal = *c16_LSD_Nav;
  c16_b_u = c16_b_hoistedGlobal;
  c16_c_y = NULL;
  sf_mex_assign(&c16_c_y, sf_mex_create("y", &c16_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 1, c16_c_y);
  c16_c_hoistedGlobal = *c16_state;
  c16_c_u = c16_c_hoistedGlobal;
  c16_d_y = NULL;
  sf_mex_assign(&c16_d_y, sf_mex_create("y", &c16_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 2, c16_d_y);
  c16_d_hoistedGlobal = *c16_timer;
  c16_d_u = c16_d_hoistedGlobal;
  c16_e_y = NULL;
  sf_mex_assign(&c16_e_y, sf_mex_create("y", &c16_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 3, c16_e_y);
  c16_e_hoistedGlobal = chartInstance->c16_is_active_c16_cx06_MA;
  c16_e_u = c16_e_hoistedGlobal;
  c16_f_y = NULL;
  sf_mex_assign(&c16_f_y, sf_mex_create("y", &c16_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 4, c16_f_y);
  c16_f_hoistedGlobal = chartInstance->c16_is_c16_cx06_MA;
  c16_f_u = c16_f_hoistedGlobal;
  c16_g_y = NULL;
  sf_mex_assign(&c16_g_y, sf_mex_create("y", &c16_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c16_y, 5, c16_g_y);
  sf_mex_assign(&c16_st, c16_y);
  return c16_st;
}

static void set_sim_state_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c16_st)
{
  const mxArray *c16_u;
  uint8_T *c16_LSD_Eng;
  uint8_T *c16_LSD_Nav;
  uint8_T *c16_state;
  uint8_T *c16_timer;
  c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c16_u = sf_mex_dup(c16_st);
  *c16_LSD_Eng = c16_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c16_u, 0)), "LSD_Eng");
  *c16_LSD_Nav = c16_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c16_u, 1)), "LSD_Nav");
  *c16_state = c16_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c16_u, 2)), "state");
  *c16_timer = c16_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c16_u, 3)), "timer");
  chartInstance->c16_is_active_c16_cx06_MA = c16_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c16_u, 4)),
    "is_active_c16_cx06_MA");
  chartInstance->c16_is_c16_cx06_MA = c16_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c16_u, 5)), "is_c16_cx06_MA");
  sf_mex_assign(&chartInstance->c16_setSimStateSideEffectsInfo,
                c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c16_u
     , 6)), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c16_u);
  chartInstance->c16_doSetSimStateSideEffects = 1U;
  c16_update_debugger_state_c16_cx06_MA(chartInstance);
  sf_mex_destroy(&c16_st);
}

static void c16_set_sim_state_side_effects_c16_cx06_MA
  (SFc16_cx06_MAInstanceStruct *chartInstance)
{
  if (chartInstance->c16_doSetSimStateSideEffects != 0) {
    if (chartInstance->c16_is_c16_cx06_MA == c16_IN_About_to_Crank) {
      chartInstance->c16_tp_About_to_Crank = 1U;
    } else {
      chartInstance->c16_tp_About_to_Crank = 0U;
    }

    if (chartInstance->c16_is_c16_cx06_MA == c16_IN_About_to_Idle) {
      chartInstance->c16_tp_About_to_Idle = 1U;
    } else {
      chartInstance->c16_tp_About_to_Idle = 0U;
    }

    if (chartInstance->c16_is_c16_cx06_MA == c16_IN_Crank) {
      chartInstance->c16_tp_Crank = 1U;
    } else {
      chartInstance->c16_tp_Crank = 0U;
    }

    if (chartInstance->c16_is_c16_cx06_MA == c16_IN_Idle) {
      chartInstance->c16_tp_Idle = 1U;
    } else {
      chartInstance->c16_tp_Idle = 0U;
    }

    chartInstance->c16_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c16_setSimStateSideEffectsInfo);
}

static void sf_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  int32_T c16_previousEvent;
  boolean_T *c16_Eng_Start;
  boolean_T *c16_Delay_1;
  boolean_T *c16_Delay_2;
  uint8_T *c16_LSD_Eng;
  uint8_T *c16_LSD_Nav;
  uint8_T *c16_timer;
  uint8_T *c16_state;
  c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c16_Delay_2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c16_Delay_1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c16_Eng_Start = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c16_set_sim_state_side_effects_c16_cx06_MA(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,12);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_Eng_Start, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_Delay_1, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_Delay_2, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Eng, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Nav, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_timer, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c16_state, 6U);
  c16_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c16_c16_cx06_MA(chartInstance);
  _sfEvent_ = c16_previousEvent;
  sf_debug_check_for_state_inconsistency(_cx06_MAMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c16_c16_cx06_MA(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  uint8_T c16_u0;
  uint8_T c16_u1;
  uint8_T c16_u2;
  uint8_T c16_u3;
  uint8_T c16_u4;
  uint8_T c16_u5;
  uint8_T c16_u6;
  uint8_T c16_u7;
  uint8_T c16_u8;
  uint8_T c16_u9;
  uint8_T c16_u10;
  uint8_T c16_u11;
  uint8_T c16_u12;
  uint8_T c16_u13;
  uint8_T c16_u14;
  uint8_T c16_u15;
  boolean_T *c16_Eng_Start;
  uint8_T *c16_LSD_Eng;
  uint8_T *c16_LSD_Nav;
  uint8_T *c16_timer;
  uint8_T *c16_state;
  boolean_T *c16_Delay_1;
  boolean_T *c16_Delay_2;
  c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c16_Delay_2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c16_Delay_1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c16_Eng_Start = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,12);
  if ((int16_T)chartInstance->c16_is_active_c16_cx06_MA == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,12);
    chartInstance->c16_is_active_c16_cx06_MA = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
    chartInstance->c16_is_c16_cx06_MA = c16_IN_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c16_tp_Idle = 1U;
  } else {
    switch (chartInstance->c16_is_c16_cx06_MA) {
     case c16_IN_About_to_Crank:
      CV_CHART_EVAL(12,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,(((int16_T)
              *c16_Delay_1 == 1)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c16_Eng_Start == 0) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
        chartInstance->c16_tp_About_to_Crank = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
        chartInstance->c16_is_c16_cx06_MA = c16_IN_Crank;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance->c16_tp_Crank = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
        if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,(((int16_T)
                *c16_Eng_Start == 0)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
          chartInstance->c16_tp_About_to_Crank = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
          chartInstance->c16_is_c16_cx06_MA = c16_IN_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
          chartInstance->c16_tp_Idle = 1U;
        } else {
          *c16_LSD_Eng = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Eng, 3U);
          c16_u0 = *c16_LSD_Eng;
          sf_mex_printf("%s =\\n", "LSD_Eng");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u0);
          *c16_LSD_Nav = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Nav, 4U);
          c16_u1 = *c16_LSD_Nav;
          sf_mex_printf("%s =\\n", "LSD_Nav");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u1);
          *c16_timer = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_timer, 5U);
          c16_u2 = *c16_timer;
          sf_mex_printf("%s =\\n", "timer");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u2);
          *c16_state = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_state, 6U);
          c16_u3 = *c16_state;
          sf_mex_printf("%s =\\n", "state");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u3);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      break;

     case c16_IN_About_to_Idle:
      CV_CHART_EVAL(12,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
      if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0,0,(((int16_T)
              *c16_Delay_2 == 1)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 0;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c16_Eng_Start == 1) {
            transitionList[numTransitions] = 4;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance->c16_tp_About_to_Idle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance->c16_is_c16_cx06_MA = c16_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c16_tp_Idle = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
        if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,(((int16_T)
                *c16_Eng_Start == 1)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
          chartInstance->c16_tp_About_to_Idle = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
          chartInstance->c16_is_c16_cx06_MA = c16_IN_Crank;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance->c16_tp_Crank = 1U;
        } else {
          *c16_LSD_Eng = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Eng, 3U);
          c16_u4 = *c16_LSD_Eng;
          sf_mex_printf("%s =\\n", "LSD_Eng");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u4);
          *c16_LSD_Nav = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Nav, 4U);
          c16_u5 = *c16_LSD_Nav;
          sf_mex_printf("%s =\\n", "LSD_Nav");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u5);
          *c16_timer = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_timer, 5U);
          c16_u6 = *c16_timer;
          sf_mex_printf("%s =\\n", "timer");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u6);
          *c16_state = 3U;
          _SFD_DATA_RANGE_CHECK((real_T)*c16_state, 6U);
          c16_u7 = *c16_state;
          sf_mex_printf("%s =\\n", "state");
          sf_mex_call_debug("disp", 0U, 1U, 9, c16_u7);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c16_IN_Crank:
      CV_CHART_EVAL(12,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,(((int16_T)
              *c16_Eng_Start == 0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c16_tp_Crank = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c16_is_c16_cx06_MA = c16_IN_About_to_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
        chartInstance->c16_tp_About_to_Idle = 1U;
      } else {
        *c16_LSD_Eng = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Eng, 3U);
        c16_u8 = *c16_LSD_Eng;
        sf_mex_printf("%s =\\n", "LSD_Eng");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u8);
        *c16_LSD_Nav = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Nav, 4U);
        c16_u9 = *c16_LSD_Nav;
        sf_mex_printf("%s =\\n", "LSD_Nav");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u9);
        *c16_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_timer, 5U);
        c16_u10 = *c16_timer;
        sf_mex_printf("%s =\\n", "timer");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u10);
        *c16_state = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_state, 6U);
        c16_u11 = *c16_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u11);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c16_IN_Idle:
      CV_CHART_EVAL(12,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((int16_T)
              *c16_Eng_Start == 1)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
        chartInstance->c16_tp_Idle = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
        chartInstance->c16_is_c16_cx06_MA = c16_IN_About_to_Crank;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c16_tp_About_to_Crank = 1U;
      } else {
        *c16_LSD_Eng = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Eng, 3U);
        c16_u12 = *c16_LSD_Eng;
        sf_mex_printf("%s =\\n", "LSD_Eng");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u12);
        *c16_LSD_Nav = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_LSD_Nav, 4U);
        c16_u13 = *c16_LSD_Nav;
        sf_mex_printf("%s =\\n", "LSD_Nav");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u13);
        *c16_timer = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_timer, 5U);
        c16_u14 = *c16_timer;
        sf_mex_printf("%s =\\n", "timer");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u14);
        *c16_state = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c16_state, 6U);
        c16_u15 = *c16_state;
        sf_mex_printf("%s =\\n", "state");
        sf_mex_call_debug("disp", 0U, 1U, 9, c16_u15);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     default:
      CV_CHART_EVAL(12,0,0);
      chartInstance->c16_is_c16_cx06_MA = (uint8_T)c16_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
}

static void init_script_number_translation(uint32_T c16_machineNumber, uint32_T
  c16_chartNumber)
{
}

const mxArray *sf_c16_cx06_MA_get_eml_resolved_functions_info(void)
{
  const mxArray *c16_nameCaptureInfo = NULL;
  c16_nameCaptureInfo = NULL;
  sf_mex_assign(&c16_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c16_nameCaptureInfo;
}

static const mxArray *c16_sf_marshall(void *chartInstanceVoid, void *c16_u)
{
  const mxArray *c16_y = NULL;
  uint8_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc16_cx06_MAInstanceStruct *)chartInstanceVoid;
  c16_y = NULL;
  c16_b_u = *((uint8_T *)c16_u);
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c16_y, c16_b_y);
  return c16_y;
}

static const mxArray *c16_b_sf_marshall(void *chartInstanceVoid, void *c16_u)
{
  const mxArray *c16_y = NULL;
  boolean_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc16_cx06_MAInstanceStruct *)chartInstanceVoid;
  c16_y = NULL;
  c16_b_u = *((boolean_T *)c16_u);
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c16_y, c16_b_y);
  return c16_y;
}

static uint8_T c16_emlrt_marshallIn(SFc16_cx06_MAInstanceStruct *chartInstance,
  const mxArray *c16_LSD_Eng, const char_T *c16_name)
{
  uint8_T c16_y;
  uint8_T c16_u16;
  sf_mex_import(c16_name, sf_mex_dup(c16_LSD_Eng), &c16_u16, 1, 3, 0U, 0, 0U, 0);
  c16_y = c16_u16;
  sf_mex_destroy(&c16_LSD_Eng);
  return c16_y;
}

static const mxArray *c16_b_emlrt_marshallIn(SFc16_cx06_MAInstanceStruct
  *chartInstance, const mxArray *
  c16_b_setSimStateSideEffectsInfo, const char_T *c16_name)
{
  const mxArray *c16_y = NULL;
  c16_y = NULL;
  sf_mex_assign(&c16_y, sf_mex_duplicatearraysafe
                (&c16_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c16_b_setSimStateSideEffectsInfo);
  return c16_y;
}

static void init_test_point_addr_map(SFc16_cx06_MAInstanceStruct *chartInstance)
{
  chartInstance->c16_testPointAddrMap[0] = &chartInstance->c16_tp_About_to_Crank;
  chartInstance->c16_testPointAddrMap[1] = &chartInstance->c16_tp_About_to_Idle;
  chartInstance->c16_testPointAddrMap[2] = &chartInstance->c16_tp_Crank;
  chartInstance->c16_testPointAddrMap[3] = &chartInstance->c16_tp_Idle;
}

static void **get_test_point_address_map(SFc16_cx06_MAInstanceStruct
  *chartInstance)
{
  return &chartInstance->c16_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc16_cx06_MAInstanceStruct *chartInstance)
{
  return &chartInstance->c16_testPointMappingInfo;
}

static void init_dsm_address_info(SFc16_cx06_MAInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c16_cx06_MA_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2408937186U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1562852504U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(575608356U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3348284580U);
}

mxArray *sf_c16_cx06_MA_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3981267206U);
    pr[1] = (double)(181905681U);
    pr[2] = (double)(1227746785U);
    pr[3] = (double)(3709448577U);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c16_cx06_MA(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[15],T\"LSD_Eng\",},{M[1],M[16],T\"LSD_Nav\",},{M[1],M[18],T\"state\",},{M[1],M[17],T\"timer\",},{M[8],M[0],T\"is_active_c16_cx06_MA\",},{M[9],M[0],T\"is_c16_cx06_MA\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c16_cx06_MA_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc16_cx06_MAInstanceStruct *chartInstance;
    chartInstance = (SFc16_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_cx06_MAMachineNumber_,
          16,
          4,
          7,
          7,
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
                              "Eng_Start",0,(MexFcnForType)c16_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Delay_1",
                              0,(MexFcnForType)c16_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Delay_2",
                              0,(MexFcnForType)c16_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"LSD_Eng",
                              0,(MexFcnForType)c16_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"LSD_Nav",
                              0,(MexFcnForType)c16_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"timer",0,
                              (MexFcnForType)c16_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"state",0,
                              (MexFcnForType)c16_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c16_Eng_Start;
          boolean_T *c16_Delay_1;
          boolean_T *c16_Delay_2;
          uint8_T *c16_LSD_Eng;
          uint8_T *c16_LSD_Nav;
          uint8_T *c16_timer;
          uint8_T *c16_state;
          c16_state = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c16_timer = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c16_LSD_Nav = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c16_LSD_Eng = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c16_Delay_2 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c16_Delay_1 = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c16_Eng_Start = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c16_Eng_Start);
          _SFD_SET_DATA_VALUE_PTR(1U, c16_Delay_1);
          _SFD_SET_DATA_VALUE_PTR(2U, c16_Delay_2);
          _SFD_SET_DATA_VALUE_PTR(3U, c16_LSD_Eng);
          _SFD_SET_DATA_VALUE_PTR(4U, c16_LSD_Nav);
          _SFD_SET_DATA_VALUE_PTR(5U, c16_timer);
          _SFD_SET_DATA_VALUE_PTR(6U, c16_state);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_cx06_MAMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c16_cx06_MA(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc16_cx06_MAInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
  initialize_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c16_cx06_MA(void *chartInstanceVar)
{
  enable_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c16_cx06_MA(void *chartInstanceVar)
{
  disable_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c16_cx06_MA(void *chartInstanceVar)
{
  sf_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c16_cx06_MA(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c16_cx06_MA();/* state var info */
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

static void sf_internal_set_sim_state_c16_cx06_MA(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c16_cx06_MA();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c16_cx06_MA(SimStruct* S)
{
  return sf_internal_get_sim_state_c16_cx06_MA(S);
}

static void sf_opaque_set_sim_state_c16_cx06_MA(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c16_cx06_MA(S, st);
}

static void sf_opaque_terminate_c16_cx06_MA(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc16_cx06_MAInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c16_cx06_MA(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c16_cx06_MA((SFc16_cx06_MAInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c16_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("cx06_MA","cx06_MA",16);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",16,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("cx06_MA","cx06_MA",16,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"cx06_MA","cx06_MA",16,3);
      sf_mark_chart_reusable_outputs(S,"cx06_MA","cx06_MA",16,4);
    }

    sf_set_rtw_dwork_info(S,"cx06_MA","cx06_MA",16);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1021436272U));
  ssSetChecksum1(S,(1249294852U));
  ssSetChecksum2(S,(1151157980U));
  ssSetChecksum3(S,(3892537183U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c16_cx06_MA(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "cx06_MA", "cx06_MA",16);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c16_cx06_MA(SimStruct *S)
{
  SFc16_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc16_cx06_MAInstanceStruct *)malloc(sizeof
    (SFc16_cx06_MAInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc16_cx06_MAInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c16_cx06_MA;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c16_cx06_MA;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c16_cx06_MA;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c16_cx06_MA;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c16_cx06_MA;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c16_cx06_MA;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c16_cx06_MA;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c16_cx06_MA;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c16_cx06_MA;
  chartInstance->chartInfo.mdlStart = mdlStart_c16_cx06_MA;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c16_cx06_MA;
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

void c16_cx06_MA_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c16_cx06_MA(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c16_cx06_MA(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c16_cx06_MA(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c16_cx06_MA_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/About_to_Crank", "About_to_Crank", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/About_to_Idle", "About_to_Idle", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/Crank", "Crank", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Idle", "Idle", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    4                                  /* Num Block IO signals */
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
  SFc16_cx06_MAInstanceStruct *chartInstance;
  chartInstance = (SFc16_cx06_MAInstanceStruct *) ((ChartInfoStruct *)
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
