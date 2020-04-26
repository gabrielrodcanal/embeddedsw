
/*******************************************************************
* Copyright (c) 2010-2020 Xilinx, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
*******************************************************************/

#include "xparameters.h"
#include "xemacps.h"

/*
* The configuration table for devices
*/

XEmacPs_Config XEmacPs_ConfigTable[XPAR_XEMACPS_NUM_INSTANCES] =
{
	{
		XPAR_PSV_ETHERNET_0_DEVICE_ID,
		XPAR_PSV_ETHERNET_0_BASEADDR,
		XPAR_PSV_ETHERNET_0_IS_CACHE_COHERENT
	},
	{
		XPAR_PSV_ETHERNET_1_DEVICE_ID,
		XPAR_PSV_ETHERNET_1_BASEADDR,
		XPAR_PSV_ETHERNET_1_IS_CACHE_COHERENT
	}
};


