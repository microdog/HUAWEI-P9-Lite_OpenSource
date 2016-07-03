/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2015

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2015-06-11
 * @file
 * @brief
 *
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CAS_HRPD_OVERHEADMSG_NAS_PIF_H
#define CAS_HRPD_OVERHEADMSG_NAS_PIF_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/

#define CAS_CNAS_SECOND_COLORCODE_MAX_LENGTH                ( 7 )
#define CAS_CNAS_SUBNET_ID_MAX_LENGTH                       ( 16 )

/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM
{
    ID_CAS_CNAS_HRPD_OHM_NOT_CURRENT_IND                    = 0x9100, /**< @sa CAS_CNAS_HRPD_OHM_NOT_CURRENT_IND_STRU */
    ID_CAS_CNAS_HRPD_OVERHEAD_MSG_IND                       = 0x9101, /**< @sa CAS_CNAS_HRPD_OVERHEAD_MSG_IND_STRU */
    ID_CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM_BUTT      = 0xFFFF
};
typedef VOS_UINT16 CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM_UINT16;

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CAS_CNAS_HRPD_OHM_NOT_CURRENT_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
} CAS_CNAS_HRPD_OHM_NOT_CURRENT_IND_STRU;

/** ****************************************************************************
 * Name        : CAS_CNAS_HRPD_OVERHEAD_MSG_IND_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    CAS_HRPD_OVERHEADMSG_NAS_PIF_MSG_TYPE_ENUM_UINT16       enMsgId;
    VOS_UINT16                                              usOpId;
    VOS_UINT16                                              usBandClass;
    VOS_UINT16                                              usFreq;
    VOS_UINT16                                              usCountryCode;
    VOS_UINT8                                               ucColorCode;
    VOS_UINT8                                               ucSubNetMask;
    VOS_UINT8                                               aucSectorId[CAS_CNAS_SUBNET_ID_MAX_LENGTH];
    VOS_UINT8                                               ucSecondaryColorCodeCount;
    VOS_UINT8                                               aucSecondaryColorCode[CAS_CNAS_SECOND_COLORCODE_MAX_LENGTH];
    VOS_INT32                                               lLongitude;
    VOS_INT32                                               lLatitude;
    VOS_UINT32                                              ulSector24;
} CAS_CNAS_HRPD_OVERHEAD_MSG_IND_STRU;

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif