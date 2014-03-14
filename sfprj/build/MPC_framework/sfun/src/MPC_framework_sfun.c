/* Include files */
#include "MPC_framework_sfun.h"
#include "c1_MPC_framework.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint8_T _sfEvent_;
uint32_T _MPC_frameworkMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void MPC_framework_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void MPC_framework_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_MPC_framework_method_dispatcher(SimStruct *simstructPtr, const
 char *chartName, int_T method, void *data)
{
  if(!strcmp_ignore_ws(chartName,"MPC_framework/State Machine/ SFunction ")) {
    c1_MPC_framework_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  return 0;
}
unsigned int sf_MPC_framework_process_check_sum_call( int nlhs, mxArray *
 plhs[], int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"sf_get_check_sum")) return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if(nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if(!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2853016054U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2874335334U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2568698101U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2205291570U);
    }else if(!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    }else if(!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2051198313U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3662037718U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(89214699U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1249478205U);
    }else if(nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch(chartFileNumber) {
       case 1:
        {
          extern void sf_c1_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c1_MPC_framework_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    }else if(!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1754806362U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1973214305U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1659388014U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2148097642U);
    }else {
      return 0;
    }
  } else{
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2739143114U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1205395838U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4117826729U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3368597863U);
  }
  return 1;
#else
  return 0;
#endif
}

unsigned int sf_MPC_framework_autoinheritance_info( int nlhs, mxArray * plhs[],
 int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"get_autoinheritance_info")) return 0;
  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch(chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c1_MPC_framework_get_autoinheritance_info();
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
void MPC_framework_debug_initialize(void)
{
  _MPC_frameworkMachineNumber_ =
  sf_debug_initialize_machine("MPC_framework","sfun",0,1,0,0,0);
  sf_debug_set_machine_event_thresholds(_MPC_frameworkMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_MPC_frameworkMachineNumber_,0);
}

void MPC_framework_register_exported_symbols(SimStruct* S)
{
}
