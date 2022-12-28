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
 ***  %name: TqSys_EveSyncFrame38D_Tra_fct.h %
 *** 
 ***  %version: 11.0.build2 %
 *** 
 ***  %date_modified: Thu Apr 25 15:31:03 2013 %
 *** 
 *** 
 ***  %derived_by: u383015 %
 ***  %release: TqStruct/10.1 %
 ***  %full_filespec: TqSys_EveSyncFrame38D_Tra_fct.h-11.0.build2:incl:3 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : CSMT_CGMT06_2096
 *** TargetLink subsystem : CSMT_CGMT06_2096/F0_CSMT_CGMT06_2096_V7_0
 *** Codefile             : tqsys_evesyncframe38d_tra_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-04-24 15:16:51
 ***
 *** CODE GENERATOR OPTIONS:
 *** Compiler                            : <unknown>
 *** Target                              : Generic
 *** ANSI-C compatible code              : yes
 *** Optimization level                  : 2
 *** Constant style                      : decimal
 *** Clean code option                   : enabled
 *** Logging mode                        : Do not log anything
 *** Linker sections                     : enabled
 *** Assembler statements                : disabled
 *** Variable name length                : 31 chars
 *** Use global bitfields                : disabled
 *** Stateflow: use of bitfields         : enabled
 *** State activity encoding limit       : 5
 *** Omit zero inits in restart function : disabled
 *** Share fcns between TL subsystems    : enabled
 *** Generate 64bit functions            : enabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : enabled
 *** Style definition file               : C:\Dspace301\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\Dspace301\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSource
 ***                                       CodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TQSYS_EVESYNCFRAME38D_TRA_FCT_H_
#define _TQSYS_EVESYNCFRAME38D_TRA_FCT_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines.h"
#include "tl_basetypes.h"
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
#define COGBX_START_SEC_VAR_8BIT
#include "CoGBx_MemMap.h"
/******************************************************************************\
   UserSLGlobalInit: SLGlobalInit = { ref_GlobalInit } | Width: 8
\******************************************************************************/
extern UInt8 X_S20969_Unit_Delay;
#define COGBX_STOP_SEC_VAR_8BIT
#include "CoGBx_MemMap.h"


#define COGBX_START_SEC_GLOBAL_16BIT
#include "CoGBx_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_IF_GLOBAL_16BIT UInt16 TqSys_EveSyncFrame38D_Tra_TqDem_spdVehFil1_irv_out /* 
   Unit       : km/h
   Description: Valeur du signal vitesse vehicule CAN apr�s l application du premier filtre
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define COGBX_STOP_SEC_GLOBAL_16BIT
#include "CoGBx_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void TqSys_EveSyncFrame38D_Tra_fct(Void);


#endif/*_TQSYS_EVESYNCFRAME38D_TRA_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/