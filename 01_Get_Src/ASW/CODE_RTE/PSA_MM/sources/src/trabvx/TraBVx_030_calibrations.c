/*******************************************************************************
*                           P. C. A.
*
*                    Peugeot Citroen Automobile
*
*        This file is the property of PCA. All rights are reserved
*        by PCA and this file must not be copied or disclosed
*       (in whole or in part) without prior written consent of PCA.
*
********************************************************************************
*
* %name: TraBVx_030_calibrations.c %
*
* %version: 13.0.build3 %
*
* %date_modified: Wed Feb  8 10:54:43 2012 %
*
*
* %derived_by: e360852 %
* %release: TqStruct/13.0 %
* %full_filespec: TraBVx_030_calibrations.c-13.0.build3:csrc:2 %
*
*******************************************************************************/
/**************************************************************************************************\
 *** 
 *** Simulink model       : RE_030
 *** TargetLink subsystem : RE_030/F00_Coordination_Couple_BV
 *** Codefile             : trabvx_030_calibrations.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2012-01-17 11:14:10
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
 *** S0301                    RE_030/F00_Coordination_Couple_BV
 *** S0302                    F00_Coordination_Couple_BV/030
 *** S0303                    F00_Coordination_Couple_BV/030/01246
 *** S0304                    F00_Coordination_Couple_BV/030/F01_01460_10_01242
 *** S0305                    F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246
 *** S0306                    F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F02_Filtrage_E
 ***                          ntrees_Hybride
 *** S0307                    F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 ***                          ple_Pot_Apres_Trait
 *** S0308                    F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F04_Coordinati
 ***                          on_Couple_Air
 *** S0309                    F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 ***                          ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim
 *** S03010                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 ***                          ple_Pot_Apres_Trait/F03_02_Filt_Cpl_Ralenti_Air
 *** S03011                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 ***                          ple_Pot_Apres_Trait/F03_03_Coord_Cpl_Pot_Apres_Trait
 *** S03012                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n
 *** S03013                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW
 *** S03014                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW_Sel
 *** S03015                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr
 *** S03016                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/DetectSat
 *** S03017                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/If ActionSubsystem
 *** S03018                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/Subsystem
 *** S03019                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst
 *** S03020                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/UnitDly_ExtIni
 *** S03021                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/UnitDly_ExtIni1
 *** S03022                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/DetectSat
 *** S03023                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/Subsystem1
 *** S03024                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/UnitDly_ExtIni1
 *** S03025                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/Subsystem/UnitDly_ExtIni1
 *** S03026                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/DetectSat
 *** S03027                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/DetectSat1
 *** S03028                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/UnitDly_ExtIni
 *** S03029                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/rising_edge
 *** S03030                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW_Sel/DetectSat
 *** S03031                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW_Sel/UnitDly_ExtIni
 *** S03032                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_01_Calcul_Cpl_Agr_Air_Non_Lim/ContMltpSwRmpTra
 ***                          n/MSW_Sel/UnitDly_ExtIni1
 *** S03033                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 ***                          ple_Pot_Apres_Trait/F03_02_Filt_Cpl_Ralenti_Air/DLowPassFilter_TypeK1
 *** S03034                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_02_Filt_Cpl_Ralenti_Air/DLowPassFilter_TypeK1/
 ***                          DetectSat
 *** S03035                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_02_Filt_Cpl_Ralenti_Air/DLowPassFilter_TypeK1/
 ***                          IniCdn
 *** S03036                   F00_Coordination_Couple_BV/030/01246/F01_01460_10_01246/F03_Calcul_Cou
 *** ple_Pot_Apres_Trait/F03_02_Filt_Cpl_Ralenti_Air/DLowPassFilter_TypeK1/
 ***                          UnitDly_ExtIni1
 *** S03037                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F02_Filtrage_Couple_
 ***                          Ralenti
 *** S03038                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F03_Filtrage_Entrees
 ***                          _Hybride
 *** S03039                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F04_Calcul_Couple_An
 ***                          ticipe
 *** S03040                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 ***                          res_Traitement
 *** S03041                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple
 *** S03042                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F02_Filtrage_Couple_
 ***                          Ralenti/DLowPassFilter_TypeK
 *** S03043                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F02_Filtrage_Couple_
 ***                          Ralenti/DLowPassFilter_TypeK/DetectSat
 *** S03044                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F02_Filtrage_Couple_
 ***                          Ralenti/DLowPassFilter_TypeK/IniCdn
 *** S03045                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F02_Filtrage_Couple_
 ***                          Ralenti/DLowPassFilter_TypeK/UnitDly_ExtIni1
 *** S03046                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 ***                          res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite
 *** S03047                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 ***                          res_Traitement/F05_02_Synthese_Couple_Apres_Traitement
 *** S03048                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n
 *** S03049                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW
 *** S03050                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW_Sel
 *** S03051                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr
 *** S03052                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/DetectSat
 *** S03053                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/Subsystem
 *** S03054                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst
 *** S03055                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/UnitDly_ExtIni
 *** S03056                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/UnitDly_ExtIni1
 *** S03057                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/DetectSat
 *** S03058                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/Subsystem1
 *** S03059                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/CalculTr/UnitDly_ExtIni1
 *** S03060                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/Subsystem/UnitDly_ExtIni1
 *** S03061                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/DetectSat
 *** S03062                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/DetectSat1
 *** S03063                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/UnitDly_ExtIni
 *** S03064                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW/TmrRst/rising_edge
 *** S03065                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW_Sel/DetectSat
 *** S03066                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW_Sel/UnitDly_ExtIni
 *** S03067                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F05_Calcul_Couple_Ap
 *** res_Traitement/F05_01_Calcul_Couple_Filtre_Non_Limite/ContMltpSwRmpTra
 ***                          n/MSW_Sel/UnitDly_ExtIni1
 *** S03068                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran
 *** S03069                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/either_edge
 *** S03070                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW
 *** S03071                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW_Sel
 *** S03072                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/CalculTr
 *** S03073                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/DetectSat
 *** S03074                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/Subsystem
 *** S03075                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/TmrRst
 *** S03076                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/UnitDly_ExtIni
 *** S03077                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/UnitDly_ExtIni1
 *** S03078                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/CalculTr/DetectSat
 *** S03079                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/CalculTr/Subsystem1
 *** S03080                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/CalculTr/UnitDly_ExtIni1
 *** S03081                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/Subsystem/UnitDly_ExtIni1
 *** S03082                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/TmrRst/DetectSat
 *** S03083                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/TmrRst/DetectSat1
 *** S03084                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/TmrRst/UnitDly_ExtIni
 *** S03085                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW/TmrRst/rising_edge
 *** S03086                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW_Sel/DetectSat
 *** S03087                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW_Sel/UnitDly_ExtIni
 *** S03088                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/ContMltpSwRmpTran/MSW_Sel/UnitDly_ExtIni1
 *** S03089                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/either_edge/falling_edge
 *** S03090                   F00_Coordination_Couple_BV/030/F01_01460_10_01242/F06_Coordination_Cou
 ***                          ple/either_edge/rising_edge
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 3.0.1 from 26-May-2009
 *** Code generator version  : Build Id 3.0.1.7 from 2009-May-06 15:28:18
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TRABVX_030_CALIBRATIONS_C_
#define _TRABVX_030_CALIBRATIONS_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "TraBVx_030_calibrations.h"
#include "SC.h"
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

#define TRABVX_START_SEC_CALIB_16BIT
#include "TraBVx_MemMap.h"
/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_facTqAirIdlFil_C = 128 /* 1. */ /* 
   Unit       : -
   Description: Facteur de filtrage du couple de ralenti branche lente
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;
#endif

 
/* TraBVx_bTypFu_SC */

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_facTqCnvTqAirDrv_C = 0 /* 
   Unit       : -
   Description: Facteur de prise en compte du couple convertisseur dans le couple potentiel apr�s tr
   aitement
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_tiAcvTqMaxEstimFil_C = 100 /* 1. */ /* 
   Unit       : s
   Description: Temps de transition vers le couple max estim�
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_tiAcvTqMaxFilAir_C = 50 /* 0.5 */ /* 
   Unit       : s
   Description: Temps d'activation du couple max calcul� sur la branche lente
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_tiDeacTqMaxEstimFil_C = 100 /* 1. */ /* 
   Unit       : s
   Description: Temps de transition depuis le couple max estim�
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_MERGEABLE_CALIB_16BIT UInt16 CoPt_tiDeacTqMaxFilAir_C = 50 /* 0.5 */ /* 
   Unit       : s
   Description: Temps de d�sactivation du couple max calcul� sur la branche lente
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
#endif

 
/* TraBVx_bTypFu_SC */

#define TRABVX_STOP_SEC_CALIB_16BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_CALIB_8BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CALIB_8BIT: Mergeable Calib 8 bits for AUTOSAR modules | Width: 8
\******************************************************************************/
AR_MERGEABLE_CALIB_8BIT UInt8 CoPt_facTqCnvTqDrvFil_C = 0 /* 
   Unit       : -
   Description: Facteur de prise en compte du couple convertisseur dans le couple apr�s traitement
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoPt_facTqCnvTqDrvRaw_C = 0 /* 
   Unit       : -
   Description: Facteur de prise en compte du couple convertisseur dans le couple anticip�
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_8BIT UInt8 CoPt_facTqIdlFil_C = 128 /* 1. */ /* 
   Unit       : -
   Description: Facteur de filtrage du couple de ralenti
   LSB: 2^-7 OFF:  0 MIN/MAX:  0 .. 1 */;

#define TRABVX_STOP_SEC_CALIB_8BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_CALIB_BOOLEAN
#include "TraBVx_MemMap.h"

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoPt_bAcvTqIdlTqAirDrv_C = 1 /* 
   Description: Prise en compte du couple de ralenti dans le couple potentiel apr�s traitement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoPt_bAcvTqIdlTqDrvFil_C = 1 /* 
   Description: Prise en compte du ralenti dans le couple apr�s traitement
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
AR_MERGEABLE_CALIB_BOOLEAN Boolean CoPt_bAcvTqIdlTqDrvRaw_C = 1 /* 
   Description: Prise en compte du ralenti dans le couple anticip�
   LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;

#define TRABVX_STOP_SEC_CALIB_BOOLEAN
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_CARTO_16BIT
#include "TraBVx_MemMap.h"

/******************************************************************************\
   AR_MERGEABLE_CARTO_16BIT: Mergeable Carto 16 bits for AUTOSAR modules | Width: 16
\******************************************************************************/
AR_MERGEABLE_CARTO_16BIT UInt16 CoPt_tiTran_tqESPGBx_T[9] = 
{
   /*[0..8]*/ 1, 5, 10, 20, 50, 50, 50, 50, 50
   /* 0.01, 0.05, 0.1, 0.2, 0.5, 0.5, 0.5, 0.5, 0.5 */
} /* 
   Unit       : s
   Description: Temps de transition en d�but de passage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CARTO_16BIT UInt16 CoPt_tiTran_tqGBxESP_T[9] = 
{
   /*[0..8]*/ 1, 5, 10, 20, 50, 50, 50, 50, 50
   /* 0.01, 0.05, 0.1, 0.2, 0.5, 0.5, 0.5, 0.5, 0.5 */
} /* 
   Unit       : s
   Description: Temps de transition en fin de passage
   LSB: 0.01 OFF:  0 MIN/MAX:  0 .. 5 */;
AR_MERGEABLE_CARTO_16BIT SInt16 CoPt_tqDeltaESPGBx_A[9] = 
{
   /*[0..8]*/ 0, 80, 160, 320, 480, 640, 800, 1600, 3200
   /* 0., 5., 10., 20., 30., 40., 50., 100., 200. */
} /* 
   Unit       : N.m
   Description: Breakpoint en �cart de couple
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TRABVX_STOP_SEC_CARTO_16BIT
#include "TraBVx_MemMap.h"

#define TRABVX_START_SEC_INTERNAL_VAR_16BIT
#include "TraBVx_MemMap.h"

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoCha_tqEfcAirReqCord /* 
   Unit       : N.m
   Description: Couple sur la branche Air en sortie de la coordination du couple lent pour l ESP coo
   rdonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoCha_tqEfcReqCord /* 
   Unit       : N.m
   Description: Couple en sortie de la fonction coordination ESP coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqCkEfcFilUnlim /* 
   Unit       : N.m
   Description: Couple apr�s agr�ment pr�ventif non limit� par le potentiel en air
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqDeltaESPGBx_MP /* 
   Unit       : N.m
   Description: Ecart entre le couple conducteur et le couple BV
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqEfcAirIdlFil /* 
   Unit       : N.m
   Description: Couple de ralenti filtr� branche lente
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqEfcFilUnlimAir /* 
   Unit       : N.m
   Description: Couple filtr� non limit� branche lente
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_INTERNAL_VAR_DISP_16BIT SInt16 CoPt_tqEfcIdlFil /* 
   Unit       : N.m
   Description: Couple de r�gulation de r�gime filtr�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqCha_tqAirTqDecReqCord /* 
   Unit       : N.m
   Description: Couple ASR sur la branche Air  coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqCha_tqAirTqIncReqCord /* 
   Unit       : N.m
   Description: Couple MSR sur la branche Air  coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimEM_tqLimEMCord /* 
   Unit       : N.m
   Description: Couple conducteur limit� envoy� � l agr�ment pr�ventif coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqLimEM_tqLimEMCordAir /* 
   Unit       : N.m
   Description: Couple conducteur limit� envoy� � l agr�ment pr�ventif coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */

/* results from
   F00_Coordination_Couple_BV/030/Constant7 */
#if TraBVx_bTypFu_SC
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqSys_tqCkEfcAirFilCord /* 
   Unit       : N.m
   Description: Couple filtr� branche lente coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;
#endif

 
/* TraBVx_bTypFu_SC */
AR_INTERNAL_VAR_DISP_16BIT SInt16 TqSys_tqCkEfcFilCord /* 
   Unit       : N.m
   Description: Couple final apr�s filtration coordonn�
   LSB: 2^-4 OFF:  0 MIN/MAX:  -2000 .. 2000 */;

#define TRABVX_STOP_SEC_INTERNAL_VAR_16BIT
#include "TraBVx_MemMap.h"

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

#endif/*_TRABVX_030_CALIBRATIONS_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/