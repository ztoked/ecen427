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
extern char *STD_STANDARD;
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_common_v3_00_a/hdl/vhdl/async_fifo_fg.vhd";



int proc_common_v3_00_a_a_1409446290_3640575771_sub_3499190854_2560086426(char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = 0;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t2 == 0);
    if (t12 != 0)
        goto LAB2;

LAB4:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 1;

LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((int *)t7);
    t0 = t15;

LAB1:    return t0;
LAB2:    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = 2;
    goto LAB3;

LAB5:;
}

static void proc_common_v3_00_a_a_1409446290_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(1184, ng1);

LAB3:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    t3 = (9 - 1);
    t4 = (8 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 25632);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 25536);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void proc_common_v3_00_a_a_1409446290_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(1188, ng1);

LAB3:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    t3 = (9 - 1);
    t4 = (8 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 25696);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 25552);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_common_v3_00_a_a_1409446290_3640575771_init()
{
	static char *pe[] = {(void *)proc_common_v3_00_a_a_1409446290_3640575771_p_0,(void *)proc_common_v3_00_a_a_1409446290_3640575771_p_1};
	static char *se[] = {(void *)proc_common_v3_00_a_a_1409446290_3640575771_sub_3499190854_2560086426};
	xsi_register_didat("proc_common_v3_00_a_a_1409446290_3640575771", "isim/isim_system.exe.sim/proc_common_v3_00_a/a_1409446290_3640575771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
