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
static const char *ng0 = "E:/427/Lab7/nesControllerVHD/nesController.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3143221075_1035706684(char *, char *, char *, int );


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
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(53, ng0);
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
LAB3:    t1 = (t0 + 8320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 8496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 8560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 8496);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8560);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void work_a_1985558087_3212880686_p_1(char *t0)
{
    char t14[16];
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
    char *t11;
    char *t12;
    char *t13;
    int t15;

LAB0:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2952U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 8624);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 8688);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 10U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4568U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 0, t15);
    t6 = (12U != 12U);
    if (t6 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 8752);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 12U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB11:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3912U);
    t5 = *((char **)t2);
    t2 = (t0 + 8752);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 12U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_1985558087_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
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

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 13456U);
    t3 = (t0 + 4208U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = ieee_p_1242562249_sub_3143221075_1035706684(IEEE_P_1242562249, t2, t1, t5);
    if (t6 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 8816);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 8352);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 8816);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1985558087_3212880686_p_3(char *t0)
{
    char t11[16];
    char t20[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 13456U);
    t4 = (t0 + 4208U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB10:    t21 = (t0 + 3432U);
    t22 = *((char **)t21);
    t21 = (t0 + 13456U);
    t23 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t22, t21, 1);
    t24 = (t20 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (1U * t25);
    t27 = (10U != t26);
    if (t27 == 1)
        goto LAB12;

LAB13:    t28 = (t0 + 8880);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 10U);
    xsi_driver_first_trans_fast(t28);

LAB2:    t33 = (t0 + 8368);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 4328U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, t13);
    t14 = (10U != 10U);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 8880);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 10U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB9;

LAB11:    goto LAB2;

LAB12:    xsi_size_not_matching(10U, t26, 0);
    goto LAB13;

}

static void work_a_1985558087_3212880686_p_4(char *t0)
{
    char t11[16];
    char t22[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    int t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 13472U);
    t4 = (t0 + 4448U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB10:    t23 = (t0 + 3752U);
    t24 = *((char **)t23);
    t23 = (t0 + 13472U);
    t25 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t22, t24, t23, 1);
    t26 = (t22 + 12U);
    t27 = *((unsigned int *)t26);
    t28 = (1U * t27);
    t29 = (12U != t28);
    if (t29 == 1)
        goto LAB12;

LAB13:    t30 = (t0 + 8944);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 12U);
    xsi_driver_first_trans_fast(t30);

LAB2:    t35 = (t0 + 8384);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 4568U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, t13);
    t14 = (t11 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (12U != t15);
    if (t16 == 1)
        goto LAB8;

LAB9:    t17 = (t0 + 8944);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t4, 12U);
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_size_not_matching(12U, t15, 0);
    goto LAB9;

LAB11:    goto LAB2;

LAB12:    xsi_size_not_matching(12U, t28, 0);
    goto LAB13;

}

static void work_a_1985558087_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9008);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8400);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1985558087_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    static char *nl0[] = {&&LAB3, &&LAB12, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 9136);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 9264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 9328);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 8416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 2312U);
    t6 = *((char **)t4);
    t8 = 1;
    if (32U == 32U)
        goto LAB16;

LAB17:    t8 = 0;

LAB18:    if ((!(t8)) != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t4 = (t0 + 4448U);
    t5 = *((char **)t4);
    t15 = *((int *)t5);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, t15);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB4:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB5:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB33;

LAB34:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB2;

LAB6:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB38;

LAB39:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB7:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB40;

LAB42:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB43;

LAB44:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB41:    goto LAB2;

LAB8:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB45;

LAB47:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB48;

LAB49:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB2;

LAB9:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB50;

LAB52:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB53;

LAB54:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB51:    goto LAB2;

LAB10:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB55;

LAB57:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB58;

LAB59:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);

LAB56:    goto LAB2;

LAB11:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t3 != 0)
        goto LAB60;

LAB62:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB63;

LAB64:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB65;

LAB66:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 13472U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 3);
    if (t3 != 0)
        goto LAB67;

LAB68:    xsi_set_current_line(173, ng0);
    t4 = (t0 + 9200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 9072);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB61:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    xsi_set_current_line(94, ng0);
    t10 = (t0 + 9136);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    t9 = 0;

LAB19:    if (t9 < 32U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t4 = (t5 + t9);
    t7 = (t6 + t9);
    if (*((unsigned char *)t4) != *((unsigned char *)t7))
        goto LAB17;

LAB21:    t9 = (t9 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 9072);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 9200);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 9264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB26;

LAB28:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 31U, 1, 0LL);
    goto LAB26;

LAB30:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB31;

LAB33:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 30U, 1, 0LL);
    goto LAB31;

LAB35:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB36;

LAB38:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 29U, 1, 0LL);
    goto LAB36;

LAB40:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB41;

LAB43:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 28U, 1, 0LL);
    goto LAB41;

LAB45:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB46;

LAB48:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 27U, 1, 0LL);
    goto LAB46;

LAB50:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB51;

LAB53:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 26U, 1, 0LL);
    goto LAB51;

LAB55:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB56;

LAB58:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 25U, 1, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB61;

LAB63:    xsi_set_current_line(168, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 9456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 24U, 1, 0LL);
    goto LAB61;

LAB65:    xsi_set_current_line(170, ng0);
    t4 = (t0 + 9328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB61;

LAB67:    goto LAB61;

}


extern void work_a_1985558087_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1985558087_3212880686_p_0,(void *)work_a_1985558087_3212880686_p_1,(void *)work_a_1985558087_3212880686_p_2,(void *)work_a_1985558087_3212880686_p_3,(void *)work_a_1985558087_3212880686_p_4,(void *)work_a_1985558087_3212880686_p_5,(void *)work_a_1985558087_3212880686_p_6};
	xsi_register_didat("work_a_1985558087_3212880686", "isim/test_isim_beh.exe.sim/work/a_1985558087_3212880686.didat");
	xsi_register_executes(pe);
}
