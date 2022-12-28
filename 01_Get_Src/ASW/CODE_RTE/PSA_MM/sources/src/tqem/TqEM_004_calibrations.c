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
 ***  %name: TqEM_004_calibrations.c %
 *** 
 ***  %version: 12.2 %
 *** 
 ***  %date_modified: Tue Jun 18 15:36:34 2013 %
 *** 
 *** 
 ***  %derived_by: u169773 %
 ***  %release: TqEM/12.0 %
 ***  %full_filespec: TqEM_004_calibrations.c-12.2:csrc:1 %
 *** 
 *** *******************************************************************************
 *** 
 *** Simulink model       : RE_TqEM_004_TL
 *** TargetLink subsystem : RE_TqEM_004_TL/TqEM_004
 *** Codefile             : tqem_004_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2013-06-18 13:18:37
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
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** S0041                    RE_TqEM_004_TL/TqEM_004
 *** S0042                    TqEM_004/Subsystem
 *** S0043                    TqEM_004/Subsystem/F02_Autoriser_calcul_couple_easy_move
 *** S0044                    TqEM_004/Subsystem/F05_Calculer_couple_easy_move
 *** S0045                    TqEM_004/Subsystem/F06_Determiner_couple_easy_move_applicable
 *** S0046                    TqEM_004/Subsystem/F02_Autoriser_calcul_couple_easy_move/HysPos1
 *** S0047                    TqEM_004/Subsystem/F02_Autoriser_calcul_couple_easy_move/HysPos1/Bascu
 ***                          leRS
 *** S0048                    TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_01_Detecter_CDT_o
 ***                          uverte
 *** S0049                    TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 ***                          ation
 *** S00410                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 ***                          e_easy_move
 *** S00411                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_04_Appliquer_coup
 ***                          le_easy_move
 *** S00412                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_01_Detecter_CDT_o
 ***                          uverte/F05_01_01_Calibrer_seuils_embrayage_ferme_et_vitesse_vehicule
 *** S00413                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_01_Detecter_CDT_o
 ***                          uverte/F05_01_02_Determiner_etat_CDT_FSE
 *** S00414                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_01_Detecter_CDT_o
 ***                          uverte/F05_01_03_Determiner_seuil_embrayage_ouvert
 *** S00415                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 ***                          ation/F05_02_01_Determiner_condition_figeage_compresseur_clim
 *** S00416                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 ***                          ation/F05_02_02_Determiner_condition_reset_figeage_compresseur_clim
 *** S00417                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 ***                          ation/F05_02_03_Determiner_demande_figeage_compresseur_clim
 *** S00418                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 *** ation/F05_02_02_Determiner_condition_reset_figeage_compresseur_clim/Tu
 ***                          rnOnDelay
 *** S00419                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 *** ation/F05_02_02_Determiner_condition_reset_figeage_compresseur_clim/Tu
 ***                          rnOnDelay/Counter
 *** S00420                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_02_Figer_climatis
 ***                          ation/F05_02_03_Determiner_demande_figeage_compresseur_clim/BasculeRS1
 *** S00421                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 ***                          e_easy_move/F05_03_03_Determiner_facteur_temperature
 *** S00422                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 ***                          e_easy_move/F05_03_04_Calculer_couple_recalage_pertes
 *** S00423                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_01_Det
 ***                          erminer_condition_recalage
 *** S00424                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 ***                          culer_couple_recalage_pertes
 *** S00425                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_01_Det
 ***                          erminer_condition_recalage/TurnOnDelay
 *** S00426                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_01_Det
 ***                          erminer_condition_recalage/TurnOnDelay/Counter
 *** S00427                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes
 *** S00428                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_01_Moyenner_3_evenements
 *** S00429                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_02_Moyenner_4_evenements
 *** S00430                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements
 *** S00431                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_04_Selectionner_moyenne_recalage
 *** S00432                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes
 *** S00433                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_01_Moyenner_3_evenements/UnitDly_ExtIni
 *** S00434                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_01_Moyenner_3_evenements/UnitDly_ExtIni1
 *** S00435                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_02_Moyenner_4_evenements/UnitDly_ExtIni1
 *** S00436                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_02_Moyenner_4_evenements/UnitDly_ExtIni2
 *** S00437                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_02_Moyenner_4_evenements/UnitDly_ExtIni3
 *** S00438                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements/UnitDly_ExtIni1
 *** S00439                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements/UnitDly_ExtIni2
 *** S00440                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements/UnitDly_ExtIni3
 *** S00441                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements/UnitDly_ExtIni4
 *** S00442                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_03_Moyenner_6_evenements/UnitDly_ExtIni5
 *** S00443                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 *** pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes/DLowPassFilte
 ***                          r_TypeT
 *** S00444                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 ***                          pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes/DetectSat
 *** S00445                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 *** pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes/DLowPassFilte
 ***                          r_TypeT/DLowPass_T_Part
 *** S00446                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 *** pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes/DLowPassFilte
 ***                          r_TypeT/IniCdn
 *** S00447                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_03_Calculer_coupl
 *** e_easy_move/F05_03_04_Calculer_couple_recalage_pertes/F05_03_04_02_Cal
 *** culer_couple_recalage_pertes/F05_03_04_02_02_Moyenner_couple_recalage_
 *** pertes/F05_03_04_02_02_05_Filtrer_couple_recalage_pertes/DLowPassFilte
 ***                          r_TypeT/UnitDly_ExtIni
 *** S00448                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_04_Appliquer_coup
 ***                          le_easy_move/F05_04_03_Gerer_demarrage
 *** S00449                   TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_04_Appliquer_coup
 ***                          le_easy_move/F05_04_03_Gerer_demarrage/DetectSat
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** C0040     RE_TqEM_004_TL                                         
 *** C0041     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE                                        
 *** C0042     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.arret                                  
 *** C0043     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.arret.Etat_CDT_connu                   
 *** C0044     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.arret.Etat_CDT_connu.debraye           
 *** C0045     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.arret.Etat_CDT_connu.embraye           
 *** C0046     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.arret.Etat_CDT_inconnu                 
 *** C0047     TqEM_004/Subsystem/F05_Calculer_couple_easy_move/F05_0
 *** 1_Detecter_CDT_ouverte/F05_01_02_Determiner_etat_CDT_F
 ***           SE/Etat_CDT_FSE.roulant                                
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TQEM_004_CALIBRATIONS_C_
#define _TQEM_004_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "TqEM_004_calibrations.h"
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

#define TQEM_START_SEC_CALIB_16BIT
#include "TqEM_MemMap.h"
/******************************************************************************\
   AR_MERGEABLE_CALIB_16BIT: Mergeable Calib 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_nStabThd_C = 100 /* 
   Unit       : RPM
   Description: Seuil de r�gime maxi pour le recalage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 7500 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rAccPAdpThd_C = 384 /* 3. */ /* 
   Unit       : %
   Description: Seuil d'enfoncement p�dale acc�l�rateur pour le recalage
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rAccPThdFrzACComp_C = 1920 /* 15. */ /* 
   Unit       : %
   Description: Seuil sur la volont� conducteur pour le figeage de la climatisation
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rCluCls_C = 5120 /* 40. */ /* 
   Unit       : %
   Description: Position de la p�dale d'embrayage en-dessous de laquelle l'embrayage est compl�temen
   t ferm�
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rCluEgdLimDrv_C = 320 /* 2.5 */ /* 
   Unit       : %
   Description: Garde au d�brayage du conducteur
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rCluOpMin_C = 8960 /* 70. */ /* 
   Unit       : %
   Description: Position mini de la p�dale d'embrayage au-dessus de laquelle l'embrayage est compl�t
   ement ouvert
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_rIncGainStrt_C = 10 /* 0.01 */ /* 
   Unit       : -
   Description: Valeur d'incr�mentation du gain au d�marrage quand le moteur est autonome
   LSB: 2^-10 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_spdReWhlHiThd_C = 2560 /* 20. */ /* 
   Unit       : km/h
   Description: Seuil de vitesse roues arri�re au-dessus duquel on inhibe les calculs
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_spdReWhlLoThd_C = 768 /* 6. */ /* 
   Unit       : km/h
   Description: Seuil de vitesse roues arri�re en-dessous duquel on active les calculs
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 500 */;
AR_MERGEABLE_CALIB_16BIT UInt16 TqEM_tiRstFrzACComp_C = 300 /* 3. */ /* 
   Unit       : s
   Description: Temps pendant lequel on fige la climatisation au d�collage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 30 */;
AR_MERGEABLE_CALIB_16BIT SInt16 TqEM_tqAdpHiThd_C = 1600 /* 100. */ /* 
   Unit       : N.m
   Description: Couple maxi de recalage des pertes
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_MERGEABLE_CALIB_16BIT SInt16 TqEM_tqAdpLoThd_C = -1600 /* -100. */ /* 
   Unit       : N.m
   Description: Couple mini de recalage des pertes
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_MERGEABLE_CALIB_16BIT SInt16 TqEM_tqCfmThd_C = 240 /* 15. */ /* 
   Unit       : N.m
   Description: Seuil de couple au-dessus duquel les pics de couple 
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TQEM_STOP_SEC_CALIB_16BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_CALIB_8BIT
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_nDeltaNThd_C = 100 /* 
   Unit       : RPM
   Description: Seuil maximum de la diff�rence de 2 points de r�gime cons�cutifs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 200 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_rTCoTOil_C = 0 /* 
   Unit       : -
   Description: Choix de la temp�rature � utiliser pour la correction du couple EM
   LSB: 2^-4 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_spdVehAdpThd_C = 3 /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule pour le recalage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_spdVehHiThdFrzACComp_C = 5 /* 
   Unit       : km/h
   Description: Seuil haut sur la vitesse pour identifier le d�collage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_spdVehHiThdPtOp_C = 8 /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule au-dessus duquel l'�tat de la cha�ne de traction est ouver
   t
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_spdVehLoThdFrzACComp_C = 3 /* 
   Unit       : km/h
   Description: Seuil bas sur la vitesse pour identifier le d�collage
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_spdVehLoThdPtOp_C = 5 /* 
   Unit       : km/h
   Description: Seuil de vitesse v�hicule en-dessous duquel l'�tat de la cha�ne de traction est d�te
   rmin� par une machine d'�tat
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_tiConFilAdp_C = 1 /* 0.01 */ /* 
   Unit       : s
   Description: Constante de temps pour le filtrage du couple de recalage des pertes
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_tiNStab_C = 10 /* 1. */ /* 
   Unit       : s
   Description: Temporisation sur la stabilit� du r�gime pour le recalage
   LSB: 0.1 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CALIB_8BIT UInt8 TqEM_tiSdl_SC = 10 /* 0.01 */ /* 
   Unit       : s
   Description: Temps d'�chantillonage p�riodique de la fonction EM
   LSB: 0.001 OFF:  0 MIN/MAX:  0 .. 0.1 */;

#define TQEM_STOP_SEC_CALIB_8BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_CALIB_BOOLEAN
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_BOOLEAN: Mergeable Calib 1 bit for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_BOOLEAN Boolean TqEM_bFrzACCompAuth_C = 1 /* 
   Description: Bool�en d'autorisation du figeage de l'�tat du compresseur de climatisation
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean TqEM_bTqCfmInh_C = 0 /* 
   Description: bool�en d'inhibition de la fonction de confirmation du couple EM
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define TQEM_STOP_SEC_CALIB_BOOLEAN
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_16BIT
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_16BIT: Display 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_bPtOpAdpAuth_MP /* 
   Description: Condition de cha�ne de traction ouverte n�cessaire au recalage des pertes
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_bRstPtOp_MP /* 
   Description: Inhibition du figeage de l'�tat du compresseur de climatisation sur ouverture de la 
   cha�ne de traction
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_facTEng /* 
   Unit       : �C
   Description: Facteur de temp�rature pour le calcul du couple de correction CMF
   LSB: 2^-2 OFF:  0 MIN/MAX:  -50 .. 200 */;
AR_INTERNAL_VAR_DISP_16BIT UInt16 TqEM_rCluCls /* 
   Unit       : %
   Description: Position de la p�dale d'embrayage en-dessous de laquelle l'embrayage est compl�temen
   t ferm�
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_INTERNAL_VAR_DISP_16BIT UInt16 TqEM_rCluNotEgd_MP /* 
   Unit       : %
   Description: Seuil de position de la p�dale d'embrayage au-del� duquel l'embrayage est compl�teme
   nt ouvert, embrayage ouvert
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_INTERNAL_VAR_DISP_16BIT UInt16 TqEM_rCluOp /* 
   Unit       : %
   Description: Seuil de position de la p�dale d'embrayage au-del� duquel l'embrayage est compl�teme
   nt ouvert
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 100 */;
AR_INTERNAL_VAR_DISP_16BIT UInt16 TqEM_rGainTakeOff /* 
   Description: Gain appliqu� au couple EM avant confirmation
   LSB: 2^-10 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdp /* 
   Unit       : N.m
   Description: Couple de recalage des pertes
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdpAvr /* 
   Unit       : N.m
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdpAvr3Sync /* 
   Unit       : N.m
   Description: Couple de recalage des pertes moyenn� sur 3 �v�nements synchrones
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdpAvr4Sync /* 
   Unit       : N.m
   Description: Couple de recalage des pertes moyenn� sur 4 �v�nements synchrones
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdpAvr6Sync /* 
   Unit       : N.m
   Description: Couple de recalage des pertes moyenn� sur 6 �v�nements synchrones
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqAdpAvrFil_MP /* 
   Unit       : N.m
   Description: Couple de recalage des pertes moyenn� et filtr�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqEM_tqEMNotCfm_MP /* 
   Unit       : N.m
   Description: Couple Easy-Move non confirm�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TQEM_STOP_SEC_INTERNAL_VAR_16BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_8BIT
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_8BIT: Display 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_8BIT UInt8 TqEM_spdVehHiThd /* 
   Unit       : km/h
   Description: Seuil de vitesse roues arri�re au-dessus duquel on inhibe les calculs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
AR_INTERNAL_VAR_DISP_8BIT UInt8 TqEM_spdVehLoThd /* 
   Unit       : km/h
   Description: Seuil de vitesse roue arri�re en-dessous duquel on active les calculs
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;

#define TQEM_STOP_SEC_INTERNAL_VAR_8BIT
#include "TqEM_MemMap.h"

#define TQEM_START_SEC_INTERNAL_VAR_BOOLEAN
#include "TqEM_MemMap.h"

/******************************************************************************\
   AR_INTERNAL_VAR_DISP_BOOLEAN: Display Boolean for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bAdpAuth /*
   Description: Flag indiquant si le recalage des pertes est autoris� */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bAuthClc /*
   Description: Flag d'autorisation des calculs */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bCluEgd /*
   Description: Etat de l'embrayage en BVM dans le cadre du FSE activ� */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bFrzACAT_MP /*
   Description: Bool�en de demande de figeage de l'�tat du compresseur de climatisation pour les BVA
    */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bFrzACMT_MP /*
   Description: Bool�en de demande de figeage de l'�tat du compresseur de climatisation pour les BVM
    */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bGrdNAdpAuth_MP /*
   Description: Condition sur le gradient de r�gime n�cessaire au recalage des pertes */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bNStabAdpAuth_MP /*
   Description: Condition sur la stabilit� du r�gime n�cessaire au recalage des pertes */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bPtOp /*
   Description: Flag indiquant si la cha�ne de traction est ouverte */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bRstDly_MP /*
   Description: Inhibition du figeage de l'�tat du compresseur de climatisation sur temporisation du
    bool�en d'autorisation */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bRstFrzACComp /*
   Description: Bool�en d'inhibition du figeage de l'�tat du compresseur de climatisation */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bRstSpdVeh_MP /*
   Description: Inhibition du figeage de l'�tat du compresseur de climatisation sur d�passement de s
   euil de vitesse v�hicule */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bSetFrzACComp /*
   Description: Bool�en de demande de figeage de l'�tat du compresseur de climatisation */;
AR_INTERNAL_VAR_DISP_BOOLEAN Boolean TqEM_bTqCfm_MP /*
   Description: Confirmation du couple Easy-Move */;

#define TQEM_STOP_SEC_INTERNAL_VAR_BOOLEAN
#include "TqEM_MemMap.h"

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

#endif/*_TQEM_004_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/