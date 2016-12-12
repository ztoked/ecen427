/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_uartlite_v1_02_a/hdl/vhdl/axi_uartlite.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void axi_uartlite_v1_02_a_a_0863921704_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(314, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 10048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 9968);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_uartlite_v1_02_a_a_0863921704_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(320, ng0);

LAB3:    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t3 = (t0 + 10112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 24U);
    xsi_driver_first_trans_delta(t3, 0U, 24U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_uartlite_v1_02_a_a_0863921704_1516540902_init()
{
	static char *pe[] = {(void *)axi_uartlite_v1_02_a_a_0863921704_1516540902_p_0,(void *)axi_uartlite_v1_02_a_a_0863921704_1516540902_p_1};
	xsi_register_didat("axi_uartlite_v1_02_a_a_0863921704_1516540902", "isim/isim_system.exe.sim/axi_uartlite_v1_02_a/a_0863921704_1516540902.didat");
	xsi_register_executes(pe);
}
