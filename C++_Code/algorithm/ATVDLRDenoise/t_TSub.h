//
// MATLAB Compiler: 8.4 (R2022a)
// Date: Mon Nov 28 19:06:11 2022
// Arguments: "-B""macro_default""-W""cpplib:t_TSub""-T""link:lib""t_TSub.m""-C"
//

#ifndef t_TSub_h
#define t_TSub_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" { // sbcheck:ok:extern_c
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_t_TSub_C_API 
#define LIB_t_TSub_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_t_TSub_C_API 
bool MW_CALL_CONV t_TSubInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_t_TSub_C_API 
bool MW_CALL_CONV t_TSubInitialize(void);

extern LIB_t_TSub_C_API 
void MW_CALL_CONV t_TSubTerminate(void);

extern LIB_t_TSub_C_API 
void MW_CALL_CONV t_TSubPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_t_TSub_C_API 
bool MW_CALL_CONV mlxT_TSub(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#ifdef __cplusplus
}
#endif


/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__MINGW64__)

#ifdef EXPORTING_t_TSub
#define PUBLIC_t_TSub_CPP_API __declspec(dllexport)
#else
#define PUBLIC_t_TSub_CPP_API __declspec(dllimport)
#endif

#define LIB_t_TSub_CPP_API PUBLIC_t_TSub_CPP_API

#else

#if !defined(LIB_t_TSub_CPP_API)
#if defined(LIB_t_TSub_C_API)
#define LIB_t_TSub_CPP_API LIB_t_TSub_C_API
#else
#define LIB_t_TSub_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_t_TSub_CPP_API void MW_CALL_CONV t_TSub(int nargout, mwArray& Tk, const mwArray& C);

/* C++ INTERFACE -- WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */
#endif

#endif
