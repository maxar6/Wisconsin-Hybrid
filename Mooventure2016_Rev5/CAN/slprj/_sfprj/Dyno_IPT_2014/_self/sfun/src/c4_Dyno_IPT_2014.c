/* Include files */

#include "blascompat32.h"
#include "Dyno_IPT_2014_sfun.h"
#include "c4_Dyno_IPT_2014.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Dyno_IPT_2014_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c4_IN_NO_ACTIVE_CHILD          (0U)
#define c4_IN_StartUpPre               (8U)
#define c4_IN_RunTime                  (3U)
#define c4_IN_ShutDownFinal            (4U)
#define c4_IN_PrcFault                 (2U)
#define c4_IN_StandBy                  (6U)
#define c4_IN_All_on                   (1U)
#define c4_IN_ShutdownOne              (5U)
#define c4_IN_StartUpFull              (7U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void initialize_params_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct *
  chartInstance);
static void enable_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void disable_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c4_update_debugger_state_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void set_sim_state_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_st);
static void c4_set_sim_state_side_effects_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void finalize_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void sf_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c4_chartstep_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void c4_RunTime(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c4_All_on(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c4_ShutdownOne(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void c4_StartUpFull(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_b_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_c_sf_marshall(void *chartInstanceVoid, void *c4_u);
static const mxArray *c4_d_sf_marshall(void *chartInstanceVoid, void *c4_u);
static boolean_T c4_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_AllowKeyOff, const char_T *c4_name);
static int32_T c4_b_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_b_cnt, const char_T *c4_name);
static uint8_T c4_c_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_Dyno_IPT_2014, const char_T
  *c4_name);
static const mxArray *c4_d_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_b_setSimStateSideEffectsInfo, const char_T
  *c4_name);
static int32_T c4__s32_add__(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance,
  int32_T c4_b, int32_T c4_c);
static void init_test_point_addr_map(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_PrcC;
  boolean_T *c4_BatRdy;
  boolean_T *c4_PrcTOutFault;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_doSetSimStateSideEffects = 0U;
  chartInstance->c4_setSimStateSideEffectsInfo = NULL;
  chartInstance->c4_tp_All_on = 0U;
  chartInstance->c4_tp_PrcFault = 0U;
  chartInstance->c4_tp_RunTime = 0U;
  chartInstance->c4_tp_ShutDownFinal = 0U;
  chartInstance->c4_tp_ShutdownOne = 0U;
  chartInstance->c4_tp_StandBy = 0U;
  chartInstance->c4_tp_StartUpFull = 0U;
  chartInstance->c4_tp_StartUpPre = 0U;
  chartInstance->c4_is_active_c4_Dyno_IPT_2014 = 0U;
  chartInstance->c4_is_c4_Dyno_IPT_2014 = 0U;
  chartInstance->c4_cnt = 0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c4_MCNeg = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c4_MCPos = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c4_PrcC = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c4_BatRdy = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c4_PrcTOutFault = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c4_BatRstReqFault = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c4_AllowKeyOff = FALSE;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c4_IPT_Enable = FALSE;
  }
}

static void initialize_params_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct *
  chartInstance)
{
}

static void enable_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  uint32_T c4_prevAniVal;
  c4_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c4_is_active_c4_Dyno_IPT_2014 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,3);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StartUpPre) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_RunTime) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_ShutDownFinal) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_PrcFault) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StandBy) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_All_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_ShutdownOne) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StartUpFull) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  sf_debug_set_animation(c4_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  const mxArray *c4_st = NULL;
  const mxArray *c4_y = NULL;
  boolean_T c4_hoistedGlobal;
  boolean_T c4_u;
  const mxArray *c4_b_y = NULL;
  boolean_T c4_b_hoistedGlobal;
  boolean_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  boolean_T c4_c_hoistedGlobal;
  boolean_T c4_c_u;
  const mxArray *c4_d_y = NULL;
  boolean_T c4_d_hoistedGlobal;
  boolean_T c4_d_u;
  const mxArray *c4_e_y = NULL;
  boolean_T c4_e_hoistedGlobal;
  boolean_T c4_e_u;
  const mxArray *c4_f_y = NULL;
  boolean_T c4_f_hoistedGlobal;
  boolean_T c4_f_u;
  const mxArray *c4_g_y = NULL;
  boolean_T c4_g_hoistedGlobal;
  boolean_T c4_g_u;
  const mxArray *c4_h_y = NULL;
  boolean_T c4_h_hoistedGlobal;
  boolean_T c4_h_u;
  const mxArray *c4_i_y = NULL;
  int32_T c4_i_hoistedGlobal;
  int32_T c4_i_u;
  const mxArray *c4_j_y = NULL;
  uint8_T c4_j_hoistedGlobal;
  uint8_T c4_j_u;
  const mxArray *c4_k_y = NULL;
  uint8_T c4_k_hoistedGlobal;
  uint8_T c4_k_u;
  const mxArray *c4_l_y = NULL;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_BatRdy;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_IPT_Enable;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_PrcC;
  boolean_T *c4_PrcTOutFault;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(11));
  c4_hoistedGlobal = *c4_AllowKeyOff;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal = *c4_BatRdy;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_c_hoistedGlobal = *c4_BatRstReqFault;
  c4_c_u = c4_c_hoistedGlobal;
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", &c4_c_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_d_hoistedGlobal = *c4_IPT_Enable;
  c4_d_u = c4_d_hoistedGlobal;
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y", &c4_d_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 3, c4_e_y);
  c4_e_hoistedGlobal = *c4_MCNeg;
  c4_e_u = c4_e_hoistedGlobal;
  c4_f_y = NULL;
  sf_mex_assign(&c4_f_y, sf_mex_create("y", &c4_e_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 4, c4_f_y);
  c4_f_hoistedGlobal = *c4_MCPos;
  c4_f_u = c4_f_hoistedGlobal;
  c4_g_y = NULL;
  sf_mex_assign(&c4_g_y, sf_mex_create("y", &c4_f_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 5, c4_g_y);
  c4_g_hoistedGlobal = *c4_PrcC;
  c4_g_u = c4_g_hoistedGlobal;
  c4_h_y = NULL;
  sf_mex_assign(&c4_h_y, sf_mex_create("y", &c4_g_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 6, c4_h_y);
  c4_h_hoistedGlobal = *c4_PrcTOutFault;
  c4_h_u = c4_h_hoistedGlobal;
  c4_i_y = NULL;
  sf_mex_assign(&c4_i_y, sf_mex_create("y", &c4_h_u, 11, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 7, c4_i_y);
  c4_i_hoistedGlobal = chartInstance->c4_cnt;
  c4_i_u = c4_i_hoistedGlobal;
  c4_j_y = NULL;
  sf_mex_assign(&c4_j_y, sf_mex_create("y", &c4_i_u, 6, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 8, c4_j_y);
  c4_j_hoistedGlobal = chartInstance->c4_is_active_c4_Dyno_IPT_2014;
  c4_j_u = c4_j_hoistedGlobal;
  c4_k_y = NULL;
  sf_mex_assign(&c4_k_y, sf_mex_create("y", &c4_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 9, c4_k_y);
  c4_k_hoistedGlobal = chartInstance->c4_is_c4_Dyno_IPT_2014;
  c4_k_u = c4_k_hoistedGlobal;
  c4_l_y = NULL;
  sf_mex_assign(&c4_l_y, sf_mex_create("y", &c4_k_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c4_y, 10, c4_l_y);
  sf_mex_assign(&c4_st, c4_y);
  return c4_st;
}

static void set_sim_state_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_BatRdy;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_IPT_Enable;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_PrcC;
  boolean_T *c4_PrcTOutFault;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_u = sf_mex_dup(c4_st);
  *c4_AllowKeyOff = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 0)), "AllowKeyOff");
  *c4_BatRdy = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    1)), "BatRdy");
  *c4_BatRstReqFault = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 2)), "BatRstReqFault");
  *c4_IPT_Enable = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 3)), "IPT_Enable");
  *c4_MCNeg = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    4)), "MCNeg");
  *c4_MCPos = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    5)), "MCPos");
  *c4_PrcC = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u,
    6)), "PrcC");
  *c4_PrcTOutFault = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 7)), "PrcTOutFault");
  chartInstance->c4_cnt = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 8)), "cnt");
  chartInstance->c4_is_active_c4_Dyno_IPT_2014 = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 9)),
     "is_active_c4_Dyno_IPT_2014");
  chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 10)),
    "is_c4_Dyno_IPT_2014");
  sf_mex_assign(&chartInstance->c4_setSimStateSideEffectsInfo,
                c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c4_u, 11
     )), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c4_u);
  chartInstance->c4_doSetSimStateSideEffects = 1U;
  c4_update_debugger_state_c4_Dyno_IPT_2014(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void c4_set_sim_state_side_effects_c4_Dyno_IPT_2014
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  if (chartInstance->c4_doSetSimStateSideEffects != 0) {
    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_All_on) {
      chartInstance->c4_tp_All_on = 1U;
    } else {
      chartInstance->c4_tp_All_on = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_PrcFault) {
      chartInstance->c4_tp_PrcFault = 1U;
    } else {
      chartInstance->c4_tp_PrcFault = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_RunTime) {
      chartInstance->c4_tp_RunTime = 1U;
    } else {
      chartInstance->c4_tp_RunTime = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_ShutDownFinal) {
      chartInstance->c4_tp_ShutDownFinal = 1U;
    } else {
      chartInstance->c4_tp_ShutDownFinal = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_ShutdownOne) {
      chartInstance->c4_tp_ShutdownOne = 1U;
    } else {
      chartInstance->c4_tp_ShutdownOne = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StandBy) {
      chartInstance->c4_tp_StandBy = 1U;
    } else {
      chartInstance->c4_tp_StandBy = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StartUpFull) {
      chartInstance->c4_tp_StartUpFull = 1U;
    } else {
      chartInstance->c4_tp_StartUpFull = 0U;
    }

    if (chartInstance->c4_is_c4_Dyno_IPT_2014 == c4_IN_StartUpPre) {
      chartInstance->c4_tp_StartUpPre = 1U;
    } else {
      chartInstance->c4_tp_StartUpPre = 0U;
    }

    chartInstance->c4_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c4_setSimStateSideEffectsInfo);
}

static void sf_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c4_previousEvent;
  boolean_T *c4_BatWakeUp;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_PrcC;
  boolean_T *c4_PrcOK;
  real_T *c4_PrcTOut;
  boolean_T *c4_BatRdy;
  boolean_T *c4_PrcTOutFault;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcTOut = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_PrcOK = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c4_set_sim_state_side_effects_c4_Dyno_IPT_2014(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,3);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_BatWakeUp, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcOK, 4U);
  _SFD_DATA_RANGE_CHECK(*c4_PrcTOut, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcTOutFault, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRstReqFault, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
  c4_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c4_chartstep_c4_Dyno_IPT_2014(chartInstance);
  _sfEvent_ = c4_previousEvent;
  sf_debug_check_for_state_inconsistency(_Dyno_IPT_2014MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c4_chartstep_c4_Dyno_IPT_2014(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  int32_T c4_i0;
  boolean_T c4_b0;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b3;
  boolean_T c4_b4;
  boolean_T c4_b5;
  boolean_T c4_b6;
  int32_T c4_i1;
  boolean_T c4_b7;
  boolean_T c4_b8;
  boolean_T c4_b9;
  boolean_T c4_b10;
  boolean_T c4_b11;
  boolean_T c4_b12;
  boolean_T c4_b13;
  int32_T c4_i2;
  int32_T c4_i3;
  boolean_T c4_b14;
  boolean_T c4_b15;
  boolean_T c4_b16;
  boolean_T c4_b17;
  boolean_T c4_b18;
  boolean_T *c4_PrcC;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_BatRdy;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_BatWakeUp;
  boolean_T *c4_PrcTOutFault;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,3);
  if ((int16_T)chartInstance->c4_is_active_c4_Dyno_IPT_2014 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,3);
    chartInstance->c4_is_active_c4_Dyno_IPT_2014 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
    chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_StandBy;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c4_tp_StandBy = 1U;
  } else {
    switch (chartInstance->c4_is_c4_Dyno_IPT_2014) {
     case c4_IN_All_on:
      CV_CHART_EVAL(3,0,1);
      c4_All_on(chartInstance);
      break;

     case c4_IN_PrcFault:
      CV_CHART_EVAL(3,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c4_tp_PrcFault = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_ShutdownOne;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c4_tp_ShutdownOne = 1U;
      chartInstance->c4_cnt = 0;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
      c4_i0 = chartInstance->c4_cnt;
      sf_mex_printf("%s =\\n", "cnt");
      sf_mex_call_debug("disp", 0U, 1U, 12, c4_i0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c4_IN_RunTime:
      CV_CHART_EVAL(3,0,3);
      c4_RunTime(chartInstance);
      break;

     case c4_IN_ShutDownFinal:
      CV_CHART_EVAL(3,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      *c4_PrcC = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
      c4_b0 = *c4_PrcC;
      sf_mex_printf("%s =\\n", "PrcC");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b0);
      *c4_MCPos = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
      c4_b1 = *c4_MCPos;
      sf_mex_printf("%s =\\n", "MCPos");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b1);
      *c4_MCNeg = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
      c4_b2 = *c4_MCNeg;
      sf_mex_printf("%s =\\n", "MCNeg");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b2);
      *c4_BatRdy = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
      c4_b3 = *c4_BatRdy;
      sf_mex_printf("%s =\\n", "BatRdy");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b3);
      *c4_BatRstReqFault = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRstReqFault, 9U);
      c4_b4 = *c4_BatRstReqFault;
      sf_mex_printf("%s =\\n", "BatRstReqFault");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b4);
      *c4_AllowKeyOff = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
      c4_b5 = *c4_AllowKeyOff;
      sf_mex_printf("%s =\\n", "AllowKeyOff");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b5);
      *c4_IPT_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
      c4_b6 = *c4_IPT_Enable;
      sf_mex_printf("%s =\\n", "IPT_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     case c4_IN_ShutdownOne:
      CV_CHART_EVAL(3,0,5);
      c4_ShutdownOne(chartInstance);
      break;

     case c4_IN_StandBy:
      CV_CHART_EVAL(3,0,6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,((*c4_BatWakeUp)!=0)))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
        chartInstance->c4_tp_StandBy = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
        chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_StartUpPre;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance->c4_tp_StartUpPre = 1U;
        chartInstance->c4_cnt = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
        c4_i1 = chartInstance->c4_cnt;
        sf_mex_printf("%s =\\n", "cnt");
        sf_mex_call_debug("disp", 0U, 1U, 12, c4_i1);
      } else {
        *c4_PrcC = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
        c4_b7 = *c4_PrcC;
        sf_mex_printf("%s =\\n", "PrcC");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b7);
        *c4_MCPos = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
        c4_b8 = *c4_MCPos;
        sf_mex_printf("%s =\\n", "MCPos");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b8);
        *c4_MCNeg = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
        c4_b9 = *c4_MCNeg;
        sf_mex_printf("%s =\\n", "MCNeg");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b9);
        *c4_BatRdy = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
        c4_b10 = *c4_BatRdy;
        sf_mex_printf("%s =\\n", "BatRdy");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b10);
        *c4_PrcTOutFault = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcTOutFault, 8U);
        c4_b11 = *c4_PrcTOutFault;
        sf_mex_printf("%s =\\n", "PrcTOutFault");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b11);
        *c4_AllowKeyOff = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
        c4_b12 = *c4_AllowKeyOff;
        sf_mex_printf("%s =\\n", "AllowKeyOff");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b12);
        *c4_IPT_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
        c4_b13 = *c4_IPT_Enable;
        sf_mex_printf("%s =\\n", "IPT_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b13);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      break;

     case c4_IN_StartUpFull:
      CV_CHART_EVAL(3,0,7);
      c4_StartUpFull(chartInstance);
      break;

     case c4_IN_StartUpPre:
      CV_CHART_EVAL(3,0,8);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,
            ((chartInstance->c4_cnt > 30)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
        chartInstance->c4_tp_StartUpPre = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
        chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_StartUpFull;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
        chartInstance->c4_tp_StartUpFull = 1U;
        chartInstance->c4_cnt = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
        c4_i2 = chartInstance->c4_cnt;
        sf_mex_printf("%s =\\n", "cnt");
        sf_mex_call_debug("disp", 0U, 1U, 12, c4_i2);
      } else {
        chartInstance->c4_cnt = c4__s32_add__(chartInstance,
          chartInstance->c4_cnt, 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
        c4_i3 = chartInstance->c4_cnt;
        sf_mex_printf("%s =\\n", "cnt");
        sf_mex_call_debug("disp", 0U, 1U, 12, c4_i3);
        *c4_PrcC = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
        c4_b14 = *c4_PrcC;
        sf_mex_printf("%s =\\n", "PrcC");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b14);
        *c4_MCNeg = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
        c4_b15 = *c4_MCNeg;
        sf_mex_printf("%s =\\n", "MCNeg");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b15);
        *c4_MCPos = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
        c4_b16 = *c4_MCPos;
        sf_mex_printf("%s =\\n", "MCPos");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b16);
        *c4_BatRdy = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
        c4_b17 = *c4_BatRdy;
        sf_mex_printf("%s =\\n", "BatRdy");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b17);
        *c4_AllowKeyOff = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
        c4_b18 = *c4_AllowKeyOff;
        sf_mex_printf("%s =\\n", "AllowKeyOff");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b18);
        *c4_IPT_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      break;

     default:
      CV_CHART_EVAL(3,0,0);
      chartInstance->c4_is_c4_Dyno_IPT_2014 = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
}

static void c4_RunTime(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c4_i4;
  boolean_T c4_b19;
  boolean_T c4_b20;
  boolean_T c4_b21;
  boolean_T c4_b22;
  boolean_T c4_b23;
  boolean_T c4_b24;
  boolean_T *c4_BatWakeUp;
  boolean_T *c4_MCPos;
  boolean_T *c4_MCNeg;
  boolean_T *c4_PrcC;
  boolean_T *c4_BatRdy;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
  if (CV_TRANSITION_EVAL(0U, !(_SFD_CCP_CALL(0,0,((*c4_BatWakeUp)!=0)) != 0)) !=
      0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c4_tp_RunTime = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_ShutdownOne;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c4_tp_ShutdownOne = 1U;
    chartInstance->c4_cnt = 0;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
    c4_i4 = chartInstance->c4_cnt;
    sf_mex_printf("%s =\\n", "cnt");
    sf_mex_call_debug("disp", 0U, 1U, 12, c4_i4);
  } else {
    *c4_MCPos = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
    c4_b19 = *c4_MCPos;
    sf_mex_printf("%s =\\n", "MCPos");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b19);
    *c4_MCNeg = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
    c4_b20 = *c4_MCNeg;
    sf_mex_printf("%s =\\n", "MCNeg");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b20);
    *c4_PrcC = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
    c4_b21 = *c4_PrcC;
    sf_mex_printf("%s =\\n", "PrcC");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b21);
    *c4_BatRdy = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
    c4_b22 = *c4_BatRdy;
    sf_mex_printf("%s =\\n", "BatRdy");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b22);
    *c4_AllowKeyOff = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
    c4_b23 = *c4_AllowKeyOff;
    sf_mex_printf("%s =\\n", "AllowKeyOff");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b23);
    *c4_IPT_Enable = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
    c4_b24 = *c4_IPT_Enable;
    sf_mex_printf("%s =\\n", "IPT_Enable");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b24);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c4_All_on(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c4_i5;
  int32_T c4_i6;
  boolean_T c4_b25;
  boolean_T c4_b26;
  boolean_T c4_b27;
  boolean_T c4_b28;
  boolean_T c4_b29;
  boolean_T c4_b30;
  boolean_T *c4_BatWakeUp;
  boolean_T *c4_PrcC;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_BatRdy;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
  if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((chartInstance->c4_cnt >
          75)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 4;
      sf_debug_transition_conflict_check_begin();
      if (!(*c4_BatWakeUp)) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c4_tp_All_on = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_RunTime;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c4_tp_RunTime = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
    if (CV_TRANSITION_EVAL(5U, !(_SFD_CCP_CALL(5,0,((*c4_BatWakeUp)!=0)) != 0))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance->c4_tp_All_on = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_ShutdownOne;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
      chartInstance->c4_tp_ShutdownOne = 1U;
      chartInstance->c4_cnt = 0;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
      c4_i5 = chartInstance->c4_cnt;
      sf_mex_printf("%s =\\n", "cnt");
      sf_mex_call_debug("disp", 0U, 1U, 12, c4_i5);
    } else {
      chartInstance->c4_cnt = c4__s32_add__(chartInstance, chartInstance->c4_cnt,
        1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
      c4_i6 = chartInstance->c4_cnt;
      sf_mex_printf("%s =\\n", "cnt");
      sf_mex_call_debug("disp", 0U, 1U, 12, c4_i6);
      *c4_PrcC = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
      c4_b25 = *c4_PrcC;
      sf_mex_printf("%s =\\n", "PrcC");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b25);
      *c4_MCNeg = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
      c4_b26 = *c4_MCNeg;
      sf_mex_printf("%s =\\n", "MCNeg");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b26);
      *c4_MCPos = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
      c4_b27 = *c4_MCPos;
      sf_mex_printf("%s =\\n", "MCPos");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b27);
      *c4_BatRdy = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
      c4_b28 = *c4_BatRdy;
      sf_mex_printf("%s =\\n", "BatRdy");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b28);
      *c4_AllowKeyOff = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
      c4_b29 = *c4_AllowKeyOff;
      sf_mex_printf("%s =\\n", "AllowKeyOff");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b29);
      *c4_IPT_Enable = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
      c4_b30 = *c4_IPT_Enable;
      sf_mex_printf("%s =\\n", "IPT_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b30);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c4_ShutdownOne(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c4_i7;
  boolean_T c4_b31;
  boolean_T c4_b32;
  boolean_T c4_b33;
  boolean_T c4_b34;
  boolean_T c4_b35;
  boolean_T c4_b36;
  boolean_T c4_b37;
  boolean_T *c4_PrcC;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_BatRdy;
  boolean_T *c4_BatRstReqFault;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
  if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6,0,((chartInstance->c4_cnt >
          50)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c4_tp_ShutdownOne = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_ShutDownFinal;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance->c4_tp_ShutDownFinal = 1U;
  } else {
    chartInstance->c4_cnt = c4__s32_add__(chartInstance, chartInstance->c4_cnt,
      1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
    c4_i7 = chartInstance->c4_cnt;
    sf_mex_printf("%s =\\n", "cnt");
    sf_mex_call_debug("disp", 0U, 1U, 12, c4_i7);
    *c4_PrcC = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
    c4_b31 = *c4_PrcC;
    sf_mex_printf("%s =\\n", "PrcC");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b31);
    *c4_MCNeg = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
    c4_b32 = *c4_MCNeg;
    sf_mex_printf("%s =\\n", "MCNeg");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b32);
    *c4_MCPos = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
    c4_b33 = *c4_MCPos;
    sf_mex_printf("%s =\\n", "MCPos");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b33);
    *c4_BatRdy = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
    c4_b34 = *c4_BatRdy;
    sf_mex_printf("%s =\\n", "BatRdy");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b34);
    *c4_BatRstReqFault = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRstReqFault, 9U);
    c4_b35 = *c4_BatRstReqFault;
    sf_mex_printf("%s =\\n", "BatRstReqFault");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b35);
    *c4_AllowKeyOff = TRUE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
    c4_b36 = *c4_AllowKeyOff;
    sf_mex_printf("%s =\\n", "AllowKeyOff");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b36);
    *c4_IPT_Enable = FALSE;
    _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
    c4_b37 = *c4_IPT_Enable;
    sf_mex_printf("%s =\\n", "IPT_Enable");
    sf_mex_call_debug("disp", 0U, 1U, 3, c4_b37);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
}

static void c4_StartUpFull(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  int32_T c4_i8;
  boolean_T c4_b38;
  boolean_T c4_b39;
  int32_T c4_i9;
  int32_T c4_i10;
  boolean_T c4_b40;
  boolean_T c4_b41;
  boolean_T c4_b42;
  boolean_T c4_b43;
  boolean_T c4_b44;
  boolean_T c4_b45;
  boolean_T *c4_BatWakeUp;
  real_T *c4_PrcTOut;
  boolean_T *c4_PrcOK;
  boolean_T *c4_PrcC;
  boolean_T *c4_MCNeg;
  boolean_T *c4_MCPos;
  boolean_T *c4_BatRdy;
  boolean_T *c4_AllowKeyOff;
  boolean_T *c4_IPT_Enable;
  boolean_T *c4_PrcTOutFault;
  c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c4_PrcTOut = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_PrcOK = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
  if (CV_TRANSITION_EVAL(9U, !(_SFD_CCP_CALL(9,0,((*c4_BatWakeUp)!=0)) != 0)) !=
      0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 9;
      sf_debug_transition_conflict_check_begin();
      if ((real_T)chartInstance->c4_cnt >= *c4_PrcTOut) {
        transitionList[numTransitions] = 8;
        numTransitions++;
      }

      if (*c4_PrcOK) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c4_tp_StartUpFull = 0U;
    chartInstance->c4_is_c4_Dyno_IPT_2014 = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_ShutdownOne;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c4_tp_ShutdownOne = 1U;
    chartInstance->c4_cnt = 0;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
    c4_i8 = chartInstance->c4_cnt;
    sf_mex_printf("%s =\\n", "cnt");
    sf_mex_call_debug("disp", 0U, 1U, 12, c4_i8);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
    if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8,0,(((real_T)
            chartInstance->c4_cnt >= *c4_PrcTOut)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 8;
        sf_debug_transition_conflict_check_begin();
        if (*c4_PrcOK) {
          transitionList[numTransitions] = 7;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
      chartInstance->c4_tp_StartUpFull = 0U;
      chartInstance->c4_is_c4_Dyno_IPT_2014 = (uint8_T)c4_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_PrcFault;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance->c4_tp_PrcFault = 1U;
      *c4_PrcTOutFault = TRUE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcTOutFault, 8U);
      c4_b38 = *c4_PrcTOutFault;
      sf_mex_printf("%s =\\n", "PrcTOutFault");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b38);
      *c4_IPT_Enable = FALSE;
      _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
      c4_b39 = *c4_IPT_Enable;
      sf_mex_printf("%s =\\n", "IPT_Enable");
      sf_mex_call_debug("disp", 0U, 1U, 3, c4_b39);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,((*c4_PrcOK)!=0)))
          != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
        chartInstance->c4_tp_StartUpFull = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
        chartInstance->c4_is_c4_Dyno_IPT_2014 = c4_IN_All_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c4_tp_All_on = 1U;
        chartInstance->c4_cnt = 0;
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
        c4_i9 = chartInstance->c4_cnt;
        sf_mex_printf("%s =\\n", "cnt");
        sf_mex_call_debug("disp", 0U, 1U, 12, c4_i9);
      } else {
        chartInstance->c4_cnt = c4__s32_add__(chartInstance,
          chartInstance->c4_cnt, 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c4_cnt, 6U);
        c4_i10 = chartInstance->c4_cnt;
        sf_mex_printf("%s =\\n", "cnt");
        sf_mex_call_debug("disp", 0U, 1U, 12, c4_i10);
        *c4_PrcC = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_PrcC, 3U);
        c4_b40 = *c4_PrcC;
        sf_mex_printf("%s =\\n", "PrcC");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b40);
        *c4_MCNeg = TRUE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCNeg, 1U);
        c4_b41 = *c4_MCNeg;
        sf_mex_printf("%s =\\n", "MCNeg");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b41);
        *c4_MCPos = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_MCPos, 2U);
        c4_b42 = *c4_MCPos;
        sf_mex_printf("%s =\\n", "MCPos");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b42);
        *c4_BatRdy = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_BatRdy, 7U);
        c4_b43 = *c4_BatRdy;
        sf_mex_printf("%s =\\n", "BatRdy");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b43);
        *c4_AllowKeyOff = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_AllowKeyOff, 10U);
        c4_b44 = *c4_AllowKeyOff;
        sf_mex_printf("%s =\\n", "AllowKeyOff");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b44);
        *c4_IPT_Enable = FALSE;
        _SFD_DATA_RANGE_CHECK((real_T)*c4_IPT_Enable, 11U);
        c4_b45 = *c4_IPT_Enable;
        sf_mex_printf("%s =\\n", "IPT_Enable");
        sf_mex_call_debug("disp", 0U, 1U, 3, c4_b45);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

const mxArray *sf_c4_Dyno_IPT_2014_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c4_nameCaptureInfo;
}

static const mxArray *c4_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  uint8_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((uint8_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_b_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  boolean_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((boolean_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_c_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  real_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((real_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static const mxArray *c4_d_sf_marshall(void *chartInstanceVoid, void *c4_u)
{
  const mxArray *c4_y = NULL;
  int32_T c4_b_u;
  const mxArray *c4_b_y = NULL;
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *)chartInstanceVoid;
  c4_y = NULL;
  c4_b_u = *((int32_T *)c4_u);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_b_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c4_y, c4_b_y);
  return c4_y;
}

static boolean_T c4_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_AllowKeyOff, const char_T *
  c4_name)
{
  boolean_T c4_y;
  boolean_T c4_b46;
  sf_mex_import(c4_name, sf_mex_dup(c4_AllowKeyOff), &c4_b46, 1, 11, 0U, 0, 0U,
                0);
  c4_y = c4_b46;
  sf_mex_destroy(&c4_AllowKeyOff);
  return c4_y;
}

static int32_T c4_b_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_b_cnt, const char_T *c4_name
  )
{
  int32_T c4_y;
  int32_T c4_i11;
  sf_mex_import(c4_name, sf_mex_dup(c4_b_cnt), &c4_i11, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i11;
  sf_mex_destroy(&c4_b_cnt);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_Dyno_IPT_2014
  , const char_T *c4_name)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_name, sf_mex_dup(c4_b_is_active_c4_Dyno_IPT_2014), &c4_u0, 1,
                3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_b_is_active_c4_Dyno_IPT_2014);
  return c4_y;
}

static const mxArray *c4_d_emlrt_marshallIn(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance, const mxArray *
  c4_b_setSimStateSideEffectsInfo, const char_T *c4_name)
{
  const mxArray *c4_y = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_duplicatearraysafe
                (&c4_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c4_b_setSimStateSideEffectsInfo);
  return c4_y;
}

static int32_T c4__s32_add__(SFc4_Dyno_IPT_2014InstanceStruct *chartInstance,
  int32_T c4_b, int32_T c4_c)
{
  int32_T c4_a;
  c4_a = c4_b + c4_c;
  if (((c4_a ^ c4_b) & (c4_a ^ c4_c)) < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c4_a;
}

static void init_test_point_addr_map(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  chartInstance->c4_testPointAddrMap[0] = &chartInstance->c4_cnt;
  chartInstance->c4_testPointAddrMap[1] = &chartInstance->c4_tp_All_on;
  chartInstance->c4_testPointAddrMap[2] = &chartInstance->c4_tp_PrcFault;
  chartInstance->c4_testPointAddrMap[3] = &chartInstance->c4_tp_RunTime;
  chartInstance->c4_testPointAddrMap[4] = &chartInstance->c4_tp_ShutDownFinal;
  chartInstance->c4_testPointAddrMap[5] = &chartInstance->c4_tp_ShutdownOne;
  chartInstance->c4_testPointAddrMap[6] = &chartInstance->c4_tp_StandBy;
  chartInstance->c4_testPointAddrMap[7] = &chartInstance->c4_tp_StartUpFull;
  chartInstance->c4_testPointAddrMap[8] = &chartInstance->c4_tp_StartUpPre;
}

static void **get_test_point_address_map(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
  return &chartInstance->c4_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc4_Dyno_IPT_2014InstanceStruct *chartInstance)
{
  return &chartInstance->c4_testPointMappingInfo;
}

static void init_dsm_address_info(SFc4_Dyno_IPT_2014InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c4_Dyno_IPT_2014_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2353808805U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2785619076U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3044426325U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3918627953U);
}

mxArray *sf_c4_Dyno_IPT_2014_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(4018646144U);
    pr[1] = (double)(822211056U);
    pr[2] = (double)(864280732U);
    pr[3] = (double)(3997141539U);
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

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c4_Dyno_IPT_2014(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[47],T\"AllowKeyOff\",},{M[1],M[29],T\"BatRdy\",},{M[1],M[32],T\"BatRstReqFault\",},{M[1],M[56],T\"IPT_Enable\",},{M[1],M[17],T\"MCNeg\",},{M[1],M[18],T\"MCPos\",},{M[1],M[19],T\"PrcC\",},{M[1],M[22],T\"PrcTOutFault\",},{M[3],M[23],T\"cnt\",},{M[8],M[0],T\"is_active_c4_Dyno_IPT_2014\",}}",
    "100 S'type','srcId','name','auxInfo'{{M[9],M[0],T\"is_c4_Dyno_IPT_2014\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 11, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_Dyno_IPT_2014_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
    chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Dyno_IPT_2014MachineNumber_,
           4,
           8,
           11,
           12,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "BatWakeUp",0,(MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"MCNeg",0,
                              (MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"MCPos",0,
                              (MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"PrcC",0,
                              (MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"PrcOK",0,
                              (MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"PrcTOut",
                              0,(MexFcnForType)c4_c_sf_marshall);
          _SFD_SET_DATA_PROPS(6,0,0,0,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,"cnt",0,
                              (MexFcnForType)c4_d_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"BatRdy",0,
                              (MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "PrcTOutFault",0,(MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(9,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "BatRstReqFault",0,(MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(10,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "AllowKeyOff",0,(MexFcnForType)c4_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "IPT_Enable",0,(MexFcnForType)c4_b_sf_marshall);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(8);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
        }

        _SFD_CV_INIT_CHART(8,1,0,0);

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

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          boolean_T *c4_BatWakeUp;
          boolean_T *c4_MCNeg;
          boolean_T *c4_MCPos;
          boolean_T *c4_PrcC;
          boolean_T *c4_PrcOK;
          real_T *c4_PrcTOut;
          boolean_T *c4_BatRdy;
          boolean_T *c4_PrcTOutFault;
          boolean_T *c4_BatRstReqFault;
          boolean_T *c4_AllowKeyOff;
          boolean_T *c4_IPT_Enable;
          c4_IPT_Enable = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c4_AllowKeyOff = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            7);
          c4_BatRstReqFault = (boolean_T *)ssGetOutputPortSignal
            (chartInstance->S, 6);
          c4_PrcTOutFault = (boolean_T *)ssGetOutputPortSignal(chartInstance->S,
            5);
          c4_BatRdy = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c4_PrcTOut = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c4_PrcOK = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c4_PrcC = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c4_MCPos = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c4_MCNeg = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c4_BatWakeUp = (boolean_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c4_BatWakeUp);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_MCNeg);
          _SFD_SET_DATA_VALUE_PTR(2U, c4_MCPos);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_PrcC);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_PrcOK);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_PrcTOut);
          _SFD_SET_DATA_VALUE_PTR(6U, &chartInstance->c4_cnt);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_BatRdy);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_PrcTOutFault);
          _SFD_SET_DATA_VALUE_PTR(9U, c4_BatRstReqFault);
          _SFD_SET_DATA_VALUE_PTR(10U, c4_AllowKeyOff);
          _SFD_SET_DATA_VALUE_PTR(11U, c4_IPT_Enable);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_Dyno_IPT_2014MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c4_Dyno_IPT_2014(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc4_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
  initialize_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_Dyno_IPT_2014(void *chartInstanceVar)
{
  enable_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_Dyno_IPT_2014(void *chartInstanceVar)
{
  disable_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_Dyno_IPT_2014(void *chartInstanceVar)
{
  sf_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c4_Dyno_IPT_2014(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_Dyno_IPT_2014
    ((SFc4_Dyno_IPT_2014InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c4_Dyno_IPT_2014();/* state var info */
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

static void sf_internal_set_sim_state_c4_Dyno_IPT_2014(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_Dyno_IPT_2014();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c4_Dyno_IPT_2014(SimStruct* S)
{
  return sf_internal_get_sim_state_c4_Dyno_IPT_2014(S);
}

static void sf_opaque_set_sim_state_c4_Dyno_IPT_2014(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c4_Dyno_IPT_2014(S, st);
}

static void sf_opaque_terminate_c4_Dyno_IPT_2014(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_Dyno_IPT_2014InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_Dyno_IPT_2014(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_Dyno_IPT_2014((SFc4_Dyno_IPT_2014InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("Dyno_IPT_2014","Dyno_IPT_2014",4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("Dyno_IPT_2014","Dyno_IPT_2014",4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("Dyno_IPT_2014",
      "Dyno_IPT_2014",4,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",4,3);
      sf_mark_chart_reusable_outputs(S,"Dyno_IPT_2014","Dyno_IPT_2014",4,8);
    }

    sf_set_rtw_dwork_info(S,"Dyno_IPT_2014","Dyno_IPT_2014",4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1703572711U));
  ssSetChecksum1(S,(1395915757U));
  ssSetChecksum2(S,(3484521200U));
  ssSetChecksum3(S,(3379407893U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c4_Dyno_IPT_2014(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Dyno_IPT_2014", "Dyno_IPT_2014",4);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c4_Dyno_IPT_2014(SimStruct *S)
{
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *)malloc(sizeof
    (SFc4_Dyno_IPT_2014InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc4_Dyno_IPT_2014InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlStart = mdlStart_c4_Dyno_IPT_2014;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_Dyno_IPT_2014;
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

void c4_Dyno_IPT_2014_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_Dyno_IPT_2014(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_Dyno_IPT_2014(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_Dyno_IPT_2014_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "int32_T", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

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
  { 0, 0, "StateflowChart/cnt", "cnt", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/All_on", "All_on", 0, 1, 0, 0, 0 },

  { 2, 0, "StateflowChart/PrcFault", "PrcFault", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/RunTime", "RunTime", 0, 1, 0, 0, 0 },

  { 4, 0, "StateflowChart/ShutDownFinal", "ShutDownFinal", 0, 1, 0, 0, 0 },

  { 5, 0, "StateflowChart/ShutdownOne", "ShutdownOne", 0, 1, 0, 0, 0 },

  { 6, 0, "StateflowChart/StandBy", "StandBy", 0, 1, 0, 0, 0 },

  { 7, 0, "StateflowChart/StartUpFull", "StartUpFull", 0, 1, 0, 0, 0 },

  { 8, 0, "StateflowChart/StartUpPre", "StartUpPre", 0, 1, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    9                                  /* Num Block IO signals */
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
  SFc4_Dyno_IPT_2014InstanceStruct *chartInstance;
  chartInstance = (SFc4_Dyno_IPT_2014InstanceStruct *) ((ChartInfoStruct *)
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
