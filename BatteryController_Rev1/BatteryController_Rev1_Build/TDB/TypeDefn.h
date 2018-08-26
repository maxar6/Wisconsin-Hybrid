/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*! 
\file      Typedefn.h
\brief     Portable type definitions
           
           (C)1998-2010 Woodward  <BR>
           Platform: Platform independant

:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
#ifndef __TYPEDEFN_H
#define __TYPEDEFN_H

/*----- INCLUDES ---------------------------------------------------------*/
#include <windows.h>

/*----- DEFINES ----------------------------------------------------------*/
#define TRUE 1
#define FALSE 0

#ifdef __cplusplus
    #define CFUNC extern "C"
    #define CEXTERN extern "C"
/*  #define NULL 0 */
#else /* __cplusplus */
    #define CFUNC
    #define CEXTERN extern
/*  #define NULL ((void *)0) */
#endif /* __cplusplus */

#define DllExport __declspec(dllexport) __stdcall

/*----- TYPEDEFS ---------------------------------------------------------*/
typedef unsigned char bool1;
typedef bool1* pbool1;
typedef unsigned short bool2;
typedef bool2* pbool2;
typedef unsigned long bool4;
typedef bool4* pbool4;

#ifdef __cplusplus
#define char1 char
#else /* __cplusplus */
typedef unsigned char char1;
#endif
typedef char1* pchar1;
typedef unsigned short char2;
typedef char2* pchar2;

typedef signed char sint1;
typedef sint1* psint1;
typedef signed short sint2;
typedef sint2* psint2;
#ifdef _CVI_
typedef int sint4;
#else
typedef signed long sint4;
#endif
typedef sint4* psint4;

typedef unsigned char uint1;
typedef uint1* puint1;
typedef unsigned short uint2;
typedef uint2* puint2;
typedef unsigned long uint4;
typedef uint4* puint4;

typedef float real4;
typedef real4* preal4;
typedef double real8;
typedef real8* preal8;

/*----- EXTERNALS --------------------------------------------------------*/
#if ((defined INCLUDE_EXTERNS)||(!defined __TYPEDEFN_C))

#endif /* (defined INCLUDE_EXTERNS)||(!defined __TYPEDEFN_C) */

/*----- PROTOTYPES -------------------------------------------------------*/

#endif /* __TYPEDEFN_H */

/*----- END OF FILE ------------------------------------------------------*/
