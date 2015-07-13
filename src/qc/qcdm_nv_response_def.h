/**
* LICENSE PLACEHOLDER
*
* @file qcdm_nv_item_def.h
* @package OpenPST
* @brief QCDM definitions and structures
*
* @author Gassan Idriss <ghassani@gmail.com>
* @author Matteson Raab <mraabhimself@gmail.com>
*/

#ifndef _QC_QCDM_NV_RESPONSE_DEF_H
#define _QC_QCDM_NV_RESPONSE_DEF_H

#include "include/definitions.h"

enum DIAG_RTRE_MODE {
    RTRE_MODE_RUIM_ONLY = 0x0,
    RTRE_MODE_NV_ONLY = 0x1,
    RTRE_MODE_RUIM_PREF = 0x2,
    RTRE_MODE_GSM_1X = 0x3
};

enum DIAG_PREF_MODE {
    PREF_MODE_AMPS = 3,
    PREF_MODE_AMPS_CDMA = 2,
    PREF_MODE_AUTOMATIC = 4,
    PREF_MODE_CDMA_AMPS = 0,
    PREF_MODE_CDMA_AMPS_HDR = 20,
    PREF_MODE_CDMA_AMPS_HDR_WLAN = 0x1b,
    PREF_MODE_CDMA_AMPS_WLAN = 0x1c,
    PREF_MODE_CDMA_GSM_WCDMA = 0x33,
    PREF_MODE_CDMA_HDR = 0x13,
    PREF_MODE_CDMA_HDR_GSM_WCDMA = 0x34,
    PREF_MODE_CDMA_HDR_WLAN = 0x17,
    PREF_MODE_CDMA_IS2000 = 9,
    PREF_MODE_CDMA_IS95 = 1,
    PREF_MODE_CDMA_WLAN = 0x15,
    PREF_MODE_CDMAxAMPS = 11,
    PREF_MODE_DIGITAL = 0x12,
    PREF_MODE_EMERGENCY = 5,
    PREF_MODE_GPS = 12,
    PREF_MODE_GSM_GPRS_EDGE = 13,
    PREF_MODE_GSM_WCDMA = 0x11,
    PREF_MODE_GSM_WCDMA_WLAN = 0x1a,
    PREF_MODE_GSM_WLAN = 0x18,
    PREF_MODE_HDR = 10,
    PREF_MODE_HDR_OFF = 0x10,
    PREF_MODE_HDR_WLAN = 0x16,
    PREF_MODE_HDR_WLAN_OFF = 0x1d,
    PREF_MODE_HOME = 6,
    PREF_MODE_LTE = 30,
    PREF_MODE_LTE_CDMA = 0x20,
    PREF_MODE_LTE_CDMA_GSM = 0x25,
    PREF_MODE_LTE_CDMA_GSM_WLAN = 0x2e,
    PREF_MODE_LTE_CDMA_HDR = 0x24,
    PREF_MODE_LTE_CDMA_HDR_WLAN = 0x2d,
    PREF_MODE_LTE_CDMA_WCDMA = 0x26,
    PREF_MODE_LTE_CDMA_WCDMA_WLAN = 0x2f,
    PREF_MODE_LTE_CDMA_WLAN = 0x29,
    PREF_MODE_LTE_GSM = 0x22,
    PREF_MODE_LTE_GSM_WCDMA = 0x1f,
    PREF_MODE_LTE_GSM_WLAN = 0x2b,
    PREF_MODE_LTE_HDR = 0x21,
    PREF_MODE_LTE_HDR_GSM = 0x27,
    PREF_MODE_LTE_HDR_GSM_WLAN = 0x30,
    PREF_MODE_LTE_HDR_WCDMA = 40,
    PREF_MODE_LTE_HDR_WCDMA_WLAN = 0x31,
    PREF_MODE_LTE_HDR_WLAN = 0x2a,
    PREF_MODE_LTE_WCDMA = 0x23,
    PREF_MODE_LTE_WCDMA_WLAN = 0x2c,
    PREF_MODE_WCDMA_HSDPA = 14,
    PREF_MODE_WCDMA_WLAN = 0x19,
    PREF_MODE_WLAN = 15,
    PREF_MODE_WLAN_OFF = 50
};

enum DIAG_PREF_SERV {
    PREF_SERV_SYSTEM_A = 0x0,
    PREF_SERV_SYSTEM_AB = 0x1,
    PREF_SERV_SYSTEM_B = 0x2,
    PREF_SERV_SYSTEM_BA = 0x3,
    PREF_SERV_HOME_ONLY = 0x4,
    PREF_SERV_HOME_PREF = 0x5
};

enum DIAG_SYSTEM_PREF {
    SYSTEM_PREF_SYSTEM_A = 0x0,
    SYSTEM_PREF_SYSTEM_B = 0x1,
    SYSTEM_PREF_HOME_ONLY = 0x2,
    SYSTEM_PREF_HOME_PREF = 0x3
};

enum DIAG_ROAM_PREF {
    ROAM_PREF_HOME = 0x1,
    ROAM_PREF_AFFILIATED = 0x3,
    ROAM_PREF_AUTOMATIC = 0xff,
    ROAM_PREF_STATIC = 0x100,
};

enum DIAG_HYBRID_PREF {
    HYBRID_PREF_DISABLE = 0x0,
    HYBRID_PREF_ENABLE = 0x1,
    HYBRID_PREF_FACTORY = 0x2
};

enum DIAG_HDR_SCP_FORCE_AT_CONFIG {
    AT_CONFIG_REV_0_ONLY = 0x0,
    AT_CONFIG_REV_A_MFPA = 0x1,
    AT_CONFIG_REV_A_MFPA_EMPA = 0x2,
    AT_CONFIG_REV_B_MFPA = 0x3,
    AT_CONFIG_REV_A_EHRPD = 0x4,
    AT_CONFIG_REV_B_EHRPD = 0x5
};

enum DIAG_HDR_SCP_FORCE_REL0_CONFIG {
    REL0_CONFIG_REV_A = 0x0,
    REL0_CONFIG_REV_0 = 0x1
};

enum DIAG_DS_MIP_RETRIES {
    DS_MIP_RETRIES_1000MS = 0x0,
    DS_MIP_RETRIES_1250MS = 0x1,
    DS_MIP_RETRIES_1500MS = 0x2,
    DS_MIP_RETRIES_1750MS = 0x3,
    DS_MIP_RETRIES_2000MS = 0x4
};

enum DIAG_DS_QCMIP {
    DS_QCMIP_SIMPLE_IP = 0x0,
    DS_QCMIP_PREF_MOBILE_IP = 0x1,
    DS_QCMIP_MOBILE_IP = 0x2
};

#endif // _QC_QCDM_NV_RESPONSE_DEF_H