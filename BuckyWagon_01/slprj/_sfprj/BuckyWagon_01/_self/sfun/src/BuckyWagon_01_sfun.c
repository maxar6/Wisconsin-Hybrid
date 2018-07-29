/* Include files */

#define IN_SF_MACHINE_SOURCE           1
#include "BuckyWagon_01_sfun.h"
#include "c1_BuckyWagon_01.h"
#include "c2_BuckyWagon_01.h"
#include "c3_BuckyWagon_01.h"
#include "c4_BuckyWagon_01.h"
#include "c5_BuckyWagon_01.h"
#include "c6_BuckyWagon_01.h"
#include "c7_BuckyWagon_01.h"
#include "c9_BuckyWagon_01.h"
#include "c11_BuckyWagon_01.h"
#include "c24_BuckyWagon_01.h"
#include "c32_BuckyWagon_01.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _BuckyWagon_01MachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void BuckyWagon_01_initializer(void)
{
}

void BuckyWagon_01_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_BuckyWagon_01_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==32) {
    c32_BuckyWagon_01_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_BuckyWagon_01_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1913926321U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(525692491U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3185452488U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(525743911U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2013926096U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2369984707U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3955223150U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(600655965U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c1_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c2_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c3_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c4_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c5_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c6_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c7_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c9_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c11_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c24_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       case 32:
        {
          extern void sf_c32_BuckyWagon_01_get_check_sum(mxArray *plhs[]);
          sf_c32_BuckyWagon_01_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3598619594U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3572565487U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2099113071U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(793411231U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2506177615U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2701764519U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(271686196U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2872533970U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_BuckyWagon_01_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
        extern mxArray *sf_c1_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c1_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c2_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c3_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c4_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c5_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c6_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c7_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 9:
      {
        extern mxArray *sf_c9_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c9_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 11:
      {
        extern mxArray *sf_c11_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c11_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 24:
      {
        extern mxArray *sf_c24_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c24_BuckyWagon_01_get_autoinheritance_info();
        break;
      }

     case 32:
      {
        extern mxArray *sf_c32_BuckyWagon_01_get_autoinheritance_info(void);
        plhs[0] = sf_c32_BuckyWagon_01_get_autoinheritance_info();
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

unsigned int sf_BuckyWagon_01_get_eml_resolved_functions_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
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
          *sf_c1_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 24:
      {
        extern const mxArray
          *sf_c24_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c24_BuckyWagon_01_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 32:
      {
        extern const mxArray
          *sf_c32_BuckyWagon_01_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c32_BuckyWagon_01_get_eml_resolved_functions_info();
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

void BuckyWagon_01_debug_initialize(void)
{
  _BuckyWagon_01MachineNumber_ = sf_debug_initialize_machine("BuckyWagon_01",
    "sfun",0,11,0,0,0);
  sf_debug_set_machine_event_thresholds(_BuckyWagon_01MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_BuckyWagon_01MachineNumber_,0);
}

void BuckyWagon_01_register_exported_symbols(SimStruct* S)
{
}
