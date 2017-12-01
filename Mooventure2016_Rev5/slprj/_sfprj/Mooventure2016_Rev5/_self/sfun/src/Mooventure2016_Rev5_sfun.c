/* Include files */

#include "Mooventure2016_Rev5_sfun.h"
#include "c1_Mooventure2016_Rev5.h"
#include "c2_Mooventure2016_Rev5.h"
#include "c3_Mooventure2016_Rev5.h"
#include "c4_Mooventure2016_Rev5.h"
#include "c5_Mooventure2016_Rev5.h"
#include "c6_Mooventure2016_Rev5.h"
#include "c7_Mooventure2016_Rev5.h"
#include "c8_Mooventure2016_Rev5.h"
#include "c9_Mooventure2016_Rev5.h"
#include "c10_Mooventure2016_Rev5.h"
#include "c11_Mooventure2016_Rev5.h"
#include "c12_Mooventure2016_Rev5.h"
#include "c13_Mooventure2016_Rev5.h"
#include "c14_Mooventure2016_Rev5.h"
#include "c15_Mooventure2016_Rev5.h"
#include "c16_Mooventure2016_Rev5.h"
#include "c17_Mooventure2016_Rev5.h"
#include "c18_Mooventure2016_Rev5.h"
#include "c19_Mooventure2016_Rev5.h"
#include "c20_Mooventure2016_Rev5.h"
#include "c21_Mooventure2016_Rev5.h"
#include "c22_Mooventure2016_Rev5.h"
#include "c23_Mooventure2016_Rev5.h"
#include "c24_Mooventure2016_Rev5.h"
#include "c25_Mooventure2016_Rev5.h"
#include "c26_Mooventure2016_Rev5.h"
#include "c27_Mooventure2016_Rev5.h"
#include "c28_Mooventure2016_Rev5.h"
#include "c29_Mooventure2016_Rev5.h"
#include "c30_Mooventure2016_Rev5.h"
#include "c31_Mooventure2016_Rev5.h"
#include "c32_Mooventure2016_Rev5.h"
#include "c33_Mooventure2016_Rev5.h"
#include "c34_Mooventure2016_Rev5.h"
#include "c35_Mooventure2016_Rev5.h"
#include "c36_Mooventure2016_Rev5.h"
#include "c37_Mooventure2016_Rev5.h"
#include "c38_Mooventure2016_Rev5.h"
#include "c39_Mooventure2016_Rev5.h"
#include "c40_Mooventure2016_Rev5.h"
#include "c41_Mooventure2016_Rev5.h"
#include "c42_Mooventure2016_Rev5.h"
#include "c43_Mooventure2016_Rev5.h"
#include "c44_Mooventure2016_Rev5.h"
#include "c45_Mooventure2016_Rev5.h"
#include "c46_Mooventure2016_Rev5.h"
#include "c47_Mooventure2016_Rev5.h"
#include "c48_Mooventure2016_Rev5.h"
#include "c49_Mooventure2016_Rev5.h"
#include "c50_Mooventure2016_Rev5.h"
#include "c51_Mooventure2016_Rev5.h"
#include "c52_Mooventure2016_Rev5.h"
#include "c53_Mooventure2016_Rev5.h"
#include "c54_Mooventure2016_Rev5.h"
#include "c55_Mooventure2016_Rev5.h"
#include "c56_Mooventure2016_Rev5.h"
#include "c57_Mooventure2016_Rev5.h"
#include "c58_Mooventure2016_Rev5.h"
#include "c59_Mooventure2016_Rev5.h"
#include "c60_Mooventure2016_Rev5.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _Mooventure2016_Rev5MachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void Mooventure2016_Rev5_initializer(void)
{
}

void Mooventure2016_Rev5_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Mooventure2016_Rev5_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==25) {
    c25_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==26) {
    c26_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==27) {
    c27_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==28) {
    c28_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==29) {
    c29_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==30) {
    c30_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==31) {
    c31_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==32) {
    c32_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==33) {
    c33_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==34) {
    c34_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==35) {
    c35_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==36) {
    c36_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==37) {
    c37_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==38) {
    c38_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==39) {
    c39_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==40) {
    c40_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==41) {
    c41_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==42) {
    c42_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==43) {
    c43_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==44) {
    c44_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==45) {
    c45_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==46) {
    c46_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==47) {
    c47_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==48) {
    c48_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==49) {
    c49_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==50) {
    c50_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==51) {
    c51_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==52) {
    c52_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==53) {
    c53_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==54) {
    c54_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==55) {
    c55_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==56) {
    c56_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==57) {
    c57_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==58) {
    c58_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==59) {
    c59_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==60) {
    c60_Mooventure2016_Rev5_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Mooventure2016_Rev5_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3507023790U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1523738865U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2228524189U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(666113026U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(726631716U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3112437366U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3432957507U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3152220892U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c1_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c2_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c3_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c4_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c5_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c6_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c7_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c8_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c9_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c10_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c11_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c12_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c13_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c14_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c15_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c16_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c17_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c18_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c19_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c20_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c21_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c22_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 23:
        {
          extern void sf_c23_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c23_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c24_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 25:
        {
          extern void sf_c25_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c25_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 26:
        {
          extern void sf_c26_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c26_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 27:
        {
          extern void sf_c27_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c27_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 28:
        {
          extern void sf_c28_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c28_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 29:
        {
          extern void sf_c29_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c29_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 30:
        {
          extern void sf_c30_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c30_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 31:
        {
          extern void sf_c31_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c31_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 32:
        {
          extern void sf_c32_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c32_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 33:
        {
          extern void sf_c33_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c33_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 34:
        {
          extern void sf_c34_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c34_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 35:
        {
          extern void sf_c35_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c35_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 36:
        {
          extern void sf_c36_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c36_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 37:
        {
          extern void sf_c37_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c37_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 38:
        {
          extern void sf_c38_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c38_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 39:
        {
          extern void sf_c39_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c39_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 40:
        {
          extern void sf_c40_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c40_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 41:
        {
          extern void sf_c41_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c41_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 42:
        {
          extern void sf_c42_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c42_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 43:
        {
          extern void sf_c43_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c43_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 44:
        {
          extern void sf_c44_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c44_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 45:
        {
          extern void sf_c45_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c45_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 46:
        {
          extern void sf_c46_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c46_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 47:
        {
          extern void sf_c47_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c47_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 48:
        {
          extern void sf_c48_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c48_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 49:
        {
          extern void sf_c49_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c49_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 50:
        {
          extern void sf_c50_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c50_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 51:
        {
          extern void sf_c51_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c51_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 52:
        {
          extern void sf_c52_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c52_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 53:
        {
          extern void sf_c53_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c53_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 54:
        {
          extern void sf_c54_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c54_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 55:
        {
          extern void sf_c55_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c55_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 56:
        {
          extern void sf_c56_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c56_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 57:
        {
          extern void sf_c57_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c57_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 58:
        {
          extern void sf_c58_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c58_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 59:
        {
          extern void sf_c59_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c59_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       case 60:
        {
          extern void sf_c60_Mooventure2016_Rev5_get_check_sum(mxArray *plhs[]);
          sf_c60_Mooventure2016_Rev5_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3176360410U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1862911626U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(659157607U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1884031890U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2895225378U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2619091700U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(920648005U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2187283491U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Mooventure2016_Rev5_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c1_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c2_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c3_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c4_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c5_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c6_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c7_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 8:
      {
        extern mxArray *sf_c8_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c8_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 9:
      {
        extern mxArray *sf_c9_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c9_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 10:
      {
        extern mxArray *sf_c10_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c10_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 11:
      {
        extern mxArray *sf_c11_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c11_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 12:
      {
        extern mxArray *sf_c12_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c12_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 13:
      {
        extern mxArray *sf_c13_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c13_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 14:
      {
        extern mxArray *sf_c14_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c14_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 15:
      {
        extern mxArray *sf_c15_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c15_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 16:
      {
        extern mxArray *sf_c16_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c16_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 17:
      {
        extern mxArray *sf_c17_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c17_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 18:
      {
        extern mxArray *sf_c18_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c18_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 19:
      {
        extern mxArray *sf_c19_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c19_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 20:
      {
        extern mxArray *sf_c20_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c20_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 21:
      {
        extern mxArray *sf_c21_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c21_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 22:
      {
        extern mxArray *sf_c22_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c22_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 23:
      {
        extern mxArray *sf_c23_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c23_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 24:
      {
        extern mxArray *sf_c24_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c24_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 25:
      {
        extern mxArray *sf_c25_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c25_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 26:
      {
        extern mxArray *sf_c26_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c26_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 27:
      {
        extern mxArray *sf_c27_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c27_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 28:
      {
        extern mxArray *sf_c28_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c28_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 29:
      {
        extern mxArray *sf_c29_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c29_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 30:
      {
        extern mxArray *sf_c30_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c30_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 31:
      {
        extern mxArray *sf_c31_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c31_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 32:
      {
        extern mxArray *sf_c32_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c32_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 33:
      {
        extern mxArray *sf_c33_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c33_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 34:
      {
        extern mxArray *sf_c34_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c34_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 35:
      {
        extern mxArray *sf_c35_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c35_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 36:
      {
        extern mxArray *sf_c36_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c36_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 37:
      {
        extern mxArray *sf_c37_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c37_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 38:
      {
        extern mxArray *sf_c38_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c38_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 39:
      {
        extern mxArray *sf_c39_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c39_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 40:
      {
        extern mxArray *sf_c40_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c40_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 41:
      {
        extern mxArray *sf_c41_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c41_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 42:
      {
        extern mxArray *sf_c42_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c42_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 43:
      {
        extern mxArray *sf_c43_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c43_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 44:
      {
        extern mxArray *sf_c44_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c44_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 45:
      {
        extern mxArray *sf_c45_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c45_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 46:
      {
        extern mxArray *sf_c46_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c46_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 47:
      {
        extern mxArray *sf_c47_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c47_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 48:
      {
        extern mxArray *sf_c48_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c48_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 49:
      {
        extern mxArray *sf_c49_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c49_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 50:
      {
        extern mxArray *sf_c50_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c50_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 51:
      {
        extern mxArray *sf_c51_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c51_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 52:
      {
        extern mxArray *sf_c52_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c52_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 53:
      {
        extern mxArray *sf_c53_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c53_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 54:
      {
        extern mxArray *sf_c54_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c54_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 55:
      {
        extern mxArray *sf_c55_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c55_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 56:
      {
        extern mxArray *sf_c56_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c56_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 57:
      {
        extern mxArray *sf_c57_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c57_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 58:
      {
        extern mxArray *sf_c58_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c58_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 59:
      {
        extern mxArray *sf_c59_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c59_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     case 60:
      {
        extern mxArray *sf_c60_Mooventure2016_Rev5_get_autoinheritance_info(void);
        plhs[0] = sf_c60_Mooventure2016_Rev5_get_autoinheritance_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Mooventure2016_Rev5_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray
          *sf_c12_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray
          *sf_c13_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray
          *sf_c14_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray
          *sf_c15_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray
          *sf_c16_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray
          *sf_c17_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray
          *sf_c18_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray
          *sf_c19_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 20:
      {
        extern const mxArray
          *sf_c20_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c20_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 21:
      {
        extern const mxArray
          *sf_c21_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 22:
      {
        extern const mxArray
          *sf_c22_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c22_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 23:
      {
        extern const mxArray
          *sf_c23_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c23_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 24:
      {
        extern const mxArray
          *sf_c24_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c24_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 25:
      {
        extern const mxArray
          *sf_c25_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c25_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 26:
      {
        extern const mxArray
          *sf_c26_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c26_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 27:
      {
        extern const mxArray
          *sf_c27_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c27_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 28:
      {
        extern const mxArray
          *sf_c28_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c28_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 29:
      {
        extern const mxArray
          *sf_c29_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c29_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 30:
      {
        extern const mxArray
          *sf_c30_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c30_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 31:
      {
        extern const mxArray
          *sf_c31_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c31_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 32:
      {
        extern const mxArray
          *sf_c32_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c32_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 33:
      {
        extern const mxArray
          *sf_c33_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c33_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 34:
      {
        extern const mxArray
          *sf_c34_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c34_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 35:
      {
        extern const mxArray
          *sf_c35_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c35_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 36:
      {
        extern const mxArray
          *sf_c36_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c36_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 37:
      {
        extern const mxArray
          *sf_c37_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c37_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 38:
      {
        extern const mxArray
          *sf_c38_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c38_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 39:
      {
        extern const mxArray
          *sf_c39_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c39_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 40:
      {
        extern const mxArray
          *sf_c40_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c40_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 41:
      {
        extern const mxArray
          *sf_c41_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c41_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 42:
      {
        extern const mxArray
          *sf_c42_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c42_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 43:
      {
        extern const mxArray
          *sf_c43_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c43_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 44:
      {
        extern const mxArray
          *sf_c44_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c44_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 45:
      {
        extern const mxArray
          *sf_c45_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c45_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 46:
      {
        extern const mxArray
          *sf_c46_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c46_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 47:
      {
        extern const mxArray
          *sf_c47_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c47_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 48:
      {
        extern const mxArray
          *sf_c48_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c48_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 49:
      {
        extern const mxArray
          *sf_c49_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c49_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 50:
      {
        extern const mxArray
          *sf_c50_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c50_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 51:
      {
        extern const mxArray
          *sf_c51_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c51_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 52:
      {
        extern const mxArray
          *sf_c52_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c52_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 53:
      {
        extern const mxArray
          *sf_c53_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c53_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 54:
      {
        extern const mxArray
          *sf_c54_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c54_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 55:
      {
        extern const mxArray
          *sf_c55_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c55_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 56:
      {
        extern const mxArray
          *sf_c56_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c56_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 57:
      {
        extern const mxArray
          *sf_c57_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c57_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 58:
      {
        extern const mxArray
          *sf_c58_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c58_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 59:
      {
        extern const mxArray
          *sf_c59_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c59_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 60:
      {
        extern const mxArray
          *sf_c60_Mooventure2016_Rev5_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c60_Mooventure2016_Rev5_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void Mooventure2016_Rev5_debug_initialize(void)
{
  _Mooventure2016_Rev5MachineNumber_ = sf_debug_initialize_machine(
    "Mooventure2016_Rev5","sfun",0,60,0,0,0);
  sf_debug_set_machine_event_thresholds(_Mooventure2016_Rev5MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_Mooventure2016_Rev5MachineNumber_,0);
}

void Mooventure2016_Rev5_register_exported_symbols(SimStruct* S)
{
}
