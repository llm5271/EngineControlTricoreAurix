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
 ***  %name: ThMgt_Lib.h %
 *** 
 ***  %version: 15.0.build1 %
 *** 
 ***  %date_modified: Fri Jun 14 17:01:50 2013 %
 *** 
 *** 
 ***  %derived_by: u299919 %
 ***  %release: ThMgt/14.2 %
 ***  %full_filespec: ThMgt_Lib.h-15.0.build1:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : SWC_ThMgt
 *** TargetLink subsystem : SWC_ThMgt/ThMgt
 *** Codefile             : thmgt_lib.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-06-13 16:17:57
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
 *** Share fcns between TL subsystems    : disabled
 *** Generate 64bit functions            : enabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _THMGT_LIB_H_
#define _THMGT_LIB_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_basetypes.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/

typedef struct tagISV_SRSS1_0_tp {
   Boolean SRSS2_Switch;
   Boolean X_SRSS3_UnitDelay;
   Boolean X_SRSS3_UnitDelay1;
} ISV_SRSS1_0_tp; /* Reuse linker section structure */
typedef struct tagISV_SRSS1_tp {
   ISV_SRSS1_0_tp * pISV_SRSS1_0_tp /* Description: ptr to struct */;
} ISV_SRSS1_tp; /* Reuse structure */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

/******************************************************************************\
   GLOBAL_FCN: global function(s) (exported to other modules)
\******************************************************************************/
extern Void HysPos_fct(SInt16 High, SInt16 In, SInt16 Low, Boolean * out, ISV_SRSS1_tp * pISV);


#endif/*_THMGT_LIB_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/