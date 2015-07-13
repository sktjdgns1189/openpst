/**
* LICENSE PLACEHOLDER
*
* @file diag.h
* @package OpenPST
* @brief QCDM definitions and structures
*
* @author Gassan Idriss <ghassani@gmail.com>
* @author Matteson Raab <mraabhimself@gmail.com>
*/

#ifndef _QC_QCDM_PACKET_TYPES_H
#define _QC_QCDM_PACKET_TYPES_H

#include "include/definitions.h"

PACKED(typedef struct qcdm_phone_mode_tx_t{
    uint8_t command;
    uint8_t mode;
    uint8_t padding;
}) qcdm_phone_mode_tx_t;

PACKED(typedef struct qcdm_phone_mode_rx_t{
    uint8_t command;
    uint8_t status;
}) qcdm_phone_mode_rx_t;

PACKED(typedef struct qcdm_spc_tx_t{
    uint8_t command;
    uint8_t spc[6];
}) qcdm_spc_tx_t;

PACKED(typedef struct qcdm_spc_rx_t{
    uint8_t command;
    uint8_t status;
}) qcdm_spc_rx_t;

PACKED(typedef struct{
    uint8_t command;
    uint8_t password[8];
}) qcdm_16pw_tx_t;

PACKED(typedef struct {
    uint8_t command;
    uint8_t status;
}) qcdm_16pw_rx_t;

PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint8_t data[DIAG_NV_ITEM_SIZE];
}) qcdm_nv_tx_t;

PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint8_t data[DIAG_NV_ITEM_SIZE];
}) qcdm_nv_rx_t;
PACKED(typedef struct {
    uint8_t padding;
    uint8_t data[DIAG_NV_ITEM_SIZE - 1];
}) qcdm_nv_alt_tx_t;
PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint8_t padding;
    uint8_t data[DIAG_NV_ITEM_SIZE - 1];
}) qcdm_nv_alt_rx_t;
PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint8_t padding;
    uint8_t firstByte;
    uint8_t data[DIAG_NV_ITEM_SIZE - 2];
}) qcdm_nv_alt2_rx_t;
PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint8_t data[4];
    uint8_t padding[DIAG_NV_ITEM_SIZE - 4];
}) qcdm_nv_min1_rx_t;
PACKED(typedef struct {
    uint8_t cmd;
    uint16_t nvItem;
    uint16_t data;
    uint8_t padding[DIAG_NV_ITEM_SIZE - 2];
}) qcdm_nv_min2_rx_t;

#endif // _QC_QCDM_PACKET_TYPES_H
