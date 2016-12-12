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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/address_hit.vhd";



static void microblaze_v8_20_b_a_1195153068_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(129, ng0);

LAB3:    t1 = (t0 + 4152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:    t8 = (t0 + 9600);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_1195153068_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 3832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9760);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 9616);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_20_b_a_1195153068_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_1195153068_3306564128_p_0,(void *)microblaze_v8_20_b_a_1195153068_3306564128_p_1};
	xsi_register_didat("microblaze_v8_20_b_a_1195153068_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_1195153068_3306564128.didat");
	xsi_register_executes(pe);
}
