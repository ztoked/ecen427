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
static const char *ng0 = "E:/427/Lab6/MattAndZachISE/test/test.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);


static void work_a_1985558087_3212880686_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 4240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 4304);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 4240);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    memcpy(t12, t6, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

}

static void work_a_1985558087_3212880686_p_1(char *t0)
{
    char t4[16];
    char t19[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6356U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t4, 1, 32);
    t6 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 6356U);
    t10 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t9, t8, 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    t1 = t7;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t33 = (t0 + 2152U);
    t34 = *((char **)t33);
    t35 = (2 - 31);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t33 = (t34 + t38);
    t39 = *((unsigned char *)t33);
    t40 = (t39 == (unsigned char)3);
    if (t40 == 1)
        goto LAB15;

LAB16:    t32 = (unsigned char)0;

LAB17:    if (t32 != 0)
        goto LAB13;

LAB14:
LAB18:    t50 = (t0 + 1512U);
    t51 = *((char **)t50);
    t50 = (t0 + 4368);
    t52 = (t50 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memcpy(t55, t51, 32U);
    xsi_driver_first_trans_fast(t50);

LAB2:    t56 = (t0 + 4144);
    *((int *)t56) = 1;

LAB1:    return;
LAB3:    t20 = (t0 + 1512U);
    t21 = *((char **)t20);
    t20 = (t0 + 6356U);
    t22 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t19, t21, t20, 1);
    t23 = (t19 + 12U);
    t24 = *((unsigned int *)t23);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB11;

LAB12:    t27 = (t0 + 4368);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 32U);
    xsi_driver_first_trans_fast(t27);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    t13 = (0 - 31);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t17 == (unsigned char)3);
    t7 = t18;
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, t25, 0);
    goto LAB12;

LAB13:    t44 = (t0 + 1992U);
    t45 = *((char **)t44);
    t44 = (t0 + 4368);
    t46 = (t44 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t45, 32U);
    xsi_driver_first_trans_fast(t44);
    goto LAB2;

LAB15:    t41 = (t0 + 1512U);
    t42 = *((char **)t41);
    t41 = (t0 + 6356U);
    t43 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t42, t41, 0);
    t32 = t43;
    goto LAB17;

LAB19:    goto LAB2;

}

static void work_a_1985558087_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6356U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, 1);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t18 = (t0 + 4432);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 4160);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 4432);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t7 = (1 - 31);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t5 = (t6 + t10);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_1985558087_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1985558087_3212880686_p_0,(void *)work_a_1985558087_3212880686_p_1,(void *)work_a_1985558087_3212880686_p_2};
	xsi_register_didat("work_a_1985558087_3212880686", "isim/test_isim_beh.exe.sim/work/a_1985558087_3212880686.didat");
	xsi_register_executes(pe);
}
