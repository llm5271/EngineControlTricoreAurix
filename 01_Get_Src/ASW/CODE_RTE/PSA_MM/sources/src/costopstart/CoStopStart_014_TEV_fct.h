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
 ***  %name: CoStopStart_014_TEV_fct.h %
 *** 
 ***  %version: 11.1 %
 *** 
 ***  %date_modified: Tue May 29 16:50:00 2012 %
 *** 
 *** 
 ***  %derived_by: u349799 %
 ***  %release: CoStopStart/11.0 %
 ***  %full_filespec: CoStopStart_014_TEV_fct.h-11.1:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : TL_01460_10_03528
 *** TargetLink subsystem : TL_01460_10_03528/CoStopStart_014
 *** Codefile             : costopstart_014_tev_fct.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-05-29 16:30:54
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
 *** Style definition file               : C:\dSPACE_TL_3.0.1\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE_TL_3.0.1\Matlab\Tl\XML\CodeGen\Stylesheets\TL_C
 ***                                       SourceCodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _COSTOPSTART_014_TEV_FCT_H_
#define _COSTOPSTART_014_TEV_FCT_H_

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

struct tag_SBFS_F02_01_Automate_014_tp {
   unsigned int Aux_C0141_sflag0 : 3;
   unsigned int C0143_Non_Coupe_ns : 3;
   unsigned int C0141_glflag : 2;
   unsigned int C01413_Recup_pd_arret : 1;
   unsigned int C01414_Delest_alternateur : 1;
   unsigned int C01416_Attente : 1;
   unsigned int C01417_Annulat___Redem_Anticipe : 1;
   unsigned int C01418_Attente_arret : 1;
   unsigned int C01422_Tournant_Force : 1;
   unsigned int C0142_Coupe : 1;
   unsigned int C0143_Non_Coupe : 1;
}; /* Type of structure containing bitfields for Stateflow chart  */
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#define COSTOPSTART_START_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_8BIT UInt8 CoPtUH_stPwt_out /* 
   Description: Etat GMP UH Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_014_CoPTStNew_stEng_in /* 
   Description: Nouvel �tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 9 */;
extern AR_IF_GLOBAL_8BIT UInt8 CoStopStart_014_CoPtASE_stPwt_in /* 
   Description: Etats GMP SCAr
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 10 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_8BIT
#include "CoStopStart_MemMap.h"

#define COSTOPSTART_START_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_014_CoPtUH_bEngCutOffReq_in /* 
   Description: Demande Coupure Moteur Thermique Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_014_CoPtUH_bEngStopReq_in /* 
   Description: Demande arr�t envoy�e au moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_014_CoSync_bDetNNull_in /* 
   Description: D�tection d'un r�gime nul
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_014_FRM_bAcvCutTotCoPtUH_in /* 
   Description: Reconfiguration demandant la coupure quelque soit l'�tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean CoStopStart_014_FRM_bAcvRunCoPtUH_in /* 
   Description: Reconfiguration for�ant le mode alternateur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_014_TEV_CoRStrt_bRstrtReq_in /* 
   Description: Demande de redemarrage moteur validee Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_014_TEV_CoStop_bStopReq_in /* 
   Description: Demande d'arr�t moteur valid�e Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_014_TEV_MgtEng_bLgRstrt_in /* 
   Description: Red�marrage jug� trop long
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_IF_GLOBAL_BOOLEAN Boolean RE_CoStopStart_014_TEV_MonDrv_bRstrtAntCncl_in /* 
   Description: Annulation redem anticip� Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define COSTOPSTART_STOP_SEC_GLOBAL_BOOLEAN
#include "CoStopStart_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/******************************************************************************\
   AR_GLOBAL_FCN: Function class
\******************************************************************************/
extern Void CoStopStart_013_MSE_ini(Void);
extern Void CoStopStart_014_TEV_fct(Void);

/******************************************************************************\
   UserGlobalRestart: static function(s) (invisible for other module)
\******************************************************************************/
extern Void CoStopStart_014_FctVarInit(Void);


#endif/*_COSTOPSTART_014_TEV_FCT_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/