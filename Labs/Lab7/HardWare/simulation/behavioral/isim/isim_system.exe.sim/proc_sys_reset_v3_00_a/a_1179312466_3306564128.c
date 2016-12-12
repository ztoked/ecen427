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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/proc_sys_reset_v3_00_a/hdl/vhdl/upcnt_n.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );


static void proc_sys_reset_v3_00_a_a_1179312466_3306564128_p_0(char *t0)
{
    char t19[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3960);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 2408U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(139, ng0);
    t4 = xsi_get_transient_memory(4U);
    memset(t4, 0, 4U);
    t13 = t4;
    memset(t13, (unsigned char)2, 4U);
    t14 = (t0 + 4056);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 4U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB11:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t2 = (t0 + 4056);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 6808U);
    t8 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t19, t5, t2, 1);
    t10 = (t19 + 12U);
    t20 = *((unsigned int *)t10);
    t21 = (1U * t20);
    t6 = (4U != t21);
    if (t6 == 1)
        goto LAB15;

LAB16:    t13 = (t0 + 4056);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast(t13);
    goto LAB9;

LAB15:    xsi_size_not_matching(4U, t21, 0);
    goto LAB16;

}

static void proc_sys_reset_v3_00_a_a_1179312466_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(150, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3976);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void proc_sys_reset_v3_00_a_a_1179312466_3306564128_init()
{
	static char *pe[] = {(void *)proc_sys_reset_v3_00_a_a_1179312466_3306564128_p_0,(void *)proc_sys_reset_v3_00_a_a_1179312466_3306564128_p_1};
	xsi_register_didat("proc_sys_reset_v3_00_a_a_1179312466_3306564128", "isim/isim_system.exe.sim/proc_sys_reset_v3_00_a/a_1179312466_3306564128.didat");
	xsi_register_executes(pe);
}
