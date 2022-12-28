/**************************************************************************************************\
 *** 
 ***                            P. C. A.
 *** 
 ***                     Peugeot Citroen Automobile
 *** 
 ***         This file is the property of PCA. All rights are reserved
 ***         by PCA and this file must not be copied or disclosed
 ***        (in whole or in part) without prior written consent of PCA.
 *** 
 *** *******************************************************************************
 *** 
 ***  %name: TL_Comments.xsl %
 *** 
 ***  %version: 1 %
 *** 
 ***  %date_modified: Tue Dec 10 11:34:07 2013 %
 *** 
 *** 
 ***  %derived_by: u378808 %
 ***  %release: TL_Pack_Scripts/6.0 %
 ***  %full_filespec: TL_Comments.xsl-1:ascii:3 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : SWC_EBStub_TL
 *** TargetLink subsystem : SWC_EBStub_TL/SWC_EBStub
 *** Codefile             : EBSTUB_Version.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2014-08-11 08:37:51
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : AUTOSAR
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Optimization level                       : 2
 *** Constant style                           : decimal
 *** Clean code option                        : disabled
 *** Logging mode                             : According to block-specific data
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Efficient vector handling                : enabled
 *** Loop unroll threshold                    : 5
 *** Variable vector widths                   : enabled
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** No assignment of boolean expressions     : disabled
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : enabled
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : enabled
 *** Style definition file                    : C:\TPS\TL_Pack_Scripts\02_Templates\cconfig.xml
 *** Root style sheet                         : C:\Program Files (x86)\dSPACE TargetLink 3.2_Set 1\M
 ***                                            atlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCodeSS.xs
 ***                                            l
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** Sa1                      SWC_EBStub
 *** Sa2                      SWC_EBStub/EBSTUB
 *** Sa3                      SWC_EBStub/EBSTUB/RE_EBStub_001_MSE
 *** Sa4                      SWC_EBStub/EBSTUB/RunnableScheduler
 *** Sa5                      SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_100ms
 *** Sa6                      SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_10ms
 *** Sa7                      SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_1s
 *** Sa8                      SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_200ms
 *** Sa9                      SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_20ms
 *** Sa10                     SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_40ms
 *** Sa11                     SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_5ms
 *** Sa12                     SWC_EBStub/EBSTUB/RunnableScheduler/Scheduler_Init
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** Ca0       PSA_TLLIB                                              
 *** Ca1       SWC_EBStub/EBSTUB/RunnableScheduler/RunnableScheduler  
 *** Ca2       SWC_EBStub/EBSTUB/RunnableScheduler/RunnableScheduler.
 ***           RunState                                               
 *** 
 *** TargetLink version      : 3.2p5 from 20-Apr-2012
 *** Code generator version  : Build Id 3.2.1.5 from 2012-04-20 13:00:05
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _EBSTUB_VERSION_C_
#define _EBSTUB_VERSION_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "EBSTUB_Version.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define EBSTUB_START_SEC_CONST_VERSION_MODULE_8BIT
#include "EBStub_MemMap.h"
/******************************************************************************\
   AR_SEC_CONST_VERSION_MODULE_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_SEC_CONST_VERSION_MODULE_8BIT UInt8 EBSTUB_ModuleVersion_Major_MP = 1 /* LSB: 2^0 OFF:  0 MIN/MAX
   :  0 .. 255 */;
AR_SEC_CONST_VERSION_MODULE_8BIT UInt8 EBSTUB_ModuleVersion_Minor_MP = 0 /* LSB: 2^0 OFF:  0 MIN/MAX
   :  0 .. 255 */;

#define EBSTUB_STOP_SEC_CONST_VERSION_MODULE_8BIT
#include "EBStub_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_EBSTUB_VERSION_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/