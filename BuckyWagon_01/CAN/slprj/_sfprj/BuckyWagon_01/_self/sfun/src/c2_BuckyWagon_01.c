/* Include files */

#include "blascompat32.h"
#include "BuckyWagon_01_sfun.h"
#include "c2_BuckyWagon_01.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BuckyWagon_01_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_event_tick                  (0)
#define c2_event_upPressed             (9)
#define c2_event_upReleased            (10)
#define c2_event_menuPressed           (11)
#define c2_event_menuReleased          (12)
#define c2_event_downPressed           (13)
#define c2_event_downReleased          (14)
#define c2_IN_NO_ACTIVE_CHILD          (0U)
#define c2_IN_List_Idle                (2U)
#define c2_IN_List_Wait                (3U)
#define c2_IN_List                     (2U)
#define c2_IN_List_Wait2               (4U)
#define c2_b_IN_List_Idle              (1U)
#define c2_IN_singleNames              (3U)
#define c2_IN_Single_Init              (2U)
#define c2_IN_List_Init                (2U)
#define c2_IN_PowerupDelay             (3U)
#define c2_IN_wait                     (5U)
#define c2_IN_Single                   (6U)
#define c2_IN_Setup                    (5U)
#define c2_IN_setup_Wait               (4U)
#define c2_IN_setup_Idle               (3U)
#define c2_IN_Setup_Init               (1U)
#define c2_IN_wait1                    (7U)
#define c2_IN_dualNames                (3U)
#define c2_IN_Dual_Init                (1U)
#define c2_IN_Dual                     (1U)
#define c2_IN_Quad_Idle                (1U)
#define c2_IN_Quad_Init                (2U)
#define c2_IN_Quad_Names               (3U)
#define c2_IN_Quad                     (4U)
#define c2_IN_wait4                    (10U)
#define c2_IN_wait3                    (9U)
#define c2_IN_wait2                    (8U)
#define c2_IN_select_var               (2U)
#define c2_IN_select_Wait              (3U)
#define c2_IN_select_Idle              (2U)
#define c2_IN_Select_Init              (1U)
#define c2_const_FONT4x6               (0U)
#define c2_const_FONT6x8               (1U)
#define c2_const_FONT8x15              (3U)
#define c2_const_WHITE                 (0U)
#define c2_const_BLACK                 (1U)
#define c2_const_SETUP_TIME            (15U)
#define c2_const_UPDATE_TIME           (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void initialize_params_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *
  chartInstance);
static void enable_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void disable_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_update_debugger_state_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void set_sim_state_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void finalize_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void sf_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_enter_internal_List(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_List(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_exit_internal_List(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_b_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_PowerupDelay(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_enter_atomic_List_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_c_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_exit_atomic_List_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_enter_atomic_Single(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_enter_internal_Single(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_Single(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_exit_atomic_Setup(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_setup_Wait(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_setup_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_exit_atomic_setup_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_enter_atomic_Setup_Init(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_Setup_Init(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_wait1(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_enter_atomic_Dual(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_enter_internal_Dual(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_Dual(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_Quad_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_enter_internal_Quad(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void c2_Quad(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_loadSelect(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_wait4(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_wait3(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_wait2(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void c2_select_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_d_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_e_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_f_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_g_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_h_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_i_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_j_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_k_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_l_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_m_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_n_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_o_sf_marshall(void *chartInstanceVoid, void *c2_u);
static void c2_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  const mxArray *c2_dualIndexO, const char_T *c2_name, uint8_T c2_y[2]);
static uint8_T c2_b_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_fillColor, const char_T *c2_name);
static void c2_c_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_quadIndexO, const char_T *c2_name, uint8_T
  c2_y[4]);
static void c2_d_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_string, const char_T *c2_name, uint8_T c2_y
  [18]);
static void c2_e_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_oldData, const char_T *c2_name, int16_T
  c2_y[6]);
static int32_T c2_f_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_temp, const char_T *c2_name);
static uint16_T c2_g_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_timer, const char_T *c2_name);
static const mxArray *c2_h_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_setSimStateSideEffectsInfo, const char_T
  *c2_name);
static uint8_T c2__u8_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b);
static uint16_T c2__u16_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b);
static int16_T c2__s16_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b);
static void c2_mul_wide_s32(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_in0, int32_T c2_in1, uint32_T *c2_ptrOutBitsHi, uint32_T
  *c2_ptrOutBitsLo);
static int32_T c2_mulv_s32_s32_s32(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, int32_T c2_a, int32_T c2_b);
static int32_T c2__s32_div__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c);
static int32_T c2__s32_add__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c);
static int32_T c2__s32_minus__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c);
static void init_test_point_addr_map(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static void **get_test_point_address_map(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance);
static void init_dsm_address_info(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  int32_T c2_i0;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  uint8_T *c2_mode;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_stringNum;
  uint8_T *c2_font;
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_listIndexO;
  uint8_T *c2_screenO;
  uint8_T *c2_singleIndexO;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_dualIndexO)[2];
  uint8_T (*c2_quadIndexO)[4];
  c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S, 16);
  c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 15);
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  chartInstance->c2_is_Dual = 0U;
  chartInstance->c2_tp_Dual = 0U;
  chartInstance->c2_tp_Dual_Init = 0U;
  chartInstance->c2_tp_List_Idle = 0U;
  chartInstance->c2_tp_dualNames = 0U;
  chartInstance->c2_is_List = 0U;
  chartInstance->c2_tp_List = 0U;
  chartInstance->c2_b_tp_List_Idle = 0U;
  chartInstance->c2_tp_List_Init = 0U;
  chartInstance->c2_tp_List_Wait = 0U;
  chartInstance->c2_tp_List_Wait2 = 0U;
  chartInstance->c2_tp_PowerupDelay = 0U;
  chartInstance->c2_is_Quad = 0U;
  chartInstance->c2_tp_Quad = 0U;
  chartInstance->c2_tp_Quad_Idle = 0U;
  chartInstance->c2_tp_Quad_Init = 0U;
  chartInstance->c2_tp_Quad_Names = 0U;
  chartInstance->c2_is_Setup = 0U;
  chartInstance->c2_tp_Setup = 0U;
  chartInstance->c2_tp_Setup_Init = 0U;
  chartInstance->c2_is_select_var = 0U;
  chartInstance->c2_tp_select_var = 0U;
  chartInstance->c2_tp_Select_Init = 0U;
  chartInstance->c2_tp_select_Idle = 0U;
  chartInstance->c2_tp_select_Wait = 0U;
  chartInstance->c2_tp_setup_Idle = 0U;
  chartInstance->c2_tp_setup_Wait = 0U;
  chartInstance->c2_tp_wait = 0U;
  chartInstance->c2_is_Single = 0U;
  chartInstance->c2_tp_Single = 0U;
  chartInstance->c2_c_tp_List_Idle = 0U;
  chartInstance->c2_tp_Single_Init = 0U;
  chartInstance->c2_tp_singleNames = 0U;
  chartInstance->c2_tp_wait1 = 0U;
  chartInstance->c2_tp_wait2 = 0U;
  chartInstance->c2_tp_wait3 = 0U;
  chartInstance->c2_tp_wait4 = 0U;
  chartInstance->c2_is_active_c2_BuckyWagon_01 = 0U;
  chartInstance->c2_is_c2_BuckyWagon_01 = 0U;
  chartInstance->c2_timer = 0U;
  for (c2_i0 = 0; c2_i0 < 6; c2_i0 = c2_i0 + 1) {
    chartInstance->c2_oldData[c2_i0] = 0;
  }

  chartInstance->c2_temp = 0;
  chartInstance->c2_setupIndex = 0U;
  chartInstance->c2_setupVIndex = 0U;
  chartInstance->c2_selectIndex = 0U;
  chartInstance->c2_selectVIndex = 0U;
  chartInstance->c2_FONT4x6 = 0U;
  chartInstance->c2_FONT6x8 = 1U;
  chartInstance->c2_FONT8x15 = 3U;
  chartInstance->c2_WHITE = 0U;
  chartInstance->c2_BLACK = 1U;
  chartInstance->c2_SETUP_TIME = 15U;
  chartInstance->c2_UPDATE_TIME = 2U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c2_mode = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c2_x0 = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c2_x1 = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c2_y0 = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c2_y1 = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c2_lineColor = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c2_fillColor = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 8) != 0)) {
    *c2_stringNum = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 9) != 0)) {
    for (c2_i1 = 0; c2_i1 < 18; c2_i1 = c2_i1 + 1) {
      (*c2_string)[c2_i1] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 10) != 0)) {
    *c2_font = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 11) != 0)) {
    *c2_hCenter = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 12) != 0)) {
    *c2_vCenter = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 13) != 0)) {
    *c2_listIndexO = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 14) != 0)) {
    *c2_screenO = 0U;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 15) != 0)) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2 = c2_i2 + 1) {
      (*c2_dualIndexO)[c2_i2] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 16) != 0)) {
    for (c2_i3 = 0; c2_i3 < 4; c2_i3 = c2_i3 + 1) {
      (*c2_quadIndexO)[c2_i3] = 0U;
    }
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 17) != 0)) {
    *c2_singleIndexO = 0U;
  }
}

static void initialize_params_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *
  chartInstance)
{
}

static void enable_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  sf_call_output_fcn_enable(chartInstance->S, 0, "setMode", 0);
  sf_call_output_fcn_enable(chartInstance->S, 1, "clearScreen", 0);
  sf_call_output_fcn_enable(chartInstance->S, 2, "drawRect", 0);
  sf_call_output_fcn_enable(chartInstance->S, 3, "drawBitmap", 0);
  sf_call_output_fcn_enable(chartInstance->S, 4, "sendString", 0);
  sf_call_output_fcn_enable(chartInstance->S, 5, "drawString", 0);
  sf_call_output_fcn_enable(chartInstance->S, 6, "drawVLine", 0);
  sf_call_output_fcn_enable(chartInstance->S, 7, "drawHLine", 0);
  sf_call_output_fcn_enable(chartInstance->S, 8, "writeListIndex", 0);
  sf_call_output_fcn_enable(chartInstance->S, 9, "writeScreen", 0);
  sf_call_output_fcn_enable(chartInstance->S, 10, "writeDualIndex", 0);
  sf_call_output_fcn_enable(chartInstance->S, 11, "writeSingleIndex", 0);
  sf_call_output_fcn_enable(chartInstance->S, 12, "writeQuadIndex", 0);
}

static void disable_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  sf_call_output_fcn_disable(chartInstance->S, 0, "setMode", 0);
  sf_call_output_fcn_disable(chartInstance->S, 1, "clearScreen", 0);
  sf_call_output_fcn_disable(chartInstance->S, 2, "drawRect", 0);
  sf_call_output_fcn_disable(chartInstance->S, 3, "drawBitmap", 0);
  sf_call_output_fcn_disable(chartInstance->S, 4, "sendString", 0);
  sf_call_output_fcn_disable(chartInstance->S, 5, "drawString", 0);
  sf_call_output_fcn_disable(chartInstance->S, 6, "drawVLine", 0);
  sf_call_output_fcn_disable(chartInstance->S, 7, "drawHLine", 0);
  sf_call_output_fcn_disable(chartInstance->S, 8, "writeListIndex", 0);
  sf_call_output_fcn_disable(chartInstance->S, 9, "writeScreen", 0);
  sf_call_output_fcn_disable(chartInstance->S, 10, "writeDualIndex", 0);
  sf_call_output_fcn_disable(chartInstance->S, 11, "writeSingleIndex", 0);
  sf_call_output_fcn_disable(chartInstance->S, 12, "writeQuadIndex", 0);
}

static void c2_update_debugger_state_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint32_T c2_prevAniVal;
  c2_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c2_is_active_c2_BuckyWagon_01 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_Dual == c2_IN_List_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
  }

  if (chartInstance->c2_is_List == c2_IN_List_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_List) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
  }

  if (chartInstance->c2_is_List == c2_IN_List_Wait2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
  }

  if (chartInstance->c2_is_List == c2_b_IN_List_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  }

  if (chartInstance->c2_is_Single == c2_IN_singleNames) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,28);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,28);
  }

  if (chartInstance->c2_is_Single == c2_IN_Single_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,27);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,27);
  }

  if (chartInstance->c2_is_List == c2_IN_List_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_PowerupDelay) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
  }

  if (chartInstance->c2_is_Single == c2_b_IN_List_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,26);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,26);
  }

  if (chartInstance->c2_is_Setup == c2_IN_wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,24);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,24);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Single) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,25);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,25);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Setup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,14);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,14);
  }

  if (chartInstance->c2_is_Setup == c2_IN_setup_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,22);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,22);
  }

  if (chartInstance->c2_is_Setup == c2_IN_setup_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,21);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
  }

  if (chartInstance->c2_is_Setup == c2_IN_Setup_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,15);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,15);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,29);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,29);
  }

  if (chartInstance->c2_is_Dual == c2_IN_dualNames) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
  }

  if (chartInstance->c2_is_Dual == c2_IN_Dual_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Dual) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
  }

  if (chartInstance->c2_is_Quad == c2_IN_Quad_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
  }

  if (chartInstance->c2_is_Quad == c2_IN_Quad_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,12);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
  }

  if (chartInstance->c2_is_Quad == c2_IN_Quad_Names) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Quad) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,32);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,32);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,31);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,31);
  }

  if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,30);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,30);
  }

  if (chartInstance->c2_is_Setup == c2_IN_select_var) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,17);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,17);
  }

  if (chartInstance->c2_is_select_var == c2_IN_select_Wait) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,20);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,20);
  }

  if (chartInstance->c2_is_select_var == c2_IN_select_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,19);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,19);
  }

  if (chartInstance->c2_is_select_var == c2_IN_Select_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG,18);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG,18);
  }

  sf_debug_set_animation(c2_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  int32_T c2_i4;
  uint8_T c2_hoistedGlobal[2];
  int32_T c2_i5;
  uint8_T c2_u[2];
  const mxArray *c2_b_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  uint8_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  uint8_T c2_c_hoistedGlobal;
  uint8_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  uint8_T c2_d_hoistedGlobal;
  uint8_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  uint8_T c2_e_hoistedGlobal;
  uint8_T c2_e_u;
  const mxArray *c2_f_y = NULL;
  uint8_T c2_f_hoistedGlobal;
  uint8_T c2_f_u;
  const mxArray *c2_g_y = NULL;
  uint8_T c2_g_hoistedGlobal;
  uint8_T c2_g_u;
  const mxArray *c2_h_y = NULL;
  int32_T c2_i6;
  uint8_T c2_h_hoistedGlobal[4];
  int32_T c2_i7;
  uint8_T c2_h_u[4];
  const mxArray *c2_i_y = NULL;
  uint8_T c2_i_hoistedGlobal;
  uint8_T c2_i_u;
  const mxArray *c2_j_y = NULL;
  uint8_T c2_j_hoistedGlobal;
  uint8_T c2_j_u;
  const mxArray *c2_k_y = NULL;
  int32_T c2_i8;
  uint8_T c2_k_hoistedGlobal[18];
  int32_T c2_i9;
  uint8_T c2_k_u[18];
  const mxArray *c2_l_y = NULL;
  uint8_T c2_l_hoistedGlobal;
  uint8_T c2_l_u;
  const mxArray *c2_m_y = NULL;
  uint8_T c2_m_hoistedGlobal;
  uint8_T c2_m_u;
  const mxArray *c2_n_y = NULL;
  uint8_T c2_n_hoistedGlobal;
  uint8_T c2_n_u;
  const mxArray *c2_o_y = NULL;
  uint8_T c2_o_hoistedGlobal;
  uint8_T c2_o_u;
  const mxArray *c2_p_y = NULL;
  uint8_T c2_p_hoistedGlobal;
  uint8_T c2_p_u;
  const mxArray *c2_q_y = NULL;
  uint8_T c2_q_hoistedGlobal;
  uint8_T c2_q_u;
  const mxArray *c2_r_y = NULL;
  int32_T c2_i10;
  int16_T c2_r_hoistedGlobal[6];
  int32_T c2_i11;
  int16_T c2_r_u[6];
  const mxArray *c2_s_y = NULL;
  uint8_T c2_s_hoistedGlobal;
  uint8_T c2_s_u;
  const mxArray *c2_t_y = NULL;
  uint8_T c2_t_hoistedGlobal;
  uint8_T c2_t_u;
  const mxArray *c2_u_y = NULL;
  uint8_T c2_u_hoistedGlobal;
  uint8_T c2_u_u;
  const mxArray *c2_v_y = NULL;
  uint8_T c2_v_hoistedGlobal;
  uint8_T c2_v_u;
  const mxArray *c2_w_y = NULL;
  int32_T c2_w_hoistedGlobal;
  int32_T c2_w_u;
  const mxArray *c2_x_y = NULL;
  uint16_T c2_x_hoistedGlobal;
  uint16_T c2_x_u;
  const mxArray *c2_y_y = NULL;
  uint8_T c2_y_hoistedGlobal;
  uint8_T c2_y_u;
  const mxArray *c2_ab_y = NULL;
  uint8_T c2_ab_hoistedGlobal;
  uint8_T c2_ab_u;
  const mxArray *c2_bb_y = NULL;
  uint8_T c2_bb_hoistedGlobal;
  uint8_T c2_bb_u;
  const mxArray *c2_cb_y = NULL;
  uint8_T c2_cb_hoistedGlobal;
  uint8_T c2_cb_u;
  const mxArray *c2_db_y = NULL;
  uint8_T c2_db_hoistedGlobal;
  uint8_T c2_db_u;
  const mxArray *c2_eb_y = NULL;
  uint8_T c2_eb_hoistedGlobal;
  uint8_T c2_eb_u;
  const mxArray *c2_fb_y = NULL;
  uint8_T c2_fb_hoistedGlobal;
  uint8_T c2_fb_u;
  const mxArray *c2_gb_y = NULL;
  uint8_T c2_gb_hoistedGlobal;
  uint8_T c2_gb_u;
  const mxArray *c2_hb_y = NULL;
  uint8_T *c2_fillColor;
  uint8_T *c2_font;
  uint8_T *c2_hCenter;
  uint8_T *c2_lineColor;
  uint8_T *c2_listIndexO;
  uint8_T *c2_mode;
  uint8_T *c2_screenO;
  uint8_T *c2_singleIndexO;
  uint8_T *c2_stringNum;
  uint8_T *c2_vCenter;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_quadIndexO)[4];
  uint8_T (*c2_dualIndexO)[2];
  c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S, 16);
  c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 15);
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(32));
  for (c2_i4 = 0; c2_i4 < 2; c2_i4 = c2_i4 + 1) {
    c2_hoistedGlobal[c2_i4] = (*c2_dualIndexO)[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 2; c2_i5 = c2_i5 + 1) {
    c2_u[c2_i5] = c2_hoistedGlobal[c2_i5];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 3, 0U, 1U, 0U, 1, 2));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_fillColor;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = *c2_font;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = *c2_hCenter;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_e_hoistedGlobal = *c2_lineColor;
  c2_e_u = c2_e_hoistedGlobal;
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", &c2_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_f_hoistedGlobal = *c2_listIndexO;
  c2_f_u = c2_f_hoistedGlobal;
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_g_hoistedGlobal = *c2_mode;
  c2_g_u = c2_g_hoistedGlobal;
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", &c2_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 6, c2_h_y);
  for (c2_i6 = 0; c2_i6 < 4; c2_i6 = c2_i6 + 1) {
    c2_h_hoistedGlobal[c2_i6] = (*c2_quadIndexO)[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 4; c2_i7 = c2_i7 + 1) {
    c2_h_u[c2_i7] = c2_h_hoistedGlobal[c2_i7];
  }

  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_h_u, 3, 0U, 1U, 0U, 1, 4));
  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_i_hoistedGlobal = *c2_screenO;
  c2_i_u = c2_i_hoistedGlobal;
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", &c2_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 8, c2_j_y);
  c2_j_hoistedGlobal = *c2_singleIndexO;
  c2_j_u = c2_j_hoistedGlobal;
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y", &c2_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 9, c2_k_y);
  for (c2_i8 = 0; c2_i8 < 18; c2_i8 = c2_i8 + 1) {
    c2_k_hoistedGlobal[c2_i8] = (*c2_string)[c2_i8];
  }

  for (c2_i9 = 0; c2_i9 < 18; c2_i9 = c2_i9 + 1) {
    c2_k_u[c2_i9] = c2_k_hoistedGlobal[c2_i9];
  }

  c2_l_y = NULL;
  sf_mex_assign(&c2_l_y, sf_mex_create("y", &c2_k_u, 3, 0U, 1U, 0U, 1, 18));
  sf_mex_setcell(c2_y, 10, c2_l_y);
  c2_l_hoistedGlobal = *c2_stringNum;
  c2_l_u = c2_l_hoistedGlobal;
  c2_m_y = NULL;
  sf_mex_assign(&c2_m_y, sf_mex_create("y", &c2_l_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 11, c2_m_y);
  c2_m_hoistedGlobal = *c2_vCenter;
  c2_m_u = c2_m_hoistedGlobal;
  c2_n_y = NULL;
  sf_mex_assign(&c2_n_y, sf_mex_create("y", &c2_m_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 12, c2_n_y);
  c2_n_hoistedGlobal = *c2_x0;
  c2_n_u = c2_n_hoistedGlobal;
  c2_o_y = NULL;
  sf_mex_assign(&c2_o_y, sf_mex_create("y", &c2_n_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 13, c2_o_y);
  c2_o_hoistedGlobal = *c2_x1;
  c2_o_u = c2_o_hoistedGlobal;
  c2_p_y = NULL;
  sf_mex_assign(&c2_p_y, sf_mex_create("y", &c2_o_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 14, c2_p_y);
  c2_p_hoistedGlobal = *c2_y0;
  c2_p_u = c2_p_hoistedGlobal;
  c2_q_y = NULL;
  sf_mex_assign(&c2_q_y, sf_mex_create("y", &c2_p_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 15, c2_q_y);
  c2_q_hoistedGlobal = *c2_y1;
  c2_q_u = c2_q_hoistedGlobal;
  c2_r_y = NULL;
  sf_mex_assign(&c2_r_y, sf_mex_create("y", &c2_q_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 16, c2_r_y);
  for (c2_i10 = 0; c2_i10 < 6; c2_i10 = c2_i10 + 1) {
    c2_r_hoistedGlobal[c2_i10] = chartInstance->c2_oldData[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 6; c2_i11 = c2_i11 + 1) {
    c2_r_u[c2_i11] = c2_r_hoistedGlobal[c2_i11];
  }

  c2_s_y = NULL;
  sf_mex_assign(&c2_s_y, sf_mex_create("y", &c2_r_u, 4, 0U, 1U, 0U, 1, 6));
  sf_mex_setcell(c2_y, 17, c2_s_y);
  c2_s_hoistedGlobal = chartInstance->c2_selectIndex;
  c2_s_u = c2_s_hoistedGlobal;
  c2_t_y = NULL;
  sf_mex_assign(&c2_t_y, sf_mex_create("y", &c2_s_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 18, c2_t_y);
  c2_t_hoistedGlobal = chartInstance->c2_selectVIndex;
  c2_t_u = c2_t_hoistedGlobal;
  c2_u_y = NULL;
  sf_mex_assign(&c2_u_y, sf_mex_create("y", &c2_t_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 19, c2_u_y);
  c2_u_hoistedGlobal = chartInstance->c2_setupIndex;
  c2_u_u = c2_u_hoistedGlobal;
  c2_v_y = NULL;
  sf_mex_assign(&c2_v_y, sf_mex_create("y", &c2_u_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 20, c2_v_y);
  c2_v_hoistedGlobal = chartInstance->c2_setupVIndex;
  c2_v_u = c2_v_hoistedGlobal;
  c2_w_y = NULL;
  sf_mex_assign(&c2_w_y, sf_mex_create("y", &c2_v_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 21, c2_w_y);
  c2_w_hoistedGlobal = chartInstance->c2_temp;
  c2_w_u = c2_w_hoistedGlobal;
  c2_x_y = NULL;
  sf_mex_assign(&c2_x_y, sf_mex_create("y", &c2_w_u, 6, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 22, c2_x_y);
  c2_x_hoistedGlobal = chartInstance->c2_timer;
  c2_x_u = c2_x_hoistedGlobal;
  c2_y_y = NULL;
  sf_mex_assign(&c2_y_y, sf_mex_create("y", &c2_x_u, 5, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 23, c2_y_y);
  c2_y_hoistedGlobal = chartInstance->c2_is_active_c2_BuckyWagon_01;
  c2_y_u = c2_y_hoistedGlobal;
  c2_ab_y = NULL;
  sf_mex_assign(&c2_ab_y, sf_mex_create("y", &c2_y_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 24, c2_ab_y);
  c2_ab_hoistedGlobal = chartInstance->c2_is_c2_BuckyWagon_01;
  c2_ab_u = c2_ab_hoistedGlobal;
  c2_bb_y = NULL;
  sf_mex_assign(&c2_bb_y, sf_mex_create("y", &c2_ab_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 25, c2_bb_y);
  c2_bb_hoistedGlobal = chartInstance->c2_is_List;
  c2_bb_u = c2_bb_hoistedGlobal;
  c2_cb_y = NULL;
  sf_mex_assign(&c2_cb_y, sf_mex_create("y", &c2_bb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 26, c2_cb_y);
  c2_cb_hoistedGlobal = chartInstance->c2_is_Single;
  c2_cb_u = c2_cb_hoistedGlobal;
  c2_db_y = NULL;
  sf_mex_assign(&c2_db_y, sf_mex_create("y", &c2_cb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 27, c2_db_y);
  c2_db_hoistedGlobal = chartInstance->c2_is_Setup;
  c2_db_u = c2_db_hoistedGlobal;
  c2_eb_y = NULL;
  sf_mex_assign(&c2_eb_y, sf_mex_create("y", &c2_db_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 28, c2_eb_y);
  c2_eb_hoistedGlobal = chartInstance->c2_is_Dual;
  c2_eb_u = c2_eb_hoistedGlobal;
  c2_fb_y = NULL;
  sf_mex_assign(&c2_fb_y, sf_mex_create("y", &c2_eb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 29, c2_fb_y);
  c2_fb_hoistedGlobal = chartInstance->c2_is_Quad;
  c2_fb_u = c2_fb_hoistedGlobal;
  c2_gb_y = NULL;
  sf_mex_assign(&c2_gb_y, sf_mex_create("y", &c2_fb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 30, c2_gb_y);
  c2_gb_hoistedGlobal = chartInstance->c2_is_select_var;
  c2_gb_u = c2_gb_hoistedGlobal;
  c2_hb_y = NULL;
  sf_mex_assign(&c2_hb_y, sf_mex_create("y", &c2_gb_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 31, c2_hb_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  uint8_T c2_uv0[2];
  int32_T c2_i12;
  uint8_T c2_uv1[4];
  int32_T c2_i13;
  uint8_T c2_uv2[18];
  int32_T c2_i14;
  int16_T c2_iv0[6];
  int32_T c2_i15;
  uint8_T *c2_fillColor;
  uint8_T *c2_font;
  uint8_T *c2_hCenter;
  uint8_T *c2_lineColor;
  uint8_T *c2_listIndexO;
  uint8_T *c2_mode;
  uint8_T *c2_screenO;
  uint8_T *c2_singleIndexO;
  uint8_T *c2_stringNum;
  uint8_T *c2_vCenter;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T (*c2_dualIndexO)[2];
  uint8_T (*c2_quadIndexO)[4];
  uint8_T (*c2_string)[18];
  c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S, 16);
  c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 15);
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)),
                      "dualIndexO", c2_uv0);
  for (c2_i12 = 0; c2_i12 < 2; c2_i12 = c2_i12 + 1) {
    (*c2_dualIndexO)[c2_i12] = c2_uv0[c2_i12];
  }

  *c2_fillColor = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 1)), "fillColor");
  *c2_font = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    2)), "font");
  *c2_hCenter = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 3)), "hCenter");
  *c2_lineColor = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 4)), "lineColor");
  *c2_listIndexO = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 5)), "listIndexO");
  *c2_mode = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    6)), "mode");
  c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 7)),
                        "quadIndexO", c2_uv1);
  for (c2_i13 = 0; c2_i13 < 4; c2_i13 = c2_i13 + 1) {
    (*c2_quadIndexO)[c2_i13] = c2_uv1[c2_i13];
  }

  *c2_screenO = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 8)), "screenO");
  *c2_singleIndexO = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 9)), "singleIndexO");
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 10)),
                        "string", c2_uv2);
  for (c2_i14 = 0; c2_i14 < 18; c2_i14 = c2_i14 + 1) {
    (*c2_string)[c2_i14] = c2_uv2[c2_i14];
  }

  *c2_stringNum = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 11)), "stringNum");
  *c2_vCenter = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 12)), "vCenter");
  *c2_x0 = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    13)), "x0");
  *c2_x1 = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    14)), "x1");
  *c2_y0 = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    15)), "y0");
  *c2_y1 = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    16)), "y1");
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 17)),
                        "oldData", c2_iv0);
  for (c2_i15 = 0; c2_i15 < 6; c2_i15 = c2_i15 + 1) {
    chartInstance->c2_oldData[c2_i15] = c2_iv0[c2_i15];
  }

  chartInstance->c2_selectIndex = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 18)), "selectIndex");
  chartInstance->c2_selectVIndex = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 19)), "selectVIndex");
  chartInstance->c2_setupIndex = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 20)), "setupIndex");
  chartInstance->c2_setupVIndex = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 21)), "setupVIndex");
  chartInstance->c2_temp = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 22)), "temp");
  chartInstance->c2_timer = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 23)), "timer");
  chartInstance->c2_is_active_c2_BuckyWagon_01 = c2_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 24)),
     "is_active_c2_BuckyWagon_01");
  chartInstance->c2_is_c2_BuckyWagon_01 = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 25)),
    "is_c2_BuckyWagon_01");
  chartInstance->c2_is_List = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 26)), "is_List");
  chartInstance->c2_is_Single = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 27)), "is_Single");
  chartInstance->c2_is_Setup = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 28)), "is_Setup");
  chartInstance->c2_is_Dual = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 29)), "is_Dual");
  chartInstance->c2_is_Quad = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 30)), "is_Quad");
  chartInstance->c2_is_select_var = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 31)), "is_select_var");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 32
     )), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_BuckyWagon_01(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_BuckyWagon_01
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Dual) {
      chartInstance->c2_tp_Dual = 1U;
    } else {
      chartInstance->c2_tp_Dual = 0U;
    }

    if (chartInstance->c2_is_Dual == c2_IN_Dual_Init) {
      chartInstance->c2_tp_Dual_Init = 1U;
    } else {
      chartInstance->c2_tp_Dual_Init = 0U;
    }

    if (chartInstance->c2_is_Dual == c2_IN_List_Idle) {
      chartInstance->c2_tp_List_Idle = 1U;
    } else {
      chartInstance->c2_tp_List_Idle = 0U;
    }

    if (chartInstance->c2_is_Dual == c2_IN_dualNames) {
      chartInstance->c2_tp_dualNames = 1U;
    } else {
      chartInstance->c2_tp_dualNames = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_List) {
      chartInstance->c2_tp_List = 1U;
    } else {
      chartInstance->c2_tp_List = 0U;
    }

    if (chartInstance->c2_is_List == c2_b_IN_List_Idle) {
      chartInstance->c2_b_tp_List_Idle = 1U;
    } else {
      chartInstance->c2_b_tp_List_Idle = 0U;
    }

    if (chartInstance->c2_is_List == c2_IN_List_Init) {
      chartInstance->c2_tp_List_Init = 1U;
    } else {
      chartInstance->c2_tp_List_Init = 0U;
    }

    if (chartInstance->c2_is_List == c2_IN_List_Wait) {
      chartInstance->c2_tp_List_Wait = 1U;
    } else {
      chartInstance->c2_tp_List_Wait = 0U;
    }

    if (chartInstance->c2_is_List == c2_IN_List_Wait2) {
      chartInstance->c2_tp_List_Wait2 = 1U;
    } else {
      chartInstance->c2_tp_List_Wait2 = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_PowerupDelay) {
      chartInstance->c2_tp_PowerupDelay = 1U;
    } else {
      chartInstance->c2_tp_PowerupDelay = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Quad) {
      chartInstance->c2_tp_Quad = 1U;
    } else {
      chartInstance->c2_tp_Quad = 0U;
    }

    if (chartInstance->c2_is_Quad == c2_IN_Quad_Idle) {
      chartInstance->c2_tp_Quad_Idle = 1U;
    } else {
      chartInstance->c2_tp_Quad_Idle = 0U;
    }

    if (chartInstance->c2_is_Quad == c2_IN_Quad_Init) {
      chartInstance->c2_tp_Quad_Init = 1U;
    } else {
      chartInstance->c2_tp_Quad_Init = 0U;
    }

    if (chartInstance->c2_is_Quad == c2_IN_Quad_Names) {
      chartInstance->c2_tp_Quad_Names = 1U;
    } else {
      chartInstance->c2_tp_Quad_Names = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Setup) {
      chartInstance->c2_tp_Setup = 1U;
    } else {
      chartInstance->c2_tp_Setup = 0U;
    }

    if (chartInstance->c2_is_Setup == c2_IN_Setup_Init) {
      chartInstance->c2_tp_Setup_Init = 1U;
    } else {
      chartInstance->c2_tp_Setup_Init = 0U;
    }

    if (chartInstance->c2_is_Setup == c2_IN_select_var) {
      chartInstance->c2_tp_select_var = 1U;
    } else {
      chartInstance->c2_tp_select_var = 0U;
    }

    if (chartInstance->c2_is_select_var == c2_IN_Select_Init) {
      chartInstance->c2_tp_Select_Init = 1U;
    } else {
      chartInstance->c2_tp_Select_Init = 0U;
    }

    if (chartInstance->c2_is_select_var == c2_IN_select_Idle) {
      chartInstance->c2_tp_select_Idle = 1U;
    } else {
      chartInstance->c2_tp_select_Idle = 0U;
    }

    if (chartInstance->c2_is_select_var == c2_IN_select_Wait) {
      chartInstance->c2_tp_select_Wait = 1U;
    } else {
      chartInstance->c2_tp_select_Wait = 0U;
    }

    if (chartInstance->c2_is_Setup == c2_IN_setup_Idle) {
      chartInstance->c2_tp_setup_Idle = 1U;
    } else {
      chartInstance->c2_tp_setup_Idle = 0U;
    }

    if (chartInstance->c2_is_Setup == c2_IN_setup_Wait) {
      chartInstance->c2_tp_setup_Wait = 1U;
    } else {
      chartInstance->c2_tp_setup_Wait = 0U;
    }

    if (chartInstance->c2_is_Setup == c2_IN_wait) {
      chartInstance->c2_tp_wait = 1U;
    } else {
      chartInstance->c2_tp_wait = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_Single) {
      chartInstance->c2_tp_Single = 1U;
    } else {
      chartInstance->c2_tp_Single = 0U;
    }

    if (chartInstance->c2_is_Single == c2_b_IN_List_Idle) {
      chartInstance->c2_c_tp_List_Idle = 1U;
    } else {
      chartInstance->c2_c_tp_List_Idle = 0U;
    }

    if (chartInstance->c2_is_Single == c2_IN_Single_Init) {
      chartInstance->c2_tp_Single_Init = 1U;
    } else {
      chartInstance->c2_tp_Single_Init = 0U;
    }

    if (chartInstance->c2_is_Single == c2_IN_singleNames) {
      chartInstance->c2_tp_singleNames = 1U;
    } else {
      chartInstance->c2_tp_singleNames = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait1) {
      chartInstance->c2_tp_wait1 = 1U;
    } else {
      chartInstance->c2_tp_wait1 = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait2) {
      chartInstance->c2_tp_wait2 = 1U;
    } else {
      chartInstance->c2_tp_wait2 = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait3) {
      chartInstance->c2_tp_wait3 = 1U;
    } else {
      chartInstance->c2_tp_wait3 = 0U;
    }

    if (chartInstance->c2_is_c2_BuckyWagon_01 == c2_IN_wait4) {
      chartInstance->c2_tp_wait4 = 1U;
    } else {
      chartInstance->c2_tp_wait4 = 0U;
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i30;
  int32_T c2_previousEvent;
  int32_T c2_b_previousEvent;
  int32_T c2_c_previousEvent;
  int32_T c2_d_previousEvent;
  int32_T c2_e_previousEvent;
  int32_T c2_f_previousEvent;
  int32_T c2_g_previousEvent;
  uint8_T *c2_upTime;
  uint8_T *c2_menuTime;
  uint8_T *c2_downTime;
  uint16_T *c2_startupDelay;
  uint8_T *c2_mode;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_stringNum;
  uint8_T *c2_font;
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_listIndex;
  uint8_T *c2_singleIndex;
  uint8_T *c2_screen;
  uint8_T *c2_numFields;
  uint8_T *c2_listIndexO;
  uint8_T *c2_screenO;
  uint8_T *c2_singleIndexO;
  uint8_T *c2_statusTxtMode;
  int16_T (*c2_data)[18];
  uint8_T (*c2_statusTxt)[10];
  uint8_T (*c2_quadIndexO)[4];
  uint8_T (*c2_dualIndexO)[2];
  int16_T (*c2_barMin)[18];
  int32_T (*c2_barMax)[18];
  uint8_T (*c2_barGraphMode)[18];
  uint8_T (*c2_namesline2)[126];
  uint8_T (*c2_namesline1)[126];
  uint8_T (*c2_names)[180];
  uint8_T (*c2_setupNames)[104];
  uint8_T (*c2_quadIndex)[4];
  uint8_T (*c2_dualIndex)[2];
  uint8_T (*c2_string)[18];
  int8_T *c2_tick;
  int8_T *c2_upPressed;
  int8_T *c2_upReleased;
  int8_T *c2_menuPressed;
  int8_T *c2_menuReleased;
  int8_T *c2_downPressed;
  int8_T *c2_downReleased;
  c2_downReleased = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) +
    6);
  c2_downPressed = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) +
    5);
  c2_menuReleased = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) +
    4);
  c2_menuPressed = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) +
    3);
  c2_upReleased = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) + 2);
  c2_upPressed = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) + 1);
  c2_tick = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 20) + 0);
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S, 16);
  c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 15);
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_barMin = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 16);
  c2_barMax = (int32_T (*)[18])ssGetInputPortSignal(chartInstance->S, 15);
  c2_barGraphMode = (uint8_T (*)[18])ssGetInputPortSignal(chartInstance->S, 14);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_namesline2 = (uint8_T (*)[126])ssGetInputPortSignal(chartInstance->S, 13);
  c2_namesline1 = (uint8_T (*)[126])ssGetInputPortSignal(chartInstance->S, 12);
  c2_numFields = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_setupNames = (uint8_T (*)[104])ssGetInputPortSignal(chartInstance->S, 9);
  c2_screen = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_listIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_downTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_upTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c2_set_sim_state_side_effects_c2_BuckyWagon_01(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,1);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_upTime, 0U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_menuTime, 1U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_downTime, 2U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_startupDelay, 3U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_mode, 4U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  for (c2_i16 = 0; c2_i16 < 18; c2_i16 = c2_i16 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[c2_i16], 12U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_FONT4x6, 14U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_FONT6x8, 15U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_FONT8x15, 16U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_WHITE, 17U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_BLACK, 18U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_listIndex, 21U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_singleIndex, 22U);
  for (c2_i17 = 0; c2_i17 < 2; c2_i17 = c2_i17 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_dualIndex)[c2_i17], 23U);
  }

  for (c2_i18 = 0; c2_i18 < 4; c2_i18 = c2_i18 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_quadIndex)[c2_i18], 24U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_screen, 25U);
  for (c2_i19 = 0; c2_i19 < 104; c2_i19 = c2_i19 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_setupNames)[c2_i19], 26U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_SETUP_TIME, 27U);
  for (c2_i20 = 0; c2_i20 < 180; c2_i20 = c2_i20 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_names)[c2_i20], 28U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_numFields, 29U);
  for (c2_i21 = 0; c2_i21 < 126; c2_i21 = c2_i21 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_namesline1)[c2_i21], 30U);
  }

  for (c2_i22 = 0; c2_i22 < 126; c2_i22 = c2_i22 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_namesline2)[c2_i22], 31U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_UPDATE_TIME, 32U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
  for (c2_i23 = 0; c2_i23 < 6; c2_i23 = c2_i23 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[c2_i23], 34U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_listIndexO, 35U);
  for (c2_i24 = 0; c2_i24 < 18; c2_i24 = c2_i24 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_barGraphMode)[c2_i24], 36U);
  }

  for (c2_i25 = 0; c2_i25 < 18; c2_i25 = c2_i25 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_barMax)[c2_i25], 37U);
  }

  for (c2_i26 = 0; c2_i26 < 18; c2_i26 = c2_i26 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_barMin)[c2_i26], 38U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_temp, 39U);
  _SFD_DATA_RANGE_CHECK((real_T)*c2_screenO, 40U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
  for (c2_i27 = 0; c2_i27 < 2; c2_i27 = c2_i27 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_dualIndexO)[c2_i27], 45U);
  }

  for (c2_i28 = 0; c2_i28 < 4; c2_i28 = c2_i28 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_quadIndexO)[c2_i28], 46U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_singleIndexO, 47U);
  for (c2_i29 = 0; c2_i29 < 10; c2_i29 = c2_i29 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_statusTxt)[c2_i29], 48U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c2_statusTxtMode, 49U);
  for (c2_i30 = 0; c2_i30 < 18; c2_i30 = c2_i30 + 1) {
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_data)[c2_i30], 50U);
  }

  if (*c2_tick != 0) {
    c2_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_tick;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_tick);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_tick);
    _sfEvent_ = c2_previousEvent;
  }

  if (*c2_upPressed == 1) {
    c2_b_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_upPressed;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_upPressed);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_upPressed);
    _sfEvent_ = c2_b_previousEvent;
  }

  if (*c2_upReleased == -1) {
    c2_c_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_upReleased;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_upReleased);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_upReleased);
    _sfEvent_ = c2_c_previousEvent;
  }

  if (*c2_menuPressed == 1) {
    c2_d_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_menuPressed;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_menuPressed);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_menuPressed);
    _sfEvent_ = c2_d_previousEvent;
  }

  if (*c2_menuReleased == -1) {
    c2_e_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_menuReleased;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_menuReleased);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_menuReleased);
    _sfEvent_ = c2_e_previousEvent;
  }

  if (*c2_downPressed == 1) {
    c2_f_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_downPressed;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_downPressed);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_downPressed);
    _sfEvent_ = c2_f_previousEvent;
  }

  if (*c2_downReleased == -1) {
    c2_g_previousEvent = _sfEvent_;
    _sfEvent_ = c2_event_downReleased;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG,c2_event_downReleased);
    c2_c2_BuckyWagon_01(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG,c2_event_downReleased);
    _sfEvent_ = c2_g_previousEvent;
  }

  sf_debug_check_for_state_inconsistency(_BuckyWagon_01MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c2_c2_BuckyWagon_01(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_names)[180];
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_x1;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,1);
  if ((int16_T)chartInstance->c2_is_active_c2_BuckyWagon_01 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,1);
    chartInstance->c2_is_active_c2_BuckyWagon_01 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_PowerupDelay;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
    chartInstance->c2_tp_PowerupDelay = 1U;
    chartInstance->c2_timer = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
  } else {
    switch (chartInstance->c2_is_c2_BuckyWagon_01) {
     case c2_IN_Dual:
      CV_CHART_EVAL(1,0,1);
      c2_Dual(chartInstance);
      break;

     case c2_IN_List:
      CV_CHART_EVAL(1,0,2);
      c2_List(chartInstance);
      break;

     case c2_IN_PowerupDelay:
      CV_CHART_EVAL(1,0,3);
      c2_PowerupDelay(chartInstance);
      break;

     case c2_IN_Quad:
      CV_CHART_EVAL(1,0,4);
      c2_Quad(chartInstance);
      break;

     case c2_IN_Setup:
      CV_CHART_EVAL(1,0,5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,14);
      switch (chartInstance->c2_is_Setup) {
       case c2_IN_Setup_Init:
        CV_STATE_EVAL(14,0,1);
        c2_Setup_Init(chartInstance);
        break;

       case c2_IN_select_var:
        CV_STATE_EVAL(14,0,2);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,17);
        switch (chartInstance->c2_is_select_var) {
         case c2_IN_Select_Init:
          CV_STATE_EVAL(17,0,1);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,18);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,114);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,114);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,108);
          if (CV_TRANSITION_EVAL(108U, (int32_T)_SFD_CCP_CALL(108,0,
                ((chartInstance->c2_selectIndex >=
                  chartInstance->c2_selectVIndex + 6)!=0))
               ) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 108;
              sf_debug_transition_conflict_check_begin();
              if (chartInstance->c2_selectIndex < chartInstance->c2_selectVIndex)
              {
                transitionList[numTransitions] = 107;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,108);
            chartInstance->c2_selectVIndex = c2__u8_s32_(chartInstance,
              chartInstance->c2_selectIndex - 5);
            _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
            *c2_stringNum = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,107);
            if (CV_TRANSITION_EVAL(107U, (int32_T)_SFD_CCP_CALL(107,0,
                  ((chartInstance->c2_selectIndex <
                    chartInstance->c2_selectVIndex)!=0))) !=
                0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,107);
              chartInstance->c2_selectVIndex = chartInstance->c2_selectIndex;
              _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
              *c2_stringNum = 0U;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,109);
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,109);
              *c2_stringNum = 0U;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
            }
          }

          while (1) {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,101);
            if (CV_TRANSITION_EVAL(101U, (int32_T)_SFD_CCP_CALL(101,0,(((int16_T)*
                    c2_stringNum < 6)!=0))) == 0) {
              break;
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,101);
            memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U,
                    10 * (chartInstance->c2_selectVIndex + *c2_stringNum), 0,
                    179, 1
                    , 0)], 10);
            sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
            *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
            _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
            sf_mex_listen_for_ctrl_c(chartInstance->S);
          }

          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,105);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,105);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,18);
          chartInstance->c2_tp_Select_Init = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,18);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,18);
          chartInstance->c2_is_select_var = c2_IN_select_Wait;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,20);
          chartInstance->c2_tp_select_Wait = 1U;
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,18);
          break;

         case c2_IN_select_Idle:
          CV_STATE_EVAL(17,0,2);
          c2_select_Idle(chartInstance);
          break;

         case c2_IN_select_Wait:
          CV_STATE_EVAL(17,0,3);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,20);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,103);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,103);
          *c2_x0 = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
          *c2_y0 = 12U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
          *c2_x1 = 64U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
          *c2_y1 = 53U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
          *c2_lineColor = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
          *c2_fillColor = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
          sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
          *c2_lineColor = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
          *c2_hCenter = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
          *c2_stringNum = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          while (1) {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,100);
            if (CV_TRANSITION_EVAL(100U, (int32_T)_SFD_CCP_CALL(100,0,(((int16_T)*
                    c2_stringNum < 6)!=0))) == 0) {
              break;
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,100);
            *c2_y0 = c2__u8_s32_(chartInstance, 12 + *c2_stringNum * 7);
            _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,102);
            if (CV_TRANSITION_EVAL(102U, (int32_T)_SFD_CCP_CALL(102,0,
                  ((chartInstance->c2_selectVIndex + *c2_stringNum ==
                    chartInstance->
                    c2_selectIndex)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,102);
              *c2_fillColor = c2_const_BLACK;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
              *c2_lineColor = c2_const_WHITE;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
              sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
              *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
              sf_mex_listen_for_ctrl_c(chartInstance->S);
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,104);
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,104);
              *c2_fillColor = c2_const_WHITE;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
              *c2_lineColor = c2_const_BLACK;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
              sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
              *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
              _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
              sf_mex_listen_for_ctrl_c(chartInstance->S);
            }
          }

          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,106);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,106);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,20);
          chartInstance->c2_tp_select_Wait = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,20);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,20);
          chartInstance->c2_is_select_var = c2_IN_select_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,19);
          chartInstance->c2_tp_select_Idle = 1U;
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,20);
          break;

         default:
          CV_STATE_EVAL(17,0,0);
          chartInstance->c2_is_select_var = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,18);
          break;
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,17);
        break;

       case c2_IN_setup_Idle:
        CV_STATE_EVAL(14,0,3);
        c2_setup_Idle(chartInstance);
        break;

       case c2_IN_setup_Wait:
        CV_STATE_EVAL(14,0,4);
        c2_setup_Wait(chartInstance);
        break;

       case c2_IN_wait:
        CV_STATE_EVAL(14,0,5);
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,24);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,45);
        if (CV_TRANSITION_EVAL(45U, (int32_T)_SFD_CCP_CALL(45,0,((_sfEvent_ ==
                c2_event_menuReleased)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,45);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,24);
          chartInstance->c2_tp_wait = 0U;
          chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,24);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,24);
          c2_enter_atomic_Setup_Init(chartInstance);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,24);
        break;

       default:
        CV_STATE_EVAL(14,0,0);
        chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,15);
        break;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,14);
      break;

     case c2_IN_Single:
      CV_CHART_EVAL(1,0,6);
      c2_Single(chartInstance);
      break;

     case c2_IN_wait1:
      CV_CHART_EVAL(1,0,7);
      c2_wait1(chartInstance);
      break;

     case c2_IN_wait2:
      CV_CHART_EVAL(1,0,8);
      c2_wait2(chartInstance);
      break;

     case c2_IN_wait3:
      CV_CHART_EVAL(1,0,9);
      c2_wait3(chartInstance);
      break;

     case c2_IN_wait4:
      CV_CHART_EVAL(1,0,10);
      c2_wait4(chartInstance);
      break;

     default:
      CV_CHART_EVAL(1,0,0);
      chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
}

static void c2_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  uint8_T *c2_stringNum;
  uint8_T *c2_font;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_statusTxt)[10];
  uint8_T *c2_statusTxtMode;
  int16_T (*c2_data)[18];
  uint8_T (*c2_dualIndex)[2];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,149);
  c2_b_temp = (_SFD_CCP_CALL(149,0,((_sfEvent_ == c2_event_tick)!=0)) != 0);
  if (c2_b_temp) {
    c2_b_temp = (_SFD_CCP_CALL(149,1,((chartInstance->c2_timer >=
      c2_const_UPDATE_TIME)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(149U, (int32_T)c2_b_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,149);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    *c2_font = c2_const_FONT6x8;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_fillColor = c2_const_WHITE;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
    *c2_hCenter = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,151);
    if (CV_TRANSITION_EVAL(151U, (int32_T)_SFD_CCP_CALL(151,0,
          ((chartInstance->c2_oldData[0] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_dualIndex)[0], 0, 17, 1,
             0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,151);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,150);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,150);
      sprintf(charPtr(&(*c2_string)[0]), "%d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_dualIndex)[0], 0, 17, 1,
               0)]
              );
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 60U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 10U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 18U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_x0 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[0] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_dualIndex)[0], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[0], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,37);
    if (CV_TRANSITION_EVAL(37U, (int32_T)_SFD_CCP_CALL(37,0,
          ((chartInstance->c2_oldData[1] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK
            (50U, (int32_T)(*c2_dualIndex)[1], 0, 17, 1, 0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,37);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,153);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,153);
      sprintf(charPtr(&(*c2_string)[0]), "%d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_dualIndex)[1], 0, 17, 1,
               0)]
              );
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 60U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 44U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 53U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_x0 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[1] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_dualIndex)[1], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[1], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,31);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,31);
    *c2_y0 = 55U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_y1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
    *c2_x0 = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    *c2_x1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
    memcpy(&(*c2_string)[0], &(*c2_statusTxt)[0], 9);
    (*c2_string)[9] = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[9], 12U);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,94);
    if (CV_TRANSITION_EVAL(94U, (int32_T)_SFD_CCP_CALL(94,0,(((int16_T)
            *c2_statusTxtMode == 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,94);
      *c2_fillColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,38);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,38);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,40);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,40);
    *c2_y0 = 56U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_font = c2_const_FONT4x6;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_x0 = 17U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,36);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,36);
    chartInstance->c2_timer = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
    chartInstance->c2_tp_List_Idle = 0U;
    chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
    chartInstance->c2_is_Dual = c2_IN_List_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
    chartInstance->c2_tp_List_Idle = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,152);
    if (CV_TRANSITION_EVAL(152U, (int32_T)_SFD_CCP_CALL(152,0,((_sfEvent_ ==
            c2_event_tick)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,152);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c2_tp_List_Idle = 0U;
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      chartInstance->c2_timer = c2__u16_s32_(chartInstance,
        chartInstance->c2_timer + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      chartInstance->c2_is_Dual = c2_IN_List_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c2_tp_List_Idle = 1U;
    } else {
      goto label_1;
    }
  }

 label_1:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
}

static void c2_enter_internal_List(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint8_T c2_u0;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T *c2_y0;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  uint8_T *c2_listIndex;
  uint8_T *c2_listIndexO;
  int16_T (*c2_data)[18];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_listIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,78);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,78);
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  c2_u0 = *c2_stringNum;
  sf_mex_printf("%s =\\n", "stringNum");
  sf_mex_call_debug("disp", 0U, 1U, 9, c2_u0);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,76);
    if (CV_TRANSITION_EVAL(76U, (int32_T)_SFD_CCP_CALL(76,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,76);
    chartInstance->c2_oldData[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
      (int32_T)*c2_stringNum, 0, 5, 1, 0)] = c2__s16_s32_(
      chartInstance, (*c2_data)[_SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum +
      *c2_listIndex, 0, 17, 1, 0)] + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[(uint8_T)
                          _SFD_ARRAY_BOUNDS_CHECK(34U, (int32_T)*c2_stringNum, 0,
      5, 1, 0)],
                          34U);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,73);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,73);
  chartInstance->c2_is_List = c2_IN_List_Init;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
  chartInstance->c2_tp_List_Init = 1U;
  sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
  *c2_stringNum = 15U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
  (*c2_string)[5] = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
  sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_x1 = 63U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  *c2_lineColor = c2_const_BLACK;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = c2_const_WHITE;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_vCenter = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  *c2_font = c2_const_FONT4x6;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  *c2_x0 = 32U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
  *c2_listIndexO = *c2_listIndex;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_listIndexO, 35U);
}

static void c2_List(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T c2_u1;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_names)[180];
  uint8_T *c2_listIndexO;
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_x1;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T (*c2_statusTxt)[10];
  uint8_T *c2_statusTxtMode;
  uint8_T *c2_font;
  uint8_T *c2_listIndex;
  int16_T (*c2_data)[18];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_listIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,20);
  if (CV_TRANSITION_EVAL(20U, (int32_T)_SFD_CCP_CALL(20,0,((_sfEvent_ ==
          c2_event_menuPressed)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,20);
    c2_exit_internal_List(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
    chartInstance->c2_tp_List = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_wait4;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,32);
    chartInstance->c2_tp_wait4 = 1U;
  } else {
    switch (chartInstance->c2_is_List) {
     case c2_b_IN_List_Idle:
      CV_STATE_EVAL(4,0,1);
      c2_b_List_Idle(chartInstance);
      break;

     case c2_IN_List_Init:
      CV_STATE_EVAL(4,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,60);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,60);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,68);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,68);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      while (1) {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,70);
        if (CV_TRANSITION_EVAL(70U, (int32_T)_SFD_CCP_CALL(70,0,(((int16_T)
                *c2_stringNum < 6)!=0))) == 0) {
          break;
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,70);
        memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
                (*c2_listIndexO + *c2_stringNum), 0, 179, 1, 0)], 10);
        sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_mex_listen_for_ctrl_c(chartInstance->S);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,72);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,72);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
      chartInstance->c2_tp_List_Init = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      chartInstance->c2_is_List = c2_IN_List_Wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance->c2_tp_List_Wait = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
      break;

     case c2_IN_List_Wait:
      CV_STATE_EVAL(4,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,75);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,75);
      *c2_x0 = 9U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 12U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_x1 = 41U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y1 = 53U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_fillColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_hCenter = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      while (1) {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,77);
        if (CV_TRANSITION_EVAL(77U, (int32_T)_SFD_CCP_CALL(77,0,(((int16_T)
                *c2_stringNum < 6)!=0))) == 0) {
          break;
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,77);
        *c2_y0 = c2__u8_s32_(chartInstance, 12 + *c2_stringNum * 7);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
        sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_mex_listen_for_ctrl_c(chartInstance->S);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,74);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,74);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
      chartInstance->c2_tp_List_Wait = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      chartInstance->c2_is_List = c2_IN_List_Wait2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
      chartInstance->c2_tp_List_Wait2 = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      break;

     case c2_IN_List_Wait2:
      CV_STATE_EVAL(4,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,71);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,71);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      while (1) {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,67);
        if (CV_TRANSITION_EVAL(67U, (int32_T)_SFD_CCP_CALL(67,0,(((int16_T)
                *c2_stringNum < 6)!=0))) == 0) {
          break;
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,67);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,69);
        if (CV_TRANSITION_EVAL(69U, (int32_T)_SFD_CCP_CALL(69,0,
              ((chartInstance->c2_oldData[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
                 (int32_T)*
                 c2_stringNum, 0, 5, 1, 0)] == (*c2_data)
                [_SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum + *c2_listIndex, 0,
                 17, 1, 0)])!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,69);
          *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          sf_mex_listen_for_ctrl_c(chartInstance->S);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,65);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,65);
          sprintf(charPtr(&(*c2_string)[0]), "%-4d", (*c2_data)
                  [_SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum + *c2_listIndex, 0,
                   17, 1, 0)]);
          (*c2_string)[4] = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[4], 12U);
          sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
          *c2_x0 = 42U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
          *c2_x1 = 57U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
          *c2_y0 = c2__u8_s32_(chartInstance, 12 + *c2_stringNum * 7);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
          *c2_y1 = c2__u8_s32_(chartInstance, *c2_y0 + 6);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
          *c2_lineColor = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
          sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
          *c2_lineColor = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
          c2_u1 = *c2_lineColor;
          sf_mex_printf("%s =\\n", "lineColor");
          sf_mex_call_debug("disp", 0U, 1U, 9, c2_u1);
          sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
          chartInstance->c2_oldData[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
            (34U, (int32_T)*c2_stringNum, 0, 5, 1, 0)] = (*c2_data)[
            _SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum + *c2_listIndex, 0, 17, 1,
            0)];
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[(uint8_T)
                                _SFD_ARRAY_BOUNDS_CHECK(34U, (int32_T)
            *c2_stringNum, 0, 5, 1, 0)],
                                34U);
          *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          sf_mex_listen_for_ctrl_c(chartInstance->S);
        }
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,43);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,43);
      *c2_y0 = 55U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 63U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_x0 = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 63U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      memcpy(&(*c2_string)[0], &(*c2_statusTxt)[0], 9);
      (*c2_string)[9] = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[9], 12U);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,42);
      if (CV_TRANSITION_EVAL(42U, (int32_T)_SFD_CCP_CALL(42,0,(((int16_T)
              *c2_statusTxtMode == 1)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,42);
        *c2_fillColor = c2_const_BLACK;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
        *c2_lineColor = c2_const_BLACK;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
        sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
        *c2_lineColor = c2_const_WHITE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,44);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,44);
        *c2_lineColor = c2_const_WHITE;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
        sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
        *c2_lineColor = c2_const_BLACK;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,64);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,64);
      *c2_y0 = 56U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_font = c2_const_FONT4x6;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
      *c2_x0 = 17U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,56);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,56);
      chartInstance->c2_timer = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
      chartInstance->c2_tp_List_Wait2 = 0U;
      chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
      chartInstance->c2_is_List = c2_b_IN_List_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
      chartInstance->c2_b_tp_List_Idle = 1U;
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
      break;

     default:
      CV_STATE_EVAL(4,0,0);
      chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
}

static void c2_exit_internal_List(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  switch (chartInstance->c2_is_List) {
   case c2_b_IN_List_Idle:
    CV_STATE_EVAL(4,1,1);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c2_b_tp_List_Idle = 0U;
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    break;

   case c2_IN_List_Init:
    CV_STATE_EVAL(4,1,2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,6);
    chartInstance->c2_tp_List_Init = 0U;
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,6);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
    break;

   case c2_IN_List_Wait:
    CV_STATE_EVAL(4,1,3);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
    chartInstance->c2_tp_List_Wait = 0U;
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    break;

   case c2_IN_List_Wait2:
    CV_STATE_EVAL(4,1,4);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
    chartInstance->c2_tp_List_Wait2 = 0U;
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
    break;

   default:
    CV_STATE_EVAL(4,1,0);
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    break;
  }
}

static void c2_b_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  uint8_T c2_u2;
  uint8_T *c2_stringNum;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T (*c2_string)[18];
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T (*c2_statusTxt)[10];
  uint8_T *c2_statusTxtMode;
  uint8_T *c2_font;
  uint8_T *c2_listIndex;
  uint8_T *c2_listIndexO;
  uint8_T *c2_numFields;
  uint8_T (*c2_names)[180];
  int16_T (*c2_data)[18];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
  c2_numFields = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_listIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,66);
  c2_b_temp = (_SFD_CCP_CALL(66,0,((_sfEvent_ == c2_event_tick)!=0)) != 0);
  if (c2_b_temp) {
    c2_b_temp = (_SFD_CCP_CALL(66,1,((chartInstance->c2_timer >=
      c2_const_UPDATE_TIME)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(66U, (int32_T)c2_b_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,66);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    *c2_fillColor = c2_const_WHITE;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
    *c2_hCenter = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
    while (1) {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,67);
      if (CV_TRANSITION_EVAL(67U, (int32_T)_SFD_CCP_CALL(67,0,(((int16_T)
              *c2_stringNum < 6)!=0))) == 0) {
        break;
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,67);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,69);
      if (CV_TRANSITION_EVAL(69U, (int32_T)_SFD_CCP_CALL(69,0,
            ((chartInstance->c2_oldData[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
               (int32_T)*
               c2_stringNum, 0, 5, 1, 0)] == (*c2_data)[_SFD_ARRAY_BOUNDS_CHECK
              (50U, *c2_stringNum + *c2_listIndex, 0, 17, 1, 0)])!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,69);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_mex_listen_for_ctrl_c(chartInstance->S);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,65);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,65);
        sprintf(charPtr(&(*c2_string)[0]), "%-4d", (*c2_data)
                [_SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum + *c2_listIndex, 0,
                 17, 1, 0)]);
        (*c2_string)[4] = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[4], 12U);
        sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
        *c2_x0 = 42U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
        *c2_x1 = 57U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
        *c2_y0 = c2__u8_s32_(chartInstance, 12 + *c2_stringNum * 7);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
        *c2_y1 = c2__u8_s32_(chartInstance, *c2_y0 + 6);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
        *c2_lineColor = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
        sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
        *c2_lineColor = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
        c2_u2 = *c2_lineColor;
        sf_mex_printf("%s =\\n", "lineColor");
        sf_mex_call_debug("disp", 0U, 1U, 9, c2_u2);
        sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
        chartInstance->c2_oldData[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
          (int32_T)*c2_stringNum, 0, 5, 1, 0)] = (*c2_data)[
          _SFD_ARRAY_BOUNDS_CHECK(50U, *c2_stringNum + *c2_listIndex, 0, 17, 1,
          0)];
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[(uint8_T)
                              _SFD_ARRAY_BOUNDS_CHECK(34U, (int32_T)
          *c2_stringNum, 0, 5, 1, 0)],
                              34U);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_mex_listen_for_ctrl_c(chartInstance->S);
      }
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,43);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,43);
    *c2_y0 = 55U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_y1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
    *c2_x0 = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    *c2_x1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
    memcpy(&(*c2_string)[0], &(*c2_statusTxt)[0], 9);
    (*c2_string)[9] = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[9], 12U);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,42);
    if (CV_TRANSITION_EVAL(42U, (int32_T)_SFD_CCP_CALL(42,0,(((int16_T)
            *c2_statusTxtMode == 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,42);
      *c2_fillColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,44);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,44);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,64);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,64);
    *c2_y0 = 56U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_font = c2_const_FONT4x6;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_x0 = 17U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,56);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,56);
    chartInstance->c2_timer = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
    chartInstance->c2_b_tp_List_Idle = 0U;
    chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    chartInstance->c2_is_List = c2_b_IN_List_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance->c2_b_tp_List_Idle = 1U;
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    goto label_1;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,55);
    if (CV_TRANSITION_EVAL(55U, (int32_T)_SFD_CCP_CALL(55,0,((_sfEvent_ ==
            c2_event_tick)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 55;
        sf_debug_transition_conflict_check_begin();
        if (_sfEvent_ == c2_event_upPressed) {
          transitionList[numTransitions] = 58;
          numTransitions++;
        }

        if (_sfEvent_ == c2_event_downPressed) {
          transitionList[numTransitions] = 61;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,55);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
      chartInstance->c2_b_tp_List_Idle = 0U;
      chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      chartInstance->c2_timer = c2__u16_s32_(chartInstance,
        chartInstance->c2_timer + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      chartInstance->c2_is_List = c2_b_IN_List_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
      chartInstance->c2_b_tp_List_Idle = 1U;
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      goto label_1;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,58);
      if (CV_TRANSITION_EVAL(58U, (int32_T)_SFD_CCP_CALL(58,0,((_sfEvent_ ==
              c2_event_upPressed)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 58;
          sf_debug_transition_conflict_check_begin();
          if (_sfEvent_ == c2_event_downPressed) {
            transitionList[numTransitions] = 61;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,58);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,57);
        if (CV_TRANSITION_EVAL(57U, (int32_T)_SFD_CCP_CALL(57,0,(((int16_T)
                *c2_listIndex == 0)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,57);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
          chartInstance->c2_b_tp_List_Idle = 0U;
          chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
          chartInstance->c2_is_List = c2_b_IN_List_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
          chartInstance->c2_b_tp_List_Idle = 1U;
          *c2_stringNum = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          goto label_1;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,59);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,59);
          *c2_listIndexO = c2__u8_s32_(chartInstance, *c2_listIndex - 1);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_listIndexO, 35U);
          sf_call_output_fcn_call(chartInstance->S, 8, "writeListIndex", 0);
        }
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,61);
        if (CV_TRANSITION_EVAL(61U, (int32_T)_SFD_CCP_CALL(61,0,((_sfEvent_ ==
                c2_event_downPressed)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,61);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,63);
          if (CV_TRANSITION_EVAL(63U, (int32_T)_SFD_CCP_CALL(63,0,
                ((*c2_listIndex == *c2_numFields - 6)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,63);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
            chartInstance->c2_b_tp_List_Idle = 0U;
            chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
            chartInstance->c2_is_List = c2_b_IN_List_Idle;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
            chartInstance->c2_b_tp_List_Idle = 1U;
            *c2_stringNum = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
            goto label_1;
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,62);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,62);
            *c2_listIndexO = c2__u8_s32_(chartInstance, *c2_listIndex + 1);
            _SFD_DATA_RANGE_CHECK((real_T)*c2_listIndexO, 35U);
            sf_call_output_fcn_call(chartInstance->S, 8, "writeListIndex", 0);
          }
        } else {
          goto label_2;
        }
      }
    }
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,68);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,68);
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,70);
    if (CV_TRANSITION_EVAL(70U, (int32_T)_SFD_CCP_CALL(70,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,70);
    memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
            (*c2_listIndexO + *c2_stringNum), 0, 179, 1, 0)], 10);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,72);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,72);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
  chartInstance->c2_b_tp_List_Idle = 0U;
  chartInstance->c2_is_List = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
  chartInstance->c2_is_List = c2_IN_List_Wait;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
  chartInstance->c2_tp_List_Wait = 1U;
 label_1:
  ;
 label_2:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
}

static void c2_PowerupDelay(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint16_T *c2_startupDelay;
  uint8_T *c2_screen;
  c2_screen = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c2_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,9);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
  if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5,0,
        ((chartInstance->c2_timer >= *c2_startupDelay)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
    if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((int16_T)*c2_screen ==
            1)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 1;
        sf_debug_transition_conflict_check_begin();
        if ((int16_T)*c2_screen == 2) {
          transitionList[numTransitions] = 7;
          numTransitions++;
        }

        if ((int16_T)*c2_screen == 3) {
          transitionList[numTransitions] = 3;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
      chartInstance->c2_tp_PowerupDelay = 0U;
      chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
      chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Single;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,25);
      chartInstance->c2_tp_Single = 1U;
      c2_enter_internal_Single(chartInstance);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,(((int16_T)
              *c2_screen == 2)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_screen == 3) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
        chartInstance->c2_tp_PowerupDelay = 0U;
        chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
        chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Dual;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
        chartInstance->c2_tp_Dual = 1U;
        c2_enter_internal_Dual(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
        if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,(((int16_T)
                *c2_screen == 3)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
          chartInstance->c2_tp_PowerupDelay = 0U;
          chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
          chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Quad;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
          chartInstance->c2_tp_Quad = 1U;
          c2_enter_internal_Quad(chartInstance);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
          chartInstance->c2_tp_PowerupDelay = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
          chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_List;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
          chartInstance->c2_tp_List = 1U;
          c2_enter_internal_List(chartInstance);
        }
      }
    }
  } else {
    chartInstance->c2_timer = c2__u16_s32_(chartInstance,
      chartInstance->c2_timer + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
}

static void c2_enter_atomic_List_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c2_is_Single = c2_b_IN_List_Idle;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,26);
  chartInstance->c2_c_tp_List_Idle = 1U;
}

static void c2_c_List_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  int32_T c2_c_temp;
  int32_T c2_d_temp;
  int32_T c2_e_temp;
  int32_T c2_f_temp;
  boolean_T c2_g_temp;
  boolean_T c2_h_temp;
  uint8_T *c2_stringNum;
  uint8_T *c2_font;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_statusTxt)[10];
  uint8_T *c2_statusTxtMode;
  uint8_T *c2_singleIndex;
  int16_T (*c2_data)[18];
  int16_T (*c2_barMin)[18];
  int32_T (*c2_barMax)[18];
  uint8_T (*c2_barGraphMode)[18];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_barMin = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 16);
  c2_barMax = (int32_T (*)[18])ssGetInputPortSignal(chartInstance->S, 15);
  c2_barGraphMode = (uint8_T (*)[18])ssGetInputPortSignal(chartInstance->S, 14);
  c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,26);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,87);
  c2_b_temp = (_SFD_CCP_CALL(87,0,((_sfEvent_ == c2_event_tick)!=0)) != 0);
  if (c2_b_temp) {
    c2_b_temp = (_SFD_CCP_CALL(87,1,((chartInstance->c2_timer >=
      c2_const_UPDATE_TIME)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(87U, (int32_T)c2_b_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,87);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    *c2_font = c2_const_FONT8x15;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_fillColor = c2_const_WHITE;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
    *c2_hCenter = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,82);
    if (CV_TRANSITION_EVAL(82U, (int32_T)_SFD_CCP_CALL(82,0,
          ((chartInstance->c2_oldData[0] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK
            (50U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,82);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,90);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,90);
      sprintf(charPtr(&(*c2_string)[0]), "%4d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)]);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 64U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 25U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 39U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_fillColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_x0 = 15U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[0] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[0], 34U);
      *c2_x0 = 6U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 58U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 41U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 48U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,91);
      if ((*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
           *c2_singleIndex, 0, 17, 1, 0)] > (*c2_barMax)[(uint8_T)
          _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)])
      {
        c2_c_temp = (*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)*
          c2_singleIndex, 0, 17, 1, 0)];
      } else {
        c2_c_temp = (*c2_barMax)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*
          c2_singleIndex, 0, 17, 1, 0)];
      }

      if (CV_TRANSITION_EVAL(91U, (int32_T)_SFD_CCP_CALL(91,0,(((*c2_data)
              [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)*c2_singleIndex,
               0, 17, 1, 0)] > c2_c_temp)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,91);
        if ((*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
             *c2_singleIndex, 0, 17, 1, 0)] > (*c2_barMax)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)])
        {
          c2_d_temp = (*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
        } else {
          c2_d_temp = (*c2_barMax)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(37U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
        }

        chartInstance->c2_temp = c2__s32_add__(chartInstance, c2__s32_div__
          (chartInstance, c2_mulv_s32_s32_s32(chartInstance,
          c2__s32_minus__(chartInstance, c2_d_temp, (int32_T)(*c2_barMin)
                          [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
          *c2_singleIndex, 0,
          17, 1, 0)]), 52), c2__s32_minus__(chartInstance, (*c2_barMax)[(uint8_T)
          _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17
          , 1, 0)], (int32_T)(*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
          (int32_T)*c2_singleIndex, 0, 17, 1, 0)])), 6);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_temp, 39U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,89);
        if ((*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
             *c2_singleIndex, 0, 17, 1, 0)] < (*c2_barMax)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)])
        {
          c2_e_temp = (*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
        } else {
          c2_e_temp = (*c2_barMax)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(37U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
        }

        if (CV_TRANSITION_EVAL(89U, (int32_T)_SFD_CCP_CALL(89,0,(((*c2_data)
                [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)*c2_singleIndex,
                 0, 17, 1, 0)] < c2_e_temp)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,89);
          if ((*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
               *c2_singleIndex, 0, 17, 1, 0)] < (*c2_barMax)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)])
          {
            c2_f_temp = (*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
              (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
          } else {
            c2_f_temp = (*c2_barMax)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(37U,
              (int32_T)*c2_singleIndex, 0, 17, 1, 0)];
          }

          chartInstance->c2_temp = c2__s32_add__(chartInstance, c2__s32_div__
            (chartInstance, c2_mulv_s32_s32_s32(chartInstance,
            c2__s32_minus__(chartInstance, c2_f_temp, (int32_T)(*c2_barMin)
                            [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
            *c2_singleIndex, 0,
            17, 1, 0)]), 52), c2__s32_minus__(chartInstance, (*c2_barMax)
            [(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0,
            17
            , 1, 0)], (int32_T)(*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)])), 6);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_temp, 39U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,85);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,85);
          chartInstance->c2_temp = c2__s32_add__(chartInstance, c2__s32_div__
            (chartInstance, ((*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(50U
            , (int32_T)*c2_singleIndex, 0, 17, 1, 0)] - (*c2_barMin)[(uint8_T)
                             _SFD_ARRAY_BOUNDS_CHECK(38U, (int32_T)
            *c2_singleIndex, 0, 17, 1, 0
            )]) * 52, c2__s32_minus__(chartInstance, (*c2_barMax)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(37U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)]
            , (int32_T)(*c2_barMin)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(38U,
            (int32_T)*c2_singleIndex, 0, 17, 1, 0)])), 6);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_temp, 39U);
        }
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,92);
      c2_g_temp = (_SFD_CCP_CALL(92,0,(((int16_T)(*c2_barGraphMode)[(uint8_T)
        _SFD_ARRAY_BOUNDS_CHECK(36U, (int32_T)*c2_singleIndex, 0, 17
        , 1, 0)] == 2)!=0)) != 0);
      if (c2_g_temp) {
        c2_g_temp = (_SFD_CCP_CALL(92,1,((chartInstance->c2_temp >= 32)!=0)) !=
                     0);
      }

      if (CV_TRANSITION_EVAL(92U, (int32_T)c2_g_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[4];
          unsigned int numTransitions= 1;
          transitionList[0] = 92;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
               (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 2) {
            if (chartInstance->c2_temp < 32) {
              transitionList[numTransitions] = 86;
              numTransitions++;
              goto label_1;
            }
          }

         label_1:
          ;
          if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
               (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 1) {
            transitionList[numTransitions] = 84;
            numTransitions++;
          }

          if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
               (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 3) {
            transitionList[numTransitions] = 32;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,92);
        *c2_x1 = c2__u8_s32_(chartInstance, chartInstance->c2_temp);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
        *c2_fillColor = c2_const_BLACK;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
        *c2_x0 = 32U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
        sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,86);
        c2_h_temp = (_SFD_CCP_CALL(86,0,(((int16_T)(*c2_barGraphMode)[(uint8_T)
          _SFD_ARRAY_BOUNDS_CHECK(36U, (int32_T)*c2_singleIndex, 0, 17
          , 1, 0)] == 2)!=0)) != 0);
        if (c2_h_temp) {
          c2_h_temp = (_SFD_CCP_CALL(86,1,((chartInstance->c2_temp < 32)!=0)) !=
                       0);
        }

        if (CV_TRANSITION_EVAL(86U, (int32_T)c2_h_temp) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions= 1;
            transitionList[0] = 86;
            sf_debug_transition_conflict_check_begin();
            if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
                 (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 1) {
              transitionList[numTransitions] = 84;
              numTransitions++;
            }

            if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
                 (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 3) {
              transitionList[numTransitions] = 32;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,86);
          *c2_x0 = c2__u8_s32_(chartInstance, chartInstance->c2_temp);
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
          *c2_x1 = 32U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
          *c2_fillColor = c2_const_BLACK;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
          sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,84);
          if (CV_TRANSITION_EVAL(84U, (int32_T)_SFD_CCP_CALL(84,0,(((int16_T)
                  (*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
                   (int32_T)
                   *c2_singleIndex, 0, 17, 1, 0)] == 1)!=0))) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions= 1;
              transitionList[0] = 84;
              sf_debug_transition_conflict_check_begin();
              if ((int16_T)(*c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
                  (36U, (int32_T)*c2_singleIndex, 0, 17, 1, 0)] == 3) {
                transitionList[numTransitions] = 32;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions>1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,84);
            *c2_x0 = c2__u8_s32_(chartInstance, chartInstance->c2_temp);
            _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
            *c2_fillColor = c2_const_BLACK;
            _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
            sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,32);
            if (CV_TRANSITION_EVAL(32U, (int32_T)_SFD_CCP_CALL(32,0,(((int16_T)(*
                     c2_barGraphMode)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(36U,
                     (int32_T)
                     *c2_singleIndex, 0, 17, 1, 0)] == 3)!=0))) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,32);
              *c2_x0 = c2__u8_s32_(chartInstance, chartInstance->c2_temp);
              _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
              sf_call_output_fcn_call(chartInstance->S, 6, "drawVLine", 0);
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,88);
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,88);
              *c2_x1 = c2__u8_s32_(chartInstance, chartInstance->c2_temp);
              _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
              *c2_fillColor = c2_const_BLACK;
              _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
              sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
            }
          }
        }
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,83);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,83);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,79);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,79);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,41);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,41);
    *c2_y0 = 55U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_y1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
    *c2_x0 = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    *c2_x1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
    memcpy(&(*c2_string)[0], &(*c2_statusTxt)[0], 9);
    (*c2_string)[9] = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[9], 12U);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,39);
    if (CV_TRANSITION_EVAL(39U, (int32_T)_SFD_CCP_CALL(39,0,(((int16_T)
            *c2_statusTxtMode == 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,39);
      *c2_fillColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,99);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,99);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_fillColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
    *c2_y0 = 56U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_font = c2_const_FONT4x6;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_x0 = 17U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,80);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,80);
    chartInstance->c2_timer = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
    c2_exit_atomic_List_Idle(chartInstance);
    c2_enter_atomic_List_Idle(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,81);
    if (CV_TRANSITION_EVAL(81U, (int32_T)_SFD_CCP_CALL(81,0,((_sfEvent_ ==
            c2_event_tick)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,81);
      c2_exit_atomic_List_Idle(chartInstance);
      chartInstance->c2_timer = c2__u16_s32_(chartInstance,
        chartInstance->c2_timer + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      c2_enter_atomic_List_Idle(chartInstance);
    } else {
      goto label_2;
    }
  }

 label_2:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,26);
}

static void c2_exit_atomic_List_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,26);
  chartInstance->c2_c_tp_List_Idle = 0U;
  chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,26);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,26);
}

static void c2_enter_atomic_Single(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Single;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,25);
  chartInstance->c2_tp_Single = 1U;
}

static void c2_enter_internal_Single(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  int16_T c2_i31;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_x1;
  uint8_T *c2_singleIndex;
  int16_T (*c2_data)[18];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,35);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,35);
  chartInstance->c2_is_Single = c2_IN_Single_Init;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,27);
  chartInstance->c2_tp_Single_Init = 1U;
  sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
  *c2_stringNum = 15U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
  (*c2_string)[5] = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
  sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_vCenter = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  *c2_font = c2_const_FONT4x6;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  *c2_x0 = 32U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_lineColor = c2_const_BLACK;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = c2_const_WHITE;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_x1 = 64U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  chartInstance->c2_oldData[0] = c2__s16_s32_(chartInstance, (*c2_data)[(uint8_T)
    _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)*c2_singleIndex
    , 0, 17, 1, 0)] + 1);
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[0], 34U);
  c2_i31 = chartInstance->c2_oldData[0];
  sf_mex_printf("%s =\\n", "oldData[0]");
  sf_mex_call_debug("disp", 0U, 1U, 10, c2_i31);
}

static void c2_Single(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_hCenter;
  uint8_T *c2_font;
  uint8_T *c2_x0;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_names)[180];
  uint8_T *c2_singleIndex;
  uint8_T *c2_y0;
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,25);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,47);
  if (CV_TRANSITION_EVAL(47U, (int32_T)_SFD_CCP_CALL(47,0,((_sfEvent_ ==
          c2_event_menuPressed)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,47);
    switch (chartInstance->c2_is_Single) {
     case c2_b_IN_List_Idle:
      CV_STATE_EVAL(25,1,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,26);
      chartInstance->c2_c_tp_List_Idle = 0U;
      chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,26);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,26);
      break;

     case c2_IN_Single_Init:
      CV_STATE_EVAL(25,1,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,27);
      chartInstance->c2_tp_Single_Init = 0U;
      chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,27);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,27);
      break;

     case c2_IN_singleNames:
      CV_STATE_EVAL(25,1,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,28);
      chartInstance->c2_tp_singleNames = 0U;
      chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,28);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,28);
      break;

     default:
      CV_STATE_EVAL(25,1,0);
      chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,26);
      break;
    }

    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,25);
    chartInstance->c2_tp_Single = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,25);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,25);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_wait3;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,31);
    chartInstance->c2_tp_wait3 = 1U;
  } else {
    switch (chartInstance->c2_is_Single) {
     case c2_b_IN_List_Idle:
      CV_STATE_EVAL(25,0,1);
      c2_c_List_Idle(chartInstance);
      break;

     case c2_IN_Single_Init:
      CV_STATE_EVAL(25,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,27);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,34);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,34);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,27);
      chartInstance->c2_tp_Single_Init = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,27);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,27);
      chartInstance->c2_is_Single = c2_IN_singleNames;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,28);
      chartInstance->c2_tp_singleNames = 1U;
      *c2_hCenter = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
      *c2_font = c2_const_FONT6x8;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
      *c2_x0 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
              *c2_singleIndex, 0, 179, 1, 0)], 10);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_y0 = 14U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,27);
      break;

     case c2_IN_singleNames:
      CV_STATE_EVAL(25,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,28);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,93);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,93);
      chartInstance->c2_timer = c2_const_UPDATE_TIME;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,28);
      chartInstance->c2_tp_singleNames = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,28);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,28);
      chartInstance->c2_is_Single = c2_b_IN_List_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,26);
      chartInstance->c2_c_tp_List_Idle = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,28);
      break;

     default:
      CV_STATE_EVAL(25,0,0);
      chartInstance->c2_is_Single = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,26);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,25);
}

static void c2_exit_atomic_Setup(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,14);
  chartInstance->c2_tp_Setup = 0U;
  chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,14);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,14);
}

static void c2_setup_Wait(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_x1;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_stringNum;
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,22);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 12U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x1 = 64U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  *c2_y1 = 53U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
  *c2_lineColor = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
  *c2_lineColor = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
    if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    *c2_y0 = c2__u8_s32_(chartInstance, 12 + *c2_stringNum * 7);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
    if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12,0,
          ((chartInstance->c2_setupVIndex + *c2_stringNum == chartInstance->
            c2_setupIndex)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
      *c2_fillColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_mex_listen_for_ctrl_c(chartInstance->S);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,14);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,14);
      *c2_fillColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_mex_listen_for_ctrl_c(chartInstance->S);
    }
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,16);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,16);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,22);
  chartInstance->c2_tp_setup_Wait = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,22);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,22);
  chartInstance->c2_is_Setup = c2_IN_setup_Idle;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,21);
  chartInstance->c2_tp_setup_Idle = 1U;
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,22);
}

static void c2_setup_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_screen;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_setupNames)[104];
  uint8_T *c2_y0;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  c2_setupNames = (uint8_T (*)[104])ssGetInputPortSignal(chartInstance->S, 9);
  c2_screen = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,21);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,30);
  if (CV_TRANSITION_EVAL(30U, (int32_T)_SFD_CCP_CALL(30,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 30;
      sf_debug_transition_conflict_check_begin();
      if (_sfEvent_ == c2_event_upPressed) {
        transitionList[numTransitions] = 26;
        numTransitions++;
      }

      if (_sfEvent_ == c2_event_downPressed) {
        transitionList[numTransitions] = 23;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,30);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,29);
    if (CV_TRANSITION_EVAL(29U, (int32_T)_SFD_CCP_CALL(29,0,(((int16_T)
            chartInstance->c2_setupIndex == 0)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,29);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1,0,(((int16_T)
              *c2_screen == 1)!=0))) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[3];
          unsigned int numTransitions= 1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)*c2_screen == 2) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          if ((int16_T)*c2_screen == 3) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        c2_exit_atomic_setup_Idle(chartInstance);
        c2_exit_atomic_Setup(chartInstance);
        c2_enter_atomic_Single(chartInstance);
        c2_enter_internal_Single(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
        if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7,0,(((int16_T)
                *c2_screen == 2)!=0))) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[2];
            unsigned int numTransitions= 1;
            transitionList[0] = 7;
            sf_debug_transition_conflict_check_begin();
            if ((int16_T)*c2_screen == 3) {
              transitionList[numTransitions] = 3;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions>1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
          c2_exit_atomic_setup_Idle(chartInstance);
          c2_exit_atomic_Setup(chartInstance);
          c2_enter_atomic_Dual(chartInstance);
          c2_enter_internal_Dual(chartInstance);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
          if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3,0,(((int16_T)
                  *c2_screen == 3)!=0))) != 0) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
            c2_exit_atomic_setup_Idle(chartInstance);
            c2_exit_atomic_Setup(chartInstance);
            chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Quad;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
            chartInstance->c2_tp_Quad = 1U;
            c2_enter_internal_Quad(chartInstance);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
            chartInstance->c2_tp_setup_Idle = 0U;
            chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,14);
            chartInstance->c2_tp_Setup = 0U;
            chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)
              c2_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG,14);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,14);
            chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_List;
            _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
            chartInstance->c2_tp_List = 1U;
            c2_enter_internal_List(chartInstance);
          }
        }
      }
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,33);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,33);
      c2_loadSelect(chartInstance);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
      chartInstance->c2_tp_setup_Idle = 0U;
      chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
      chartInstance->c2_is_Setup = c2_IN_select_var;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,17);
      chartInstance->c2_tp_select_var = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,110);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,110);
      chartInstance->c2_is_select_var = c2_IN_Select_Init;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,18);
      chartInstance->c2_tp_Select_Init = 1U;
      sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
      *c2_stringNum = 15U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
      (*c2_string)[5] = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_y0 = 8U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_x0 = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 63U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      *c2_fillColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
      *c2_y0 = 54U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
      *c2_hCenter = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
      *c2_vCenter = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
      *c2_font = c2_const_FONT4x6;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
      *c2_x0 = 32U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 2U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_selectIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
      chartInstance->c2_selectVIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
    }

    goto label_1;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,26);
    if (CV_TRANSITION_EVAL(26U, (int32_T)_SFD_CCP_CALL(26,0,((_sfEvent_ ==
            c2_event_upPressed)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 26;
        sf_debug_transition_conflict_check_begin();
        if (_sfEvent_ == c2_event_downPressed) {
          transitionList[numTransitions] = 23;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,26);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,27);
      if (CV_TRANSITION_EVAL(27U, (int32_T)_SFD_CCP_CALL(27,0,(((int16_T)
              chartInstance->c2_setupIndex == 0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,27);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
        chartInstance->c2_tp_setup_Idle = 0U;
        chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
        chartInstance->c2_is_Setup = c2_IN_setup_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,21);
        chartInstance->c2_tp_setup_Idle = 1U;
        *c2_stringNum = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        goto label_1;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,25);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,25);
        chartInstance->c2_setupIndex = c2__u8_s32_(chartInstance,
          chartInstance->c2_setupIndex - 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
      }
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,23);
      if (CV_TRANSITION_EVAL(23U, (int32_T)_SFD_CCP_CALL(23,0,((_sfEvent_ ==
              c2_event_downPressed)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,23);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,21);
        if (CV_TRANSITION_EVAL(21U, (int32_T)_SFD_CCP_CALL(21,0,(((int16_T)
                chartInstance->c2_setupIndex == 7)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,21);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
          chartInstance->c2_tp_setup_Idle = 0U;
          chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
          chartInstance->c2_is_Setup = c2_IN_setup_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,21);
          chartInstance->c2_tp_setup_Idle = 1U;
          *c2_stringNum = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
          goto label_1;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,22);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,22);
          chartInstance->c2_setupIndex = c2__u8_s32_(chartInstance,
            chartInstance->c2_setupIndex + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
        }
      } else {
        goto label_2;
      }
    }
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
  if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
        ((chartInstance->c2_setupIndex >= chartInstance->c2_setupVIndex + 6)!=0)))
      != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 18;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c2_setupIndex < chartInstance->c2_setupVIndex) {
        transitionList[numTransitions] = 17;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
    chartInstance->c2_setupVIndex = c2__u8_s32_(chartInstance,
      chartInstance->c2_setupIndex - 5);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
    if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,
          ((chartInstance->c2_setupIndex < chartInstance->c2_setupVIndex)!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
      chartInstance->c2_setupVIndex = chartInstance->c2_setupIndex;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    }
  }

  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
    if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    memcpy(&(*c2_string)[0], &(*c2_setupNames)[_SFD_ARRAY_BOUNDS_CHECK(26U, 13 *
            (chartInstance->c2_setupVIndex + *c2_stringNum), 0, 103
            , 1, 0)], 13);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
  chartInstance->c2_tp_setup_Idle = 0U;
  chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
  chartInstance->c2_is_Setup = c2_IN_setup_Wait;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,22);
  chartInstance->c2_tp_setup_Wait = 1U;
 label_1:
  ;
 label_2:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
}

static void c2_exit_atomic_setup_Idle(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,21);
  chartInstance->c2_tp_setup_Idle = 0U;
  chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,21);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,21);
}

static void c2_enter_atomic_Setup_Init(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T *c2_y0;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  chartInstance->c2_is_Setup = c2_IN_Setup_Init;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,15);
  chartInstance->c2_tp_Setup_Init = 1U;
  sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
  *c2_stringNum = 15U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
  (*c2_string)[5] = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
  sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_x1 = 63U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  *c2_lineColor = c2_const_BLACK;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = c2_const_WHITE;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_vCenter = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  *c2_font = c2_const_FONT4x6;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  *c2_x0 = 32U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
  chartInstance->c2_setupVIndex = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
}

static void c2_Setup_Init(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_setupNames)[104];
  c2_setupNames = (uint8_T (*)[104])ssGetInputPortSignal(chartInstance->S, 9);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,15);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,24);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,24);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,18);
  if (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18,0,
        ((chartInstance->c2_setupIndex >= chartInstance->c2_setupVIndex + 6)!=0)))
      != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 18;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c2_setupIndex < chartInstance->c2_setupVIndex) {
        transitionList[numTransitions] = 17;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,18);
    chartInstance->c2_setupVIndex = c2__u8_s32_(chartInstance,
      chartInstance->c2_setupIndex - 5);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,17);
    if (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17,0,
          ((chartInstance->c2_setupIndex < chartInstance->c2_setupVIndex)!=0)))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,17);
      chartInstance->c2_setupVIndex = chartInstance->c2_setupIndex;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupVIndex, 42U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,19);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,19);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    }
  }

  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
    if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
    memcpy(&(*c2_string)[0], &(*c2_setupNames)[_SFD_ARRAY_BOUNDS_CHECK(26U, 13 *
            (chartInstance->c2_setupVIndex + *c2_stringNum), 0, 103
            , 1, 0)], 13);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,15);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,15);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,15);
  chartInstance->c2_tp_Setup_Init = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,15);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,15);
  chartInstance->c2_is_Setup = c2_IN_setup_Wait;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,22);
  chartInstance->c2_tp_setup_Wait = 1U;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,15);
}

static void c2_wait1(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_screenO;
  uint8_T *c2_menuTime;
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,29);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,54);
  if (CV_TRANSITION_EVAL(54U, (int32_T)_SFD_CCP_CALL(54,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,54);
    *c2_screenO = 2U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_screenO, 40U);
    sf_call_output_fcn_call(chartInstance->S, 9, "writeScreen", 0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,29);
    chartInstance->c2_tp_wait1 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,29);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,29);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Dual;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
    chartInstance->c2_tp_Dual = 1U;
    c2_enter_internal_Dual(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,50);
    if (CV_TRANSITION_EVAL(50U, (int32_T)_SFD_CCP_CALL(50,0,((*c2_menuTime >=
            c2_const_SETUP_TIME)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,50);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,29);
      chartInstance->c2_tp_wait1 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,29);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,29);
      chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Setup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,14);
      chartInstance->c2_tp_Setup = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,46);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,46);
      chartInstance->c2_is_Setup = c2_IN_wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,24);
      chartInstance->c2_tp_wait = 1U;
      sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
      chartInstance->c2_setupIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,29);
}

static void c2_enter_atomic_Dual(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Dual;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
  chartInstance->c2_tp_Dual = 1U;
}

static void c2_enter_internal_Dual(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint8_T c2_u3;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_x1;
  int16_T (*c2_data)[18];
  uint8_T (*c2_dualIndex)[2];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,144);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,144);
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  c2_u3 = *c2_stringNum;
  sf_mex_printf("%s =\\n", "stringNum");
  sf_mex_call_debug("disp", 0U, 1U, 9, c2_u3);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,145);
    if (CV_TRANSITION_EVAL(145U, (int32_T)_SFD_CCP_CALL(145,0,(((int16_T)
            *c2_stringNum < 2)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,145);
    chartInstance->c2_oldData[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
      (int32_T)*c2_stringNum, 0, 5, 1, 0)] = c2__s16_s32_(
      chartInstance, (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*
      c2_dualIndex)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(23U, (
      int32_T)*c2_stringNum, 0, 1, 1, 0)], 0, 17, 1, 0)] + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[(uint8_T)
                          _SFD_ARRAY_BOUNDS_CHECK(34U, (int32_T)*c2_stringNum, 0,
      5, 1, 0)],
                          34U);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,146);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,146);
  chartInstance->c2_is_Dual = c2_IN_Dual_Init;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
  chartInstance->c2_tp_Dual_Init = 1U;
  sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
  *c2_stringNum = 15U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
  (*c2_string)[5] = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
  sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_vCenter = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  *c2_font = c2_const_FONT4x6;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  *c2_x0 = 32U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_lineColor = c2_const_BLACK;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = c2_const_WHITE;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_x1 = 64U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 31U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
}

static void c2_Dual(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_hCenter;
  uint8_T *c2_font;
  uint8_T *c2_x0;
  uint8_T *c2_stringNum;
  uint8_T *c2_y0;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_names)[180];
  uint8_T (*c2_dualIndex)[2];
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,48);
  if (CV_TRANSITION_EVAL(48U, (int32_T)_SFD_CCP_CALL(48,0,((_sfEvent_ ==
          c2_event_menuPressed)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,48);
    switch (chartInstance->c2_is_Dual) {
     case c2_IN_Dual_Init:
      CV_STATE_EVAL(0,1,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c2_tp_Dual_Init = 0U;
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c2_IN_List_Idle:
      CV_STATE_EVAL(0,1,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
      chartInstance->c2_tp_List_Idle = 0U;
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;

     case c2_IN_dualNames:
      CV_STATE_EVAL(0,1,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c2_tp_dualNames = 0U;
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     default:
      CV_STATE_EVAL(0,1,0);
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      break;
    }

    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
    chartInstance->c2_tp_Dual = 0U;
    chartInstance->c2_is_c2_BuckyWagon_01 = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_wait2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,30);
    chartInstance->c2_tp_wait2 = 1U;
  } else {
    switch (chartInstance->c2_is_Dual) {
     case c2_IN_Dual_Init:
      CV_STATE_EVAL(0,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,147);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,147);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance->c2_tp_Dual_Init = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance->c2_is_Dual = c2_IN_dualNames;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
      chartInstance->c2_tp_dualNames = 1U;
      *c2_hCenter = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
      *c2_font = c2_const_FONT6x8;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
      *c2_x0 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
              (*c2_dualIndex)[0], 0, 179, 1, 0)], 10);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_y0 = 20U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
              (*c2_dualIndex)[1], 0, 179, 1, 0)], 10);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_y0 = 34U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      break;

     case c2_IN_List_Idle:
      CV_STATE_EVAL(0,0,2);
      c2_List_Idle(chartInstance);
      break;

     case c2_IN_dualNames:
      CV_STATE_EVAL(0,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,148);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,148);
      chartInstance->c2_timer = c2_const_UPDATE_TIME;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,3);
      chartInstance->c2_tp_dualNames = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,3);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      chartInstance->c2_is_Dual = c2_IN_List_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
      chartInstance->c2_tp_List_Idle = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
      break;

     default:
      CV_STATE_EVAL(0,0,0);
      chartInstance->c2_is_Dual = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void c2_Quad_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  uint8_T *c2_stringNum;
  uint8_T *c2_font;
  uint8_T *c2_fillColor;
  uint8_T *c2_hCenter;
  uint8_T *c2_x0;
  uint8_T *c2_x1;
  uint8_T *c2_y0;
  uint8_T *c2_y1;
  uint8_T *c2_lineColor;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_statusTxt)[10];
  uint8_T *c2_statusTxtMode;
  int16_T (*c2_data)[18];
  uint8_T (*c2_quadIndex)[4];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 18);
  c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S, 17);
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,11);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,133);
  c2_b_temp = (_SFD_CCP_CALL(133,0,((_sfEvent_ == c2_event_tick)!=0)) != 0);
  if (c2_b_temp) {
    c2_b_temp = (_SFD_CCP_CALL(133,1,((chartInstance->c2_timer >=
      c2_const_UPDATE_TIME)!=0)) != 0);
  }

  if (CV_TRANSITION_EVAL(133U, (int32_T)c2_b_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,133);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    *c2_font = c2_const_FONT6x8;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_fillColor = c2_const_WHITE;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
    *c2_hCenter = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,135);
    if (CV_TRANSITION_EVAL(135U, (int32_T)_SFD_CCP_CALL(135,0,
          ((chartInstance->c2_oldData[0] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[0], 0, 17, 1,
             0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,135);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,134);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,134);
      sprintf(charPtr(&(*c2_string)[0]), "%4d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[0], 0, 17, 1,
               0)
              ]);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 5U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 29U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 23U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[0] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_quadIndex)[0], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[0], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,138);
    if (CV_TRANSITION_EVAL(138U, (int32_T)_SFD_CCP_CALL(138,0,
          ((chartInstance->c2_oldData[1] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[1], 0, 17, 1,
             0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,138);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,137);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,137);
      sprintf(charPtr(&(*c2_string)[0]), "%-4d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[1], 0, 17, 1,
               0
               )]);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 32U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 55U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 23U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 30U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[1] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_quadIndex)[1], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[1], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,140);
    if (CV_TRANSITION_EVAL(140U, (int32_T)_SFD_CCP_CALL(140,0,
          ((chartInstance->c2_oldData[2] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[2], 0, 17, 1,
             0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,140);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,139);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,139);
      sprintf(charPtr(&(*c2_string)[0]), "%4d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[2], 0, 17, 1,
               0)
              ]);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 5U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 29U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 33U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 40U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[2] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_quadIndex)[2], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[2], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,143);
    if (CV_TRANSITION_EVAL(143U, (int32_T)_SFD_CCP_CALL(143,0,
          ((chartInstance->c2_oldData[3] == (*c2_data)[(uint8_T)
            _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[3], 0, 17, 1,
             0)])!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,143);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,142);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,142);
      sprintf(charPtr(&(*c2_string)[0]), "%-4d", (*c2_data)[(uint8_T)
              _SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*c2_quadIndex)[3], 0, 17, 1,
               0
               )]);
      sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
      *c2_x0 = 32U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_x1 = 55U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
      *c2_y0 = 33U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_y1 = 40U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
      *c2_lineColor = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      chartInstance->c2_oldData[3] = (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK
        (50U, (int32_T)(*c2_quadIndex)[3], 0, 17, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[3], 34U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,97);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,97);
    *c2_y0 = 55U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_y1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
    *c2_x0 = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    *c2_x1 = 63U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
    memcpy(&(*c2_string)[0], &(*c2_statusTxt)[0], 9);
    (*c2_string)[9] = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[9], 12U);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,98);
    if (CV_TRANSITION_EVAL(98U, (int32_T)_SFD_CCP_CALL(98,0,(((int16_T)
            *c2_statusTxtMode == 1)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,98);
      *c2_fillColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,96);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,96);
      *c2_lineColor = c2_const_WHITE;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
      sf_call_output_fcn_call(chartInstance->S, 2, "drawRect", 0);
      *c2_lineColor = c2_const_BLACK;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,95);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,95);
    *c2_y0 = 56U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
    *c2_font = c2_const_FONT4x6;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
    *c2_x0 = 17U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
    sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,141);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,141);
    chartInstance->c2_timer = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,11);
    chartInstance->c2_tp_Quad_Idle = 0U;
    chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
    chartInstance->c2_is_Quad = c2_IN_Quad_Idle;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
    chartInstance->c2_tp_Quad_Idle = 1U;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,136);
    if (CV_TRANSITION_EVAL(136U, (int32_T)_SFD_CCP_CALL(136,0,((_sfEvent_ ==
            c2_event_tick)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,136);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,11);
      chartInstance->c2_tp_Quad_Idle = 0U;
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
      chartInstance->c2_timer = c2__u16_s32_(chartInstance,
        chartInstance->c2_timer + 1);
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      chartInstance->c2_is_Quad = c2_IN_Quad_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
      chartInstance->c2_tp_Quad_Idle = 1U;
    } else {
      goto label_1;
    }
  }

 label_1:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
}

static void c2_enter_internal_Quad(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  uint8_T c2_u4;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T *c2_hCenter;
  uint8_T *c2_vCenter;
  uint8_T *c2_font;
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_lineColor;
  uint8_T *c2_fillColor;
  uint8_T *c2_x1;
  uint8_T *c2_y1;
  int16_T (*c2_data)[18];
  uint8_T (*c2_quadIndex)[4];
  c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,129);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,129);
  *c2_stringNum = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  c2_u4 = *c2_stringNum;
  sf_mex_printf("%s =\\n", "stringNum");
  sf_mex_call_debug("disp", 0U, 1U, 9, c2_u4);
  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,131);
    if (CV_TRANSITION_EVAL(131U, (int32_T)_SFD_CCP_CALL(131,0,(((int16_T)
            *c2_stringNum < 4)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,131);
    chartInstance->c2_oldData[(int32_T)(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(34U,
      (int32_T)*c2_stringNum, 0, 5, 1, 0)] = c2__s16_s32_(
      chartInstance, (*c2_data)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(50U, (int32_T)(*
      c2_quadIndex)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(24U, (
      int32_T)*c2_stringNum, 0, 3, 1, 0)], 0, 17, 1, 0)] + 1);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_oldData[(uint8_T)
                          _SFD_ARRAY_BOUNDS_CHECK(34U, (int32_T)*c2_stringNum, 0,
      5, 1, 0)],
                          34U);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,132);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,132);
  chartInstance->c2_is_Quad = c2_IN_Quad_Init;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,12);
  chartInstance->c2_tp_Quad_Init = 1U;
  sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
  *c2_stringNum = 15U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  sprintf(charPtr(&(*c2_string)[0]), "UWMAD");
  (*c2_string)[5] = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)(*c2_string)[5], 12U);
  sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
  *c2_hCenter = 1U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
  *c2_vCenter = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_vCenter, 20U);
  *c2_font = c2_const_FONT4x6;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
  *c2_x0 = 32U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_y0 = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_lineColor = c2_const_BLACK;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_lineColor, 9U);
  *c2_fillColor = c2_const_WHITE;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_fillColor, 10U);
  sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_x0 = 0U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  *c2_x1 = 64U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x1, 6U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 31U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  sf_call_output_fcn_call(chartInstance->S, 7, "drawHLine", 0);
  *c2_y0 = 8U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
  *c2_y1 = 54U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_y1, 8U);
  *c2_x0 = 30U;
  _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
  sf_call_output_fcn_call(chartInstance->S, 6, "drawVLine", 0);
}

static void c2_Quad(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_stringNum;
  uint8_T *c2_hCenter;
  uint8_T *c2_x0;
  uint8_T *c2_y0;
  uint8_T *c2_font;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_namesline1)[126];
  uint8_T (*c2_namesline2)[126];
  uint8_T (*c2_quadIndex)[4];
  c2_namesline2 = (uint8_T (*)[126])ssGetInputPortSignal(chartInstance->S, 13);
  c2_namesline1 = (uint8_T (*)[126])ssGetInputPortSignal(chartInstance->S, 12);
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
  c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,10);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,49);
  if (CV_TRANSITION_EVAL(49U, (int32_T)_SFD_CCP_CALL(49,0,((_sfEvent_ ==
          c2_event_menuPressed)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,49);
    switch (chartInstance->c2_is_Quad) {
     case c2_IN_Quad_Idle:
      CV_STATE_EVAL(10,1,1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,11);
      chartInstance->c2_tp_Quad_Idle = 0U;
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,11);
      break;

     case c2_IN_Quad_Init:
      CV_STATE_EVAL(10,1,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,12);
      chartInstance->c2_tp_Quad_Init = 0U;
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
      break;

     case c2_IN_Quad_Names:
      CV_STATE_EVAL(10,1,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,13);
      chartInstance->c2_tp_Quad_Names = 0U;
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
      break;

     default:
      CV_STATE_EVAL(10,1,0);
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
      break;
    }

    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,10);
    chartInstance->c2_tp_Quad = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,10);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_wait1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,29);
    chartInstance->c2_tp_wait1 = 1U;
  } else {
    switch (chartInstance->c2_is_Quad) {
     case c2_IN_Quad_Idle:
      CV_STATE_EVAL(10,0,1);
      c2_Quad_Idle(chartInstance);
      break;

     case c2_IN_Quad_Init:
      CV_STATE_EVAL(10,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,12);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,128);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,128);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      while (1) {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,126);
        if (CV_TRANSITION_EVAL(126U, (int32_T)_SFD_CCP_CALL(126,0,(((int16_T)
                *c2_stringNum < 4)!=0))) == 0) {
          break;
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,126);
        memcpy(&(*c2_string)[0], &(*c2_namesline1)[_SFD_ARRAY_BOUNDS_CHECK(30U,
                7 * (*c2_quadIndex)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(24U, (
                  int32_T)*c2_stringNum, 0, 3, 1, 0)], 0, 125, 1, 0)], 7);
        sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
        memcpy(&(*c2_string)[0], &(*c2_namesline2)[_SFD_ARRAY_BOUNDS_CHECK(31U,
                7 * (*c2_quadIndex)[(uint8_T)_SFD_ARRAY_BOUNDS_CHECK(24U, (
                  int32_T)*c2_stringNum, 0, 3, 1, 0)], 0, 125, 1, 0)], 7);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 4);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
        *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum - 3);
        _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
        sf_mex_listen_for_ctrl_c(chartInstance->S);
      }

      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,127);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,127);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,12);
      chartInstance->c2_tp_Quad_Init = 0U;
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,12);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
      chartInstance->c2_is_Quad = c2_IN_Quad_Names;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,13);
      chartInstance->c2_tp_Quad_Names = 1U;
      *c2_hCenter = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_hCenter, 19U);
      *c2_x0 = 10U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 10U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_x0 = 5U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 16U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 4U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_y0 = 41U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 2U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_x0 = 10U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 47U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 6U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_x0 = 32U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_x0, 5U);
      *c2_y0 = 10U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 1U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_y0 = 16U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 5U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_y0 = 41U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 3U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      *c2_y0 = 47U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_y0, 7U);
      *c2_stringNum = 7U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
      sf_call_output_fcn_call(chartInstance->S, 5, "drawString", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,12);
      break;

     case c2_IN_Quad_Names:
      CV_STATE_EVAL(10,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,13);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,130);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,130);
      chartInstance->c2_timer = c2_const_UPDATE_TIME;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_timer, 33U);
      *c2_font = c2_const_FONT6x8;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_font, 13U);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,13);
      chartInstance->c2_tp_Quad_Names = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,13);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
      chartInstance->c2_is_Quad = c2_IN_Quad_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,11);
      chartInstance->c2_tp_Quad_Idle = 1U;
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,13);
      break;

     default:
      CV_STATE_EVAL(10,0,0);
      chartInstance->c2_is_Quad = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,11);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,10);
}

static void c2_loadSelect(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  uint8_T *c2_singleIndex;
  uint8_T (*c2_quadIndex)[4];
  uint8_T (*c2_dualIndex)[2];
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
  sf_debug_symbol_scope_push(0U, 0U);
  _SFD_CS_CALL(FUNCTION_ACTIVE_TAG,16);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,16);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,119);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,119);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,118);
  if (CV_TRANSITION_EVAL(118U, (int32_T)_SFD_CCP_CALL(118,0,(((int16_T)
          chartInstance->c2_setupIndex == 1)!=0))) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[3];
      unsigned int numTransitions= 1;
      transitionList[0] = 118;
      sf_debug_transition_conflict_check_begin();
      if (((int16_T)chartInstance->c2_setupIndex == 2) || ((int16_T)
           chartInstance->c2_setupIndex == 3)) {
        transitionList[numTransitions] = 120;
        numTransitions++;
      }

      if ((int16_T)chartInstance->c2_setupIndex >= 4) {
        transitionList[numTransitions] = 121;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,118);
    chartInstance->c2_selectIndex = *c2_singleIndex;
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,120);
    c2_b_temp = (_SFD_CCP_CALL(120,0,(((int16_T)chartInstance->c2_setupIndex ==
      2)!=0)) != 0);
    if (!c2_b_temp) {
      c2_b_temp = (_SFD_CCP_CALL(120,1,(((int16_T)chartInstance->c2_setupIndex ==
        3)!=0)) != 0);
    }

    if (CV_TRANSITION_EVAL(120U, (int32_T)c2_b_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 120;
        sf_debug_transition_conflict_check_begin();
        if ((int16_T)chartInstance->c2_setupIndex >= 4) {
          transitionList[numTransitions] = 121;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,120);
      chartInstance->c2_selectIndex = (*c2_dualIndex)[_SFD_ARRAY_BOUNDS_CHECK
        (23U, chartInstance->c2_setupIndex - 2, 0, 1, 1, 0)];
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,121);
      if (CV_TRANSITION_EVAL(121U, (int32_T)_SFD_CCP_CALL(121,0,(((int16_T)
              chartInstance->c2_setupIndex >= 4)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,121);
        chartInstance->c2_selectIndex = (*c2_quadIndex)[_SFD_ARRAY_BOUNDS_CHECK
          (24U, chartInstance->c2_setupIndex - 4, 0, 3, 1, 0)];
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
      }
    }
  }

  _SFD_CS_CALL(FUNCTION_INACTIVE_TAG,16);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,16);
  sf_debug_symbol_scope_pop();
}

static void c2_wait4(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_screenO;
  uint8_T *c2_menuTime;
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,32);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,51);
  if (CV_TRANSITION_EVAL(51U, (int32_T)_SFD_CCP_CALL(51,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,51);
    *c2_screenO = 4U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_screenO, 40U);
    sf_call_output_fcn_call(chartInstance->S, 9, "writeScreen", 0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,32);
    chartInstance->c2_tp_wait4 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,32);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,32);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Quad;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,10);
    chartInstance->c2_tp_Quad = 1U;
    c2_enter_internal_Quad(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
    if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4,0,((*c2_menuTime >=
            c2_const_SETUP_TIME)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,32);
      chartInstance->c2_tp_wait4 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,32);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,32);
      chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Setup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,14);
      chartInstance->c2_tp_Setup = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,46);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,46);
      chartInstance->c2_is_Setup = c2_IN_wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,24);
      chartInstance->c2_tp_wait = 1U;
      sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
      chartInstance->c2_setupIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,32);
}

static void c2_wait3(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_screenO;
  uint8_T *c2_menuTime;
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,31);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,52);
  if (CV_TRANSITION_EVAL(52U, (int32_T)_SFD_CCP_CALL(52,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,52);
    *c2_screenO = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_screenO, 40U);
    sf_call_output_fcn_call(chartInstance->S, 9, "writeScreen", 0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,31);
    chartInstance->c2_tp_wait3 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,31);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,31);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_List;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
    chartInstance->c2_tp_List = 1U;
    c2_enter_internal_List(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    if (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0,0,((*c2_menuTime >=
            c2_const_SETUP_TIME)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,31);
      chartInstance->c2_tp_wait3 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,31);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,31);
      chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Setup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,14);
      chartInstance->c2_tp_Setup = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,46);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,46);
      chartInstance->c2_is_Setup = c2_IN_wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,24);
      chartInstance->c2_tp_wait = 1U;
      sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
      chartInstance->c2_setupIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,31);
}

static void c2_wait2(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  uint8_T *c2_screenO;
  uint8_T *c2_menuTime;
  c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
  c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,30);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,53);
  if (CV_TRANSITION_EVAL(53U, (int32_T)_SFD_CCP_CALL(53,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,53);
    *c2_screenO = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_screenO, 40U);
    sf_call_output_fcn_call(chartInstance->S, 9, "writeScreen", 0);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,30);
    chartInstance->c2_tp_wait2 = 0U;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,30);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,30);
    chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Single;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,25);
    chartInstance->c2_tp_Single = 1U;
    c2_enter_internal_Single(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2,0,((*c2_menuTime >=
            c2_const_SETUP_TIME)!=0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,30);
      chartInstance->c2_tp_wait2 = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,30);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,30);
      chartInstance->c2_is_c2_BuckyWagon_01 = c2_IN_Setup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,14);
      chartInstance->c2_tp_Setup = 1U;
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,46);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,46);
      chartInstance->c2_is_Setup = c2_IN_wait;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,24);
      chartInstance->c2_tp_wait = 1U;
      sf_call_output_fcn_call(chartInstance->S, 1, "clearScreen", 0);
      chartInstance->c2_setupIndex = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_setupIndex, 41U);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,30);
}

static void c2_select_Idle(SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  boolean_T c2_b_temp;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  uint8_T *c2_numFields;
  uint8_T *c2_stringNum;
  uint8_T (*c2_string)[18];
  uint8_T (*c2_names)[180];
  uint8_T *c2_singleIndexO;
  uint8_T (*c2_dualIndexO)[2];
  uint8_T (*c2_quadIndexO)[4];
  uint8_T (*c2_quadIndex)[4];
  uint8_T (*c2_dualIndex)[2];
  c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 17);
  c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S, 16);
  c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S, 15);
  c2_numFields = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 11);
  c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
  c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S, 7);
  c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S, 6);
  c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
  c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,19);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,28);
  if (CV_TRANSITION_EVAL(28U, (int32_T)_SFD_CCP_CALL(28,0,((_sfEvent_ ==
          c2_event_menuReleased)!=0))) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,28);
    sf_debug_symbol_scope_push(0U, 0U);
    _SFD_CS_CALL(FUNCTION_ACTIVE_TAG,23);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,23);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,123);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,123);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,122);
    if (CV_TRANSITION_EVAL(122U, (int32_T)_SFD_CCP_CALL(122,0,(((int16_T)
            chartInstance->c2_setupIndex == 1)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions= 1;
        transitionList[0] = 122;
        sf_debug_transition_conflict_check_begin();
        if (((int16_T)chartInstance->c2_setupIndex == 2) || ((int16_T)
             chartInstance->c2_setupIndex == 3)) {
          transitionList[numTransitions] = 124;
          numTransitions++;
        }

        if ((int16_T)chartInstance->c2_setupIndex >= 4) {
          transitionList[numTransitions] = 125;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,122);
      *c2_singleIndexO = chartInstance->c2_selectIndex;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_singleIndexO, 47U);
      sf_call_output_fcn_call(chartInstance->S, 11, "writeSingleIndex", 0);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,124);
      c2_b_temp = (_SFD_CCP_CALL(124,0,(((int16_T)chartInstance->c2_setupIndex ==
        2)!=0)) != 0);
      if (!c2_b_temp) {
        c2_b_temp = (_SFD_CCP_CALL(124,1,(((int16_T)chartInstance->c2_setupIndex
          == 3)!=0)) != 0);
      }

      if (CV_TRANSITION_EVAL(124U, (int32_T)c2_b_temp) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions= 1;
          transitionList[0] = 124;
          sf_debug_transition_conflict_check_begin();
          if ((int16_T)chartInstance->c2_setupIndex >= 4) {
            transitionList[numTransitions] = 125;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,124);
        for (c2_i32 = 0; c2_i32 < 2; c2_i32 = c2_i32 + 1) {
          (*c2_dualIndexO)[c2_i32] = (*c2_dualIndex)[c2_i32];
        }

        for (c2_i33 = 0; c2_i33 < 2; c2_i33 = c2_i33 + 1) {
          _SFD_DATA_RANGE_CHECK((real_T)(*c2_dualIndexO)[c2_i33], 45U);
        }

        (*c2_dualIndexO)[_SFD_ARRAY_BOUNDS_CHECK(45U,
          chartInstance->c2_setupIndex - 2, 0, 1, 1, 0)] =
          chartInstance->c2_selectIndex;
        _SFD_DATA_RANGE_CHECK((real_T)(*c2_dualIndexO)[_SFD_ARRAY_BOUNDS_CHECK
                              (45U, chartInstance->c2_setupIndex - 2, 0, 1, 1, 0)],
                              45U);
        sf_call_output_fcn_call(chartInstance->S, 10, "writeDualIndex", 0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,125);
        if (CV_TRANSITION_EVAL(125U, (int32_T)_SFD_CCP_CALL(125,0,(((int16_T)
                chartInstance->c2_setupIndex >= 4)!=0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,125);
          for (c2_i34 = 0; c2_i34 < 4; c2_i34 = c2_i34 + 1) {
            (*c2_quadIndexO)[c2_i34] = (*c2_quadIndex)[c2_i34];
          }

          for (c2_i35 = 0; c2_i35 < 4; c2_i35 = c2_i35 + 1) {
            _SFD_DATA_RANGE_CHECK((real_T)(*c2_quadIndexO)[c2_i35], 46U);
          }

          (*c2_quadIndexO)[_SFD_ARRAY_BOUNDS_CHECK(46U,
            chartInstance->c2_setupIndex - 4, 0, 3, 1, 0)] =
            chartInstance->c2_selectIndex;
          _SFD_DATA_RANGE_CHECK((real_T)(*c2_quadIndexO)[_SFD_ARRAY_BOUNDS_CHECK
                                (46U, chartInstance->c2_setupIndex - 4, 0, 3, 1,
            0)], 46U);
          sf_call_output_fcn_call(chartInstance->S, 12, "writeQuadIndex", 0);
        }
      }
    }

    _SFD_CS_CALL(FUNCTION_INACTIVE_TAG,23);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,23);
    sf_debug_symbol_scope_pop();
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,19);
    chartInstance->c2_tp_select_Idle = 0U;
    chartInstance->c2_is_select_var = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,19);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,19);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,17);
    chartInstance->c2_tp_select_var = 0U;
    chartInstance->c2_is_Setup = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,17);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,17);
    c2_enter_atomic_Setup_Init(chartInstance);
    goto label_1;
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,116);
    if (CV_TRANSITION_EVAL(116U, (int32_T)_SFD_CCP_CALL(116,0,((_sfEvent_ ==
            c2_event_upPressed)!=0))) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions= 1;
        transitionList[0] = 116;
        sf_debug_transition_conflict_check_begin();
        if (_sfEvent_ == c2_event_downPressed) {
          transitionList[numTransitions] = 113;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,116);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,117);
      if (CV_TRANSITION_EVAL(117U, (int32_T)_SFD_CCP_CALL(117,0,(((int16_T)
              chartInstance->c2_selectIndex == 0)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,117);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,19);
        chartInstance->c2_tp_select_Idle = 0U;
        chartInstance->c2_is_select_var = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,19);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,19);
        chartInstance->c2_is_select_var = c2_IN_select_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,19);
        chartInstance->c2_tp_select_Idle = 1U;
        goto label_1;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,115);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,115);
        chartInstance->c2_selectIndex = c2__u8_s32_(chartInstance,
          chartInstance->c2_selectIndex - 1);
        _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
      }
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,113);
      if (CV_TRANSITION_EVAL(113U, (int32_T)_SFD_CCP_CALL(113,0,((_sfEvent_ ==
              c2_event_downPressed)!=0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,113);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,111);
        if (CV_TRANSITION_EVAL(111U, (int32_T)_SFD_CCP_CALL(111,0,
              ((chartInstance->c2_selectIndex == *c2_numFields - 1)!=0))) != 0)
        {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,111);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,19);
          chartInstance->c2_tp_select_Idle = 0U;
          chartInstance->c2_is_select_var = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,19);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,19);
          chartInstance->c2_is_select_var = c2_IN_select_Idle;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,19);
          chartInstance->c2_tp_select_Idle = 1U;
          goto label_1;
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,112);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,112);
          chartInstance->c2_selectIndex = c2__u8_s32_(chartInstance,
            chartInstance->c2_selectIndex + 1);
          _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectIndex, 43U);
        }
      } else {
        goto label_2;
      }
    }
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,108);
  if (CV_TRANSITION_EVAL(108U, (int32_T)_SFD_CCP_CALL(108,0,
        ((chartInstance->c2_selectIndex >= chartInstance->c2_selectVIndex + 6)!=
         0))
       ) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[2];
      unsigned int numTransitions= 1;
      transitionList[0] = 108;
      sf_debug_transition_conflict_check_begin();
      if (chartInstance->c2_selectIndex < chartInstance->c2_selectVIndex) {
        transitionList[numTransitions] = 107;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions>1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,108);
    chartInstance->c2_selectVIndex = c2__u8_s32_(chartInstance,
      chartInstance->c2_selectIndex - 5);
    _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
    *c2_stringNum = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,107);
    if (CV_TRANSITION_EVAL(107U, (int32_T)_SFD_CCP_CALL(107,0,
          ((chartInstance->c2_selectIndex < chartInstance->c2_selectVIndex)!=0)))
        !=
        0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,107);
      chartInstance->c2_selectVIndex = chartInstance->c2_selectIndex;
      _SFD_DATA_RANGE_CHECK((real_T)chartInstance->c2_selectVIndex, 44U);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,109);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,109);
      *c2_stringNum = 0U;
      _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    }
  }

  while (1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,101);
    if (CV_TRANSITION_EVAL(101U, (int32_T)_SFD_CCP_CALL(101,0,(((int16_T)
            *c2_stringNum < 6)!=0))) == 0) {
      break;
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,101);
    memcpy(&(*c2_string)[0], &(*c2_names)[_SFD_ARRAY_BOUNDS_CHECK(28U, 10 *
            (chartInstance->c2_selectVIndex + *c2_stringNum), 0, 179, 1
            , 0)], 10);
    sf_call_output_fcn_call(chartInstance->S, 4, "sendString", 0);
    *c2_stringNum = c2__u8_s32_(chartInstance, *c2_stringNum + 1);
    _SFD_DATA_RANGE_CHECK((real_T)*c2_stringNum, 11U);
    sf_mex_listen_for_ctrl_c(chartInstance->S);
  }

  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,105);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,105);
  _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,19);
  chartInstance->c2_tp_select_Idle = 0U;
  chartInstance->c2_is_select_var = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG,19);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,19);
  chartInstance->c2_is_select_var = c2_IN_select_Wait;
  _SFD_CS_CALL(STATE_ACTIVE_TAG,20);
  chartInstance->c2_tp_select_Wait = 1U;
 label_1:
  ;
 label_2:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,19);
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

const mxArray *sf_c2_BuckyWagon_01_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c2_nameCaptureInfo;
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((int8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 2, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint8_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_c_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_d_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  uint16_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((uint16_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 5, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_e_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i36;
  uint8_T c2_b_u[18];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i36 = 0; c2_i36 < 18; c2_i36 = c2_i36 + 1) {
    c2_b_u[c2_i36] = (*((uint8_T (*)[18])c2_u))[c2_i36];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 18));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_f_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i37;
  uint8_T c2_b_u[2];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i37 = 0; c2_i37 < 2; c2_i37 = c2_i37 + 1) {
    c2_b_u[c2_i37] = (*((uint8_T (*)[2])c2_u))[c2_i37];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 2));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_g_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i38;
  uint8_T c2_b_u[4];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i38 = 0; c2_i38 < 4; c2_i38 = c2_i38 + 1) {
    c2_b_u[c2_i38] = (*((uint8_T (*)[4])c2_u))[c2_i38];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 4));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_h_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i39;
  uint8_T c2_b_u[104];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i39 = 0; c2_i39 < 104; c2_i39 = c2_i39 + 1) {
    c2_b_u[c2_i39] = (*((uint8_T (*)[104])c2_u))[c2_i39];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 104));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_i_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i40;
  uint8_T c2_b_u[180];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i40 = 0; c2_i40 < 180; c2_i40 = c2_i40 + 1) {
    c2_b_u[c2_i40] = (*((uint8_T (*)[180])c2_u))[c2_i40];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 180));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_j_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i41;
  uint8_T c2_b_u[126];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i41 = 0; c2_i41 < 126; c2_i41 = c2_i41 + 1) {
    c2_b_u[c2_i41] = (*((uint8_T (*)[126])c2_u))[c2_i41];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 126));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_k_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i42;
  int16_T c2_b_u[6];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i42 = 0; c2_i42 < 6; c2_i42 = c2_i42 + 1) {
    c2_b_u[c2_i42] = (*((int16_T (*)[6])c2_u))[c2_i42];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 4, 0U, 1U, 0U, 1, 6));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_l_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i43;
  int32_T c2_b_u[18];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i43 = 0; c2_i43 < 18; c2_i43 = c2_i43 + 1) {
    c2_b_u[c2_i43] = (*((int32_T (*)[18])c2_u))[c2_i43];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 6, 0U, 1U, 0U, 1, 18));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_m_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i44;
  int16_T c2_b_u[18];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i44 = 0; c2_i44 < 18; c2_i44 = c2_i44 + 1) {
    c2_b_u[c2_i44] = (*((int16_T (*)[18])c2_u))[c2_i44];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 4, 0U, 1U, 0U, 1, 18));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_n_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((int32_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_o_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  int32_T c2_i45;
  uint8_T c2_b_u[10];
  const mxArray *c2_b_y = NULL;
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  for (c2_i45 = 0; c2_i45 < 10; c2_i45 = c2_i45 + 1) {
    c2_b_u[c2_i45] = (*((uint8_T (*)[10])c2_u))[c2_i45];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 3, 0U, 1U, 0U, 1, 10));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static void c2_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  const mxArray *c2_dualIndexO, const char_T *c2_name
  , uint8_T c2_y[2])
{
  uint8_T c2_uv3[2];
  int32_T c2_i46;
  sf_mex_import(c2_name, sf_mex_dup(c2_dualIndexO), &c2_uv3, 1, 3, 0U, 1, 0U, 1,
                2);
  for (c2_i46 = 0; c2_i46 < 2; c2_i46 = c2_i46 + 1) {
    c2_y[c2_i46] = c2_uv3[c2_i46];
  }

  sf_mex_destroy(&c2_dualIndexO);
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_fillColor, const char_T *
  c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u5;
  sf_mex_import(c2_name, sf_mex_dup(c2_fillColor), &c2_u5, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u5;
  sf_mex_destroy(&c2_fillColor);
  return c2_y;
}

static void c2_c_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_quadIndexO, const char_T *
  c2_name, uint8_T c2_y[4])
{
  uint8_T c2_uv4[4];
  int32_T c2_i47;
  sf_mex_import(c2_name, sf_mex_dup(c2_quadIndexO), &c2_uv4, 1, 3, 0U, 1, 0U, 1,
                4);
  for (c2_i47 = 0; c2_i47 < 4; c2_i47 = c2_i47 + 1) {
    c2_y[c2_i47] = c2_uv4[c2_i47];
  }

  sf_mex_destroy(&c2_quadIndexO);
}

static void c2_d_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_string, const char_T *c2_name,
  uint8_T c2_y[18])
{
  uint8_T c2_uv5[18];
  int32_T c2_i48;
  sf_mex_import(c2_name, sf_mex_dup(c2_string), &c2_uv5, 1, 3, 0U, 1, 0U, 1, 18);
  for (c2_i48 = 0; c2_i48 < 18; c2_i48 = c2_i48 + 1) {
    c2_y[c2_i48] = c2_uv5[c2_i48];
  }

  sf_mex_destroy(&c2_string);
}

static void c2_e_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_oldData, const char_T *
  c2_name, int16_T c2_y[6])
{
  int16_T c2_iv1[6];
  int32_T c2_i49;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_oldData), &c2_iv1, 1, 4, 0U, 1, 0U, 1,
                6);
  for (c2_i49 = 0; c2_i49 < 6; c2_i49 = c2_i49 + 1) {
    c2_y[c2_i49] = c2_iv1[c2_i49];
  }

  sf_mex_destroy(&c2_b_oldData);
}

static int32_T c2_f_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_temp, const char_T *
  c2_name)
{
  int32_T c2_y;
  int32_T c2_i50;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_temp), &c2_i50, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i50;
  sf_mex_destroy(&c2_b_temp);
  return c2_y;
}

static uint16_T c2_g_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *c2_b_timer, const char_T *
  c2_name)
{
  uint16_T c2_y;
  uint16_T c2_u6;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_timer), &c2_u6, 1, 5, 0U, 0, 0U, 0);
  c2_y = c2_u6;
  sf_mex_destroy(&c2_b_timer);
  return c2_y;
}

static const mxArray *c2_h_emlrt_marshallIn(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, const mxArray *
  c2_b_setSimStateSideEffectsInfo, const char_T *c2_name)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe
                (&c2_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static uint8_T c2__u8_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b)
{
  uint8_T c2_a;
  c2_a = (uint8_T)c2_b;
  if (c2_a != c2_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static uint16_T c2__u16_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b)
{
  uint16_T c2_a;
  c2_a = (uint16_T)c2_b;
  if (c2_a != c2_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static int16_T c2__s16_s32_(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b)
{
  int16_T c2_a;
  c2_a = (int16_T)c2_b;
  if (c2_a != c2_b) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static void c2_mul_wide_s32(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_in0, int32_T c2_in1, uint32_T *
  c2_ptrOutBitsHi, uint32_T *c2_ptrOutBitsLo)
{
  uint32_T c2_absIn0;
  uint32_T c2_absIn1;
  int32_T c2_negativeProduct;
  uint32_T c2_in0Hi;
  uint32_T c2_in0Lo;
  uint32_T c2_in1Hi;
  uint32_T c2_in1Lo;
  uint32_T c2_productHiHi;
  uint32_T c2_productHiLo;
  uint32_T c2_productLoHi;
  uint32_T c2_productLoLo;
  uint32_T c2_carry;
  uint32_T c2_outBitsLo;
  uint32_T c2_outBitsHi;
  c2_absIn0 = (uint32_T)(c2_in0 < 0 ? -c2_in0 : c2_in0);
  c2_absIn1 = (uint32_T)(c2_in1 < 0 ? -c2_in1 : c2_in1);
  c2_negativeProduct = !((c2_in0 == 0) || (c2_in1 == 0) || (c2_in0 > 0 == c2_in1
    > 0));
  c2_in0Hi = c2_absIn0 >> 16;
  c2_in0Lo = c2_absIn0 & 65535U;
  c2_in1Hi = c2_absIn1 >> 16;
  c2_in1Lo = c2_absIn1 & 65535U;
  c2_productHiHi = c2_in0Hi * c2_in1Hi;
  c2_productHiLo = c2_in0Hi * c2_in1Lo;
  c2_productLoHi = c2_in0Lo * c2_in1Hi;
  c2_productLoLo = c2_in0Lo * c2_in1Lo;
  c2_carry = 0;
  c2_outBitsLo = c2_productLoLo + (c2_productLoHi << 16);
  if (c2_outBitsLo < c2_productLoLo) {
    c2_carry = c2_carry + 1;
  }

  c2_productLoLo = c2_outBitsLo;
  c2_outBitsLo = c2_outBitsLo + (c2_productHiLo << 16);
  if (c2_outBitsLo < c2_productLoLo) {
    c2_carry = c2_carry + 1;
  }

  c2_outBitsHi = ((c2_carry + c2_productHiHi) + (c2_productLoHi >> 16)) +
    (c2_productHiLo >> 16);
  if (c2_negativeProduct) {
    c2_outBitsHi = ~c2_outBitsHi;
    c2_outBitsLo = ~c2_outBitsLo;
    c2_outBitsLo = c2_outBitsLo + 1;
    if (c2_outBitsLo == 0) {
      c2_outBitsHi = c2_outBitsHi + 1;
    }
  }

  *c2_ptrOutBitsHi = c2_outBitsHi;
  *c2_ptrOutBitsLo = c2_outBitsLo;
}

static int32_T c2_mulv_s32_s32_s32(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance, int32_T c2_a, int32_T c2_b)
{
  uint32_T c2_u32_clo;
  uint32_T c2_u32_chi;
  c2_mul_wide_s32(chartInstance, c2_a, c2_b, &c2_u32_chi, &c2_u32_clo);
  if (((int32_T)c2_u32_chi > 0) || ((c2_u32_chi == 0) && (c2_u32_clo >=
        2147483648U))) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  } else {
    if (((int32_T)c2_u32_chi < -1) || (((int32_T)c2_u32_chi == -1) &&
         (c2_u32_clo < 2147483648U))) {
      sf_debug_overflow_detection(SFDB_OVERFLOW);
    }
  }

  return (int32_T)c2_u32_clo;
}

static int32_T c2__s32_div__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c)
{
  if (c2_c == 0) {
    sf_debug_overflow_detection(SFDB_DIVIDE_BY_ZERO);
  }

  if ((c2_c == -1) && (c2_b < -2147483647)) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_b / c2_c;
}

static int32_T c2__s32_add__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c)
{
  int32_T c2_a;
  c2_a = c2_b + c2_c;
  if (((c2_a ^ c2_b) & (c2_a ^ c2_c)) < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static int32_T c2__s32_minus__(SFc2_BuckyWagon_01InstanceStruct *chartInstance,
  int32_T c2_b, int32_T c2_c)
{
  int32_T c2_a;
  c2_a = c2_b - c2_c;
  if (((c2_b ^ c2_a) & (c2_b ^ c2_c)) < 0) {
    sf_debug_overflow_detection(SFDB_OVERFLOW);
  }

  return c2_a;
}

static void init_test_point_addr_map(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  chartInstance->c2_testPointAddrMap[0] = &chartInstance->c2_timer;
  chartInstance->c2_testPointAddrMap[1] = &chartInstance->c2_oldData;
  chartInstance->c2_testPointAddrMap[2] = &chartInstance->c2_temp;
  chartInstance->c2_testPointAddrMap[3] = &chartInstance->c2_setupIndex;
  chartInstance->c2_testPointAddrMap[4] = &chartInstance->c2_setupVIndex;
  chartInstance->c2_testPointAddrMap[5] = &chartInstance->c2_selectIndex;
  chartInstance->c2_testPointAddrMap[6] = &chartInstance->c2_selectVIndex;
  chartInstance->c2_testPointAddrMap[7] = &chartInstance->c2_tp_Dual;
  chartInstance->c2_testPointAddrMap[8] = &chartInstance->c2_tp_Dual_Init;
  chartInstance->c2_testPointAddrMap[9] = &chartInstance->c2_tp_List_Idle;
  chartInstance->c2_testPointAddrMap[10] = &chartInstance->c2_tp_dualNames;
  chartInstance->c2_testPointAddrMap[11] = &chartInstance->c2_tp_List;
  chartInstance->c2_testPointAddrMap[12] = &chartInstance->c2_b_tp_List_Idle;
  chartInstance->c2_testPointAddrMap[13] = &chartInstance->c2_tp_List_Init;
  chartInstance->c2_testPointAddrMap[14] = &chartInstance->c2_tp_List_Wait;
  chartInstance->c2_testPointAddrMap[15] = &chartInstance->c2_tp_List_Wait2;
  chartInstance->c2_testPointAddrMap[16] = &chartInstance->c2_tp_PowerupDelay;
  chartInstance->c2_testPointAddrMap[17] = &chartInstance->c2_tp_Quad;
  chartInstance->c2_testPointAddrMap[18] = &chartInstance->c2_tp_Quad_Idle;
  chartInstance->c2_testPointAddrMap[19] = &chartInstance->c2_tp_Quad_Init;
  chartInstance->c2_testPointAddrMap[20] = &chartInstance->c2_tp_Quad_Names;
  chartInstance->c2_testPointAddrMap[21] = &chartInstance->c2_tp_Setup;
  chartInstance->c2_testPointAddrMap[22] = &chartInstance->c2_tp_Setup_Init;
  chartInstance->c2_testPointAddrMap[23] = &chartInstance->c2_tp_select_var;
  chartInstance->c2_testPointAddrMap[24] = &chartInstance->c2_tp_Select_Init;
  chartInstance->c2_testPointAddrMap[25] = &chartInstance->c2_tp_select_Idle;
  chartInstance->c2_testPointAddrMap[26] = &chartInstance->c2_tp_select_Wait;
  chartInstance->c2_testPointAddrMap[27] = &chartInstance->c2_tp_setup_Idle;
  chartInstance->c2_testPointAddrMap[28] = &chartInstance->c2_tp_setup_Wait;
  chartInstance->c2_testPointAddrMap[29] = &chartInstance->c2_tp_wait;
  chartInstance->c2_testPointAddrMap[30] = &chartInstance->c2_tp_Single;
  chartInstance->c2_testPointAddrMap[31] = &chartInstance->c2_c_tp_List_Idle;
  chartInstance->c2_testPointAddrMap[32] = &chartInstance->c2_tp_Single_Init;
  chartInstance->c2_testPointAddrMap[33] = &chartInstance->c2_tp_singleNames;
  chartInstance->c2_testPointAddrMap[34] = &chartInstance->c2_tp_wait1;
  chartInstance->c2_testPointAddrMap[35] = &chartInstance->c2_tp_wait2;
  chartInstance->c2_testPointAddrMap[36] = &chartInstance->c2_tp_wait3;
  chartInstance->c2_testPointAddrMap[37] = &chartInstance->c2_tp_wait4;
}

static void **get_test_point_address_map(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
  return &chartInstance->c2_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc2_BuckyWagon_01InstanceStruct *chartInstance)
{
  return &chartInstance->c2_testPointMappingInfo;
}

static void init_dsm_address_info(SFc2_BuckyWagon_01InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c2_BuckyWagon_01_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3942257292U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1229134498U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1396702432U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2911780184U);
}

mxArray *sf_c2_BuckyWagon_01_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1962724699U);
    pr[1] = (double)(3953579083U);
    pr[2] = (double)(527104225U);
    pr[3] = (double)(2618021347U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,20,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(104);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(180);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(126);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(126);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(18);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(18);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(18);
      pr[1] = (double)(1);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(6));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(10);
      pr[1] = (double)(1);
      mxSetField(mxData,17,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,17,"type",mxType);
    }

    mxSetField(mxData,17,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,18,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,18,"type",mxType);
    }

    mxSetField(mxData,18,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(18);
      pr[1] = (double)(1);
      mxSetField(mxData,19,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(6));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,19,"type",mxType);
    }

    mxSetField(mxData,19,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,17,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(18);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_BuckyWagon_01(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[292],T\"dualIndexO\",},{M[1],M[257],T\"fillColor\",},{M[1],M[260],T\"font\",},{M[1],M[266],T\"hCenter\",},{M[1],M[256],T\"lineColor\",},{M[1],M[282],T\"listIndexO\",},{M[1],M[251],T\"mode\",},{M[1],M[293],T\"quadIndexO\",},{M[1],M[287],T\"screenO\",},{M[1],M[294],T\"singleIndexO\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[259],T\"string\",},{M[1],M[258],T\"stringNum\",},{M[1],M[267],T\"vCenter\",},{M[1],M[252],T\"x0\",},{M[1],M[253],T\"x1\",},{M[1],M[254],T\"y0\",},{M[1],M[255],T\"y1\",},{M[3],M[281],T\"oldData\",},{M[3],M[290],T\"selectIndex\",},{M[3],M[291],T\"selectVIndex\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[3],M[288],T\"setupIndex\",},{M[3],M[289],T\"setupVIndex\",},{M[3],M[286],T\"temp\",},{M[3],M[280],T\"timer\",},{M[8],M[0],T\"is_active_c2_BuckyWagon_01\",},{M[9],M[0],T\"is_c2_BuckyWagon_01\",},{M[9],M[3],T\"is_List\",},{M[9],M[12],T\"is_Single\",},{M[9],M[13],T\"is_Setup\",},{M[9],M[20],T\"is_Dual\",}}",
    "100 S1x2'type','srcId','name','auxInfo'{{M[9],M[24],T\"is_Quad\",},{M[9],M[30],T\"is_select_var\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 32, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_BuckyWagon_01_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_BuckyWagon_01InstanceStruct *chartInstance;
    chartInstance = (SFc2_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_BuckyWagon_01MachineNumber_,
           2,
           33,
           154,
           51,
           20,
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
          init_script_number_translation(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_BuckyWagon_01MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BuckyWagon_01MachineNumber_,
            chartInstance->chartNumber,
            20,
            20,
            20);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"upTime",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"menuTime",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"downTime",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "startupDelay",0,(MexFcnForType)c2_d_sf_marshall);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"mode",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(5,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"x0",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"x1",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"y0",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(8,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"y1",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(9,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "lineColor",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(10,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "fillColor",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(11,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "stringNum",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 18;
            _SFD_SET_DATA_PROPS(12,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"string",0,(MexFcnForType)c2_e_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(13,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"font",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(14,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"FONT4x6",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(15,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"FONT6x8",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(16,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "FONT8x15",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(17,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"WHITE",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(18,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"BLACK",0,
                              (MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(19,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"hCenter",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(20,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"vCenter",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(21,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "listIndex",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(22,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "singleIndex",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 2;
            _SFD_SET_DATA_PROPS(23,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"dualIndex",0,(MexFcnForType)
                                c2_f_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 4;
            _SFD_SET_DATA_PROPS(24,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"quadIndex",0,(MexFcnForType)
                                c2_g_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(25,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"screen",
                              0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 104;
            _SFD_SET_DATA_PROPS(26,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"setupNames",0,(MexFcnForType)
                                c2_h_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(27,7,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "SETUP_TIME",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 180;
            _SFD_SET_DATA_PROPS(28,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"names",0,(MexFcnForType)c2_i_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(29,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "numFields",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 126;
            _SFD_SET_DATA_PROPS(30,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"namesline1",0,(MexFcnForType)
                                c2_j_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 126;
            _SFD_SET_DATA_PROPS(31,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"namesline2",0,(MexFcnForType)
                                c2_j_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(32,7,0,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,
                              "UPDATE_TIME",0,(MexFcnForType)c2_d_sf_marshall);
          _SFD_SET_DATA_PROPS(33,0,0,0,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,"timer",
                              0,(MexFcnForType)c2_d_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 6;
            _SFD_SET_DATA_PROPS(34,0,0,0,SF_INT16,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"oldData",0,(MexFcnForType)
                                c2_k_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(35,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "listIndexO",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 18;
            _SFD_SET_DATA_PROPS(36,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"barGraphMode",0,(MexFcnForType)
                                c2_e_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 18;
            _SFD_SET_DATA_PROPS(37,1,1,0,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"barMax",0,(MexFcnForType)c2_l_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 18;
            _SFD_SET_DATA_PROPS(38,1,1,0,SF_INT16,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"barMin",0,(MexFcnForType)c2_m_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(39,0,0,0,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,"temp",0,
                              (MexFcnForType)c2_n_sf_marshall);
          _SFD_SET_DATA_PROPS(40,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"screenO",
                              0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(41,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "setupIndex",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(42,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "setupVIndex",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(43,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "selectIndex",0,(MexFcnForType)c2_b_sf_marshall);
          _SFD_SET_DATA_PROPS(44,0,0,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "selectVIndex",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 2;
            _SFD_SET_DATA_PROPS(45,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"dualIndexO",0,(MexFcnForType)
                                c2_f_sf_marshall);
          }

          {
            unsigned int dimVector[1];
            dimVector[0]= 4;
            _SFD_SET_DATA_PROPS(46,2,0,1,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"quadIndexO",0,(MexFcnForType)
                                c2_g_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(47,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "singleIndexO",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 10;
            _SFD_SET_DATA_PROPS(48,1,1,0,SF_UINT8,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"statusTxt",0,(MexFcnForType)
                                c2_o_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(49,1,1,0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,
                              "statusTxtMode",0,(MexFcnForType)c2_b_sf_marshall);

          {
            unsigned int dimVector[1];
            dimVector[0]= 18;
            _SFD_SET_DATA_PROPS(50,1,1,0,SF_INT16,1,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"data",0,(MexFcnForType)c2_m_sf_marshall);
          }

          _SFD_EVENT_SCOPE(0,1);
          _SFD_EVENT_SCOPE(1,2);
          _SFD_EVENT_SCOPE(2,2);
          _SFD_EVENT_SCOPE(3,2);
          _SFD_EVENT_SCOPE(4,2);
          _SFD_EVENT_SCOPE(5,2);
          _SFD_EVENT_SCOPE(6,2);
          _SFD_EVENT_SCOPE(7,2);
          _SFD_EVENT_SCOPE(8,2);
          _SFD_EVENT_SCOPE(9,1);
          _SFD_EVENT_SCOPE(10,1);
          _SFD_EVENT_SCOPE(11,1);
          _SFD_EVENT_SCOPE(12,1);
          _SFD_EVENT_SCOPE(13,1);
          _SFD_EVENT_SCOPE(14,1);
          _SFD_EVENT_SCOPE(15,2);
          _SFD_EVENT_SCOPE(16,2);
          _SFD_EVENT_SCOPE(17,2);
          _SFD_EVENT_SCOPE(18,2);
          _SFD_EVENT_SCOPE(19,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,0);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,0);
          _SFD_STATE_INFO(22,0,0);
          _SFD_STATE_INFO(24,0,0);
          _SFD_STATE_INFO(25,0,0);
          _SFD_STATE_INFO(26,0,0);
          _SFD_STATE_INFO(27,0,0);
          _SFD_STATE_INFO(28,0,0);
          _SFD_STATE_INFO(29,0,0);
          _SFD_STATE_INFO(30,0,0);
          _SFD_STATE_INFO(31,0,0);
          _SFD_STATE_INFO(32,0,0);
          _SFD_STATE_INFO(16,0,2);
          _SFD_STATE_INFO(23,0,2);
          _SFD_CH_SUBSTATE_COUNT(10);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,4);
          _SFD_CH_SUBSTATE_INDEX(2,9);
          _SFD_CH_SUBSTATE_INDEX(3,10);
          _SFD_CH_SUBSTATE_INDEX(4,14);
          _SFD_CH_SUBSTATE_INDEX(5,25);
          _SFD_CH_SUBSTATE_INDEX(6,29);
          _SFD_CH_SUBSTATE_INDEX(7,30);
          _SFD_CH_SUBSTATE_INDEX(8,31);
          _SFD_CH_SUBSTATE_INDEX(9,32);
          _SFD_ST_SUBSTATE_COUNT(0,3);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,4);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_INDEX(4,1,6);
          _SFD_ST_SUBSTATE_INDEX(4,2,7);
          _SFD_ST_SUBSTATE_INDEX(4,3,8);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,3);
          _SFD_ST_SUBSTATE_INDEX(10,0,11);
          _SFD_ST_SUBSTATE_INDEX(10,1,12);
          _SFD_ST_SUBSTATE_INDEX(10,2,13);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,5);
          _SFD_ST_SUBSTATE_INDEX(14,0,15);
          _SFD_ST_SUBSTATE_INDEX(14,1,17);
          _SFD_ST_SUBSTATE_INDEX(14,2,21);
          _SFD_ST_SUBSTATE_INDEX(14,3,22);
          _SFD_ST_SUBSTATE_INDEX(14,4,24);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(17,3);
          _SFD_ST_SUBSTATE_INDEX(17,0,18);
          _SFD_ST_SUBSTATE_INDEX(17,1,19);
          _SFD_ST_SUBSTATE_INDEX(17,2,20);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(19,0);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(21,0);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(24,0);
          _SFD_ST_SUBSTATE_COUNT(25,3);
          _SFD_ST_SUBSTATE_INDEX(25,0,26);
          _SFD_ST_SUBSTATE_INDEX(25,1,27);
          _SFD_ST_SUBSTATE_INDEX(25,2,28);
          _SFD_ST_SUBSTATE_COUNT(26,0);
          _SFD_ST_SUBSTATE_COUNT(27,0);
          _SFD_ST_SUBSTATE_COUNT(28,0);
          _SFD_ST_SUBSTATE_COUNT(29,0);
          _SFD_ST_SUBSTATE_COUNT(30,0);
          _SFD_ST_SUBSTATE_COUNT(31,0);
          _SFD_ST_SUBSTATE_COUNT(32,0);
        }

        _SFD_CV_INIT_CHART(10,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,3,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(4,4,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,3,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,5,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(15,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(17,3,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(18,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(19,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(22,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(24,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(25,3,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(26,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(27,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(28,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(29,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(30,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(31,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(32,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(16,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(23,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(21,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(23,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(26,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(27,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(30,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(31,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(32,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(33,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(34,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(35,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(36,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(37,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(38,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(39,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(40,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(41,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(42,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(43,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(45,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(46,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(47,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(48,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(49,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(50,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(51,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(52,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(53,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(54,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(55,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(56,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(57,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(58,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(59,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(60,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(61,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(62,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(63,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(64,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(65,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(66,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(67,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(68,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(69,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(70,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(71,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(72,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(73,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(74,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(75,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(76,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(77,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(78,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(79,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(80,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(81,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 36 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(82,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(83,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(84,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(85,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 32, 47 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(86,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(87,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(88,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 65 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(89,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(90,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 66 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(91,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 32, 48 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(92,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(93,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(94,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(95,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(96,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(97,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(98,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(99,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(100,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(101,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 40 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(102,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(103,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(104,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(105,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(106,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(107,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(108,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(109,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(110,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(111,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(112,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(113,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(114,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(115,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(116,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(117,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(118,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(119,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 38 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(120,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(121,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(122,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(123,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 38 };

          static int sPostFixPredicateTree[] = { 0, 1, -2 };

          _SFD_CV_INIT_TRANS(124,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(125,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(126,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(127,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(128,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(129,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(130,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(131,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(132,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(133,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(134,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(135,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(136,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(137,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(138,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(139,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(140,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(141,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(142,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(143,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(144,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(145,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(146,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(147,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(148,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(149,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(150,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(151,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(152,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(153,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(28,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(29,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 22 };

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

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,0,10,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              10,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(20,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(20,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(21,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(21,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(22,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(22,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(23,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(23,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(24,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(24,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(25,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(25,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(26,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(26,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(27,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(27,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(30,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(30,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(31,0,0,7,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(31,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              7,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(32,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          _SFD_TRANS_COV_MAPS(32,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(33,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(33,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(34,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(34,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(35,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(35,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(36,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(36,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(37,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(37,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(38,0,0,3,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(38,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(39,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(39,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(40,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(40,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(41,0,0,7,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(41,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              7,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(42,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(42,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(43,0,0,7,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(43,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              7,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(44,0,0,3,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(44,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(45,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(45,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(46,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(46,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(47,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(47,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(48,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(48,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(49,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(49,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(50,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          _SFD_TRANS_COV_MAPS(50,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(51,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(51,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(52,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(52,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(53,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(53,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(54,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(54,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(55,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          _SFD_TRANS_COV_MAPS(55,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(56,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(56,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(57,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(57,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(58,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(58,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(59,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(59,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(60,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(60,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(61,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(61,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(62,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(62,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(63,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          _SFD_TRANS_COV_MAPS(63,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(64,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(64,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(65,0,0,13,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(65,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              13,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(66,0,2,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          _SFD_TRANS_COV_MAPS(66,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(67,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(67,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(68,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(68,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(69,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 48 };

          _SFD_TRANS_COV_MAPS(69,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(70,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(70,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(71,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(71,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(72,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(72,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(73,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(73,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(74,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(74,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(75,0,0,10,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(75,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              10,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(76,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(76,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(77,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(77,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(78,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(78,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(79,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(79,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(80,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(80,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(81,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          _SFD_TRANS_COV_MAPS(81,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(82,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 36 };

          _SFD_TRANS_COV_MAPS(82,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(83,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(83,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(84,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 31 };

          _SFD_TRANS_COV_MAPS(84,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(85,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(85,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(86,0,2,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 32, 47 };

          _SFD_TRANS_COV_MAPS(86,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(87,0,2,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          _SFD_TRANS_COV_MAPS(87,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(88,0,0,3,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(88,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(89,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 65 };

          _SFD_TRANS_COV_MAPS(89,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(90,0,0,19,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(90,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              19,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(91,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 66 };

          _SFD_TRANS_COV_MAPS(91,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(92,0,2,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 38 };

          static unsigned int sEndGuardMap[] = { 32, 48 };

          _SFD_TRANS_COV_MAPS(92,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(93,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(93,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(94,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(94,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(95,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(95,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(96,0,0,3,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(96,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(97,0,0,7,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(97,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              7,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(98,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 19 };

          _SFD_TRANS_COV_MAPS(98,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(99,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(99,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(100,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(100,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(101,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(101,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(102,0,1,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 40 };

          _SFD_TRANS_COV_MAPS(102,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(103,0,0,10,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(103,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              10,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(104,0,0,4,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(104,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(105,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(105,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(106,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(106,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(107,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 27 };

          _SFD_TRANS_COV_MAPS(107,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(108,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          _SFD_TRANS_COV_MAPS(108,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(109,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(109,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(110,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(110,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(111,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          _SFD_TRANS_COV_MAPS(111,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(112,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(112,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(113,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(113,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(114,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(114,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(115,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(115,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(116,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 9 };

          _SFD_TRANS_COV_MAPS(116,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(117,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(117,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(118,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(118,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(119,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(119,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(120,0,2,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 38 };

          _SFD_TRANS_COV_MAPS(120,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(121,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(121,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(122,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(122,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(123,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(123,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(124,0,2,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 23 };

          static unsigned int sEndGuardMap[] = { 17, 38 };

          _SFD_TRANS_COV_MAPS(124,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(125,0,1,3,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(125,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              3,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(126,0,1,6,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(126,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              6,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(127,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(127,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(128,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(128,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(129,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(129,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(130,0,0,2,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(130,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(131,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(131,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(132,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(132,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(133,0,2,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          _SFD_TRANS_COV_MAPS(133,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(134,0,0,11,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(134,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              11,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(135,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(135,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(136,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          _SFD_TRANS_COV_MAPS(136,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(137,0,0,11,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(137,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              11,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(138,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(138,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(139,0,0,11,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(139,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              11,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(140,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(140,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(141,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(141,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(142,0,0,11,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(142,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              11,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(143,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(143,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(144,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(144,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(145,0,1,2,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 14 };

          _SFD_TRANS_COV_MAPS(145,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              2,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(146,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(146,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(147,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(147,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(148,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(148,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(149,0,2,4,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0, 6 };

          static unsigned int sEndGuardMap[] = { 4, 26 };

          _SFD_TRANS_COV_MAPS(149,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              4,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(150,0,0,12,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(150,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              12,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(151,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 37 };

          _SFD_TRANS_COV_MAPS(151,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(152,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 4 };

          _SFD_TRANS_COV_MAPS(152,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(153,0,0,12,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(153,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              12,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(28,0,1,1,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          _SFD_TRANS_COV_MAPS(28,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(29,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          _SFD_TRANS_COV_MAPS(29,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          uint8_T *c2_upTime;
          uint8_T *c2_menuTime;
          uint8_T *c2_downTime;
          uint16_T *c2_startupDelay;
          uint8_T *c2_mode;
          uint8_T *c2_x0;
          uint8_T *c2_x1;
          uint8_T *c2_y0;
          uint8_T *c2_y1;
          uint8_T *c2_lineColor;
          uint8_T *c2_fillColor;
          uint8_T *c2_stringNum;
          uint8_T (*c2_string)[18];
          uint8_T *c2_font;
          uint8_T *c2_hCenter;
          uint8_T *c2_vCenter;
          uint8_T *c2_listIndex;
          uint8_T *c2_singleIndex;
          uint8_T (*c2_dualIndex)[2];
          uint8_T (*c2_quadIndex)[4];
          uint8_T *c2_screen;
          uint8_T (*c2_setupNames)[104];
          uint8_T (*c2_names)[180];
          uint8_T *c2_numFields;
          uint8_T (*c2_namesline1)[126];
          uint8_T (*c2_namesline2)[126];
          uint8_T *c2_listIndexO;
          uint8_T (*c2_barGraphMode)[18];
          int32_T (*c2_barMax)[18];
          int16_T (*c2_barMin)[18];
          uint8_T *c2_screenO;
          uint8_T (*c2_dualIndexO)[2];
          uint8_T (*c2_quadIndexO)[4];
          uint8_T *c2_singleIndexO;
          uint8_T (*c2_statusTxt)[10];
          uint8_T *c2_statusTxtMode;
          int16_T (*c2_data)[18];
          c2_data = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 19);
          c2_statusTxtMode = (uint8_T *)ssGetInputPortSignal(chartInstance->S,
            18);
          c2_statusTxt = (uint8_T (*)[10])ssGetInputPortSignal(chartInstance->S,
            17);
          c2_singleIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S,
            17);
          c2_quadIndexO = (uint8_T (*)[4])ssGetOutputPortSignal(chartInstance->S,
            16);
          c2_dualIndexO = (uint8_T (*)[2])ssGetOutputPortSignal(chartInstance->S,
            15);
          c2_screenO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 14);
          c2_barMin = (int16_T (*)[18])ssGetInputPortSignal(chartInstance->S, 16);
          c2_barMax = (int32_T (*)[18])ssGetInputPortSignal(chartInstance->S, 15);
          c2_barGraphMode = (uint8_T (*)[18])ssGetInputPortSignal
            (chartInstance->S, 14);
          c2_listIndexO = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 13);
          c2_namesline2 = (uint8_T (*)[126])ssGetInputPortSignal
            (chartInstance->S, 13);
          c2_namesline1 = (uint8_T (*)[126])ssGetInputPortSignal
            (chartInstance->S, 12);
          c2_numFields = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 11);
          c2_names = (uint8_T (*)[180])ssGetInputPortSignal(chartInstance->S, 10);
          c2_setupNames = (uint8_T (*)[104])ssGetInputPortSignal
            (chartInstance->S, 9);
          c2_screen = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c2_quadIndex = (uint8_T (*)[4])ssGetInputPortSignal(chartInstance->S,
            7);
          c2_dualIndex = (uint8_T (*)[2])ssGetInputPortSignal(chartInstance->S,
            6);
          c2_singleIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c2_listIndex = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c2_vCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 12);
          c2_hCenter = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 11);
          c2_font = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 10);
          c2_string = (uint8_T (*)[18])ssGetOutputPortSignal(chartInstance->S, 9);
          c2_stringNum = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 8);
          c2_fillColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 7);
          c2_lineColor = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 6);
          c2_y1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 5);
          c2_y0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c2_x1 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c2_x0 = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c2_mode = (uint8_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c2_startupDelay = (uint16_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c2_downTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c2_menuTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_upTime = (uint8_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_upTime);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_menuTime);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_downTime);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_startupDelay);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_mode);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_x0);
          _SFD_SET_DATA_VALUE_PTR(6U, c2_x1);
          _SFD_SET_DATA_VALUE_PTR(7U, c2_y0);
          _SFD_SET_DATA_VALUE_PTR(8U, c2_y1);
          _SFD_SET_DATA_VALUE_PTR(9U, c2_lineColor);
          _SFD_SET_DATA_VALUE_PTR(10U, c2_fillColor);
          _SFD_SET_DATA_VALUE_PTR(11U, c2_stringNum);
          _SFD_SET_DATA_VALUE_PTR(12U, c2_string);
          _SFD_SET_DATA_VALUE_PTR(13U, c2_font);
          _SFD_SET_DATA_VALUE_PTR(14U, &chartInstance->c2_FONT4x6);
          _SFD_SET_DATA_VALUE_PTR(15U, &chartInstance->c2_FONT6x8);
          _SFD_SET_DATA_VALUE_PTR(16U, &chartInstance->c2_FONT8x15);
          _SFD_SET_DATA_VALUE_PTR(17U, &chartInstance->c2_WHITE);
          _SFD_SET_DATA_VALUE_PTR(18U, &chartInstance->c2_BLACK);
          _SFD_SET_DATA_VALUE_PTR(19U, c2_hCenter);
          _SFD_SET_DATA_VALUE_PTR(20U, c2_vCenter);
          _SFD_SET_DATA_VALUE_PTR(21U, c2_listIndex);
          _SFD_SET_DATA_VALUE_PTR(22U, c2_singleIndex);
          _SFD_SET_DATA_VALUE_PTR(23U, c2_dualIndex);
          _SFD_SET_DATA_VALUE_PTR(24U, c2_quadIndex);
          _SFD_SET_DATA_VALUE_PTR(25U, c2_screen);
          _SFD_SET_DATA_VALUE_PTR(26U, c2_setupNames);
          _SFD_SET_DATA_VALUE_PTR(27U, &chartInstance->c2_SETUP_TIME);
          _SFD_SET_DATA_VALUE_PTR(28U, c2_names);
          _SFD_SET_DATA_VALUE_PTR(29U, c2_numFields);
          _SFD_SET_DATA_VALUE_PTR(30U, c2_namesline1);
          _SFD_SET_DATA_VALUE_PTR(31U, c2_namesline2);
          _SFD_SET_DATA_VALUE_PTR(32U, &chartInstance->c2_UPDATE_TIME);
          _SFD_SET_DATA_VALUE_PTR(33U, &chartInstance->c2_timer);
          _SFD_SET_DATA_VALUE_PTR(34U, &chartInstance->c2_oldData);
          _SFD_SET_DATA_VALUE_PTR(35U, c2_listIndexO);
          _SFD_SET_DATA_VALUE_PTR(36U, c2_barGraphMode);
          _SFD_SET_DATA_VALUE_PTR(37U, c2_barMax);
          _SFD_SET_DATA_VALUE_PTR(38U, c2_barMin);
          _SFD_SET_DATA_VALUE_PTR(39U, &chartInstance->c2_temp);
          _SFD_SET_DATA_VALUE_PTR(40U, c2_screenO);
          _SFD_SET_DATA_VALUE_PTR(41U, &chartInstance->c2_setupIndex);
          _SFD_SET_DATA_VALUE_PTR(42U, &chartInstance->c2_setupVIndex);
          _SFD_SET_DATA_VALUE_PTR(43U, &chartInstance->c2_selectIndex);
          _SFD_SET_DATA_VALUE_PTR(44U, &chartInstance->c2_selectVIndex);
          _SFD_SET_DATA_VALUE_PTR(45U, c2_dualIndexO);
          _SFD_SET_DATA_VALUE_PTR(46U, c2_quadIndexO);
          _SFD_SET_DATA_VALUE_PTR(47U, c2_singleIndexO);
          _SFD_SET_DATA_VALUE_PTR(48U, c2_statusTxt);
          _SFD_SET_DATA_VALUE_PTR(49U, c2_statusTxtMode);
          _SFD_SET_DATA_VALUE_PTR(50U, c2_data);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BuckyWagon_01MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_BuckyWagon_01(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_BuckyWagon_01InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
  initialize_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_BuckyWagon_01(void *chartInstanceVar)
{
  enable_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_BuckyWagon_01(void *chartInstanceVar)
{
  disable_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_BuckyWagon_01(void *chartInstanceVar)
{
  sf_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_BuckyWagon_01(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_BuckyWagon_01
    ((SFc2_BuckyWagon_01InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_BuckyWagon_01();/* state var info */
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

static void sf_internal_set_sim_state_c2_BuckyWagon_01(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_BuckyWagon_01();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_BuckyWagon_01(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_BuckyWagon_01(S);
}

static void sf_opaque_set_sim_state_c2_BuckyWagon_01(SimStruct* S, const mxArray
  *st)
{
  sf_internal_set_sim_state_c2_BuckyWagon_01(S, st);
}

static void sf_opaque_terminate_c2_BuckyWagon_01(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_BuckyWagon_01InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*)
      chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_BuckyWagon_01(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_BuckyWagon_01((SFc2_BuckyWagon_01InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BuckyWagon_01","BuckyWagon_01",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BuckyWagon_01","BuckyWagon_01",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BuckyWagon_01",
      "BuckyWagon_01",2,"gatewayCannotBeInlinedMultipleTimes"));
    sf_mark_output_events_with_multiple_callers(S,"BuckyWagon_01",
      "BuckyWagon_01",2,13);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 18, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 19, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BuckyWagon_01","BuckyWagon_01",2,20);
      sf_mark_chart_reusable_outputs(S,"BuckyWagon_01","BuckyWagon_01",2,17);
    }

    ssSetInputPortOptimOpts(S, 20, SS_REUSABLE_AND_LOCAL);
    sf_set_rtw_dwork_info(S,"BuckyWagon_01","BuckyWagon_01",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3113241034U));
  ssSetChecksum1(S,(2071800205U));
  ssSetChecksum2(S,(8139198U));
  ssSetChecksum3(S,(2538983738U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_BuckyWagon_01(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BuckyWagon_01", "BuckyWagon_01",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_BuckyWagon_01(SimStruct *S)
{
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *)malloc(sizeof
    (SFc2_BuckyWagon_01InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_BuckyWagon_01InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetCallSystemNumFcnCallDestinations(S,0) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'setMode' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,1) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'clearScreen' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,2) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'drawRect' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,3) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'drawBitmap' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,4) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'sendString' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,5) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'drawString' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,6) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'drawVLine' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,7) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'drawHLine' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,8) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'writeListIndex' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,9) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'writeScreen' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,10) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'writeDualIndex' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,11) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'writeSingleIndex' since is not bound to a state.");
  }

  if (ssGetCallSystemNumFcnCallDestinations(S,12) > 1) {
    sf_mex_error_message("It is illegal to branch the Stateflow function call output event 'writeQuadIndex' since is not bound to a state.");
  }

  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_BuckyWagon_01;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_BuckyWagon_01;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_BuckyWagon_01;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_BuckyWagon_01;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_BuckyWagon_01;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_BuckyWagon_01;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_BuckyWagon_01;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_BuckyWagon_01;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_BuckyWagon_01;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_BuckyWagon_01;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_BuckyWagon_01;
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

void c2_BuckyWagon_01_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_BuckyWagon_01(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_BuckyWagon_01(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_BuckyWagon_01_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "int16_T", "int16_T", 0, 0, sizeof(int16_T), SS_INT16, 0, 0 },

  { "int32_T", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0 },

  { "uint16_T", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "uint8_T", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 } };

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0 } };

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 },

  { rtwCAPI_VECTOR, 2, 2 } };

static const uint_T dimensionArray[] = {
  1, 1,
  6, 1 };

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  { &sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0 }
};

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  { 0, 0, "StateflowChart/timer", "timer", 0, 2, 0, 0, 0 },

  { 1, 0, "StateflowChart/oldData", "oldData", 0, 0, 1, 0, 0 },

  { 2, 0, "StateflowChart/temp", "temp", 0, 1, 0, 0, 0 },

  { 3, 0, "StateflowChart/setupIndex", "setupIndex", 0, 3, 0, 0, 0 },

  { 4, 0, "StateflowChart/setupVIndex", "setupVIndex", 0, 3, 0, 0, 0 },

  { 5, 0, "StateflowChart/selectIndex", "selectIndex", 0, 3, 0, 0, 0 },

  { 6, 0, "StateflowChart/selectVIndex", "selectVIndex", 0, 3, 0, 0, 0 },

  { 7, 0, "StateflowChart/Dual", "Dual", 0, 3, 0, 0, 0 },

  { 8, 0, "StateflowChart/Dual.Dual_Init", "Dual_Init", 0, 3, 0, 0, 0 },

  { 9, 0, "StateflowChart/Dual.List_Idle", "List_Idle", 0, 3, 0, 0, 0 },

  { 10, 0, "StateflowChart/Dual.dualNames", "dualNames", 0, 3, 0, 0, 0 },

  { 11, 0, "StateflowChart/List", "List", 0, 3, 0, 0, 0 },

  { 12, 0, "StateflowChart/List.List_Idle", "List_Idle", 0, 3, 0, 0, 0 },

  { 13, 0, "StateflowChart/List.List_Init", "List_Init", 0, 3, 0, 0, 0 },

  { 14, 0, "StateflowChart/List.List_Wait", "List_Wait", 0, 3, 0, 0, 0 },

  { 15, 0, "StateflowChart/List.List_Wait2", "List_Wait2", 0, 3, 0, 0, 0 },

  { 16, 0, "StateflowChart/PowerupDelay", "PowerupDelay", 0, 3, 0, 0, 0 },

  { 17, 0, "StateflowChart/Quad", "Quad", 0, 3, 0, 0, 0 },

  { 18, 0, "StateflowChart/Quad.Quad_Idle", "Quad_Idle", 0, 3, 0, 0, 0 },

  { 19, 0, "StateflowChart/Quad.Quad_Init", "Quad_Init", 0, 3, 0, 0, 0 },

  { 20, 0, "StateflowChart/Quad.Quad_Names", "Quad_Names", 0, 3, 0, 0, 0 },

  { 21, 0, "StateflowChart/Setup", "Setup", 0, 3, 0, 0, 0 },

  { 22, 0, "StateflowChart/Setup.Setup_Init", "Setup_Init", 0, 3, 0, 0, 0 },

  { 23, 0, "StateflowChart/Setup.select_var", "select_var", 0, 3, 0, 0, 0 },

  { 24, 0, "StateflowChart/Setup.select_var.Select_Init", "Select_Init", 0, 3, 0,
    0, 0 },

  { 25, 0, "StateflowChart/Setup.select_var.select_Idle", "select_Idle", 0, 3, 0,
    0, 0 },

  { 26, 0, "StateflowChart/Setup.select_var.select_Wait", "select_Wait", 0, 3, 0,
    0, 0 },

  { 27, 0, "StateflowChart/Setup.setup_Idle", "setup_Idle", 0, 3, 0, 0, 0 },

  { 28, 0, "StateflowChart/Setup.setup_Wait", "setup_Wait", 0, 3, 0, 0, 0 },

  { 29, 0, "StateflowChart/Setup.wait", "wait", 0, 3, 0, 0, 0 },

  { 30, 0, "StateflowChart/Single", "Single", 0, 3, 0, 0, 0 },

  { 31, 0, "StateflowChart/Single.List_Idle", "List_Idle", 0, 3, 0, 0, 0 },

  { 32, 0, "StateflowChart/Single.Single_Init", "Single_Init", 0, 3, 0, 0, 0 },

  { 33, 0, "StateflowChart/Single.singleNames", "singleNames", 0, 3, 0, 0, 0 },

  { 34, 0, "StateflowChart/wait1", "wait1", 0, 3, 0, 0, 0 },

  { 35, 0, "StateflowChart/wait2", "wait2", 0, 3, 0, 0, 0 },

  { 36, 0, "StateflowChart/wait3", "wait3", 0, 3, 0, 0, 0 },

  { 37, 0, "StateflowChart/wait4", "wait4", 0, 3, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    38                                 /* Num Block IO signals */
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
  SFc2_BuckyWagon_01InstanceStruct *chartInstance;
  chartInstance = (SFc2_BuckyWagon_01InstanceStruct *) ((ChartInfoStruct *)
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
