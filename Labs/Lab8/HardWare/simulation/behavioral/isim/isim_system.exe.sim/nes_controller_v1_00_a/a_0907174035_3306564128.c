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
static const char *ng0 = "E:/427/Lab7/HardWare/pcores/nes_controller_v1_00_a/hdl/vhdl/user_logic.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3143221075_1035706684(char *, char *, char *, int );


static void nes_controller_v1_00_a_a_0907174035_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1632U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 12872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 13176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(181, ng0);
    t1 = (t0 + 13240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3752U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (t0 + 13176);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t11;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_1(char *t0)
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

LAB0:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 1632U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 12888);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 4072U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 13304);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4712U);
    t4 = *((char **)t2);
    t2 = (t0 + 13368);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 10U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 4232U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3912U);
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

LAB8:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 6888U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 0, t15);
    t6 = (12U != 12U);
    if (t6 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 13432);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 12U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB11:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5032U);
    t5 = *((char **)t2);
    t2 = (t0 + 13432);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 12U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 22072U);
    t3 = (t0 + 6528U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = ieee_p_1242562249_sub_3143221075_1035706684(IEEE_P_1242562249, t2, t1, t5);
    if (t6 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 13496);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 12904);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 13496);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4552U);
    t3 = *((char **)t2);
    t2 = (t0 + 22072U);
    t4 = (t0 + 6528U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB10:    t21 = (t0 + 4552U);
    t22 = *((char **)t21);
    t21 = (t0 + 22072U);
    t23 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t22, t21, 1);
    t24 = (t20 + 12U);
    t25 = *((unsigned int *)t24);
    t26 = (1U * t25);
    t27 = (10U != t26);
    if (t27 == 1)
        goto LAB12;

LAB13:    t28 = (t0 + 13560);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 10U);
    xsi_driver_first_trans_fast(t28);

LAB2:    t33 = (t0 + 12920);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 6648U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, t13);
    t14 = (10U != 10U);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 13560);
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

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_4(char *t0)
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

LAB0:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4872U);
    t3 = *((char **)t2);
    t2 = (t0 + 22088U);
    t4 = (t0 + 6768U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB10:    t23 = (t0 + 4872U);
    t24 = *((char **)t23);
    t23 = (t0 + 22088U);
    t25 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t22, t24, t23, 1);
    t26 = (t22 + 12U);
    t27 = *((unsigned int *)t26);
    t28 = (1U * t27);
    t29 = (12U != t28);
    if (t29 == 1)
        goto LAB12;

LAB13:    t30 = (t0 + 13624);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 12U);
    xsi_driver_first_trans_fast(t30);

LAB2:    t35 = (t0 + 12936);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 6888U);
    t12 = *((char **)t4);
    t13 = *((int *)t12);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, t13);
    t14 = (t11 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (12U != t15);
    if (t16 == 1)
        goto LAB8;

LAB9:    t17 = (t0 + 13624);
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

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(208, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13688);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12952);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 13816);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 13944);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 14008);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 12968);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(219, ng0);
    t4 = (t0 + 5192U);
    t5 = *((char **)t4);
    t4 = (t0 + 3432U);
    t6 = *((char **)t4);
    t8 = 1;
    if (32U == 32U)
        goto LAB16;

LAB17:    t8 = 0;

LAB18:    if ((!(t8)) != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t4 = (t0 + 6768U);
    t5 = *((char **)t4);
    t15 = *((int *)t5);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, t15);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB2;

LAB4:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(234, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB5:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB33;

LAB34:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB2;

LAB6:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB38;

LAB39:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB7:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB40;

LAB42:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB43;

LAB44:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(261, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB41:    goto LAB2;

LAB8:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB45;

LAB47:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB48;

LAB49:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(270, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB2;

LAB9:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB50;

LAB52:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB53;

LAB54:    xsi_set_current_line(278, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(279, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB51:    goto LAB2;

LAB10:    xsi_set_current_line(282, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB55;

LAB57:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB58;

LAB59:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(288, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);

LAB56:    goto LAB2;

LAB11:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t3 != 0)
        goto LAB60;

LAB62:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 1);
    if (t3 != 0)
        goto LAB63;

LAB64:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 2);
    if (t3 != 0)
        goto LAB65;

LAB66:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 22088U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 3);
    if (t3 != 0)
        goto LAB67;

LAB68:    xsi_set_current_line(299, ng0);
    t4 = (t0 + 13880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(300, ng0);
    t1 = (t0 + 13752);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB61:    goto LAB2;

LAB12:    goto LAB2;

LAB13:    xsi_set_current_line(220, ng0);
    t10 = (t0 + 13816);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t1 = (t0 + 14072);
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

LAB22:    xsi_set_current_line(224, ng0);
    t4 = (t0 + 13752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(225, ng0);
    t1 = (t0 + 13880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(229, ng0);
    t4 = (t0 + 13944);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB26;

LAB28:    xsi_set_current_line(231, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 31U, 1, 0LL);
    goto LAB26;

LAB30:    xsi_set_current_line(238, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB31;

LAB33:    xsi_set_current_line(240, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 30U, 1, 0LL);
    goto LAB31;

LAB35:    xsi_set_current_line(247, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB36;

LAB38:    xsi_set_current_line(249, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 29U, 1, 0LL);
    goto LAB36;

LAB40:    xsi_set_current_line(256, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB41;

LAB43:    xsi_set_current_line(258, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 28U, 1, 0LL);
    goto LAB41;

LAB45:    xsi_set_current_line(265, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB46;

LAB48:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 27U, 1, 0LL);
    goto LAB46;

LAB50:    xsi_set_current_line(274, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB51;

LAB53:    xsi_set_current_line(276, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 26U, 1, 0LL);
    goto LAB51;

LAB55:    xsi_set_current_line(283, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB56;

LAB58:    xsi_set_current_line(285, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 25U, 1, 0LL);
    goto LAB56;

LAB60:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB61;

LAB63:    xsi_set_current_line(294, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t4 = (t0 + 14136);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t8;
    xsi_driver_first_trans_delta(t4, 24U, 1, 0LL);
    goto LAB61;

LAB65:    xsi_set_current_line(296, ng0);
    t4 = (t0 + 14008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB61;

LAB67:    goto LAB61;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(326, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 14200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 12984);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(327, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 14264);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 13000);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(328, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 14328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 13016);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(329, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 14392);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 13032);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(357, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 22426);
    t4 = xsi_mem_cmp(t1, t2, 1U);
    if (t4 == 1)
        goto LAB3;

LAB5:
LAB4:    xsi_set_current_line(359, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 14456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 13048);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(358, ng0);
    t5 = (t0 + 5192U);
    t6 = *((char **)t5);
    t5 = (t0 + 14456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:;
}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_12(char *t0)
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
    char *t17;

LAB0:    xsi_set_current_line(367, ng0);
    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(32U);
    memset(t10, 0, 32U);
    t11 = t10;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 14520);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 13064);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5672U);
    t5 = *((char **)t1);
    t1 = (t0 + 14520);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(370, ng0);

LAB3:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13080);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(371, ng0);

LAB3:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 13096);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void nes_controller_v1_00_a_a_0907174035_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(372, ng0);

LAB3:    t1 = (t0 + 14712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void nes_controller_v1_00_a_a_0907174035_3306564128_init()
{
	static char *pe[] = {(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_0,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_1,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_2,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_3,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_4,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_5,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_6,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_7,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_8,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_9,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_10,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_11,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_12,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_13,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_14,(void *)nes_controller_v1_00_a_a_0907174035_3306564128_p_15};
	xsi_register_didat("nes_controller_v1_00_a_a_0907174035_3306564128", "isim/isim_system.exe.sim/nes_controller_v1_00_a/a_0907174035_3306564128.didat");
	xsi_register_executes(pe);
}
