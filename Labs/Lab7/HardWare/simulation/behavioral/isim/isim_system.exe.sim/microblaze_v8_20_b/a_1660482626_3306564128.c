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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/alu_bit.vhd";



static void microblaze_v8_20_b_a_1660482626_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(446, ng0);

LAB3:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5440);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_20_b_a_1660482626_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_1660482626_3306564128_p_0};
	xsi_register_didat("microblaze_v8_20_b_a_1660482626_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_1660482626_3306564128.didat");
	xsi_register_executes(pe);
}
