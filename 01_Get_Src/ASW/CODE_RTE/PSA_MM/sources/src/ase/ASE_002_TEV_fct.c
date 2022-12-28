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
 ***  %name: ASE_002_TEV_fct.c %
 *** 
 ***  %version: 3.1 %
 *** 
 ***  %date_modified: Thu Nov 17 17:46:11 2011 %
 *** 
 *** 
 ***  %derived_by: e378489 %
 ***  %release: ASE/3.0 %
 ***  %full_filespec: ASE_002_TEV_fct.c-3.1:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : CoStall_01460_10_02170_TL
 *** TargetLink subsystem : CoStall_01460_10_02170_TL/ASE_002
 *** Codefile             : ase_002_tev_fct.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2011-11-17 15:28:20
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
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0021                    CoStall_01460_10_02170_TL/ASE_002
 *** S0022                    ASE_002/F01_Traitement_booleen
 *** S0023                    ASE_002/F02_Coordination_autorisations_entrees_SCAr
 *** S0024                    ASE_002/F03_Coordination_demandes_entrees_SCAr
 *** S0025                    ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage
 *** S0026                    ASE_002/F05_Synthese_entree_SCAr
 *** S0027                    ASE_002/F06_Demande_entree_SCAr
 *** S0028                    ASE_002/F01_Traitement_booleen/Traitement_booleen
 *** S0029                    ASE_002/F01_Traitement_booleen/Traitement_booleen1
 *** S00210                   ASE_002/F01_Traitement_booleen/Traitement_booleen10
 *** S00211                   ASE_002/F01_Traitement_booleen/Traitement_booleen11
 *** S00212                   ASE_002/F01_Traitement_booleen/Traitement_booleen12
 *** S00213                   ASE_002/F01_Traitement_booleen/Traitement_booleen13
 *** S00214                   ASE_002/F01_Traitement_booleen/Traitement_booleen14
 *** S00215                   ASE_002/F01_Traitement_booleen/Traitement_booleen15
 *** S00216                   ASE_002/F01_Traitement_booleen/Traitement_booleen16
 *** S00217                   ASE_002/F01_Traitement_booleen/Traitement_booleen17
 *** S00218                   ASE_002/F01_Traitement_booleen/Traitement_booleen18
 *** S00219                   ASE_002/F01_Traitement_booleen/Traitement_booleen19
 *** S00220                   ASE_002/F01_Traitement_booleen/Traitement_booleen2
 *** S00221                   ASE_002/F01_Traitement_booleen/Traitement_booleen3
 *** S00222                   ASE_002/F01_Traitement_booleen/Traitement_booleen4
 *** S00223                   ASE_002/F01_Traitement_booleen/Traitement_booleen5
 *** S00224                   ASE_002/F01_Traitement_booleen/Traitement_booleen6
 *** S00225                   ASE_002/F01_Traitement_booleen/Traitement_booleen7
 *** S00226                   ASE_002/F01_Traitement_booleen/Traitement_booleen8
 *** S00227                   ASE_002/F01_Traitement_booleen/Traitement_booleen9
 *** S00228                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/BasculeRS2
 *** S00229                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay
 *** S00230                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/B
 ***                          asculeRSspecifique
 *** S00231                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/D
 ***                          etectSat
 *** S00232                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/T
 ***                          urnondelay_Part
 *** S00233                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/r
 ***                          ising_edge
 *** S00234                   ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/r
 ***                          ising_edge2
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _ASE_002_TEV_FCT_C_
#define _ASE_002_TEV_FCT_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "ASE_002_TEV_fct.h"
#include "ASE_002_calibrations.h"
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

#define ASE_START_SEC_GLOBAL_16BIT
#include "ASE_MemMap.h"
/******************************************************************************\
   AR_IF_GLOBAL_16BIT: Global 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_IF_GLOBAL_16BIT UInt16 RE_ASE_002_TEV_CoASE_spdVeh_in /* 
   Unit       : km/h
   Description: Vitesse v�hicule trait�e
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;

#define ASE_STOP_SEC_GLOBAL_16BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_GLOBAL_8BIT
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_8BIT: Global 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_IF_GLOBAL_8BIT UInt8 ASE_002_CoPTStNew_stEng_in /* 
   Description: Nouvel �tat moteur
   LSB: 2^0 OFF:  0 MIN/MAX:  1 .. 9 */;
AR_IF_GLOBAL_8BIT UInt8 ASE_002_CoPtUH_stPwt_in /* 
   Description: Etat GMP UH
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 15 */;
AR_IF_GLOBAL_8BIT UInt8 RE_ASE_002_TEV_CoASE_stEngASEReqClas_in /* 
   Description: Classe la plus �lev�e des demandes de Sortie calage pr�sentes
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 5 */;

#define ASE_STOP_SEC_GLOBAL_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoEmSTT_bEngASERstrtReq_in /* 
   Description: Demande de red�marrage  SCAr par sous-syst�me ElectroM�canique
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoEmSTT_bEngStallAuth_in /* 
   Description: Autorisation d'entr�e en SCAr par le SEEM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bBltStopAuth_in /* 
   Description: Autorisation arret par glissement fa�ade Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bCompTqRStrt_in /* 
   Description: Pour APV, R�sultat de la comparaison des couples de redem n�cessaire et disponible
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bEngStallReq_in /* 
   Description: Demande d'entr�e en SCA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bFbSpcFactSTTReq1_in /* 
   Description: Pour APV, Retour sur la dmd des inhibitions des interdictions d'arr�t
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bFbSpcFactSTTReq2_in /* 
   Description: Pour APV. Retour sur la dmd d'inhibitions du stop Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bLimFreqStopInh_in /* 
   Description: Besoin limitation de frequence arret
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoPtUH_bRStrtReqDgoBlt_in /* 
   Description: Demande de red�marrage par FGC
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqCha_bEngASERstrtReq_in /* 
   Description: Demande de red�marrage  SCAr par sous-syst�me Frein
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqCha_bEngStallAuth_in /* 
   Description: Autorisation d'entr�e en SCAr par sous-syst�me Frein
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqDamp_bEngStallAuth_in /* 
   Description: Autorisation d'entr�e en SCAr par sous-syst�me Suspension
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqStg_bEngASERstrtReq_in /* 
   Description: Demande de red�marrage  SCAr par sous-syst�me DA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqStg_bEngStallAuth_in /* 
   Description: Autorisation d'entr�e en SCAr par sous-syst�me DA
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqVeh_bEngASERstrtReq_in /* 
   Description: Demande de red�marrage  SCAr par sous-syst�me Habitacle
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_CoReqVeh_bEngStallAuth_in /* 
   Description: Autorisation d'entr�e en SCAr par sous-syst�me Habitacle
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_EngReqH_bEngStallAuth_in /* 
   Description: Autorisation d'entree en SCAr par sous-syst�me Moteur (A1 : Autorisation_entr�e_SCAr
   _Moteur) Dim = 1x1
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_FRM_bAcvCutCoPtASE_in /* 
   Description: Demande de coupure si le moteur est cal� (FRM SCAr type 3)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_FRM_bAcvFastRstrtCoPtASE_in /* 
   Description: Reconfiguration SCAr type 2.2 (redemarrage urgent)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean ASE_002_FRM_bAcvRstrtCoPtASE_in /* 
   Description: Reconfiguration SCAr type 2.1 (redem classique)
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean RE_ASE_002_TEV_MgtStall_bStallAuthNbASE_in /* 
   Description: Autorisation d'entrer en Sortie calage par nombre de tentatives de Sortie calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_IF_GLOBAL_BOOLEAN Boolean RE_ASE_002_TEV_MgtStall_bStallAuthNbRstrt_in /* 
   Description: Autorisation d'entrer en Sortie calage par nombre de tentatives de red�marage en STT
    et en SCAr
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

#define ASE_START_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   AR_IF_GLOBAL_BOOLEAN_IRV: Global boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
Boolean CoStall_bEngStallAuth /* 
   Description: Autorisation d'entrer dans la fonction Sortie calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
Boolean CoStall_bEngStallReq /* 
   Description: Demande d'entr�e dans la fonction Sortie calage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define ASE_STOP_SEC_GLOBAL_BOOLEAN
#include "ASE_MemMap.h"

#define ASE_START_SEC_VAR_16BIT
#include "ASE_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 16
\******************************************************************************/
static SInt16 X_S00229_UnitDelay1 /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;

#define ASE_STOP_SEC_VAR_16BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_VAR_8BIT
#include "ASE_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 8
\******************************************************************************/

#define ASE_STOP_SEC_VAR_8BIT
#include "ASE_MemMap.h"

#define ASE_START_SEC_VAR_BOOLEAN
#include "ASE_MemMap.h"

/******************************************************************************\
   UserSLStaticGlobalInit: SLStaticGlobalInit = { AR_SEC_VAR_BOOLEAN AR_SEC_UNSPECIFIED AR_SEC_VAR_8
   BIT AR_SEC_VAR_16BIT AR_SEC_VAR_32BIT AR_SEC_UNSPECIFIED } | Width: 8
\******************************************************************************/
static Boolean X_S00228_Unit_Delay;
static Boolean X_S00228_Unit_Delay1;
static Boolean X_S00229_Unit_Delay;
static Boolean X_S00230_Unit_Delay;
static Boolean X_S00233_UnitDelay;
static Boolean X_S00234_UnitDelay;

#define ASE_STOP_SEC_VAR_BOOLEAN
#include "ASE_MemMap.h"

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

/**************************************************************************************************\
 ***  FUNCTION:
 ***      ASE_001_MSE_ini
 *** 
 ***  DESCRIPTION:
 ***      Main restart function
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define ASE_START_SEC_CODE
#include "ASE_MemMap.h"
Void ASE_001_MSE_ini(Void)
{
   ASE_002_FctVarInit();
}

#define ASE_STOP_SEC_CODE
#include "ASE_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      ASE_002_TEV_fct
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define ASE_START_SEC_CODE
#include "ASE_MemMap.h"
Void ASE_002_TEV_fct(Void)
{
   /* SLLocal: Default storage class for local variables | Width: 16 */
   SInt16 Aux_I16 /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;
   SInt16 Aux_I16_a /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;
   SInt16 Aux_I16_b /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;
   UInt16 Aux_U16;

   /* SLLocal: Default storage class for local variables | Width: 8 */
   Boolean Aux__a;
   Boolean Aux__b;
   Boolean Aux__c;
   Boolean Aux__d;
   Boolean Aux__e;
   Boolean Aux__g;

   /* Variable 'S0025_Logical_Operator4' replaced by 'Aux__a' */
   Aux__a = (ASE_002_CoPtUH_stPwt_in >= 8 /* 8. */) && (ASE_002_CoPtUH_stPwt_in <= 13 /* 13. */);
   Aux_U16 = CoStall_tiDlyOffStCutReq_C;

   /* MinMax: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/MinMax1 */
   if (Aux_U16) {
      /* Variable 'S00229_MinMax1' replaced by 'Aux_I16' */
      Aux_I16 = (SInt16) Aux_U16;
   }
   else {
      /* Variable 'S00229_MinMax1' replaced by 'Aux_I16' */
      Aux_I16 = 0 /* 0. */;
   }

   /* Variable 'S00229_Relational_Operator1' replaced by 'Aux__b' */
   Aux__b = Aux_I16 == 0 /* 0. */;

   /* Sum: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Sum2
      Variable 'S00229_Sum2' replaced by 'Aux_I16_a'
      # combined # Product: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Div
      ide2
      
      ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Divide2: folded operation
       multiplication to constant value 0.1 */
   Aux_I16_a = (SInt16) (Aux_I16 + 10 /* 0.1 */);

   /* Switch: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Turnondelay_Part/
      Switch1
      
      ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Turnondelay_Part/Switch1:
       Omitted comparison with constant. */
   if (X_S00229_Unit_Delay || (Aux__a && (!(X_S00233_UnitDelay)))) {
      /* Variable 'S00232_Switch1' replaced by 'Aux_I16_b' */
      Aux_I16_b = 0 /* 0. */;
   }
   else {
      /* SLLocal: Default storage class for local variables | Width: 16 */
      SInt16 Aux_I16_c /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;
      SInt16 Aux_I16_d /* LSB: 0.01 OFF:  0 MIN/MAX:  -327.68 .. 327.67 */;

      /* MinMax: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/DetectSat/MinM
         ax1 */
      if (X_S00229_UnitDelay1 > 0) {
         /* Variable 'S00231_MinMax1' replaced by 'Aux_I16_c' */
         Aux_I16_c = X_S00229_UnitDelay1;
      }
      else {
         /* Variable 'S00231_MinMax1' replaced by 'Aux_I16_c' */
         Aux_I16_c = 0 /* 0. */;
      }

      /* MinMax: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/DetectSat/MinM
         ax2 */
      if (Aux_I16_a < Aux_I16_c) {
         /* Variable 'S00231_MinMax2' replaced by 'Aux_I16_d' */
         Aux_I16_d = Aux_I16_a;
      }
      else {
         /* Variable 'S00231_MinMax2' replaced by 'Aux_I16_d' */
         Aux_I16_d = Aux_I16_c;
      }

      /* # combined # Sum: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Sum1
         Variable 'S00232_Switch1' replaced by 'Aux_I16_b' */
      Aux_I16_b = (SInt16) (((UInt16) Aux_I16_d) + 1);
   }

   /* Variable 'S00229_Relational_Operator2' replaced by 'Aux__c'
      # combined # Sum: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Sum3
      # combined # Product: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Div
      ide1
      
      ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Divide1: folded operation
       division to constant value 0.001 */
   Aux__c = (((SInt32) Aux_I16_b) * 10) >= ((SInt32) (SInt16) (((UInt16) (SInt16) (((SInt16)
    (Aux_I16 * 10)) + 1 /* 0.001 */)) - 10));

   /* Switch: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Switch2
      ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Switch2: Omitted comparis
      on with constant. */
   if (!(Aux__b)) {
      /* Variable 'S00229_Switch2' replaced by 'Aux__d' */
      Aux__d = Aux__c && (!(X_S00234_UnitDelay));
   }
   else {
      /* Variable 'S00229_Switch2' replaced by 'Aux__d' */
      Aux__d = 1 /* 1. */;
   }

   /* Variable 'S00230_Logical_Operator5' replaced by 'Aux__e' */
   Aux__e = (!(Aux__a)) || ((!(Aux__d)) && X_S00230_Unit_Delay);

   /* Switch: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/BasculeRS2/Switch
      ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/BasculeRS2/Switch: Omitted comparison
       with constant. */
   if (X_S00228_Unit_Delay1) {
      /* SLLocal: Default storage class for local variables | Width: 8 */
      Boolean Aux__f;

      /* Variable 'S0025_Relational_Operator3' replaced by 'Aux__d' */
      Aux__d = ASE_002_CoPTStNew_stEng_in == 3 /* 3. */;

      /* Variable 'S0025_Relational_Operator6' replaced by 'Aux__f' */
      Aux__f = ASE_002_CoPTStNew_stEng_in == 6 /* 6. */;

      /* Variable 'S00228_Switch' replaced by 'Aux__g' */
      Aux__g = (Aux__d && (!(Aux__f))) || ((!(Aux__d)) && (!(Aux__f)) && X_S00228_Unit_Delay);
   }
   else {
      /* Variable 'S00228_Switch' replaced by 'Aux__g' */
      Aux__g = 1 /* 1. */;
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen18/CoStall_bEngStallReqCoPt
      UH_visu */
   switch (CoStall_stModStallReqCoPtUH_C) {
      case 0: {
         CoStall_bEngStallReqCoPtUH = ASE_002_CoPtUH_bEngStallReq_in;
         break;
      }
      case 1: {
         CoStall_bEngStallReqCoPtUH = !(ASE_002_CoPtUH_bEngStallReq_in);
         break;
      }
      case 2: {
         CoStall_bEngStallReqCoPtUH = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallReqCoPtUH = 1 /* 1. */;
         break;
      }
   }
   CoStall_bEngStallReq = CoStall_bEngStallReqCoPtUH || (ASE_002_CoPTStNew_stEng_in == 8 /* 8. */);

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen/CoStall_bEngStallAuthBlt_v
      isu */
   switch (CoStall_stModBltStopAuth_C) {
      case 0: {
         CoStall_bEngStallAuthBlt = ASE_002_CoPtUH_bBltStopAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthBlt = !(ASE_002_CoPtUH_bBltStopAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthBlt = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthBlt = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen1/CoStall_bEngStallAuthVeh_
      visu */
   switch (CoStall_stModStallAuthVeh_C) {
      case 0: {
         CoStall_bEngStallAuthVeh = ASE_002_CoReqVeh_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthVeh = !(ASE_002_CoReqVeh_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthVeh = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthVeh = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen2/CoStall_bEngStallAuthStg_
      visu */
   switch (CoStall_stModStallAuthStg_C) {
      case 0: {
         CoStall_bEngStallAuthStg = ASE_002_CoReqStg_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthStg = !(ASE_002_CoReqStg_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthStg = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthStg = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen3/CoStall_bEngStallAuthDamp
      _visu */
   switch (CoStall_stModStallAuthDamp_C) {
      case 0: {
         CoStall_bEngStallAuthDamp = ASE_002_CoReqDamp_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthDamp = !(ASE_002_CoReqDamp_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthDamp = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthDamp = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen4/CoStall_bEngStallAuthCha_
      visu */
   switch (CoStall_stModStallAuthCha_C) {
      case 0: {
         CoStall_bEngStallAuthCha = ASE_002_CoReqCha_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthCha = !(ASE_002_CoReqCha_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthCha = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthCha = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen5/CoStall_bEngStallAuthEngR
      eqH_visu */
   switch (CoStall_stModStallAuthEng_C) {
      case 0: {
         CoStall_bEngStallAuthEngReqH = ASE_002_EngReqH_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthEngReqH = !(ASE_002_EngReqH_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthEngReqH = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthEngReqH = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen6/CoStall_bEngStallAuthCoEm
      STT_visu */
   switch (CoStall_stModStallAuthSTT_C) {
      case 0: {
         CoStall_bEngStallAuthCoEmSTT = ASE_002_CoEmSTT_bEngStallAuth_in;
         break;
      }
      case 1: {
         CoStall_bEngStallAuthCoEmSTT = !(ASE_002_CoEmSTT_bEngStallAuth_in);
         break;
      }
      case 2: {
         CoStall_bEngStallAuthCoEmSTT = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngStallAuthCoEmSTT = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen7/CoStall_bLimFreqStopInh_v
      isu */
   switch (CoStall_stModLimFreqStopInh_C) {
      case 0: {
         CoStall_bLimFreqStopInh = ASE_002_CoPtUH_bLimFreqStopInh_in;
         break;
      }
      case 1: {
         CoStall_bLimFreqStopInh = !(ASE_002_CoPtUH_bLimFreqStopInh_in);
         break;
      }
      case 2: {
         CoStall_bLimFreqStopInh = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bLimFreqStopInh = 1 /* 1. */;
         break;
      }
   }
   CoStall_bASEAuthSynt = CoStall_bEngStallAuthBlt && CoStall_bEngStallAuthVeh &&
    CoStall_bEngStallAuthStg && CoStall_bEngStallAuthDamp && CoStall_bEngStallAuthCha &&
    CoStall_bEngStallAuthEngReqH && CoStall_bEngStallAuthCoEmSTT &&
    RE_ASE_002_TEV_MgtStall_bStallAuthNbRstrt_in && RE_ASE_002_TEV_MgtStall_bStallAuthNbASE_in &&
    ((!(CoStall_bLimFreqStopInh)) || CoStall_bEngStallAuthLimDVA_C) &&
    (RE_ASE_002_TEV_CoASE_spdVeh_in < CoStall_spdVehThdStallAuth_C);

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen8/CoStall_bFbSpcFactSTTReq1
      _visu */
   switch (CoStall_stModFbSpcFactSTTReq1_C) {
      case 0: {
         CoStall_bFbSpcFactSTTReq1 = ASE_002_CoPtUH_bFbSpcFactSTTReq1_in;
         break;
      }
      case 1: {
         CoStall_bFbSpcFactSTTReq1 = !(ASE_002_CoPtUH_bFbSpcFactSTTReq1_in);
         break;
      }
      case 2: {
         CoStall_bFbSpcFactSTTReq1 = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bFbSpcFactSTTReq1 = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen19/CoStall_bFbSpcFactSTTReq
      2_visu */
   switch (CoStall_stModFbSpcFactSTTReq2_C) {
      case 0: {
         CoStall_bFbSpcFactSTTReq2 = ASE_002_CoPtUH_bFbSpcFactSTTReq2_in;
         break;
      }
      case 1: {
         CoStall_bFbSpcFactSTTReq2 = !(ASE_002_CoPtUH_bFbSpcFactSTTReq2_in);
         break;
      }
      case 2: {
         CoStall_bFbSpcFactSTTReq2 = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bFbSpcFactSTTReq2 = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen9/CoStall_bAcvRstrtCoPtASE_
      visu */
   switch (CoStall_stModAcvASE_C) {
      case 0: {
         CoStall_bAcvRstrtCoPtASE = ASE_002_FRM_bAcvRstrtCoPtASE_in;
         break;
      }
      case 1: {
         CoStall_bAcvRstrtCoPtASE = !(ASE_002_FRM_bAcvRstrtCoPtASE_in);
         break;
      }
      case 2: {
         CoStall_bAcvRstrtCoPtASE = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bAcvRstrtCoPtASE = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen10/CoStall_bAcvFastRstrtCoP
      tASE_visu */
   switch (CoStall_stModAcvFastASE_C) {
      case 0: {
         CoStall_bAcvFastRstrtCoPtASE = ASE_002_FRM_bAcvFastRstrtCoPtASE_in;
         break;
      }
      case 1: {
         CoStall_bAcvFastRstrtCoPtASE = !(ASE_002_FRM_bAcvFastRstrtCoPtASE_in);
         break;
      }
      case 2: {
         CoStall_bAcvFastRstrtCoPtASE = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bAcvFastRstrtCoPtASE = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen11/CoStall_bAcvCutCoPtASE_v
      isu */
   switch (CoStall_stModAcvCutCoPtASE_C) {
      case 0: {
         CoStall_bAcvCutCoPtASE = ASE_002_FRM_bAcvCutCoPtASE_in;
         break;
      }
      case 1: {
         CoStall_bAcvCutCoPtASE = !(ASE_002_FRM_bAcvCutCoPtASE_in);
         break;
      }
      case 2: {
         CoStall_bAcvCutCoPtASE = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bAcvCutCoPtASE = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen12/CoStall_bCompTqRstrt_vis
      u */
   switch (CoStall_stModCompTqRstrt_C) {
      case 0: {
         CoStall_bCompTqRstrt = ASE_002_CoPtUH_bCompTqRStrt_in;
         break;
      }
      case 1: {
         CoStall_bCompTqRstrt = !(ASE_002_CoPtUH_bCompTqRStrt_in);
         break;
      }
      case 2: {
         CoStall_bCompTqRstrt = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bCompTqRstrt = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen13/CoStall_bEngASEReqCoEmST
      T_visu */
   switch (CoStall_stModASEReqCoEmSTT_C) {
      case 0: {
         CoStall_bEngASEReqCoEmSTT = ASE_002_CoEmSTT_bEngASERstrtReq_in;
         break;
      }
      case 1: {
         CoStall_bEngASEReqCoEmSTT = !(ASE_002_CoEmSTT_bEngASERstrtReq_in);
         break;
      }
      case 2: {
         CoStall_bEngASEReqCoEmSTT = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngASEReqCoEmSTT = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen14/CoStall_bEngASEReqCoReqV
      eh_visu */
   switch (CoStall_stModASEReqVeh_C) {
      case 0: {
         CoStall_bEngASEReqCoReqVeh = ASE_002_CoReqVeh_bEngASERstrtReq_in;
         break;
      }
      case 1: {
         CoStall_bEngASEReqCoReqVeh = !(ASE_002_CoReqVeh_bEngASERstrtReq_in);
         break;
      }
      case 2: {
         CoStall_bEngASEReqCoReqVeh = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngASEReqCoReqVeh = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen15/CoStall_bEngASEReqCoReqC
      ha_visu */
   switch (CoStall_stModASEReqCha_C) {
      case 0: {
         CoStall_bEngASEReqCoReqCha = ASE_002_CoReqCha_bEngASERstrtReq_in;
         break;
      }
      case 1: {
         CoStall_bEngASEReqCoReqCha = !(ASE_002_CoReqCha_bEngASERstrtReq_in);
         break;
      }
      case 2: {
         CoStall_bEngASEReqCoReqCha = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngASEReqCoReqCha = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen16/CoStall_bEngASEReqCoReqS
      tg_visu */
   switch (CoStall_stModASEReqStg_C) {
      case 0: {
         CoStall_bEngASEReqCoReqStg = ASE_002_CoReqStg_bEngASERstrtReq_in;
         break;
      }
      case 1: {
         CoStall_bEngASEReqCoReqStg = !(ASE_002_CoReqStg_bEngASERstrtReq_in);
         break;
      }
      case 2: {
         CoStall_bEngASEReqCoReqStg = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bEngASEReqCoReqStg = 1 /* 1. */;
         break;
      }
   }

   /* Multiport switch: ASE_002/F01_Traitement_booleen/Traitement_booleen17/CoStall_bRstrtReqDgoBlt_
      visu */
   switch (CoStall_stModASEReqDgoBlt_C) {
      case 0: {
         CoStall_bRstrtReqDgoBlt = ASE_002_CoPtUH_bRStrtReqDgoBlt_in;
         break;
      }
      case 1: {
         CoStall_bRstrtReqDgoBlt = !(ASE_002_CoPtUH_bRStrtReqDgoBlt_in);
         break;
      }
      case 2: {
         CoStall_bRstrtReqDgoBlt = 0 /* 0. */;
         break;
      }
      case 3: {
         CoStall_bRstrtReqDgoBlt = 1 /* 1. */;
         break;
      }
   }
   CoStall_bASEReqSynt = (!(CoStall_bFbSpcFactSTTReq1)) && (!(CoStall_bFbSpcFactSTTReq2)) &&
    (!(CoStall_bAcvRstrtCoPtASE)) && (!(CoStall_bAcvFastRstrtCoPtASE)) &&
    (!(CoStall_bAcvCutCoPtASE)) && ((RE_ASE_002_TEV_CoASE_stEngASEReqClas_in < 2 /* 2. */) ||
    ((RE_ASE_002_TEV_CoASE_stEngASEReqClas_in == 3 /* 3. */) && (RE_ASE_002_TEV_CoASE_spdVeh_in <
    ((UInt16) (((UInt16) CoStall_spdASEAuth_C) << 7))))) && CoStall_bCompTqRstrt &&
    (!(CoStall_bEngASEReqCoEmSTT)) && (!(CoStall_bEngASEReqCoReqVeh)) &&
    (!(CoStall_bEngASEReqCoReqCha)) && (!(CoStall_bEngASEReqCoReqStg)) &&
    (!(CoStall_bRstrtReqDgoBlt));
   CoStall_bDlyOffStCutReq_MP = CoStall_bDlyOffStCutReqAcv_C && (!(Aux__e));

   /* ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/CoStall_bInhASEFirstStrt_visu */
   CoStall_bInhASEFirstStrt_MP = (SInt16) Aux__g;
   CoStall_bASEInhSynt = CoStall_bDlyOffStCutReq_MP || CoStall_bInhASEFirstStrt_MP;
   CoStall_bEngStallAuth = CoStall_bCoPtASEAcv_C && CoStall_bASEAuthSynt && CoStall_bASEReqSynt &&
    (!(CoStall_bASEInhSynt));

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/Unit Delay */
   X_S00229_Unit_Delay = Aux__b;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/rising_edge/U
      nitDelay */
   X_S00233_UnitDelay = Aux__a;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/UnitDelay1 */
   X_S00229_UnitDelay1 = Aux_I16_b;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/rising_edge2/
      UnitDelay */
   X_S00234_UnitDelay = Aux__c;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/TurnOnDelay/BasculeRSspec
      ifique/Unit Delay */
   X_S00230_Unit_Delay = Aux__e;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/BasculeRS2/Unit Delay1 */
   X_S00228_Unit_Delay1 = 1 /* 1. */;

   /* Unit delay: ASE_002/F04_Fenetre_SCAr_et_inhibition_premier_demarrage/BasculeRS2/Unit Delay */
   X_S00228_Unit_Delay = Aux__g;
}

#define ASE_STOP_SEC_CODE
#include "ASE_MemMap.h"

/**************************************************************************************************\
 ***  FUNCTION:
 ***      ASE_002_FctVarInit
 *** 
 ***  DESCRIPTION:
 ***      AR_IF_GLOBAL_16BIT
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      Void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/

#define ASE_START_SEC_CODE
#include "ASE_MemMap.h"
Void ASE_002_FctVarInit(Void)
{
   X_S00228_Unit_Delay = 1 /* 1. */;
   X_S00228_Unit_Delay1 = 0 /* 0. */;
   X_S00229_UnitDelay1 = 0 /* 0. */;
   X_S00229_Unit_Delay = 0 /* 0. */;
   X_S00230_Unit_Delay = 0 /* 0. */;
   X_S00233_UnitDelay = 0 /* 0. */;
   X_S00234_UnitDelay = 0 /* 0. */;
}

#define ASE_STOP_SEC_CODE
#include "ASE_MemMap.h"

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_ASE_002_TEV_FCT_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/