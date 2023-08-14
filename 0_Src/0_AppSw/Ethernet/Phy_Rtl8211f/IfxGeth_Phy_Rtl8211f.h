/**
 * \file IfxGeth_Eth_Phy_Rtl8211f.h
 * \brief Header file of ETHERNET PHY RTL8211F communication
 *
 * \copyright Copyright (c) 2019 Infineon Technologies AG. All rights reserved.
 *
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Use of this file is subject to the terms of use agreed between (i) you or
 * the company in which ordinary course of business you are acting and (ii)
 * Infineon Technologies AG or its licensees. If and as long as no such
 * terms of use are agreed, use of this file is subject to following:


 * Boost Software License - Version 1.0 - August 17th, 2003

 * Permission is hereby granted, free of charge, to any person or
 * organization obtaining a copy of the software and accompanying
 * documentation covered by this license (the "Software") to use, reproduce,
 * display, distribute, execute, and transmit the Software, and to prepare
 * derivative works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:

 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer, must
 * be included in all copies of the Software, in whole or in part, and all
 * derivative works of the Software, unless such copies or derivative works are
 * solely in the form of machine-executable object code generated by a source
 * language processor.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.

 *
 */

#ifndef IFXGETH_ETH_PHY_RTL8211F_H
#define IFXGETH_ETH_PHY_RTL8211F_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/
/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/
#include "Configuration.h"
#include "IfxCpu_cfg.h"
#include "IfxGeth_Eth.h"

#if defined(__DCC__)
    #if CPU_WHICH_SERVICE_ETHERNET == 0
	#pragma section DATA ".data_cpu0" ".bss_cpu0" far-absolute RW
    #pragma section CODE ".text_cpu0"
    #elif ((CPU_WHICH_SERVICE_ETHERNET == 1) && (CPU_WHICH_SERVICE_ETHERNET < IFXCPU_NUM_MODULES))
	#pragma section DATA ".data_cpu1" ".bss_cpu1" far-absolute RW
    #pragma section CODE ".text_cpu1"
    #elif ((CPU_WHICH_SERVICE_ETHERNET == 2) && (CPU_WHICH_SERVICE_ETHERNET < IFXCPU_NUM_MODULES))
	#pragma section DATA ".data_cpu2" ".bss_cpu2" far-absolute RW
    #pragma section CODE ".text_cpu2"
    #elif ((CPU_WHICH_SERVICE_ETHERNET == 3) && (CPU_WHICH_SERVICE_ETHERNET < IFXCPU_NUM_MODULES))
	#pragma section DATA ".data_cpu3" ".bss_cpu3" far-absolute RW
    #pragma section CODE ".text_cpu3"
    #elif ((CPU_WHICH_SERVICE_ETHERNET == 4) && (CPU_WHICH_SERVICE_ETHERNET < IFXCPU_NUM_MODULES))
	#pragma section DATA ".data_cpu4" ".bss_cpu4" far-absolute RW
    #pragma section CODE ".text_cpu4"
    #elif ((CPU_WHICH_SERVICE_ETHERNET == 5) && (CPU_WHICH_SERVICE_ETHERNET < IFXCPU_NUM_MODULES))
	#pragma section DATA ".data_cpu5" ".bss_cpu5" far-absolute RW
    #pragma section CODE ".text_cpu5"
    #endif
#endif

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/
IFX_EXTERN uint32 IfxGeth_Eth_Phy_Rtl8211f_iPhyInitDone;

/******************************************************************************/
/*-------------------------Function Prototypes--------------------------------*/
/******************************************************************************/
IFX_EXTERN uint32 IfxGeth_Eth_Phy_Rtl8211f_init(void);
IFX_EXTERN void IfxGeth_Eth_Phy_Rtl8211f_read_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 *pdata);
IFX_EXTERN void IfxGeth_Eth_Phy_Rtl8211f_write_mdio_reg(uint32 layeraddr, uint32 regaddr, uint32 data);


#if defined(__DCC__)
#pragma section CODE
#pragma section DATA RW
#endif

#endif /* IFXGETH_ETH_PHY_RTL8211F_H */
