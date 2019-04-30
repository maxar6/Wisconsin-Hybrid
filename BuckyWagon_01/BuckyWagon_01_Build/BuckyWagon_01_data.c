/*
 * File: BuckyWagon_01_data.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1586
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 29 19:20:54 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BuckyWagon_01.h"
#include "BuckyWagon_01_private.h"

/* Invariant block signals (auto storage) */
const ConstBlockIO_BuckyWagon_01 BuckyWagon_01_ConstB = {
  0.0
  ,                                    /* '<S180>/Saturation3' */
  0
  ,                                    /* '<S180>/Data Type Conversion3' */
  0
  /* '<S115>/Data Type Conversion' */
};

/* Constant parameters (auto storage) */
const ConstParam_BuckyWagon_01 BuckyWagon_01_ConstP = {
  /* Expression: int32(miniviewSetup('barMax'))
   * Referenced by: '<S19>/Constant6'
   */
  { 100, 350, 150, 50, 5000, 0, 240, 100, 100, 100, 75, 100, 15000, 100, 100, 1,
    1, 1 },

  /* Computed Parameter: Constant7_Value
   * Referenced by: '<S19>/Constant7'
   */
  { 0, 250, -150, -40, -1000, 240, 0, 0, 0, 0, -40, 0, 9000, 0, 0, 0, 0, 0 },

  /* Expression: uint8([' Exit ' 0 0 0 0 0 0 0 ' Single ' 0 0 0 0 0 ' Dual Upper ' 0 ' Dual Lower ' 0 ' Quad UL ' 0 0 0 0 ' Quad UR ' 0 0 0 0 ' Quad DL ' 0 0 0 0 ' Quad DR ' 0 0 0 0])
   * Referenced by: '<S19>/Constant8'
   */
  { 32U, 69U, 120U, 105U, 116U, 32U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 32U, 83U, 105U,
    110U, 103U, 108U, 101U, 32U, 0U, 0U, 0U, 0U, 0U, 32U, 68U, 117U, 97U, 108U,
    32U, 85U, 112U, 112U, 101U, 114U, 32U, 0U, 32U, 68U, 117U, 97U, 108U, 32U,
    76U, 111U, 119U, 101U, 114U, 32U, 0U, 32U, 81U, 117U, 97U, 100U, 32U, 85U,
    76U, 32U, 0U, 0U, 0U, 0U, 32U, 81U, 117U, 97U, 100U, 32U, 85U, 82U, 32U, 0U,
    0U, 0U, 0U, 32U, 81U, 117U, 97U, 100U, 32U, 68U, 76U, 32U, 0U, 0U, 0U, 0U,
    32U, 81U, 117U, 97U, 100U, 32U, 68U, 82U, 32U, 0U, 0U, 0U, 0U },

  /* Expression: uint8(miniviewSetup('names'))
   * Referenced by: '<S19>/Constant4'
   */
  { 66U, 97U, 116U, 32U, 83U, 79U, 67U, 0U, 0U, 0U, 66U, 97U, 116U, 32U, 86U, 0U,
    0U, 0U, 0U, 0U, 66U, 97U, 116U, 32U, 73U, 0U, 0U, 0U, 0U, 0U, 66U, 97U, 116U,
    32U, 84U, 101U, 109U, 112U, 0U, 0U, 77U, 111U, 116U, 32U, 82U, 80U, 77U, 0U,
    0U, 0U, 84U, 111U, 114U, 113U, 67U, 109U, 100U, 0U, 0U, 0U, 84U, 111U, 114U,
    113U, 65U, 99U, 116U, 0U, 0U, 0U, 69U, 108U, 101U, 99U, 80U, 119U, 114U, 0U,
    0U, 0U, 77U, 101U, 99U, 104U, 80U, 119U, 114U, 0U, 0U, 0U, 69U, 102U, 102U,
    105U, 99U, 0U, 0U, 0U, 0U, 0U, 77U, 67U, 32U, 84U, 101U, 109U, 112U, 0U, 0U,
    0U, 67U, 111U, 111U, 108U, 97U, 110U, 116U, 80U, 0U, 0U, 65U, 117U, 120U,
    32U, 86U, 0U, 0U, 0U, 0U, 0U, 65U, 99U, 99U, 101U, 108U, 73U, 110U, 0U, 0U,
    0U, 66U, 114U, 97U, 107U, 101U, 73U, 110U, 0U, 0U, 0U, 82U, 101U, 118U, 73U,
    110U, 0U, 0U, 0U, 0U, 0U, 82U, 101U, 118U, 79U, 117U, 116U, 0U, 0U, 0U, 0U,
    69U, 83U, 84U, 79U, 80U, 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8(miniviewSetup('namesline1'))
   * Referenced by: '<S19>/Constant2'
   */
  { 66U, 97U, 116U, 116U, 0U, 0U, 0U, 66U, 97U, 116U, 0U, 0U, 0U, 0U, 66U, 97U,
    116U, 0U, 0U, 0U, 0U, 66U, 97U, 116U, 0U, 0U, 0U, 0U, 77U, 111U, 116U, 111U,
    114U, 0U, 0U, 84U, 111U, 114U, 113U, 0U, 0U, 0U, 84U, 111U, 114U, 113U, 0U,
    0U, 0U, 69U, 108U, 101U, 99U, 0U, 0U, 0U, 77U, 101U, 99U, 104U, 0U, 0U, 0U,
    69U, 102U, 102U, 99U, 0U, 0U, 0U, 77U, 67U, 0U, 0U, 0U, 0U, 0U, 67U, 111U,
    111U, 108U, 97U, 110U, 0U, 65U, 117U, 120U, 0U, 0U, 0U, 0U, 65U, 99U, 99U,
    101U, 108U, 0U, 0U, 66U, 114U, 97U, 107U, 101U, 0U, 0U, 82U, 101U, 118U, 83U,
    119U, 0U, 0U, 82U, 101U, 118U, 0U, 0U, 0U, 0U, 69U, 83U, 84U, 79U, 80U, 0U,
    0U },

  /* Expression: uint8(miniviewSetup('namesline2'))
   * Referenced by: '<S19>/Constant3'
   */
  { 83U, 79U, 67U, 0U, 0U, 0U, 0U, 86U, 111U, 108U, 116U, 115U, 0U, 0U, 65U,
    109U, 112U, 115U, 0U, 0U, 0U, 84U, 101U, 109U, 112U, 0U, 0U, 0U, 82U, 80U,
    77U, 0U, 0U, 0U, 0U, 67U, 109U, 100U, 0U, 0U, 0U, 0U, 65U, 99U, 116U, 0U, 0U,
    0U, 0U, 80U, 119U, 114U, 0U, 0U, 0U, 0U, 80U, 119U, 114U, 0U, 0U, 0U, 0U,
    110U, 99U, 121U, 0U, 0U, 0U, 0U, 84U, 101U, 109U, 112U, 0U, 0U, 0U, 80U,
    117U, 109U, 112U, 0U, 0U, 0U, 86U, 0U, 0U, 0U, 0U, 0U, 0U, 73U, 110U, 0U, 0U,
    0U, 0U, 0U, 73U, 110U, 0U, 0U, 0U, 0U, 0U, 73U, 110U, 0U, 0U, 0U, 0U, 0U,
    79U, 117U, 116U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8(miniviewSetup('barGraphMode'))
   * Referenced by: '<S19>/Constant5'
   */
  { 0U, 0U, 2U, 0U, 2U, 0U, 2U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 1U },

  /* Computed Parameter: CombinatorialLogic_table
   * Referenced by: '<S116>/Combinatorial  Logic'
   */
  { 0, 0, 1, 0, 0, 1, 1, 0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
