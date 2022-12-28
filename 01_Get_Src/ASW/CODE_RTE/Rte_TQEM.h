#if !defined(RTE_TQEM_H)
#define RTE_TQEM_H

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
  * This file contains Rte component declarations for component type TQEM
  *
  * This file has been automatically generated by
  * EB tresos AutoCore Rte Generator Version 6.1.57
  * on Mon Nov 03 12:24:31 CET 2014. !!!IGNORE-LINE!!!
  */

 /* \addtogroup Rte Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <Rte_Intern_Application_Core1.h>
#include <Rte_Main.h>         /* RTE main header file */
#include <Rte_TQEM_Type.h> /* RTE application types header file */
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
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_bAuthClc() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bAuthClc)

#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_facTEng() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_facTEng)

#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_EveSync() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_EveSync)

#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_tqAdp() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdp)

#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_tiEveSync() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tiEveSync)

#define Rte_IrvRead_RE_TqEM_006_DRE_TqEM_tqCkEngRealEM() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqCkEngRealEM)

#define Rte_IrvWrite_RE_TqEM_006_DRE_TqEM_bEnaAvr6Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr6Sync = (data))

#define Rte_IrvWrite_RE_TqEM_006_DRE_TqEM_tqEMWiCutOff(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqEMWiCutOff = (data))

#define Rte_IrvWrite_RE_TqEM_006_DRE_TqEM_tqAdpRaw(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdpRaw = (data))

#define Rte_IrvWrite_RE_TqEM_006_DRE_TqEM_bEnaAvr3Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr3Sync = (data))

#define Rte_IrvWrite_RE_TqEM_006_DRE_TqEM_bEnaAvr4Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr4Sync = (data))

#define Rte_Read_R_TqSys_idxTqAccu_TqSys_idxTqAccu(data) Rte_Read_TQEM_R_TqSys_idxTqAccu_TqSys_idxTqAccu(data)

#define Rte_IsUpdated_R_TqSys_idxTqAccu_TqSys_idxTqAccu() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3941.isUpdated)

#define Rte_Read_R_TreatTDC_nCkFil_TreatTDC_nCkFil(data) Rte_Read_TQEM_R_TreatTDC_nCkFil_TreatTDC_nCkFil(data)

#define Rte_IsUpdated_R_TreatTDC_nCkFil_TreatTDC_nCkFil() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3945.isUpdated)

#define Rte_Read_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data) Rte_Read_TQEM_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta(data)

#define Rte_IsUpdated_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3946.isUpdated)

#define Rte_Read_R_IgSys_rStatIgSpEfc_IgSys_rStatIgSpEfc(data) Rte_Read_TQEM_R_IgSys_rStatIgSpEfc_IgSys_rStatIgSpEfc(data)

#define Rte_IsUpdated_R_IgSys_rStatIgSpEfc_IgSys_rStatIgSpEfc() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3935.isUpdated)

#define Rte_Read_R_EngM_rAirLdCor_EngM_rAirLdCor(data) Rte_Read_TQEM_R_EngM_rAirLdCor_EngM_rAirLdCor(data)

#define Rte_IsUpdated_R_EngM_rAirLdCor_EngM_rAirLdCor() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3922.isUpdated)

#define Rte_Read_R_InjSys_bFuCutOff_InjSys_bFuCutOff(data) Rte_Read_TQEM_R_InjSys_bFuCutOff_InjSys_bFuCutOff(data)

#define Rte_IsUpdated_R_InjSys_bFuCutOff_InjSys_bFuCutOff() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3937.isUpdated)

#define Rte_Read_R_EngM_rAirLdPred_EngM_rAirLdPred(data) Rte_Read_TQEM_R_EngM_rAirLdPred_EngM_rAirLdPred(data)

#define Rte_IsUpdated_R_EngM_rAirLdPred_EngM_rAirLdPred() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3923.isUpdated)

#define Rte_Read_R_EOM_tiEngRun_EOM_tiEngRun(data) Rte_Read_TQEM_R_EOM_tiEngRun_EOM_tiEngRun(data)

#define Rte_IsUpdated_R_EOM_tiEngRun_EOM_tiEngRun() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3924.isUpdated)

#define Rte_Read_R_IgSys_tqIdcEstim_IgSys_tqIdcEstim(data) Rte_Read_TQEM_R_IgSys_tqIdcEstim_IgSys_tqIdcEstim(data)

#define Rte_IsUpdated_R_IgSys_tqIdcEstim_IgSys_tqIdcEstim() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3936.isUpdated)

#define Rte_Read_R_TqCmp_tqCnvLoss_TqCmp_tqCnvLoss(data) Rte_Read_TQEM_R_TqCmp_tqCnvLoss_TqCmp_tqCnvLoss(data)

#define Rte_IsUpdated_R_TqCmp_tqCnvLoss_TqCmp_tqCnvLoss() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3938.isUpdated)

#define Rte_Read_R_Ext_noCylEng_Ext_noCylEng(data) Rte_Read_TQEM_R_Ext_noCylEng_Ext_noCylEng(data)

#define Rte_IsUpdated_R_Ext_noCylEng_Ext_noCylEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3927.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_Read_R_TqSys_bTypFu_TqSys_bTypFu(data) Rte_Read_TQEM_R_TqSys_bTypFu_TqSys_bTypFu(data)

#define Rte_IsUpdated_R_TqSys_bTypFu_TqSys_bTypFu() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3940.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_Read_R_Ext_tCoMes_Ext_tCoMes(data) Rte_Read_TQEM_R_Ext_tCoMes_Ext_tCoMes(data)

#define Rte_IsUpdated_R_Ext_tCoMes_Ext_tCoMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3932.isUpdated)

#define Rte_Read_R_AccP_rAccP_AccP_rAccP(data) Rte_Read_TQEM_R_AccP_rAccP_AccP_rAccP(data)

#define Rte_IsUpdated_R_AccP_rAccP_AccP_rAccP() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3917.isUpdated)

#define Rte_Read_R_TqSys_nTarIdl_TqSys_nTarIdl(data) Rte_Read_TQEM_R_TqSys_nTarIdl_TqSys_nTarIdl(data)

#define Rte_IsUpdated_R_TqSys_nTarIdl_TqSys_nTarIdl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3942.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_Read_R_Ext_nEng_Ext_nEng(data) Rte_Read_TQEM_R_Ext_nEng_Ext_nEng(data)

#define Rte_IsUpdated_R_Ext_nEng_Ext_nEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3926.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_tqAdpRaw() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdpRaw)

#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_bEnaAvr6Sync() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr6Sync)

#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_tqCkEngRealEM() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqCkEngRealEM)

#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_tqEMWiCutOff() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqEMWiCutOff)

#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_bEnaAvr4Sync() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr4Sync)

#define Rte_IrvRead_RE_TqEM_004_TEV_TqEM_bEnaAvr3Sync() (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr3Sync)

#define Rte_IrvWrite_RE_TqEM_004_TEV_TqEM_bAuthClc(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bAuthClc = (data))

#define Rte_IrvWrite_RE_TqEM_004_TEV_TqEM_tqAdp(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdp = (data))

#define Rte_IrvWrite_RE_TqEM_004_TEV_TqEM_facTEng(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_facTEng = (data))

#define Rte_Read_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt(data) Rte_Read_TQEM_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt(data)

#define Rte_IsUpdated_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3918.isUpdated)

#define Rte_Read_R_CoPt_stDragRed_CoPt_stDragRed(data) Rte_Read_TQEM_R_CoPt_stDragRed_CoPt_stDragRed(data)

#define Rte_IsUpdated_R_CoPt_stDragRed_CoPt_stDragRed() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3920.isUpdated)

#define Rte_Read_R_CoPTSt_stEng_CoPTSt_stEng(data) Rte_Read_TQEM_R_CoPTSt_stEng_CoPTSt_stEng(data)

#define Rte_IsUpdated_R_CoPTSt_stEng_CoPTSt_stEng() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3921.isUpdated)

#define Rte_Read_R_CoPt_stClu_CoPt_stClu(data) Rte_Read_TQEM_R_CoPt_stClu_CoPt_stClu(data)

#define Rte_IsUpdated_R_CoPt_stClu_CoPt_stClu() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3919.isUpdated)

#define Rte_Read_R_Ext_rCluP_Ext_rCluP(data) Rte_Read_TQEM_R_Ext_rCluP_Ext_rCluP(data)

#define Rte_IsUpdated_R_Ext_rCluP_Ext_rCluP() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3928.isUpdated)

#define Rte_Read_R_Ext_tOilMes_Ext_tOilMes(data) Rte_Read_TQEM_R_Ext_tOilMes_Ext_tOilMes(data)

#define Rte_IsUpdated_R_Ext_tOilMes_Ext_tOilMes() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3934.isUpdated)

#define Rte_Read_R_Ext_stGBxCf_Ext_stGBxCf(data) Rte_Read_TQEM_R_Ext_stGBxCf_Ext_stGBxCf(data)

#define Rte_IsUpdated_R_Ext_stGBxCf_Ext_stGBxCf() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3931.isUpdated)

#define Rte_Read_R_Ext_bEPB_Ext_bEPB(data) Rte_Read_TQEM_R_Ext_bEPB_Ext_bEPB(data)

#define Rte_IsUpdated_R_Ext_bEPB_Ext_bEPB() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3925.isUpdated)

#define Rte_Read_R_TqSys_bIdlAcvCmn_TqSys_bIdlAcvCmn(data) Rte_Read_TQEM_R_TqSys_bIdlAcvCmn_TqSys_bIdlAcvCmn(data)

#define Rte_IsUpdated_R_TqSys_bIdlAcvCmn_TqSys_bIdlAcvCmn() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3939.isUpdated)

#define Rte_Read_R_Ext_spdLeReWhl_Ext_spdLeReWhl(data) Rte_Read_TQEM_R_Ext_spdLeReWhl_Ext_spdLeReWhl(data)

#define Rte_IsUpdated_R_Ext_spdLeReWhl_Ext_spdLeReWhl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3929.isUpdated)

#define Rte_Read_R_Ext_spdRiReWhl_Ext_spdRiReWhl(data) Rte_Read_TQEM_R_Ext_spdRiReWhl_Ext_spdRiReWhl(data)

#define Rte_IsUpdated_R_Ext_spdRiReWhl_Ext_spdRiReWhl() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3930.isUpdated)

#define Rte_Read_R_Veh_spdVeh_Veh_spdVeh(data) Rte_Read_TQEM_R_Veh_spdVeh_Veh_spdVeh(data)

#define Rte_IsUpdated_R_Veh_spdVeh_Veh_spdVeh() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3947.isUpdated)

#define Rte_Call_R_FRM_bInhTqLimEM_GetFunctionPermission(Permission) (RE_FRM_bInhTqLimEM_GetFunctionPermission(Permission), RTE_E_OK)

#define Rte_Call_R_FRM_bInhAdp_tqEM_GetFunctionPermission(Permission) (RE_FRM_bInhAdp_tqEM_GetFunctionPermission(Permission), RTE_E_OK)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV)
#define Rte_Write_P_TqEM_tqEM_TqEM_tqEM(data) (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_1688.value = (data), RTE_E_OK)

#define Rte_Write_P_TqEM_bFrzACComp_TqEM_bFrzACComp(data) Rte_Write_TQEM_P_TqEM_bFrzACComp_TqEM_bFrzACComp(data)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE)
#define Rte_IrvWrite_RE_TqEM_002_TEV_TqEM_tqCkEngRealEM(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqCkEngRealEM = (data))

#define Rte_IrvWrite_RE_TqEM_002_TEV_TqEM_EveSync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_EveSync = (data))

#define Rte_IrvWrite_RE_TqEM_002_TEV_TqEM_tiEveSync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tiEveSync = (data))

#define Rte_Read_R_TqSys_tqCkEngRealEM_TqSys_tqCkEngRealEM(data) Rte_Read_TQEM_R_TqSys_tqCkEngRealEM_TqSys_tqCkEngRealEM(data)

#define Rte_IsUpdated_R_TqSys_tqCkEngRealEM_TqSys_tqCkEngRealEM() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3944.isUpdated)

#define Rte_Read_R_Ext_tiTDC_Ext_tiTDC(data) Rte_Read_TQEM_R_Ext_tiTDC_Ext_tiTDC(data)

#define Rte_IsUpdated_R_Ext_tiTDC_Ext_tiTDC() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3933.isUpdated)

#define Rte_Read_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal(data) Rte_Read_TQEM_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal(data)

#define Rte_IsUpdated_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3948.isUpdated)

#define Rte_Read_R_TqSys_tiEveSync2_TqSys_tiEveSync2(data) Rte_Read_TQEM_R_TqSys_tiEveSync2_TqSys_tiEveSync2(data)

#define Rte_IsUpdated_R_TqSys_tiEveSync2_TqSys_tiEveSync2() (Rte_SwcBDS_Application_Core1.Rte_ReceiveBuffer_3943.isUpdated)

#endif
#if !defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE) || !defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV) || !defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV)
#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_bEnaAvr4Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr4Sync = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_tiEveSync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tiEveSync = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_facTEng(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_facTEng = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_tqAdpRaw(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdpRaw = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_tqEMWiCutOff(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqEMWiCutOff = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_EveSync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_EveSync = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_tqAdp(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqAdp = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_bEnaAvr6Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr6Sync = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_bAuthClc(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bAuthClc = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_tqCkEngRealEM(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_tqCkEngRealEM = (data))

#define Rte_IrvWrite_RE_TqEM_001_MSE_TqEM_bEnaAvr3Sync(data) (Rte_SwcBDS_Application_Core1.Rte_Irv_inst_TopLevelComposition_TQEM_TqEM_bEnaAvr3Sync = (data))

#endif

#endif

/*------------------[port handle API mapping]--------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#endif

/*------------------[application errors]-------------------------------------*/

/*------------------[init values]--------------------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */

#define Rte_InitValue_P_TqEM_bFrzACComp_TqEM_bFrzACComp 0U
#define Rte_InitValue_P_TqEM_tqEM_TqEM_tqEM 0
#define Rte_InitValue_R_AccP_rAccP_AccP_rAccP 0U
#define Rte_InitValue_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt 0
#define Rte_InitValue_R_CoPt_stClu_CoPt_stClu 0U
#define Rte_InitValue_R_CoPt_stDragRed_CoPt_stDragRed 0U
#define Rte_InitValue_R_CoPTSt_stEng_CoPTSt_stEng 1U
#define Rte_InitValue_R_EngM_rAirLdCor_EngM_rAirLdCor 0U
#define Rte_InitValue_R_EngM_rAirLdPred_EngM_rAirLdPred 0U
#define Rte_InitValue_R_EOM_tiEngRun_EOM_tiEngRun 0U
#define Rte_InitValue_R_Ext_bEPB_Ext_bEPB 0U
#define Rte_InitValue_R_Ext_nEng_Ext_nEng 0U
#define Rte_InitValue_R_Ext_noCylEng_Ext_noCylEng 1U
#define Rte_InitValue_R_Ext_rCluP_Ext_rCluP 0U
#define Rte_InitValue_R_Ext_spdLeReWhl_Ext_spdLeReWhl 0U
#define Rte_InitValue_R_Ext_spdRiReWhl_Ext_spdRiReWhl 0U
#define Rte_InitValue_R_Ext_stGBxCf_Ext_stGBxCf 0U
#define Rte_InitValue_R_Ext_tCoMes_Ext_tCoMes 20
#define Rte_InitValue_R_Ext_tiTDC_Ext_tiTDC 100U
#define Rte_InitValue_R_Ext_tOilMes_Ext_tOilMes 0
#define Rte_InitValue_R_IgSys_rStatIgSpEfc_IgSys_rStatIgSpEfc 0U
#define Rte_InitValue_R_IgSys_tqIdcEstim_IgSys_tqIdcEstim 0
#define Rte_InitValue_R_InjSys_bFuCutOff_InjSys_bFuCutOff 0U
#define Rte_InitValue_R_TqCmp_tqCnvLoss_TqCmp_tqCnvLoss 0U
#define Rte_InitValue_R_TqSys_bIdlAcvCmn_TqSys_bIdlAcvCmn 1U
#define Rte_InitValue_R_TqSys_bTypFu_TqSys_bTypFu 0U
#define Rte_InitValue_R_TqSys_EveSync_TqEMClc_TqSys_EveSync_TqEMClc 0U
#define Rte_InitValue_R_TqSys_idxTqAccu_TqSys_idxTqAccu 1U
#define Rte_InitValue_R_TqSys_nTarIdl_TqSys_nTarIdl 0U
#define Rte_InitValue_R_TqSys_tiEveSync2_TqSys_tiEveSync2 0U
#define Rte_InitValue_R_TqSys_tqCkEngRealEM_TqSys_tqCkEngRealEM 0
#define Rte_InitValue_R_TreatTDC_nCkFil_TreatTDC_nCkFil 0U
#define Rte_InitValue_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta 0
#define Rte_InitValue_R_Veh_spdVeh_Veh_spdVeh 0U
#define Rte_InitValue_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal 0

#endif

/*==================[type definitions]=======================================*/

/*------------------[instance handle type]-----------------------------------*/

#if (!defined RTE_CORE) /* if included by software component */
typedef CONSTP2CONST(Rte_CDS_TQEM, RTE_CONST, RTE_CONST) Rte_Instance;
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

extern FUNC(void, RTE_APPL_CODE) RE_TqEM_006_DRE(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqEM_004_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqEM_002_TEV(void);

extern FUNC(void, RTE_APPL_CODE) RE_TqEM_001_MSE(void);

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by Rte]--------------*/

#define RTE_START_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_idxTqAccu_TqSys_idxTqAccu (P2VAR(DT_TqSys_idxTqAccu, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TreatTDC_nCkFil_TreatTDC_nCkFil (P2VAR(DT_TreatTDC_nCkFil, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TreatTDC_nCkTDCDelta_TreatTDC_nCkTDCDelta (P2VAR(DT_TreatTDC_nCkTDCDelta, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_IgSys_rStatIgSpEfc_IgSys_rStatIgSpEfc (P2VAR(DT_IgSys_rStatIgSpEfc, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_EngM_rAirLdCor_EngM_rAirLdCor (P2VAR(DT_EngM_rAirLdCor, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_InjSys_bFuCutOff_InjSys_bFuCutOff (P2VAR(DT_InjSys_bFuCutOff, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_EngM_rAirLdPred_EngM_rAirLdPred (P2VAR(DT_EngM_rAirLdPred, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_EOM_tiEngRun_EOM_tiEngRun (P2VAR(DT_EOM_tiEngRun, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_IgSys_tqIdcEstim_IgSys_tqIdcEstim (P2VAR(DT_IgSys_tqIdcEstim, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqCmp_tqCnvLoss_TqCmp_tqCnvLoss (P2VAR(DT_TqCmp_tqCnvLoss, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_noCylEng_Ext_noCylEng (P2VAR(DT_Ext_noCylEng, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_bTypFu_TqSys_bTypFu (P2VAR(DT_TqSys_bTypFu, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_tCoMes_Ext_tCoMes (P2VAR(DT_Ext_tCoMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_AccP_rAccP_AccP_rAccP (P2VAR(DT_AccP_rAccP, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_nTarIdl_TqSys_nTarIdl (P2VAR(DT_TqSys_nTarIdl, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_nEng_Ext_nEng (P2VAR(DT_Ext_nEng, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_CoPt_noEgdGearCordIt_CoPt_noEgdGearCordIt (P2VAR(DT_CoPt_noEgdGearCordIt, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_CoPt_stDragRed_CoPt_stDragRed (P2VAR(DT_CoPt_stDragRed, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_CoPTSt_stEng_CoPTSt_stEng (P2VAR(DT_CoPTSt_stEng, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_CoPt_stClu_CoPt_stClu (P2VAR(DT_CoPt_stClu, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_rCluP_Ext_rCluP (P2VAR(DT_Ext_rCluP, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_tOilMes_Ext_tOilMes (P2VAR(DT_Ext_tOilMes, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_stGBxCf_Ext_stGBxCf (P2VAR(DT_Ext_stGBxCf, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_bEPB_Ext_bEPB (P2VAR(DT_Ext_bEPB, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_bIdlAcvCmn_TqSys_bIdlAcvCmn (P2VAR(DT_TqSys_bIdlAcvCmn, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_spdLeReWhl_Ext_spdLeReWhl (P2VAR(DT_Ext_spdLeReWhl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_spdRiReWhl_Ext_spdRiReWhl (P2VAR(DT_Ext_spdRiReWhl, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Veh_spdVeh_Veh_spdVeh (P2VAR(DT_Veh_spdVeh, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TQEM_P_TqEM_bFrzACComp_TqEM_bFrzACComp (DT_TqEM_bFrzACComp data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqEM_001_MSE))
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_tqCkEngRealEM_TqSys_tqCkEngRealEM (P2VAR(DT_TqSys_tqCkEngRealEM, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_Ext_tiTDC_Ext_tiTDC (P2VAR(DT_Ext_tiTDC, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_tqCkEngReal_TqSys_tqCkEngReal (P2VAR(DT_TqSys_tqCkEngReal, AUTOMATIC, RTE_APPL_DATA) data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TQEM_R_TqSys_tiEveSync2_TqSys_tiEveSync2 (P2VAR(DT_TqSys_tiEveSync2, AUTOMATIC, RTE_APPL_DATA) data);

#endif
#if (!defined(RTE_RUNNABLEAPI_RE_TqEM_006_DRE))  || (!defined(RTE_RUNNABLEAPI_RE_TqEM_004_TEV)) || (!defined(RTE_RUNNABLEAPI_RE_TqEM_002_TEV))
#endif

#define RTE_STOP_SEC_APPLICATION_CORE1_CODE
#include "MemMap.h"

/*--------------[declaration of API functions provided by other Appl]--------*/

#define RTE_START_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

#if (!defined RTE_CORE) /* if included by software component */

extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhTqLimEM_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);
extern FUNC(void, RTE_APPL_CODE) RE_FRM_bInhAdp_tqEM_GetFunctionPermission (P2VAR(DT_Permission, AUTOMATIC, RTE_APPL_DATA) Permission);

#endif /* (!defined RTE_CORE) */

#define RTE_STOP_SEC_APPLICATION_CORE1_APPL_CODE
#include "MemMap.h"

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*------------------[instance handle declaration]----------------------------*/
#define RTE_START_SEC_APPLICATION_CORE1_CONST_UNSPECIFIED
#include "MemMap.h"

extern CONSTP2CONST(Rte_CDS_TQEM, RTE_CONST, RTE_CONST) Rte_Inst_TQEM;

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
#endif /* !defined(RTE_TQEM_H) */
/*==================[end of file]============================================*/
