/**************************************************************************************************\
 *** 
 *** Simulink model       : CoASEPwt_01460_10_02172_TL
 *** TargetLink subsystem : CoASEPwt_01460_10_02172_TL/ASE_006
 *** Codefile             : ASE_006_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2010-12-14 14:29:36
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
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 2.2.1 from 21-Jun-2007
 *** Code generator version  : Build Id 2.2.1.9 from 2007-06-21 12:36:51
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/ 

#ifndef _ASE_006_CALIBRATIONS_H_
#define _ASE_006_CALIBRATIONS_H_

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

#define ASE_START_SEC_CALIB_8BIT
#include "ASE_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoASEPwt_stModAcvRun_C /* 
   Description: Traitement bool�en de For�age Etat GMP STT tournant
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 CoASEPwt_stModDetNNull_C /* 
   Description: Traitement bool�en de la confirmation du r�gime moteur nul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;

#define ASE_STOP_SEC_CALIB_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranASEToStallIp_C /* 
   Description: Activation de la Transition Sortie Calage vers Calage en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranOffToStallIp_C /* 
   Description: Activation de la Transition Off vers Calage en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranOnToCutIp_C /* 
   Description: Activation de la Transition On vers Coupure en cours
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallIpToASE_C /* 
   Description: Activation de la Transition Calage en cours vers Sortie Calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallIpToStall_C /* 
   Description: Activation de la Transition Calage en cours vers Cal�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean CoASEPwt_bTranStallToASE_C /* 
   Description: Activation de la Transition Cal� vers Sortie Calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_CALIB_BOOLEAN
#include "ASE_MemMap.h"

#define ASE_START_SEC_INTERNAL_VAR_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bASEToStallIpTran /*
   Description: Transition Etat GMP SCA de Sortie calage vers Calage en cours */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bAcvRunCoPtASE /*
   Description: Reconfiguration for�ant le mode alternateur */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bDetNNull /*
   Description: R�gime moteur nul confirm� */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bOffToStallIpTran /*
   Description: Transition Etat GMP SCA de Off vers Calage en cours */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bOnToCutIpTran /*
   Description: Transition Etat GMP SCA de On vers Coupure en cours  */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallIpToASETran /*
   Description: Transition Etat GMP SCA de Calage en cours vers Sortie calage */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallIpToStallTran /*
   Description: Transition Etat GMP SCA de Calage en cours vers Cal� */;
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean CoASEPwt_bStallToASETran /*
   Description: Transition Etat GMP SCA de Cal� vers Sortie calage */;

#define ASE_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "ASE_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_ASE_006_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/