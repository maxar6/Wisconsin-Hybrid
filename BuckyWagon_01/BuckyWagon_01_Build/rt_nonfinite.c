/*
 * File: rt_nonfinite.c
 *
 * Code generated for Simulink model 'BuckyWagon_01'.
 *
 * Model version                  : 1.1530
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Jul 29 18:42:46 2018
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/*
 * Abstract:
 *      Real-Time Workshop function to intialize non-finites,
 *      (Inf, NaN and -Inf).
 *
 * Description: This file generates custom content that replaces the default rtnonfinite.c
 * content.  The content of the rtnonfinite.c file varies quite a bit from version
 * to version, so this is a way to make the results more consistent.
 */
#include "rt_nonfinite.h"

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;

/* Function: rt_InitInfAndNaN ==================================================
 * Abstract:
 *	Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 *	generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  typedef struct {
    union {
      real32_T wordLreal;
      uint32_T wordLuint;
    } wordL;
  } IEEESingle;

  IEEESingle tmpSingle;
  tmpSingle.wordL.wordLuint = 0x7F800000;
  rtInfF = tmpSingle.wordL.wordLreal;
  tmpSingle.wordL.wordLuint = 0x7FFFFFFF;
  rtNaNF = tmpSingle.wordL.wordLreal;
  tmpSingle.wordL.wordLuint = 0xFF800000;
  rtMinusInfF = tmpSingle.wordL.wordLreal;
  if (realSize == 4) {
    rtInf = rtInfF;
    rtNaN = rtNaNF;
    rtMinusInf = rtMinusInfF;
  } else {
    typedef struct {
      struct {
        uint32_T wordH;
        uint32_T wordL;
      } words;
    } BigEndianIEEEDouble;

    union
    {
      BigEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FFFFFFF;
    tmpVal.bitVal.words.wordL = 0xFFFFFFFF;
    rtNaN = tmpVal.fltVal;
    tmpVal.bitVal.words.wordH = 0x7FF00000;
    tmpVal.bitVal.words.wordL = 0x00000000;
    rtInf = tmpVal.fltVal;
    tmpVal.bitVal.words.wordH = 0xFFF00000;
    tmpVal.bitVal.words.wordL = 0x00000000;
    rtMinusInf = tmpVal.fltVal;
  }
}

/* Function: rtIsInf ==================================================
 * Abstract:
 *	Test if value is infinite
 */
boolean_T rtIsInf(real_T value)
{
  return ((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Function: rtIsInfF =================================================
 * Abstract:
 *	Test if single-precision value is infinite
 */
boolean_T rtIsInfF(real32_T value)
{
  return(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Function: rtIsNaN ==================================================
 * Abstract:
 *	Test if value is not a number
 */
boolean_T rtIsNaN(real_T value)
{
  return((value!=value) ? 1U : 0U);
}

/* Function: rtIsNaNF =================================================
 * Abstract:
 *	Test if single-precision value is not a number
 */
boolean_T rtIsNaNF(real32_T value)
{
  return((value!=value) ? 1U : 0U);
}

/* end rt_nonfinite.c */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
