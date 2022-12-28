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
 ***  %name: StopStrtEm_006_calibrations.h %
 *** 
 ***  %version: 4.1 %
 *** 
 ***  %date_modified: Fri Jan  6 17:16:26 2012 %
 *** 
 *** 
 ***  %derived_by: e375697 %
 ***  %release: StopStrtEm/4.0 %
 ***  %full_filespec: StopStrtEm_006_calibrations.h-4.1:incl:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : StopStrtEm_006
 *** TargetLink subsystem : StopStrtEm_006/StopStrtEm_006
 *** Codefile             : stopstrtem_006_calibrations.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-01-06 16:57:37
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

#ifndef _STOPSTRTEM_006_CALIBRATIONS_H_
#define _STOPSTRTEM_006_CALIBRATIONS_H_

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

#define STOPSTRTEM_START_SEC_CALIB_16BIT
#include "StopStrtEm_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nProt1Thd11_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur R11 pour la protection 1 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nProt1Thd12_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur R12 pour la protection 1 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nRstrtDslThd_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur pour moteur diesel pour la protection 9 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nRstrtGslThd_C /* 
   Unit       : RPM
   Description: Seuil de r�gime moteur pour moteur essence pour la protection 9 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nStaEgdHiThd_C /* 
   Unit       : RPM
   Description: R�gime maxi pour engager depuis la commande d'engagement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_nStaRstrtMgtDft_C /* 
   Unit       : RPM
   Description: R�gime moteur max du d�marreur en cas de d�faut sur l'information temp�rature eau mo
   teur de la protection 8 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiAcvMaxThd_C /* 
   Description: Seuil de temps maximum d'activation du d�marreur
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 200 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt1_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection 1 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt3_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection 3 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt4_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection 4 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt8_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection 8 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt9_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection 9 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiDlyOffProt_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiOffDiagElCmd_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation du diagnostic de la ligne de commande o
   u du d�marreur pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiProt1Thd12_C /* 
   Unit       : s
   Description: Tempo R12 de la protection 1 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiProt8Thd81_C /* 
   Unit       : s
   Description: Tempo R81 de la protection 8 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_tiStaEgdHiThd_C /* 
   Unit       : s
   Description: Temps maxi pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;
extern AR_MERGEABLE_CALIB_16BIT UInt16 StaRstrtMgt_uDiagElCmdThd_C /* 
   Unit       : V
   Description: Seuil de tension batterie pour le diagnostic de la ligne de commande ou du d�marreur
    pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 32 */;

#define STOPSTRTEM_STOP_SEC_CALIB_16BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_CALIB_8BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_idxEngNSynt_C /* 
   Description: Choix des r�gimes moteur pour d�finir la synth�se r�gime moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 3 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiDlyOffStaReq_C /* 
   Unit       : s
   Description: Retard s�curitaire � la d�sactivation du d�marreur en AEE2004/2010 STT
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiDlyOnStaReq_C /* 
   Unit       : s
   Description: Majoration s�curitaire du temps d'activation de la protection pour le red�marrage
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiDlyOnStaRun_C /* 
   Unit       : s
   Description: Tempo de retard sur l'information red�marrage en cours pour prendre en compte le tem
   ps n�cessaire � l'initiation de production de couple
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiDlyStaReq_C /* 
   Unit       : s
   Description: Tempo de retard sur front descendant de l'information red�marrage en cours pour arch
   itectures 2004 et 2010 EVO
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiOnDiagElCmd_C /* 
   Unit       : s
   Description: Retard s�curitaire pour la d�tection de la chute de tension pour le diagnostic de la
    ligne de commande ou du d�marreur pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiProt4NThd4_C /* 
   Unit       : s
   Description: Tempo R4 de la protection 4 pour le red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 2 */;
extern AR_MERGEABLE_CALIB_8BIT UInt8 StaRstrtMgt_tiStaEgdLoThd_C /* 
   Unit       : RPM
   Description: Temps mini pour engager depuis la commande d'engagement
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.25 */;

#define STOPSTRTEM_STOP_SEC_CALIB_8BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_CALIB_BOOLEAN
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInfoCplReq_C /* 
   Description: Information demande d'engagement du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInfoCplSt_C /* 
   Description: Information �tat d'engagement du d�marreur
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhDiagElCmd_C /* 
   Description: Inhibition du diagnostic de la ligne de commande ou du d�marreur pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt10_C /* 
   Description: Inhibition de la protection 10 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt1_C /* 
   Description: Inhibition de la protection 1 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt3_C /* 
   Description: Inhibition de la protection 3 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt4_C /* 
   Description: Inhibition de la protection 4 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt8_C /* 
   Description: Inhibition de la protection 8 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bInhManProt9_C /* 
   Description: Inhibition de la protection 9 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern AR_MERGEABLE_CALIB_BOOLEAN Boolean StaRstrtMgt_bProt1CdnInh_C /* 
   Description: Inhibition de la condition sur le r�gime stabilis� pour la d�sactivation de la prote
   ction 1 pour le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define STOPSTRTEM_STOP_SEC_CALIB_BOOLEAN
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_CARTO_16BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_nCkFil_A[12] /* 
   Unit       : RPM
   Description: Points d'appui (x), r�gime moteur filtr� envoy� � 10ms
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 8000 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_nStaEgdLoThd_C /* 
   Unit       : RPM
   Description: R�gime mini pour engager depuis la commande d'engagement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 500 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_nStaRstrtMgtMax_T[12] /* 
   Unit       : RPM
   Description: Valeur de la table (y), seuil de r�gime moteur max du d�marreur de la protection 8 p
   our le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_rOldStaWhlStop_T[8] /* 
   Unit       : -
   Description: Valeur de la table (y), ratio entre le temps d'attente d'arr�t du pignon du d�marreu
   r vieux par rapport au neuf
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 StaRstrtMgt_tCoMesProt10_A[12] /* 
   Unit       : �C
   Description: Points d'appui (x), temp�rature eau moteur de la protection 10 pour le red�marrage
   LSB: 2^-1 OFF:  0 MIN/MAX:  -40 .. 214 */;
extern AR_MERGEABLE_CARTO_16BIT SInt16 StaRstrtMgt_tCoMesRstrtProt8_A[12] /* 
   Unit       : �C
   Description: Points d'appui (x), temp�rature eau moteur de la protection 8 pour le red�marrage
   LSB: 2^-1 OFF:  0 MIN/MAX:  -40 .. 214 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_tiMinAcv_T[12] /* 
   Unit       : s
   Description: Valeur de la table (y), tempo min commande du d�marreur de la protection 10 pour le 
   red�marrage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 60 */;
extern AR_MERGEABLE_CARTO_16BIT UInt16 StaRstrtMgt_tiStaWhlStopWait_T[12] /* 
   Unit       : s
   Description: Valeur de la table (y), temps d'attente d'arr�t du pignon du d�marreur neuf pour le 
   red�marrage
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 10 */;

#define STOPSTRTEM_STOP_SEC_CARTO_16BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_CARTO_32BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_32BIT: Mergeable Carto 32 bits for AUTOSAR modules | Width: 32
\******************************************************************************/
extern AR_MERGEABLE_CARTO_32BIT UInt32 StaRstrtMgt_ctStaAcv_A[8] /* 
   Unit       : -
   Description: Points d'appui (x), nombre d'activation du moteur du d�marreur pour le d�marrage et 
   le red�marrage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1000000 */;

#define STOPSTRTEM_STOP_SEC_CARTO_32BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_INTERNAL_VAR_16BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_16BIT UInt16 StaRstrtMgt_nEngSynt_MP /* 
   Unit       : -
   Description: Point de mesure sur le r�gime moteur synth�se
   LSB: 2^-2 OFF:  0 MIN/MAX:  0 .. 16383.75 */;

#define STOPSTRTEM_STOP_SEC_INTERNAL_VAR_16BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_INTERNAL_VAR_8BIT
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_8BIT UInt8 StaRstrtMgt_noRstrtProt_MP /*
   Description: Point de mesure indiquant les protections activ�es pour le red�marrage */;

#define STOPSTRTEM_STOP_SEC_INTERNAL_VAR_8BIT
#include "StopStrtEm_MemMap.h"

#define STOPSTRTEM_START_SEC_INTERNAL_VAR_BOOLEAN
#include "StopStrtEm_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
extern AR_INTERNAL_VAR_DISP_BOOLEAN Boolean StaRstrtMgt_bRstrtProt_MP /*
   Description: Point de mesure sur l'activation des protections pour le red�marrage */;

#define STOPSTRTEM_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "StopStrtEm_MemMap.h"

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_STOPSTRTEM_006_CALIBRATIONS_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/