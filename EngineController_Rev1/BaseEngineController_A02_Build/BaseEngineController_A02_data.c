/*
 * File: BaseEngineController_A02_data.c
 *
 * Real-Time Workshop code generated for Simulink model BaseEngineController_A02.
 *
 * Model version                        : 1.1510
 * Real-Time Workshop file version      : 7.5  (R2010a)  25-Jan-2010
 * Real-Time Workshop file generated on : Sun Nov 19 15:20:16 2017
 * TLC version                          : 7.5 (Jan 19 2010)
 * C/C++ source code generated on       : Sun Nov 19 15:20:17 2017
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02.h"
#include "BaseEngineController_A02_private.h"

/* Invariant block signals (auto storage) */
ConstBlockIO_BaseEngineController_A02 BaseEngineController_A02_ConstB = {
  0.0
  ,                                    /* '<S710>/Gain4' */
  0.0
  ,                                    /* '<S123>/motohawk_replicate2' */

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  ,                                    /* '<S123>/motohawk_replicate' */
  0U
  ,                                    /* '<S710>/Data Type Conversion5' */
  6U
  ,                                    /* '<S274>/Width1' */
  71U
  /* '<S274>/Width2' */
};

/* Constant parameters (auto storage) */
const ConstParam_BaseEngineController_A02 BaseEngineController_A02_ConstP = {
  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S285>/Constant2'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: zerosvector_Value
   * Referenced by: '<S274>/zeros vector'
   */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: Constant1_Value_n
   * Referenced by: '<S285>/Constant1'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Logic_table
   * Referenced by: '<S860>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S308>/Combinatorial  Logic'
   *   '<S309>/Combinatorial  Logic'
   *   '<S310>/Combinatorial  Logic'
   *   '<S44>/Combinatorial  Logic'
   *   '<S254>/Combinatorial  Logic'
   */
  { 0, 0, 1, 0, 0, 1, 1, 0 },

  /* Computed Parameter: zerosvector1_Value
   * Referenced by: '<S274>/zeros vector1'
   */
  { 0, 0, 0, 0, 0, 0 }
};

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
