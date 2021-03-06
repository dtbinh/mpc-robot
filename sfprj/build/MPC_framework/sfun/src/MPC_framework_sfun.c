/* Include files */
#include "MPC_framework_sfun.h"
#include "c1_MPC_framework.h"
#include "c2_MPC_framework.h"
#include "c3_MPC_framework.h"
#include "c4_MPC_framework.h"
#include "c7_MPC_framework.h"
#include "c8_MPC_framework.h"

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
  if(!strcmp_ignore_ws(chartName,"MPC_framework/Inverse geometry/Subsystem/invgeo/ SFunction "))
  {
    c2_MPC_framework_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  if(!strcmp_ignore_ws(chartName,"MPC_framework/Trajectory design/Trajectory design1/Curve calculation/Joint reference singal 1/ SFunction "))
  {
    c3_MPC_framework_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  if(!strcmp_ignore_ws(chartName,"MPC_framework/Trajectory design/Trajectory design1/Curve calculation/Joint reference singal 2/ SFunction "))
  {
    c4_MPC_framework_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  if(!strcmp_ignore_ws(chartName,"MPC_framework/Trajectory design/Trajectory design1/Init/Trajectory design 1/ SFunction "))
  {
    c7_MPC_framework_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  if(!strcmp_ignore_ws(chartName,"MPC_framework/Trajectory design/Trajectory design1/Init/Trajectory design 2/ SFunction "))
  {
    c8_MPC_framework_method_dispatcher(simstructPtr, method, data);
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3442602329U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2322553597U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3344909884U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(546093224U);
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

       case 2:
        {
          extern void sf_c2_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c2_MPC_framework_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c3_MPC_framework_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c4_MPC_framework_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c7_MPC_framework_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_MPC_framework_get_check_sum(mxArray *plhs[]);
          sf_c8_MPC_framework_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    }else if(!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2673756024U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1524368602U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3134565827U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1947018348U);
    }else {
      return 0;
    }
  } else{
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1497835440U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1078096579U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3223471371U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(626089462U);
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

     case 2:
      {
        extern mxArray *sf_c2_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c2_MPC_framework_get_autoinheritance_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c3_MPC_framework_get_autoinheritance_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c4_MPC_framework_get_autoinheritance_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c7_MPC_framework_get_autoinheritance_info();
        break;
      }

     case 8:
      {
        extern mxArray *sf_c8_MPC_framework_get_autoinheritance_info(void);
        plhs[0] = sf_c8_MPC_framework_get_autoinheritance_info();
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
  sf_debug_initialize_machine("MPC_framework","sfun",0,6,0,0,0);
  sf_debug_set_machine_event_thresholds(_MPC_frameworkMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_MPC_frameworkMachineNumber_,0);
}

void MPC_framework_register_exported_symbols(SimStruct* S)
{
}
