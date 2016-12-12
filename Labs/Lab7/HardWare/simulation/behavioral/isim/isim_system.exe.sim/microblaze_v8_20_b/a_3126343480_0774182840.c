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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/msr_reg_gti.vhd";
extern char *IEEE_P_2592010699;
extern char *MICROBLAZE_V8_20_B_P_1761634766;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void microblaze_v8_20_b_a_3126343480_0774182840_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(181, ng0);

LAB3:    t1 = (t0 + 22840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 23160U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 23320U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 33928);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 33736);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_1(char *t0)
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

LAB0:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 17360U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 33752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 17560U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 22040U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 33992);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 17400U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 33992);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 33992);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    int t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = (t0 + 34056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 23160U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 23320U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(216, ng0);
    t1 = (t0 + 22840U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(220, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2128U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t7 = (0 >= t9);
    if (t7 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(226, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t7 = (0 >= t9);
    if (t7 != 0)
        goto LAB20;

LAB22:
LAB21:    t1 = (t0 + 33768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 34056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 34056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 34056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 34056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(221, ng0);
    t1 = (t0 + 25400U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB17;

LAB18:    t8 = (unsigned char)0;

LAB19:    if (t8 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 24920U);
    t5 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t6 = *((char **)t1);
    t13 = *((int *)t6);
    t14 = (t13 - 17);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t5 + t17);
    t18 = *((unsigned char *)t1);
    t19 = (t0 + 34056);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t18;
    xsi_driver_first_trans_delta(t19, 2U, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 34056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB15;

LAB17:    t1 = (t0 + 25560U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t8 = t12;
    goto LAB19;

LAB20:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 25400U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB26;

LAB27:    t8 = (unsigned char)0;

LAB28:    if (t8 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 24920U);
    t5 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t6 = *((char **)t1);
    t13 = *((int *)t6);
    t14 = (t13 - 17);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t5 + t17);
    t18 = *((unsigned char *)t1);
    t19 = (t0 + 34056);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t18;
    xsi_driver_first_trans_delta(t19, 0U, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 34056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB24;

LAB26:    t1 = (t0 + 25560U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t8 = t12;
    goto LAB28;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_3(char *t0)
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
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 17360U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 33784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 17560U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 22680U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 17400U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(238, ng0);
    t4 = (t0 + 62628);
    t12 = (t0 + 34120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 15U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 24280U);
    t5 = *((char **)t2);
    t2 = (t0 + 34120);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 15U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;

LAB0:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = (t0 + 34184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(258, ng0);
    t1 = (t0 + 19160U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    if (t8 == 1)
        goto LAB5;

LAB6:    t1 = (t0 + 19320U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t7 = t9;

LAB7:    if (t7 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 33800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 34184);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB3;

LAB5:    t7 = (unsigned char)1;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_5(char *t0)
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

LAB0:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 25400U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 22040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(274, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = (t0 + 34248);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 15U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 33816);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 24280U);
    t5 = *((char **)t1);
    t1 = (t0 + 34248);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 24120U);
    t5 = *((char **)t1);
    t1 = (t0 + 34248);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_6(char *t0)
{
    char t15[16];
    char t17[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    int t30;
    int t31;
    int t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;

LAB0:    xsi_set_current_line(338, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 15U);
    xsi_set_current_line(342, ng0);
    t1 = (t0 + 19160U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (t0 + 19320U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t4 = t6;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(347, ng0);
    t1 = (t0 + 21400U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 21720U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 21560U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB14:
LAB9:    xsi_set_current_line(356, ng0);
    t1 = (t0 + 19800U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 19960U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 20120U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 20280U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 22200U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 22360U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB29;

LAB30:
LAB16:    xsi_set_current_line(374, ng0);
    t1 = (t0 + 20920U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 21080U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB34;

LAB35:
LAB32:    xsi_set_current_line(381, ng0);
    t1 = (t0 + 20600U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB36;

LAB38:
LAB37:    xsi_set_current_line(386, ng0);
    t1 = (t0 + 20440U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB39;

LAB41:
LAB40:    xsi_set_current_line(391, ng0);
    t1 = (t0 + 20760U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB42;

LAB44:
LAB43:    xsi_set_current_line(396, ng0);
    t1 = (t0 + 18520U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(402, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2128U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t4 = (0 >= t9);
    if (t4 != 0)
        goto LAB48;

LAB50:
LAB49:    xsi_set_current_line(413, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t4 = (0 >= t9);
    if (t4 != 0)
        goto LAB63;

LAB65:
LAB64:    xsi_set_current_line(425, ng0);
    t1 = (t0 + 25400U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB78;

LAB80:    t1 = (t0 + 19640U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    if (t4 != 0)
        goto LAB81;

LAB82:    xsi_set_current_line(430, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = (t0 + 34312);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t2, 15U);
    xsi_driver_first_trans_fast(t1);

LAB79:    xsi_set_current_line(433, ng0);
    t1 = (t0 + 25400U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB83;

LAB85:    t1 = (t0 + 19480U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    if (t4 != 0)
        goto LAB86;

LAB87:    xsi_set_current_line(438, ng0);
    t1 = (t0 + 24440U);
    t2 = *((char **)t1);
    t1 = (t0 + 34376);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t2, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(439, ng0);
    t1 = (t0 + 20920U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB88;

LAB90:
LAB89:
LAB84:    t1 = (t0 + 33832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(343, ng0);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3208U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB3;

LAB5:    t4 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(348, ng0);
    t1 = (t0 + 17720U);
    t3 = *((char **)t1);
    t11 = (17 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t7 = (t0 + 28896U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t1, 15U);
    goto LAB9;

LAB11:    xsi_set_current_line(350, ng0);
    t1 = (t0 + 24600U);
    t3 = *((char **)t1);
    t1 = (t0 + 24608U);
    t7 = *((char **)t1);
    t8 = (t0 + 17880U);
    t16 = *((char **)t8);
    t11 = (17 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t8 = (t16 + t14);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 17;
    t19 = (t18 + 4U);
    *((int *)t19) = 31;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t9 = (31 - 17);
    t20 = (t9 * 1);
    t20 = (t20 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t20;
    t19 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t15, t3, t7, t8, t17);
    t21 = (t0 + 28896U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    t23 = (t15 + 12U);
    t20 = *((unsigned int *)t23);
    t24 = (1U * t20);
    memcpy(t21, t19, t24);
    goto LAB9;

LAB13:    xsi_set_current_line(352, ng0);
    t1 = (t0 + 24600U);
    t3 = *((char **)t1);
    t1 = (t0 + 24608U);
    t7 = *((char **)t1);
    t8 = (t0 + 17880U);
    t16 = *((char **)t8);
    t11 = (17 - 0);
    t12 = (t11 * 1);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t8 = (t16 + t14);
    t18 = (t25 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 17;
    t19 = (t18 + 4U);
    *((int *)t19) = 31;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t9 = (31 - 17);
    t20 = (t9 * 1);
    t20 = (t20 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t20;
    t19 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t17, t8, t25);
    t21 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t15, t3, t7, t19, t17);
    t22 = (t0 + 28896U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    t26 = (t15 + 12U);
    t20 = *((unsigned int *)t26);
    t24 = (1U * t20);
    memcpy(t22, t21, t24);
    goto LAB9;

LAB15:    xsi_set_current_line(357, ng0);
    t1 = (t0 + 18040U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = t6;
    goto LAB16;

LAB18:    xsi_set_current_line(359, ng0);
    t1 = (t0 + 18200U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = t6;
    goto LAB16;

LAB20:    xsi_set_current_line(361, ng0);
    t1 = (t0 + 18360U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = t6;
    goto LAB16;

LAB22:    xsi_set_current_line(363, ng0);
    t1 = (t0 + 18680U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = t6;
    goto LAB16;

LAB24:    xsi_set_current_line(366, ng0);
    t1 = (t0 + 18840U);
    t7 = *((char **)t1);
    t29 = *((unsigned char *)t7);
    t1 = (t0 + 28896U);
    t8 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t16 = *((char **)t1);
    t9 = *((int *)t16);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t8 + t13);
    *((unsigned char *)t1) = t29;
    goto LAB16;

LAB26:    t1 = (t0 + 21400U);
    t3 = *((char **)t1);
    t27 = *((unsigned char *)t3);
    t28 = (t27 == (unsigned char)2);
    t4 = t28;
    goto LAB28;

LAB29:    xsi_set_current_line(368, ng0);
    t1 = (t0 + 19000U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t1 = (t0 + 28896U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    *((unsigned char *)t1) = t6;
    goto LAB16;

LAB31:    xsi_set_current_line(375, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB32;

LAB34:    xsi_set_current_line(377, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB32;

LAB36:    xsi_set_current_line(382, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3448U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB37;

LAB39:    xsi_set_current_line(387, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2608U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB40;

LAB42:    xsi_set_current_line(392, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3568U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB43;

LAB45:    xsi_set_current_line(397, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2968U);
    t7 = *((char **)t1);
    t9 = *((int *)t7);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB46;

LAB48:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 21240U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB51;

LAB53:
LAB52:    xsi_set_current_line(407, ng0);
    t1 = (t0 + 20760U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t27 = (t6 == (unsigned char)3);
    if (t27 == 1)
        goto LAB60;

LAB61:    t1 = (t0 + 21080U);
    t3 = *((char **)t1);
    t28 = *((unsigned char *)t3);
    t29 = (t28 == (unsigned char)3);
    t5 = t29;

LAB62:    if (t5 == 1)
        goto LAB57;

LAB58:    t1 = (t0 + 20440U);
    t7 = *((char **)t1);
    t33 = *((unsigned char *)t7);
    t34 = (t33 == (unsigned char)3);
    t4 = t34;

LAB59:    if (t4 != 0)
        goto LAB54;

LAB56:
LAB55:    goto LAB49;

LAB51:    xsi_set_current_line(404, ng0);
    t1 = (t0 + 24600U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t8 = *((char **)t1);
    t10 = *((int *)t8);
    t30 = (t10 - 17);
    t11 = (t30 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    t27 = *((unsigned char *)t1);
    t16 = (t0 + 28896U);
    t18 = *((char **)t16);
    t16 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3928U);
    t19 = *((char **)t16);
    t31 = *((int *)t19);
    t32 = (t31 - 17);
    t14 = (t32 * 1);
    t20 = (1U * t14);
    t24 = (0 + t20);
    t16 = (t18 + t24);
    *((unsigned char *)t16) = t27;
    xsi_set_current_line(405, ng0);
    t1 = (t0 + 28896U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB52;

LAB54:    xsi_set_current_line(410, ng0);
    t1 = (t0 + 24600U);
    t8 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3928U);
    t16 = *((char **)t1);
    t9 = *((int *)t16);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t8 + t13);
    t35 = *((unsigned char *)t1);
    t18 = (t0 + 28896U);
    t19 = *((char **)t18);
    t18 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t21 = *((char **)t18);
    t30 = *((int *)t21);
    t31 = (t30 - 17);
    t14 = (t31 * 1);
    t20 = (1U * t14);
    t24 = (0 + t20);
    t18 = (t19 + t24);
    *((unsigned char *)t18) = t35;
    goto LAB55;

LAB57:    t4 = (unsigned char)1;
    goto LAB59;

LAB60:    t5 = (unsigned char)1;
    goto LAB62;

LAB63:    xsi_set_current_line(414, ng0);
    t1 = (t0 + 21240U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB66;

LAB68:
LAB67:    xsi_set_current_line(418, ng0);
    t1 = (t0 + 20760U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t27 = (t6 == (unsigned char)3);
    if (t27 == 1)
        goto LAB75;

LAB76:    t1 = (t0 + 21080U);
    t3 = *((char **)t1);
    t28 = *((unsigned char *)t3);
    t29 = (t28 == (unsigned char)3);
    t5 = t29;

LAB77:    if (t5 == 1)
        goto LAB72;

LAB73:    t1 = (t0 + 20440U);
    t7 = *((char **)t1);
    t33 = *((unsigned char *)t7);
    t34 = (t33 == (unsigned char)3);
    t4 = t34;

LAB74:    if (t4 != 0)
        goto LAB69;

LAB71:
LAB70:    goto LAB64;

LAB66:    xsi_set_current_line(415, ng0);
    t1 = (t0 + 24600U);
    t7 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t8 = *((char **)t1);
    t10 = *((int *)t8);
    t30 = (t10 - 17);
    t11 = (t30 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t7 + t13);
    t27 = *((unsigned char *)t1);
    t16 = (t0 + 28896U);
    t18 = *((char **)t16);
    t16 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4168U);
    t19 = *((char **)t16);
    t31 = *((int *)t19);
    t32 = (t31 - 17);
    t14 = (t32 * 1);
    t20 = (1U * t14);
    t24 = (0 + t20);
    t16 = (t18 + t24);
    *((unsigned char *)t16) = t27;
    xsi_set_current_line(416, ng0);
    t1 = (t0 + 28896U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB67;

LAB69:    xsi_set_current_line(421, ng0);
    t1 = (t0 + 24600U);
    t8 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4168U);
    t16 = *((char **)t1);
    t9 = *((int *)t16);
    t10 = (t9 - 17);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t8 + t13);
    t35 = *((unsigned char *)t1);
    t18 = (t0 + 28896U);
    t19 = *((char **)t18);
    t18 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t21 = *((char **)t18);
    t30 = *((int *)t21);
    t31 = (t30 - 17);
    t14 = (t31 * 1);
    t20 = (1U * t14);
    t24 = (0 + t20);
    t18 = (t19 + t24);
    *((unsigned char *)t18) = t35;
    goto LAB70;

LAB72:    t4 = (unsigned char)1;
    goto LAB74;

LAB75:    t5 = (unsigned char)1;
    goto LAB77;

LAB78:    xsi_set_current_line(426, ng0);
    t1 = (t0 + 24280U);
    t3 = *((char **)t1);
    t1 = (t0 + 34312);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t3, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB79;

LAB81:    xsi_set_current_line(428, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = (t0 + 34312);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t3, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB79;

LAB83:    xsi_set_current_line(434, ng0);
    t1 = (t0 + 24280U);
    t3 = *((char **)t1);
    t1 = (t0 + 34376);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t3, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB84;

LAB86:    xsi_set_current_line(436, ng0);
    t1 = (t0 + 28896U);
    t3 = *((char **)t1);
    t1 = (t0 + 34376);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t3, 15U);
    xsi_driver_first_trans_fast(t1);
    goto LAB84;

LAB88:    xsi_set_current_line(440, ng0);
    t1 = (t0 + 34376);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB89;

}

static void microblaze_v8_20_b_a_3126343480_0774182840_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    int t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    char *t17;

LAB0:    xsi_set_current_line(519, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 34440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(520, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 34504);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(521, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 34568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(522, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 34632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(525, ng0);
    t1 = (t0 + 24440U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_delta(t4, 28U, 3U, 0LL);
    xsi_set_current_line(526, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_delta(t4, 28U, 3U, 0LL);
    xsi_set_current_line(527, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_delta(t4, 28U, 3U, 0LL);
    xsi_set_current_line(528, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2848U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_delta(t4, 28U, 3U, 0LL);
    xsi_set_current_line(531, ng0);
    if ((unsigned char)0 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(537, ng0);
    if ((unsigned char)0 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(544, ng0);
    if ((unsigned char)1 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(550, ng0);
    if ((unsigned char)1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(556, ng0);
    t14 = (0 > 0);
    if (t14 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(562, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 1648U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t14 = (0 != t8);
    if (t14 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(568, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2128U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t14 = (0 >= t8);
    if (t14 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(577, ng0);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2248U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t14 = (0 >= t8);
    if (t14 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(587, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    xsi_set_current_line(588, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    xsi_set_current_line(589, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2728U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    t1 = (t0 + 33848);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(532, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3208U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 25U, 1, 0LL);
    xsi_set_current_line(533, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3208U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 25U, 1, 0LL);
    xsi_set_current_line(534, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3208U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 25U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(538, ng0);
    t1 = (t0 + 24440U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3568U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_delta(t4, 22U, 2U, 0LL);
    xsi_set_current_line(539, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3568U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_delta(t4, 22U, 2U, 0LL);
    xsi_set_current_line(540, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3568U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_delta(t4, 22U, 2U, 0LL);
    xsi_set_current_line(541, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3568U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t9 = (t8 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_delta(t4, 22U, 2U, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(545, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3088U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 26U, 1, 0LL);
    xsi_set_current_line(546, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3088U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 26U, 1, 0LL);
    xsi_set_current_line(547, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3088U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 26U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(551, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3328U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 24U, 1, 0LL);
    xsi_set_current_line(552, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3328U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 24U, 1, 0LL);
    xsi_set_current_line(553, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3328U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 24U, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(557, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2968U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t15 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t15;
    xsi_driver_first_trans_delta(t4, 27U, 1, 0LL);
    xsi_set_current_line(558, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2968U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 27U, 1, 0LL);
    xsi_set_current_line(559, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 2968U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 27U, 1, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(563, ng0);
    t1 = (t0 + 34504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 21U, 1, 0LL);
    xsi_set_current_line(564, ng0);
    t1 = (t0 + 34568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 21U, 1, 0LL);
    xsi_set_current_line(565, ng0);
    t1 = (t0 + 34632);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 21U, 1, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(569, ng0);
    t1 = (t0 + 24600U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t4 = *((char **)t1);
    t13 = *((int *)t4);
    t16 = (t13 - 17);
    t9 = (t16 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t15 = *((unsigned char *)t1);
    t5 = (t0 + 34504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t17 = *((char **)t12);
    *((unsigned char *)t17) = t15;
    xsi_driver_first_trans_delta(t5, 20U, 1, 0LL);
    xsi_set_current_line(570, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 20U, 1, 0LL);
    xsi_set_current_line(571, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3808U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 20U, 1, 0LL);
    xsi_set_current_line(572, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3928U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 19U, 1, 0LL);
    xsi_set_current_line(573, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3928U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 19U, 1, 0LL);
    xsi_set_current_line(574, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 3928U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 19U, 1, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(578, ng0);
    t1 = (t0 + 24600U);
    t3 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t4 = *((char **)t1);
    t13 = *((int *)t4);
    t16 = (t13 - 17);
    t9 = (t16 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t15 = *((unsigned char *)t1);
    t5 = (t0 + 34504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t17 = *((char **)t12);
    *((unsigned char *)t17) = t15;
    xsi_driver_first_trans_delta(t5, 18U, 1, 0LL);
    xsi_set_current_line(579, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 18U, 1, 0LL);
    xsi_set_current_line(580, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4048U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 18U, 1, 0LL);
    xsi_set_current_line(581, ng0);
    t1 = (t0 + 24600U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4168U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 17U, 1, 0LL);
    xsi_set_current_line(582, ng0);
    t1 = (t0 + 24760U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4168U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 17U, 1, 0LL);
    xsi_set_current_line(583, ng0);
    t1 = (t0 + 24920U);
    t2 = *((char **)t1);
    t1 = ((MICROBLAZE_V8_20_B_P_1761634766) + 4168U);
    t3 = *((char **)t1);
    t8 = *((int *)t3);
    t13 = (t8 - 17);
    t9 = (t13 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t14 = *((unsigned char *)t1);
    t4 = (t0 + 34632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t14;
    xsi_driver_first_trans_delta(t4, 17U, 1, 0LL);
    goto LAB24;

}


extern void microblaze_v8_20_b_a_3126343480_0774182840_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_0,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_1,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_2,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_3,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_4,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_5,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_6,(void *)microblaze_v8_20_b_a_3126343480_0774182840_p_7};
	xsi_register_didat("microblaze_v8_20_b_a_3126343480_0774182840", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_3126343480_0774182840.didat");
	xsi_register_executes(pe);
}
