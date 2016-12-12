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
static const char *ng0 = "E:/427/Lab7/HardWare/simulation/behavioral/system_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_2351973497_0632001823_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;

LAB0:    t1 = (t0 + 10272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 10904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(201, ng0);

LAB4:
LAB5:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 9168U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 10080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB7:    goto LAB2;

LAB8:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t2 = (t0 + 10904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2351973497_0632001823_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;

LAB0:    t1 = (t0 + 10520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 10968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 9288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 10328);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t8);
    t2 = (t0 + 10968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    *((unsigned char *)t10) = t9;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(214, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_2351973497_0632001823_init()
{
	static char *pe[] = {(void *)work_a_2351973497_0632001823_p_0,(void *)work_a_2351973497_0632001823_p_1};
	xsi_register_didat("work_a_2351973497_0632001823", "isim/isim_system.exe.sim/work/a_2351973497_0632001823.didat");
	xsi_register_executes(pe);
}
