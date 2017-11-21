/* Include files */

#include "blascompat32.h"
#include "DynoController_Rev1_sfun.h"
#include "c1_DynoController_Rev1.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "DynoController_Rev1_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_Initial                  (3U)
#define c1_IN_Batterybootup            (1U)
#define c1_IN_Charging_and_Temp        (2U)
#define c1_IN_Normal_Operation         (5U)
#define c1_IN_Shutdown_Sequence        (6U)
#define c1_IN_Kill_Component_Keyed     (4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void initialize_params_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void enable_c1_DynoController_Rev1(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);
static void disable_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void set_sim_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance, const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void finalize_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void sf_c1_DynoController_Rev1(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);
static void c1_Batterybootup(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);
static void c1_Charging_and_Temp(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static boolean_T c1_emlrt_marshallIn(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance, const mxArray *c1_Keyed_Relay, const char_T *c1_name);
static uint8_T c1_b_emlrt_marshallIn(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_DynoController_Rev1, const
  char_T *c1_name);
static const mxArray *c1_c_emlrt_marshallIn
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance, const mxArray
   *c1_b_setSimStateSideEffectsInfo, const char_T *c1_name);
static void init_test_point_addr_map(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc1_DynoController_Rev1InstanceStruct *
  chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_tp_Batterybootup = 0U;
  chartInstance->c1_tp_Charging_and_Temp = 0U;
  chartInstance->c1_tp_Initial = 0U;
  chartInstance->c1_tp_Kill_Component_Keyed = 0U;
  chartInstance->c1_tp_Normal_Operation = 0U;
  chartInstance->c1_tp_Shutdown_Sequence = 0U;
  chartInstance->c1_is_active_c1_DynoController_Rev1 = 0U;
  chartInstance->c1_is_c1_DynoController_Rev1 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_Vehicle_Enable = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c1_Vehicle_Ready = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c1_Torque_Enable = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c1_Keyed_Relay = FALSE;
  }
}

static void initialize_params_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
}

static void enable_c1_DynoController_Rev1(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c1_is_active_c1_DynoController_Rev1 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,0);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Initial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Batterybootup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Charging_and_Temp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Normal_Operation) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Shutdown_Sequence) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Kill_Component_Keyed)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  boolean_T c1_hoistedGlobal;
  boolean_T c1_u;
  const mxArray *c1_b_y = NULL;
  boolean_T c1_b_hoistedGlobal;
  boolean_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  boolean_T c1_c_hoistedGlobal;
  boolean_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  boolean_T c1_d_hoistedGlobal;
  boolean_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_e_hoistedGlobal;
  uint8_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_f_hoistedGlobal;
  uint8_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(6));
  c1_hoistedGlobal = *c1_Keyed_Relay;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *c1_Torque_Enable;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *c1_Vehicle_Enable;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *c1_Vehicle_Ready;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = chartInstance->c1_is_active_c1_DynoController_Rev1;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = chartInstance->c1_is_c1_DynoController_Rev1;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 5, c1_g_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_Keyed_Relay = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 0)), "Keyed_Relay");
  *c1_Torque_Enable = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "Torque_Enable");
  *c1_Vehicle_Enable = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "Vehicle_Enable");
  *c1_Vehicle_Ready = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "Vehicle_Ready");
  chartInstance->c1_is_active_c1_DynoController_Rev1 = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
     "is_active_c1_DynoController_Rev1");
  chartInstance->c1_is_c1_DynoController_Rev1 = c1_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 5)),
     "is_c1_DynoController_Rev1");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 6)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_DynoController_Rev1(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Batterybootup) {
      chartInstance->c1_tp_Batterybootup = 1U;
    } else {
      chartInstance->c1_tp_Batterybootup = 0U;
    }

    if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Charging_and_Temp)
    {
      chartInstance->c1_tp_Charging_and_Temp = 1U;
    } else {
      chartInstance->c1_tp_Charging_and_Temp = 0U;
    }

    if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Initial) {
      chartInstance->c1_tp_Initial = 1U;
    } else {
      chartInstance->c1_tp_Initial = 0U;
    }

    if (chartInstance->c1_is_c1_DynoController_Rev1 ==
        c1_IN_Kill_Component_Keyed) {
      chartInstance->c1_tp_Kill_Component_Keyed = 1U;
    } else {
      chartInstance->c1_tp_Kill_Component_Keyed = 0U;
    }

    if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Normal_Operation) {
      chartInstance->c1_tp_Normal_Operation = 1U;
    } else {
      chartInstance->c1_tp_Normal_Operation = 0U;
    }

    if (chartInstance->c1_is_c1_DynoController_Rev1 == c1_IN_Shutdown_Sequence)
    {
      chartInstance->c1_tp_Shutdown_Sequence = 1U;
    } else {
      chartInstance->c1_tp_Shutdown_Sequence = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_DynoController_Rev1
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_DynoController_Rev1(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
  int32_T c1_previousEvent;
  boolean_T c1_b0;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b10;
  boolean_T c1_b11;
  boolean_T *c1_Batt_Contactor_Status;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Batt_Load_Enable;
  boolean_T *c1_Charging;
  c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_Batt_Contactor_Status = (boolean_T *)ssGetInputPortSignal(chartInstance->S,
    2);
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_set_sim_state_side_effects_c1_DynoController_Rev1(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Shutdown, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Batt_Load_Enable, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Batt_Contactor_Status, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c1_Charging, 7U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  if ((int16_T)chartInstance->c1_is_active_c1_DynoController_Rev1 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,0);
    chartInstance->c1_is_active_c1_DynoController_Rev1 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Initial;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c1_tp_Initial = 1U;
  } else {
    switch (chartInstance->c1_is_c1_DynoController_Rev1) {
     case c1_IN_Batterybootup:
      CV_CHART_EVAL(0,0,1);
      c1_Batterybootup(chartInstance);
      break;

     case c1_IN_Charging_and_Temp:
      CV_CHART_EVAL(0,0,2);
      c1_Charging_and_Temp(chartInstance);
      break;

     case c1_IN_Initial:
      CV_CHART_EVAL(0,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, !(_SFD_CCP_CALL(1,0,((*c1_Shutdown)!=0)) != 0))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if (*c1_Shutdown) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance->c1_tp_Initial = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Batterybootup;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c1_tp_Batterybootup = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,((*c1_Shutdown)!=0)))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance->c1_tp_Initial = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Shutdown_Sequence;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c1_tp_Shutdown_Sequence = 1U;
        } else {
          *c1_Vehicle_Enable = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
          c1_b0 = *c1_Vehicle_Enable;
          sf_mex_printf("%s =\\n", "Vehicle_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b0);
          *c1_Vehicle_Ready = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
          c1_b1 = *c1_Vehicle_Ready;
          sf_mex_printf("%s =\\n", "Vehicle_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b1);
          *c1_Torque_Enable = FALSE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
          c1_b2 = *c1_Torque_Enable;
          sf_mex_printf("%s =\\n", "Torque_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b2);
          *c1_Keyed_Relay = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c1_IN_Kill_Component_Keyed:
      CV_CHART_EVAL(0,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      *c1_Vehicle_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
      c1_b3 = *c1_Vehicle_Enable;
      sf_mex_printf("%s =\\n", "Vehicle_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b3);
      *c1_Vehicle_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
      c1_b4 = *c1_Vehicle_Ready;
      sf_mex_printf("%s =\\n", "Vehicle_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b4);
      *c1_Torque_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
      c1_b5 = *c1_Torque_Enable;
      sf_mex_printf("%s =\\n", "Torque_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b5);
      *c1_Keyed_Relay = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c1_IN_Normal_Operation:
      CV_CHART_EVAL(0,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,((*c1_Shutdown)!=0)))
          != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 5;
          sf_debug_transition_conflict_check_begin();
          if (*c1_Charging) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance->c1_tp_Normal_Operation = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Shutdown_Sequence;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
        chartInstance->c1_tp_Shutdown_Sequence = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((*c1_Charging)!=0)))
            != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
          chartInstance->c1_tp_Normal_Operation = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
          chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Charging_and_Temp;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
          chartInstance->c1_tp_Charging_and_Temp = 1U;
        } else {
          *c1_Vehicle_Enable = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
          c1_b6 = *c1_Vehicle_Enable;
          sf_mex_printf("%s =\\n", "Vehicle_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b6);
          *c1_Vehicle_Ready = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
          c1_b7 = *c1_Vehicle_Ready;
          sf_mex_printf("%s =\\n", "Vehicle_Ready");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b7);
          *c1_Torque_Enable = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
          c1_b8 = *c1_Torque_Enable;
          sf_mex_printf("%s =\\n", "Torque_Enable");
          sf_mex_call_debug("disp", 0U, 1U, 3, c1_b8);
          *c1_Keyed_Relay = TRUE;
          _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;

     case c1_IN_Shutdown_Sequence:
      CV_CHART_EVAL(0,0,6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, !(_SFD_CCP_CALL(7,0,((*c1_Batt_Contactor_Status)
              !=0)) != 0)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c1_tp_Shutdown_Sequence = 0U;
        chartInstance->c1_is_c1_DynoController_Rev1 = (uint8_T)
          c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Kill_Component_Keyed;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
        chartInstance->c1_tp_Kill_Component_Keyed = 1U;
      } else {
        *c1_Vehicle_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
        c1_b9 = *c1_Vehicle_Enable;
        sf_mex_printf("%s =\\n", "Vehicle_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b9);
        *c1_Vehicle_Ready = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
        c1_b10 = *c1_Vehicle_Ready;
        sf_mex_printf("%s =\\n", "Vehicle_Ready");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b10);
        *c1_Torque_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
        c1_b11 = *c1_Torque_Enable;
        sf_mex_printf("%s =\\n", "Torque_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c1_b11);
        *c1_Keyed_Relay = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     default:
      CV_CHART_EVAL(0,0,0);
      chartInstance->c1_is_c1_DynoController_Rev1 = (uint8_T)
        c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_DynoController_Rev1MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber
    );
}

static void c1_Batterybootup(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
  boolean_T c1_b12;
  boolean_T c1_b13;
  boolean_T c1_b14;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Batt_Load_Enable;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
  if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c1_Shutdown)!=0))) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 3;
      sf_debug_transition_conflict_check_begin();
      if (*c1_Batt_Load_Enable) {
        transitionList[numTransitions] = 9;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c1_tp_Batterybootup = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Shutdown_Sequence;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c1_tp_Shutdown_Sequence = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
    if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9,0,((*c1_Batt_Load_Enable)
           !=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c1_tp_Batterybootup = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Charging_and_Temp;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance->c1_tp_Charging_and_Temp = 1U;
    } else {
      *c1_Vehicle_Enable = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
      c1_b12 = *c1_Vehicle_Enable;
      sf_mex_printf("%s =\\n", "Vehicle_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b12);
      *c1_Vehicle_Ready = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
      c1_b13 = *c1_Vehicle_Ready;
      sf_mex_printf("%s =\\n", "Vehicle_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b13);
      *c1_Torque_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
      c1_b14 = *c1_Torque_Enable;
      sf_mex_printf("%s =\\n", "Torque_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b14);
      *c1_Keyed_Relay = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c1_Charging_and_Temp(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
  boolean_T c1_b15;
  boolean_T c1_b16;
  boolean_T c1_b17;
  boolean_T *c1_Shutdown;
  boolean_T *c1_Charging;
  boolean_T *c1_Vehicle_Enable;
  boolean_T *c1_Vehicle_Ready;
  boolean_T *c1_Torque_Enable;
  boolean_T *c1_Keyed_Relay;
  c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
  if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c1_Shutdown)!=0))) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 4;
      sf_debug_transition_conflict_check_begin();
      if (!(*c1_Charging)) {
        transitionList[numTransitions] = 2;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
    chartInstance->c1_tp_Charging_and_Temp = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Shutdown_Sequence;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c1_tp_Shutdown_Sequence = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if (CV_TRANSITION_EVAL(2U, !(_SFD_CCP_CALL(2,0,((*c1_Charging)!=0)) != 0))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c1_tp_Charging_and_Temp = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c1_is_c1_DynoController_Rev1 = c1_IN_Normal_Operation;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c1_tp_Normal_Operation = 1U;
    } else {
      *c1_Vehicle_Enable = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Enable, 2U);
      c1_b15 = *c1_Vehicle_Enable;
      sf_mex_printf("%s =\\n", "Vehicle_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b15);
      *c1_Vehicle_Ready = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Vehicle_Ready, 3U);
      c1_b16 = *c1_Vehicle_Ready;
      sf_mex_printf("%s =\\n", "Vehicle_Ready");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b16);
      *c1_Torque_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Torque_Enable, 4U);
      c1_b17 = *c1_Torque_Enable;
      sf_mex_printf("%s =\\n", "Torque_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c1_b17);
      *c1_Keyed_Relay = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c1_Keyed_Relay, 5U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_DynoController_Rev1_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  uint8_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_DynoController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc1_DynoController_Rev1InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((uint8_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  boolean_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_DynoController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc1_DynoController_Rev1InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((boolean_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static boolean_T c1_emlrt_marshallIn(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance, const mxArray *c1_Keyed_Relay, const
  char_T *c1_name)
{
  boolean_T c1_y;
  boolean_T c1_b18;
  sf_mex_import(c1_name, sf_mex_dup(c1_Keyed_Relay), &c1_b18, 1, 11, 0U, 0, 0U,
                0);
  c1_y = c1_b18;
  sf_mex_destroy(&c1_Keyed_Relay);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance, const mxArray *
  c1_b_is_active_c1_DynoController_Rev1, const char_T *c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_b_is_active_c1_DynoController_Rev1),
                &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_b_is_active_c1_DynoController_Rev1);
  return c1_y;
}

static const mxArray *c1_c_emlrt_marshallIn
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance, const mxArray *
   c1_b_setSimStateSideEffectsInfo, const char_T *c1_name)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe
                (&c1_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static void init_test_point_addr_map(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
  chartInstance->c1_testPointAddrMap[0] = &chartInstance->c1_tp_Batterybootup;
  chartInstance->c1_testPointAddrMap[1] =
    &chartInstance->c1_tp_Charging_and_Temp;
  chartInstance->c1_testPointAddrMap[2] = &chartInstance->c1_tp_Initial;
  chartInstance->c1_testPointAddrMap[3] =
    &chartInstance->c1_tp_Kill_Component_Keyed;
  chartInstance->c1_testPointAddrMap[4] = &chartInstance->c1_tp_Normal_Operation;
  chartInstance->c1_testPointAddrMap[5] =
    &chartInstance->c1_tp_Shutdown_Sequence;
}

static void **get_test_point_address_map(SFc1_DynoController_Rev1InstanceStruct *
  chartInstance)
{
  return &chartInstance->c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_DynoController_Rev1InstanceStruct *chartInstance)
{
  return &chartInstance->c1_testPointMappingInfo;
}

static void init_dsm_address_info(SFc1_DynoController_Rev1InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_DynoController_Rev1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1711285801U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1673951863U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1238720017U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1866815881U);
}

mxArray *sf_c1_DynoController_Rev1_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(230066762U);
    pr[1] = (double)(4199800667U);
    pr[2] = (double)(2237890650U);
    pr[3] = (double)(3809789799U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c1_DynoController_Rev1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[7],T\"Keyed_Relay\",},{M[1],M[6],T\"Torque_Enable\",},{M[1],M[4],T\"Vehicle_Enable\",},{M[1],M[5],T\"Vehicle_Ready\",},{M[8],M[0],T\"is_active_c1_DynoController_Rev1\",},{M[9],M[0],T\"is_c1_DynoController_Rev1\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_DynoController_Rev1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_DynoController_Rev1InstanceStruct *chartInstance;
    chartInstance = (SFc1_DynoController_Rev1InstanceStruct *) ((ChartInfoStruct
      *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_DynoController_Rev1MachineNumber_,
           1,
           6,
           10,
           8,
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
          init_script_number_translation(_DynoController_Rev1MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_DynoController_Rev1MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_DynoController_Rev1MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Shutdown",
                              0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Batt_Load_Enable",0,(MexFcnForType)
                              c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Vehicle_Enable",0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Vehicle_Ready",0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Torque_Enable",0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Keyed_Relay",0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "Batt_Contactor_Status",0,(MexFcnForType)
                              c1_b_sf_marshall);
          _SFD_SET_DATA_PROPS(7,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"Charging",
                              0,(MexFcnForType)c1_b_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_CH_SUBSTATE_COUNT(6);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
        }

        _SFD_CV_INIT_CHART(6,1,0,0);

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
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c1_Shutdown;
          boolean_T *c1_Batt_Load_Enable;
          boolean_T *c1_Vehicle_Enable;
          boolean_T *c1_Vehicle_Ready;
          boolean_T *c1_Torque_Enable;
          boolean_T *c1_Keyed_Relay;
          boolean_T *c1_Batt_Contactor_Status;
          boolean_T *c1_Charging;
          c1_Charging = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c1_Batt_Contactor_Status = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 2);
          c1_Keyed_Relay = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c1_Torque_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            3);
          c1_Vehicle_Ready = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            2);
          c1_Vehicle_Enable = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c1_Batt_Load_Enable = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c1_Shutdown = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_Shutdown);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_Batt_Load_Enable);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_Vehicle_Enable);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_Vehicle_Ready);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_Torque_Enable);
          _SFD_SET_DATA_VALUE_PTR(5U, c1_Keyed_Relay);
          _SFD_SET_DATA_VALUE_PTR(6U, c1_Batt_Contactor_Status);
          _SFD_SET_DATA_VALUE_PTR(7U, c1_Charging);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_DynoController_Rev1MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_DynoController_Rev1(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_DynoController_Rev1InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_DynoController_Rev1
    ((SFc1_DynoController_Rev1InstanceStruct*) chartInstanceVar);
  initialize_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_DynoController_Rev1(void *chartInstanceVar)
{
  enable_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_DynoController_Rev1(void *chartInstanceVar)
{
  disable_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_DynoController_Rev1(void *chartInstanceVar)
{
  sf_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
    chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_DynoController_Rev1(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_DynoController_Rev1
    ((SFc1_DynoController_Rev1InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_DynoController_Rev1();/* state var info */
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

static void sf_internal_set_sim_state_c1_DynoController_Rev1(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_DynoController_Rev1();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_DynoController_Rev1(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_DynoController_Rev1(S);
}

static void sf_opaque_set_sim_state_c1_DynoController_Rev1(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c1_DynoController_Rev1(S, st);
}

static void sf_opaque_terminate_c1_DynoController_Rev1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_DynoController_Rev1InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_DynoController_Rev1((SFc1_DynoController_Rev1InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_DynoController_Rev1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_DynoController_Rev1
      ((SFc1_DynoController_Rev1InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_DynoController_Rev1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("DynoController_Rev1","DynoController_Rev1",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("DynoController_Rev1",
                "DynoController_Rev1",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("DynoController_Rev1",
      "DynoController_Rev1",1,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"DynoController_Rev1",
        "DynoController_Rev1",1,4);
      sf_mark_chart_reusable_outputs(S,"DynoController_Rev1",
        "DynoController_Rev1",1,4);
    }

    sf_set_rtw_dwork_info(S,"DynoController_Rev1","DynoController_Rev1",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(37855263U));
  ssSetChecksum1(S,(505371232U));
  ssSetChecksum2(S,(3898138123U));
  ssSetChecksum3(S,(2992128513U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_DynoController_Rev1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "DynoController_Rev1", "DynoController_Rev1",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_DynoController_Rev1(SimStruct *S)
{
  SFc1_DynoController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc1_DynoController_Rev1InstanceStruct *)malloc(sizeof
    (SFc1_DynoController_Rev1InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_DynoController_Rev1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_DynoController_Rev1;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_DynoController_Rev1;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_DynoController_Rev1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_DynoController_Rev1;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_DynoController_Rev1;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_DynoController_Rev1;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_DynoController_Rev1;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_DynoController_Rev1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_DynoController_Rev1;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_DynoController_Rev1;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_DynoController_Rev1;
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

void c1_DynoController_Rev1_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_DynoController_Rev1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_DynoController_Rev1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_DynoController_Rev1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_DynoController_Rev1_method_dispatcher.\n"
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
  { 0, 0, "StateflowChart/Batterybootup", "Batterybootup", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/Charging_and_Temp", "Charging_and_Temp", 0, 0, 0, 0, 0
  },

  { 2, 0, "StateflowChart/Initial", "Initial", 0, 0, 0, 0, 0 },

  { 3, 0, "StateflowChart/Kill_Component_Keyed", "Kill_Component_Keyed", 0, 0, 0,
    0, 0 },

  { 4, 0, "StateflowChart/Normal_Operation", "Normal_Operation", 0, 0, 0, 0, 0 },

  { 5, 0, "StateflowChart/Shutdown_Sequence", "Shutdown_Sequence", 0, 0, 0, 0, 0
  } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    6                                  /* Num Block IO signals */
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
  SFc1_DynoController_Rev1InstanceStruct *chartInstance;
  chartInstance = (SFc1_DynoController_Rev1InstanceStruct *) ((ChartInfoStruct *)
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
