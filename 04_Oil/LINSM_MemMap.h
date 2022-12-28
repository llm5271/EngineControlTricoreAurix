/******************************************************************************/
/*                                                                            */
/* !Layer           : STD                                                     */
/*                                                                            */
/* !Component       : MEMMAP                                                  */
/* !Description     : MEMMAP Configuration                                    */
/*                                                                            */
/* !File            : LINSM_MEMMAP.H                                          */
/*                                                                            */
/* !Scope           : Public                                                  */
/*                                                                            */
/* !Target          :                                                         */
/*                                                                            */
/* !Vendor          : Valeo                                                   */
/*                                                                            */
/* Coding language  : C                                                       */
/*                                                                            */
/* COPYRIGHT 2009 VALEO                                                       */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
/* PVCS Information                                                           */
/* $Archive::                                                                $*/
/* $Revision::            $$Author::                  $$Date::               $*/
/******************************************************************************/
/* 11/10/14, 10:16:20: generated by Genecode  v2.6.0.0                        */
/* From Source Template : MSN_MEMMAP_H.TPL                                    */
/******************************************************************************/



/******************************************************************************/
/*          MEMMAP selected mode:  SAFE                                       */
/******************************************************************************/
#define MEMMAP_ERROR

/* The following if is used only due to automatic generation */
#if !defined MEMMAP_ERROR

/* Project section mappings */
/* !Comment: LINSM Section allocation */
#elif defined   LINSM_START_SEC_CODE
   #undef  LINSM_START_SEC_CODE
   #define START_SEC_CODE_SECTION
#elif defined   LINSM_STOP_SEC_CODE
   #undef  LINSM_STOP_SEC_CODE
   #define STOP_SEC_CODE_SECTION

#elif defined   LINSM_START_SEC_VAR_8
   #undef  LINSM_START_SEC_VAR_8
   #define START_SEC_VAR_8_SECTION
#elif defined   LINSM_STOP_SEC_VAR_8
   #undef  LINSM_STOP_SEC_VAR_8
   #define STOP_SEC_VAR_8_SECTION

#elif defined   LINSM_START_SEC_VAR_16
   #undef  LINSM_START_SEC_VAR_16
   #define START_SEC_VAR_16_SECTION
#elif defined   LINSM_STOP_SEC_VAR_16
   #undef  LINSM_STOP_SEC_VAR_16
   #define STOP_SEC_VAR_16_SECTION

#elif defined   LINSM_START_SEC_VAR_BOOLEAN
   #undef  LINSM_START_SEC_VAR_BOOLEAN
   #define START_SEC_VAR_BOOLEAN_SECTION
#elif defined   LINSM_STOP_SEC_VAR_BOOLEAN
   #undef  LINSM_STOP_SEC_VAR_BOOLEAN
   #define STOP_SEC_VAR_BOOLEAN_SECTION


#endif

/* ECU specific section mappings */
#ifndef MEMMAP_START_DONE

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Start Section treatment */
   #elif defined   START_SEC_CODE_SECTION
	  

      #pragma section ".text" ax

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_8 Start Section treatment */
   #elif defined   START_SEC_VAR_8_SECTION
	  
      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_16 Start Section treatment */
   #elif defined   START_SEC_VAR_16_SECTION
	  
      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE

/* !Comment: SEC_VAR_BOOLEAN Start Section treatment */
   #elif defined   START_SEC_VAR_BOOLEAN_SECTION
	  

      #pragma section ".bss_cpu1" aw

      #undef  MEMMAP_ERROR
      #define MEMMAP_START_DONE


   #endif

#else   /* if MEMMAP_START_DONE is not defined */

/* The following if is used only due to automatic generation */

#if FALSE
/* !Comment: SEC_CODE Stop Section treatment */
   #elif defined   STOP_SEC_CODE_SECTION && defined  START_SEC_CODE_SECTION
	  

      #pragma section

      #undef START_SEC_CODE_SECTION
      #undef STOP_SEC_CODE_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_8 Stop Section treatment */
   #elif defined   STOP_SEC_VAR_8_SECTION && defined  START_SEC_VAR_8_SECTION
	  
      #undef START_SEC_VAR_8_SECTION
      #undef STOP_SEC_VAR_8_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_16 Stop Section treatment */
   #elif defined   STOP_SEC_VAR_16_SECTION && defined  START_SEC_VAR_16_SECTION
	  
      #undef START_SEC_VAR_16_SECTION
      #undef STOP_SEC_VAR_16_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE

/* !Comment: SEC_VAR_BOOLEAN Stop Section treatment */
   #elif defined   STOP_SEC_VAR_BOOLEAN_SECTION && defined  START_SEC_VAR_BOOLEAN_SECTION
	  

      #pragma section

      #undef START_SEC_VAR_BOOLEAN_SECTION
      #undef STOP_SEC_VAR_BOOLEAN_SECTION
      #undef MEMMAP_ERROR
      #undef MEMMAP_START_DONE


   #endif
#endif

#if defined MEMMAP_ERROR
   #error MEMMAP-E201 : Bad memory allocation into LINSM_MemMap.h
#endif


/*------------------------------- end of file --------------------------------*/
