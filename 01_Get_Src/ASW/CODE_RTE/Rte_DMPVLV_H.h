#if !defined(RTE_DMPVLV_H_H)
#define RTE_DMPVLV_H_H

/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /*
  * This file contains Rte component declarations for component type DMPVLV_H
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:27 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Intern_Application_Core1.h>
#include <Rte_Main.h>         /* RTE main header file */
#include <Rte_DMPVLV_H_Type.h> /* RTE application types header file */
#include <Rte_Hook.h> /* RTE VFB trace hooks header file */

/*==================[macros]=================================================*/

#if (!defined RTE_CORE) /* if included by software component */

#if (!defined RTE_APPLICATION_HEADER_FILE_H) /* prevent double inclusion */
#define RTE_APPLICATION_HEADER_FILE_H
#else
#error Multiple application header files included.
#endif /* if !defined( RTE_APPLICATION_HEADER_FILE_H ) */

#endif

/*------------------[API mapping]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
#if !defined(RTE_RUNNABLEAPI_RE_DmpVlv_H_002_TEV)
#define Rte_IrvWrite_RE_DmpVlv_H_001_MSE_DmpVlv_tiDmpVlvAcvTmr_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_DMPVLV_H_DmpVlv_tiDmpVlvAcvTmr_irv = (data))

#endif
#define Rte_Write_P_DmpVlv_rAirLdLimSurgeReq_DmpVlv_rAirLdLimSurgeReq(data) Rte_Write_DMPVLV_H_P_DmpVlv_rAirLdLimSurgeReq_DmpVlv_rAirLdLimSurgeReq(data)

#define Rte_Write_P_DmpVlv_bAcvDmpVlv_DmpVlv_bAcvDmpVlv(data) Rte_Write_DMPVLV_H_P_DmpVlv_bAcvDmpVlv_DmpVlv_bAcvDmpVlv(data)

#if !defined(RTE_RUNNABLEAPI_RE_DmpVlv_H_001_MSE)
#define Rte_IrvRead_RE_DmpVlv_H_002_TEV_DmpVlv_tiDmpVlvAcvTmr_irv() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_DMPVLV_H_DmpVlv_tiDmpVlvAcvTmr_irv)

#define Rte_IrvWrite_RE_DmpVlv_H_002_TEV_DmpVlv_tiDmpVlvAcvTmr_irv(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_DMPVLV_H_DmpVlv_tiDmpVlvAcvTmr_irv = (data))

#define Rte_Read_R_AirSys_prm_mfAirThrReq_AirSys_prm_mfAirThrReq(data) Rte_Read_DMPVLV_H_R_AirSys_prm_mfAirThrReq_AirSys_prm_mfAirThrReq(data)

#define Rte_IsUpdated_R_AirSys_prm_mfAirThrReq_AirSys_prm_mfAirThrReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1796.isUpdated)

#define Rte_Read_R_EngM_mAirEngCylMin_EngM_mAirEngCylMin(data) Rte_Read_DMPVLV_H_R_EngM_mAirEngCylMin_EngM_mAirEngCylMin(data)

#define Rte_IsUpdated_R_EngM_mAirEngCylMin_EngM_mAirEngCylMin() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1808.isUpdated)

#define Rte_Read_R_UsThrM_pDsThrMesCor_UsThrM_pDsThrMesCor(data) Rte_Read_DMPVLV_H_R_UsThrM_pDsThrMesCor_UsThrM_pDsThrMesCor(data)

#define Rte_IsUpdated_R_UsThrM_pDsThrMesCor_UsThrM_pDsThrMesCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1814.isUpdated)

#define Rte_Read_R_InjSys_noCylCutOff_InjSys_noCylCutOff(data) Rte_Read_DMPVLV_H_R_InjSys_noCylCutOff_InjSys_noCylCutOff(data)

#define Rte_IsUpdated_R_InjSys_noCylCutOff_InjSys_noCylCutOff() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1810.isUpdated)

#define Rte_Read_R_Eng_stEru_Eng_stEru(data) Rte_Read_DMPVLV_H_R_Eng_stEru_Eng_stEru(data)

#define Rte_IsUpdated_R_Eng_stEru_Eng_stEru() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1797.isUpdated)

#define Rte_Read_R_EngM_facMassFlowLdCor_EngM_facMassFlowLdCor(data) Rte_Read_DMPVLV_H_R_EngM_facMassFlowLdCor_EngM_facMassFlowLdCor(data)

#define Rte_IsUpdated_R_EngM_facMassFlowLdCor_EngM_facMassFlowLdCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1801.isUpdated)

#define Rte_Read_R_UsThrM_pDsCmpr_UsThrM_pDsCmpr(data) Rte_Read_DMPVLV_H_R_UsThrM_pDsCmpr_UsThrM_pDsCmpr(data)

#define Rte_IsUpdated_R_UsThrM_pDsCmpr_UsThrM_pDsCmpr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1798.isUpdated)

#define Rte_Read_R_UsThrM_tUsCmpr_UsThrM_tUsCmpr(data) Rte_Read_DMPVLV_H_R_UsThrM_tUsCmpr_UsThrM_tUsCmpr(data)

#define Rte_IsUpdated_R_UsThrM_tUsCmpr_UsThrM_tUsCmpr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1800.isUpdated)

#define Rte_Read_R_IgSys_rTarStatIgSpEff_IgSys_rTarStatIgSpEff(data) Rte_Read_DMPVLV_H_R_IgSys_rTarStatIgSpEff_IgSys_rTarStatIgSpEff(data)

#define Rte_IsUpdated_R_IgSys_rTarStatIgSpEff_IgSys_rTarStatIgSpEff() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1805.isUpdated)

#define Rte_Read_R_Ext_nEng_Ext_nEng(data) Rte_Read_DMPVLV_H_R_Ext_nEng_Ext_nEng(data)

#define Rte_IsUpdated_R_Ext_nEng_Ext_nEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1816.isUpdated)

#define Rte_Read_R_UsThrM_pUsThrCor_UsThrM_pUsThrCor(data) Rte_Read_DMPVLV_H_R_UsThrM_pUsThrCor_UsThrM_pUsThrCor(data)

#define Rte_IsUpdated_R_UsThrM_pUsThrCor_UsThrM_pUsThrCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1815.isUpdated)

#define Rte_Read_R_InjSys_bTotCutOff_InjSys_bTotCutOff(data) Rte_Read_DMPVLV_H_R_InjSys_bTotCutOff_InjSys_bTotCutOff(data)

#define Rte_IsUpdated_R_InjSys_bTotCutOff_InjSys_bTotCutOff() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1813.isUpdated)

#define Rte_Read_R_AirSys_effAfr_AirSys_effAfr(data) Rte_Read_DMPVLV_H_R_AirSys_effAfr_AirSys_effAfr(data)

#define Rte_IsUpdated_R_AirSys_effAfr_AirSys_effAfr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1804.isUpdated)

#define Rte_Read_R_AirSys_effEGR_AirSys_effEGR(data) Rte_Read_DMPVLV_H_R_AirSys_effEGR_AirSys_effEGR(data)

#define Rte_IsUpdated_R_AirSys_effEGR_AirSys_effEGR() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1807.isUpdated)

#define Rte_Read_R_TqLimEM_tqIdcLimEM_TqLimEM_tqIdcLimEM(data) Rte_Read_DMPVLV_H_R_TqLimEM_tqIdcLimEM_TqLimEM_tqIdcLimEM(data)

#define Rte_IsUpdated_R_TqLimEM_tqIdcLimEM_TqLimEM_tqIdcLimEM() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1817.isUpdated)

#define Rte_Read_R_AirSys_effCyc_AirSys_effCyc(data) Rte_Read_DMPVLV_H_R_AirSys_effCyc_AirSys_effCyc(data)

#define Rte_IsUpdated_R_AirSys_effCyc_AirSys_effCyc() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1806.isUpdated)

#define Rte_Read_R_IgSys_rMinIgEfc_IgSys_rMinIgEfc(data) Rte_Read_DMPVLV_H_R_IgSys_rMinIgEfc_IgSys_rMinIgEfc(data)

#define Rte_IsUpdated_R_IgSys_rMinIgEfc_IgSys_rMinIgEfc() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1803.isUpdated)

#define Rte_Read_R_Ext_noCylEng_Ext_noCylEng(data) Rte_Read_DMPVLV_H_R_Ext_noCylEng_Ext_noCylEng(data)

#define Rte_IsUpdated_R_Ext_noCylEng_Ext_noCylEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1811.isUpdated)

#define Rte_Read_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr(data) Rte_Read_DMPVLV_H_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr(data)

#define Rte_IsUpdated_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1799.isUpdated)

#define Rte_Read_R_AirSys_bActStraLimSurge_AirSys_bActStraLimSurge(data) Rte_Read_DMPVLV_H_R_AirSys_bActStraLimSurge_AirSys_bActStraLimSurge(data)

#define Rte_IsUpdated_R_AirSys_bActStraLimSurge_AirSys_bActStraLimSurge() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1812.isUpdated)

#define Rte_Read_R_CoPt_tqIdcReqCord_nRegReq_CoPt_tqIdcReqCord_nRegReq(data) Rte_Read_DMPVLV_H_R_CoPt_tqIdcReqCord_nRegReq_CoPt_tqIdcReqCord_nRegReq(data)

#define Rte_IsUpdated_R_CoPt_tqIdcReqCord_nRegReq_CoPt_tqIdcReqCord_nRegReq() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1802.isUpdated)

#define Rte_Read_R_EngM_mAirEngCylMax_EngM_mAirEngCylMax(data) Rte_Read_DMPVLV_H_R_EngM_mAirEngCylMax_EngM_mAirEngCylMax(data)

#define Rte_IsUpdated_R_EngM_mAirEngCylMax_EngM_mAirEngCylMax() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1809.isUpdated)

#define Rte_Call_R_FRM_bInhDmpVlvCtl_GetFunctionPermission(Permission) (RE_FRM_bInhDmpVlvCtl_GetFunctionPermission(Permission), RTE_E_OK)

#define Rte_Call_R_FRM_bInhStraLimSurge_GetFunctionPermission(Permission) (RE_FRM_bInhStraLimSurge_GetFunctionPermission(Permission), RTE_E_OK)

#define Rte_Call_R_FRM_bAcvUsThrCtlDft_GetFunctionPermission(Permission) (RE_FRM_bAcvUsThrCtlDft_GetFunctionPermission(Permission), RTE_E_OK)

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_DmpVlv_bAcvDmpVlv_DmpVlv_bAcvDmpVlv 0U
#define Rte_InitValue_P_DmpVlv_rAirLdLimSurgeReq_DmpVlv_rAirLdLimSurgeReq 0U
#define Rte_InitValue_R_Eng_stEru_Eng_stEru 1U
#define Rte_InitValue_R_UsThrM_pDsCmpr_UsThrM_pDsCmpr 0U
#define Rte_InitValue_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr 0U
#define Rte_InitValue_R_UsThrM_tUsCmpr_UsThrM_tUsCmpr 0U
#define Rte_InitValue_R_EngM_facMassFlowLdCor_EngM_facMassFlowLdCor 0U
#define Rte_InitValue_R_CoPt_tqIdcReqCord_nRegReq_CoPt_tqIdcReqCord_nRegReq 0
#define Rte_InitValue_R_IgSys_rMinIgEfc_IgSys_rMinIgEfc 0U
#define Rte_InitValue_R_AirSys_effAfr_AirSys_effAfr 0U
#define Rte_InitValue_R_IgSys_rTarStatIgSpEff_IgSys_rTarStatIgSpEff 1024U
#define Rte_InitValue_R_AirSys_effCyc_AirSys_effCyc 0U
#define Rte_InitValue_R_AirSys_effEGR_AirSys_effEGR 0U
#define Rte_InitValue_R_EngM_mAirEngCylMin_EngM_mAirEngCylMin 0U
#define Rte_InitValue_R_EngM_mAirEngCylMax_EngM_mAirEngCylMax 0U
#define Rte_InitValue_R_InjSys_noCylCutOff_InjSys_noCylCutOff 0U
#define Rte_InitValue_R_Ext_noCylEng_Ext_noCylEng 1U
#define Rte_InitValue_R_AirSys_bActStraLimSurge_AirSys_bActStraLimSurge 0U
#define Rte_InitValue_R_InjSys_bTotCutOff_InjSys_bTotCutOff 0U
#define Rte_InitValue_R_UsThrM_pDsThrMesCor_UsThrM_pDsThrMesCor 0U
#define Rte_InitValue_R_UsThrM_pUsThrCor_UsThrM_pUsThrCor 0U
#define Rte_InitValue_R_Ext_nEng_Ext_nEng 0U
#define Rte_InitValue_R_TqLimEM_tqIdcLimEM_TqLimEM_tqIdcLimEM 0

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_DMPVLV_H, RTE_CONST, RTE_CONST) Rte_Instance;
#endif

/*------------------[port handle types]--------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
#endif

/*------------------[per instance memory types]------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*==================[external function declarations]=========================*/

/*------------------[declaration of runnable entities]-----------------------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

extern FUNC(void, RTE_APPL_CODE) RE_DmpVlv_H_001_MSE(void);

extern FUNC(void, RTE_APPL_CODE) RE_DmpVlv_H_002_TEV(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_DmpVlv_H_002_TEV))
#endif
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DMPVLV_H_P_DmpVlv_rAirLdLimSurgeReq_DmpVlv_rAirLdLimSurgeReq (DT_DmpVlv_rAirLdLimSurgeReq data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DMPVLV_H_P_DmpVlv_bAcvDmpVlv_DmpVlv_bAcvDmpVlv (DT_DmpVlv_bAcvDmpVlv data);

#if (!defined(RTE_RUNNABLEAPI_RE_DmpVlv_H_001_MSE))
#ifdef RTE_PTR2ARRAYTYPE_PASSING
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_prm_mfAirThrReq_AirSys_prm_mfAirThrReq (P2VAR(rt_Array_UInt16_2_m1, AUTOMATIC, RTE_APPL_DATA) data);
#else
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_prm_mfAirThrReq_AirSys_prm_mfAirThrReq (P2VAR(DT_AirSys_prm_mfAirThrReq, AUTOMATIC, RTE_APPL_DATA) data);
#endif

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_EngM_mAirEngCylMin_EngM_mAirEngCylMin (P2VAR(DT_EngM_mAirEngCylMin, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_UsThrM_pDsThrMesCor_UsThrM_pDsThrMesCor (P2VAR(DT_UsThrM_pDsThrMesCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_InjSys_noCylCutOff_InjSys_noCylCutOff (P2VAR(DT_InjSys_noCylCutOff, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_Eng_stEru_Eng_stEru (P2VAR(DT_Eng_stEru, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_EngM_facMassFlowLdCor_EngM_facMassFlowLdCor (P2VAR(DT_EngM_facMassFlowLdCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_UsThrM_pDsCmpr_UsThrM_pDsCmpr (P2VAR(DT_UsThrM_pDsCmpr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_UsThrM_tUsCmpr_UsThrM_tUsCmpr (P2VAR(DT_UsThrM_tUsCmpr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_IgSys_rTarStatIgSpEff_IgSys_rTarStatIgSpEff (P2VAR(DT_IgSys_rTarStatIgSpEff, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_Ext_nEng_Ext_nEng (P2VAR(DT_Ext_nEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_UsThrM_pUsThrCor_UsThrM_pUsThrCor (P2VAR(DT_UsThrM_pUsThrCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_InjSys_bTotCutOff_InjSys_bTotCutOff (P2VAR(DT_InjSys_bTotCutOff, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_effAfr_AirSys_effAfr (P2VAR(DT_AirSys_effAfr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_effEGR_AirSys_effEGR (P2VAR(DT_AirSys_effEGR, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_TqLimEM_tqIdcLimEM_TqLimEM_tqIdcLimEM (P2VAR(DT_TqLimEM_tqIdcLimEM, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_effCyc_AirSys_effCyc (P2VAR(DT_AirSys_effCyc, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_IgSys_rMinIgEfc_IgSys_rMinIgEfc (P2VAR(DT_IgSys_rMinIgEfc, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_Ext_noCylEng_Ext_noCylEng (P2VAR(DT_Ext_noCylEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_UsThrM_pUsCmpr_UsThrM_pUsCmpr (P2VAR(DT_UsThrM_pUsCmpr, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_AirSys_bActStraLimSurge_AirSys_bActStraLimSurge (P2VAR(DT_AirSys_bActStraLimSurge, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_CoPt_tqIdcReqCord_nRegReq_CoPt_tqIdcReqCord_nRegReq (P2VAR(DT_CoPt_tqIdcReqCord_nRegReq, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DMPVLV_H_R_EngM_mAirEngCylMax_EngM_mAirEngCylMax (P2VAR(DT_EngM_mAirEngCylMax, AUTOMATIC, RTE_APPL_DATA) data);

#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhDmpVlvCtl_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhStraLimSurge_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(void, RTE_APPL_CODE) RE_FRM_bAcvUsThrCtlDft_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_DMPVLV_H, RTE_CONST, RTE_CONST) Rte_Inst_DMPVLV_H;

#define RTE_STOP_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
/** @} doxygen end group definition */
#endif /* !defined(RTE_DMPVLV_H_H) */
/*==================[end of file]============================================*/
