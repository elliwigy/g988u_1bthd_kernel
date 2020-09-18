// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2017-2020, The Linux Foundation. All rights reserved.
 */
#ifndef _SECDP_PARAMS_X1Q_H
#define _SECDP_PARAMS_X1Q_H

static u8 const vm_pre_emphasis[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x00, 0x0D, 0x15, 0xFF}, /* pe0,   0 db */
	{0x00, 0x0D, 0x15, 0xFF}, /* pe1, 3.5 db */
	{0x00, 0x0C, 0xFF, 0xFF}, /* pe2, 6.0 db */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* pe3, 9.5 db */
};

/* voltage swing, 0.2v and 1.0v are not support */
static u8 const vm_voltage_swing[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x07, 0x0F, 0x14, 0xFF}, /* sw0, 0.4v  */
	{0x11, 0x1D, 0x1F, 0xFF}, /* sw1, 0.6 v */
	{0x18, 0x1F, 0xFF, 0xFF}, /* sw1, 0.8 v */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* sw1, 1.2 v, optional */
};

static u8 const dp_pre_emp_hbr2_hbr3[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x00, 0x0C, 0x14, 0x1A}, /* pe0,   0 db */
	{0x00, 0x0C, 0x13, 0xFF}, /* pe1, 3.5 db */
	{0x00, 0x0C, 0xFF, 0xFF}, /* pe2, 6.0 db */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* pe3, 9.5 db */
};

static u8 const dp_swing_hbr2_hbr3[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x09, 0x11, 0x19, 0x1F}, /* sw0, 0.4v */
	{0x12, 0x1A, 0x1F, 0xFF}, /* sw1, 0.6v */
	{0x1C, 0x1F, 0xFF, 0xFF}, /* sw1, 0.8v */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* sw1, 1.2v */
};

static u8 const dp_pre_emp_hbr_rbr[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x00, 0x0B, 0x13, 0x19}, /* pe0,   0 db */
	{0x00, 0x0C, 0x14, 0xFF}, /* pe1, 3.5 db */
	{0x00, 0x0B, 0xFF, 0xFF}, /* pe2, 6.0 db */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* pe3, 9.5 db */
};

static u8 const dp_swing_hbr_rbr[MAX_VOLTAGE_LEVELS][MAX_PRE_EMP_LEVELS] = {
	{0x0A, 0x11, 0x19, 0x1F}, /* sw0, 0.4v */
	{0x12, 0x1A, 0x1F, 0xFF}, /* sw1, 0.6v */
	{0x1D, 0x1F, 0xFF, 0xFF}, /* sw1, 0.8v */
	{0xFF, 0xFF, 0xFF, 0xFF}  /* sw1, 1.2v */
};
#endif/*_SECDP_PARAMS_X1Q_H*/
