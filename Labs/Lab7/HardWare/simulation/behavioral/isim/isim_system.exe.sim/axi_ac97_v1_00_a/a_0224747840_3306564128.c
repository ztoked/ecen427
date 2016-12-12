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
static const char *ng0 = "E:/427/Lab7/HardWare/pcores/axi_ac97_v1_00_a/hdl/vhdl/bram_fifo.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3499444699_sub_1438093509_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3499444699_sub_1438165383_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3499444699_sub_2254183471_3536714472(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3499444699_sub_2368615388_3536714472(char *, char *, char *, int );
char *ieee_p_3499444699_sub_2930370427_3536714472(char *, char *, char *, char *, int );


static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(114, ng0);

LAB3:    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 17828U);
    t4 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t1, t3, t2, 10);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (10U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 11272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 10U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 10952);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t6, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(115, ng0);

LAB3:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 17828U);
    t4 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t1, t3, t2, 10);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (10U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 11336);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 10U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 10968);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t6, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_2(char *t0)
{
    char t18[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 10984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(142, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)2, 10U);
    t6 = (t0 + 11400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3272U);
    t8 = *((char **)t2);
    t2 = (t0 + 17828U);
    t9 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t18, t8, t2, 1);
    t10 = (t18 + 12U);
    t19 = *((unsigned int *)t10);
    t20 = (1U * t19);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    t22 = (t0 + 11400);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 10U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_size_not_matching(10U, t20, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(147, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)2, 10U);
    t6 = (t0 + 11400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_3(char *t0)
{
    char t18[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 11000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(155, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)3, 10U);
    t6 = (t0 + 11464);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t13 = (unsigned char)0;

LAB15:    if (t13 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB19:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3432U);
    t8 = *((char **)t2);
    t2 = (t0 + 17828U);
    t9 = ieee_p_3499444699_sub_1438093509_3536714472(IEEE_P_3499444699, t18, t8, t2, 1);
    t10 = (t18 + 12U);
    t19 = *((unsigned int *)t10);
    t20 = (1U * t19);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    t22 = (t0 + 11464);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 10U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    t2 = (t0 + 1352U);
    t7 = *((char **)t2);
    t16 = *((unsigned char *)t7);
    t17 = (t16 == (unsigned char)2);
    t13 = t17;
    goto LAB15;

LAB16:    xsi_size_not_matching(10U, t20, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(160, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t5 = t1;
    memset(t5, (unsigned char)3, 10U);
    t6 = (t0 + 11464);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 11016);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(168, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4552U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(169, ng0);
    t4 = (t0 + 11528);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 11528);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(175, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11592);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11032);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 11048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 4392U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(181, ng0);
    t4 = (t0 + 11656);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 11656);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(187, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11064);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_8(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(189, ng0);

LAB3:    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t3 = (t0 + 17828U);
    t5 = (t0 + 3432U);
    t6 = *((char **)t5);
    t5 = (t0 + 17828U);
    t7 = ieee_p_3499444699_sub_2254183471_3536714472(IEEE_P_3499444699, t2, t4, t3, t6, t5);
    t8 = ieee_p_3499444699_sub_1438165383_3536714472(IEEE_P_3499444699, t1, t7, t2, 1);
    t9 = (t1 + 12U);
    t10 = *((unsigned int *)t9);
    t11 = (1U * t10);
    t12 = (10U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 11784);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 10U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 11080);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t11, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_9(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t2 = (t0 + 3912U);
    t3 = *((char **)t2);
    t2 = (t0 + 17860U);
    t4 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t1, t3, t2, 10);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (10U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 11848);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 10U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 11096);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t6, 0);
    goto LAB6;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_10(char *t0)
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

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = (8 - 9);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 11912);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 11112);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(193, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = (8 - 9);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 11976);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 11128);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
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

LAB0:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 17860U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 0);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 12040);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 11144);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 12040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
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

LAB0:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 17860U);
    t3 = ieee_p_3499444699_sub_2368615388_3536714472(IEEE_P_3499444699, t2, t1, 512);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 12104);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 11160);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 12104);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(197, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12168);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11176);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_0224747840_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(198, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12232);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11192);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_ac97_v1_00_a_a_0224747840_3306564128_init()
{
	static char *pe[] = {(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_0,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_1,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_2,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_3,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_4,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_5,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_6,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_7,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_8,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_9,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_10,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_11,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_12,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_13,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_14,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_15};
	xsi_register_didat("axi_ac97_v1_00_a_a_0224747840_3306564128", "isim/isim_system.exe.sim/axi_ac97_v1_00_a/a_0224747840_3306564128.didat");
	xsi_register_executes(pe);
}

extern void axi_ac97_v1_00_a_a_0996243280_3306564128_init()
{
	static char *pe[] = {(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_0,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_1,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_2,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_3,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_4,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_5,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_6,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_7,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_8,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_9,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_10,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_11,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_12,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_13,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_14,(void *)axi_ac97_v1_00_a_a_0224747840_3306564128_p_15};
	xsi_register_didat("axi_ac97_v1_00_a_a_0996243280_3306564128", "isim/isim_system.exe.sim/axi_ac97_v1_00_a/a_0996243280_3306564128.didat");
	xsi_register_executes(pe);
}
