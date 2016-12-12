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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/instr_mux.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void microblaze_v8_20_b_a_2199602061_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(193, ng0);

LAB3:    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t0 + 7728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 7568);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2199602061_3306564128_p_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2088U);
    t11 = *((char **)t10);
    t10 = (t0 + 7792);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 7584);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2888U);
    t5 = *((char **)t1);
    t1 = (t0 + 7792);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_2199602061_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(209, ng0);

LAB3:    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2248U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 7856);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 7600);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2199602061_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(348, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 3048U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 32U);
    t3 = (t0 + 7920);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t10 = (t0 + 7616);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2199602061_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(349, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    memset(t2, t5, 32U);
    t3 = (t0 + 7984);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t10 = (t0 + 7632);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_2199602061_3306564128_p_5(char *t0)
{
    char t1[16];
    char t2[16];
    char t3[16];
    char t11[16];
    char t15[16];
    char t19[16];
    char t27[16];
    char t31[16];
    char t32[16];
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(351, ng0);

LAB3:    t4 = (t0 + 2888U);
    t5 = *((char **)t4);
    t4 = (t0 + 2896U);
    t6 = *((char **)t4);
    t7 = (t0 + 3848U);
    t8 = *((char **)t7);
    t7 = (t0 + 3856U);
    t9 = *((char **)t7);
    t10 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t3, t5, t6, t8, t9);
    t12 = (t0 + 2088U);
    t13 = *((char **)t12);
    t12 = (t0 + 2096U);
    t14 = *((char **)t12);
    t16 = (t0 + 4008U);
    t17 = *((char **)t16);
    t16 = (t0 + 4016U);
    t18 = *((char **)t16);
    t20 = (t0 + 3848U);
    t21 = *((char **)t20);
    t20 = (t0 + 3856U);
    t22 = *((char **)t20);
    t23 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t19, t21, t22);
    t24 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t15, t17, t18, t23, t19);
    t25 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t13, t14, t24, t15);
    t26 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t2, t10, t3, t25, t11);
    t28 = (t0 + 2728U);
    t29 = *((char **)t28);
    t28 = (t0 + 2736U);
    t30 = *((char **)t28);
    t33 = (t0 + 3848U);
    t34 = *((char **)t33);
    t33 = (t0 + 3856U);
    t35 = *((char **)t33);
    t36 = (t0 + 4008U);
    t37 = *((char **)t36);
    t36 = (t0 + 4016U);
    t38 = *((char **)t36);
    t39 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t32, t34, t35, t37, t38);
    t40 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t31, t39, t32);
    t41 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t27, t29, t30, t40, t31);
    t42 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t1, t26, t2, t41, t27);
    t43 = (t1 + 12U);
    t44 = *((unsigned int *)t43);
    t45 = (1U * t44);
    t46 = (32U != t45);
    if (t46 == 1)
        goto LAB5;

LAB6:    t47 = (t0 + 8048);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t42, 32U);
    xsi_driver_first_trans_fast_port(t47);

LAB2:    t52 = (t0 + 7648);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t45, 0);
    goto LAB6;

}


extern void microblaze_v8_20_b_a_2199602061_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_0,(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_1,(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_2,(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_3,(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_4,(void *)microblaze_v8_20_b_a_2199602061_3306564128_p_5};
	xsi_register_didat("microblaze_v8_20_b_a_2199602061_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_2199602061_3306564128.didat");
	xsi_register_executes(pe);
}
