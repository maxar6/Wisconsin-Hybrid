/* Include files */

#include "cx06_MA_sfun.h"
#include "c2_cx06_MA.h"
#include "c5_cx06_MA.h"
#include "c6_cx06_MA.h"
#include "c7_cx06_MA.h"
#include "c8_cx06_MA.h"
#include "c9_cx06_MA.h"
#include "c10_cx06_MA.h"
#include "c11_cx06_MA.h"
#include "c12_cx06_MA.h"
#include "c13_cx06_MA.h"
#include "c14_cx06_MA.h"
#include "c15_cx06_MA.h"
#include "c16_cx06_MA.h"
#include "c17_cx06_MA.h"
#include "c18_cx06_MA.h"
#include "c19_cx06_MA.h"
#include "c20_cx06_MA.h"
#include "c21_cx06_MA.h"
#include "c22_cx06_MA.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
int32_T _sfEvent_;
uint32_T _cx06_MAMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void cx06_MA_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void cx06_MA_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_cx06_MA_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==2) {
    c2_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_cx06_MA_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_cx06_MA_process_check_sum_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2105555219U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3695873290U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1009774707U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(975561541U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1613615047U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1456809984U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3246172554U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(211445425U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 2:
        {
          extern void sf_c2_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c2_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c5_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c6_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c7_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c8_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c9_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c10_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c11_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c12_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c13_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c14_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c15_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c16_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c17_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c18_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c19_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c20_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c21_cx06_MA_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_cx06_MA_get_check_sum(mxArray *plhs[]);
          sf_c22_cx06_MA_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2622892809U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(895442978U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3670041804U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3683084495U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1310778998U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3538242582U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(426709253U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(191308345U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_cx06_MA_autoinheritance_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
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
     case 2:
      {
        extern mxArray *sf_c2_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c2_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c5_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c6_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c7_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 8:
      {
        extern mxArray *sf_c8_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c8_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 9:
      {
        extern mxArray *sf_c9_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c9_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 10:
      {
        extern mxArray *sf_c10_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c10_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 11:
      {
        extern mxArray *sf_c11_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c11_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 12:
      {
        extern mxArray *sf_c12_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c12_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 13:
      {
        extern mxArray *sf_c13_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c13_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 14:
      {
        extern mxArray *sf_c14_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c14_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 15:
      {
        extern mxArray *sf_c15_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c15_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 16:
      {
        extern mxArray *sf_c16_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c16_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 17:
      {
        extern mxArray *sf_c17_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c17_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 18:
      {
        extern mxArray *sf_c18_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c18_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 19:
      {
        extern mxArray *sf_c19_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c19_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 20:
      {
        extern mxArray *sf_c20_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c20_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 21:
      {
        extern mxArray *sf_c21_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c21_cx06_MA_get_autoinheritance_info();
        break;
      }

     case 22:
      {
        extern mxArray *sf_c22_cx06_MA_get_autoinheritance_info(void);
        plhs[0] = sf_c22_cx06_MA_get_autoinheritance_info();
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

unsigned int sf_cx06_MA_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
     case 2:
      {
        extern const mxArray *sf_c2_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray *sf_c5_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray *sf_c6_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray *sf_c7_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray *sf_c8_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray *sf_c9_cx06_MA_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray *sf_c10_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray *sf_c11_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray *sf_c12_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray *sf_c13_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray *sf_c14_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray *sf_c15_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray *sf_c16_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray *sf_c17_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray *sf_c18_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray *sf_c19_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 20:
      {
        extern const mxArray *sf_c20_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c20_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 21:
      {
        extern const mxArray *sf_c21_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_cx06_MA_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 22:
      {
        extern const mxArray *sf_c22_cx06_MA_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c22_cx06_MA_get_eml_resolved_functions_info();
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

void cx06_MA_debug_initialize(void)
{
  _cx06_MAMachineNumber_ = sf_debug_initialize_machine("cx06_MA","sfun",0,19,0,0,
    0);
  sf_debug_set_machine_event_thresholds(_cx06_MAMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_cx06_MAMachineNumber_,0);
}

void cx06_MA_register_exported_symbols(SimStruct* S)
{
}
