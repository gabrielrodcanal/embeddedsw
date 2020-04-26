
/*******************************************************************
* Copyright (c) 2010-2020 Xilinx, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
*******************************************************************/

#include "xparameters.h"
#include "xwdtps.h"

/*
* The configuration table for devices
*/

XWdtPs_Config XWdtPs_ConfigTable[XPAR_XWDTPS_NUM_INSTANCES] =
{
	{
		XPAR_PSU_CSU_WDT_DEVICE_ID,
		XPAR_PSU_CSU_WDT_BASEADDR
	},
	{
		XPAR_PSU_WDT_0_DEVICE_ID,
		XPAR_PSU_WDT_0_BASEADDR
	},
	{
		XPAR_PSU_WDT_1_DEVICE_ID,
		XPAR_PSU_WDT_1_BASEADDR
	}
};


