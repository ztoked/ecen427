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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/barrel_shifter_gti.vhd";



static void microblaze_v8_20_b_a_3326619568_3306564128_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
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
    char *t24;

LAB0:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2360U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 10208);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 9936);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1880U);
    t8 = *((char **)t2);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t8 + t12);
    t13 = *((unsigned char *)t2);
    t14 = (t0 + 10208);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t13;
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB5:    t2 = (t0 + 2200U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (!(t6));
    t1 = t7;
    goto LAB7;

LAB9:    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 18151);
    *((int *)t1) = 0;
    t2 = (t0 + 18155);
    *((int *)t2) = 31;
    t3 = 0;
    t4 = 31;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(213, ng0);
    t1 = (t0 + 5536U);
    t2 = *((char **)t1);
    t1 = (t0 + 10272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t13 = (t6 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 9952);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(211, ng0);
    t5 = (t0 + 1880U);
    t6 = *((char **)t5);
    t5 = (t0 + 18151);
    t7 = *((int *)t5);
    t8 = (31 - t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t0 + 5536U);
    t16 = *((char **)t15);
    t15 = (t0 + 18151);
    t17 = *((int *)t15);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t15));
    t20 = (1U * t19);
    t21 = (0 + t20);
    t22 = (t16 + t21);
    *((unsigned char *)t22) = t14;

LAB4:    t1 = (t0 + 18151);
    t3 = *((int *)t1);
    t2 = (t0 + 18155);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 18151);
    *((int *)t5) = t3;
    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_2(char *t0)
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
    char *t15;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 2200U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 3000U);
    t10 = *((char **)t9);
    t9 = (t0 + 10336);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t15 = (t0 + 9968);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1880U);
    t4 = *((char **)t1);
    t1 = (t0 + 10336);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(221, ng0);

LAB3:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    t3 = (31 - 1);
    t4 = (t3 - 27);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 10400);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 9984);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(229, ng0);
    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    t1 = (t0 + 18159);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    t1 = (t0 + 18161);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    t1 = (t0 + 18163);
    t4 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t4 = 0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(242, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 3160U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    memset(t2, t4, 32U);
    t3 = (t0 + 10464);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    t17 = (0 + 3);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10464);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);

LAB3:    t1 = (t0 + 10000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(231, ng0);
    t8 = (t0 + 3480U);
    t9 = *((char **)t8);
    t8 = (t0 + 10464);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(234, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 3160U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 10464);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    t17 = (0 + 1);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10464);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 31U);
    xsi_driver_first_trans_delta(t3, 0U, 31U, 0LL);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(238, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 3160U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 10464);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    t17 = (0 + 2);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10464);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 30U);
    xsi_driver_first_trans_delta(t3, 0U, 30U, 0LL);
    goto LAB3;

LAB21:    t5 = 0;

LAB24:    if (t5 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t5 = (t5 + 1);
    goto LAB24;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10016);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(261, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2040U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2680U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(262, ng0);
    t4 = (t0 + 10528);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 2200U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 10528);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10032);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(276, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2040U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2680U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(277, ng0);
    t4 = (t0 + 10592);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 3160U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t2 = (t0 + 10592);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 18165);
    *((int *)t1) = 0;
    t2 = (t0 + 18169);
    *((int *)t2) = 31;
    t3 = 0;
    t4 = 31;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(294, ng0);
    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    t1 = (t0 + 10656);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t13 = (t6 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 10048);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(292, ng0);
    t5 = (t0 + 4280U);
    t6 = *((char **)t5);
    t5 = (t0 + 18165);
    t7 = *((int *)t5);
    t8 = (31 - t7);
    t9 = (t8 - 0);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t13 = (t6 + t12);
    t14 = *((unsigned char *)t13);
    t15 = (t0 + 5656U);
    t16 = *((char **)t15);
    t15 = (t0 + 18165);
    t17 = *((int *)t15);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t15));
    t20 = (1U * t19);
    t21 = (0 + t20);
    t22 = (t16 + t21);
    *((unsigned char *)t22) = t14;

LAB4:    t1 = (t0 + 18165);
    t3 = *((int *)t1);
    t2 = (t0 + 18169);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 18165);
    *((int *)t5) = t3;
    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    t1 = (t0 + 10720);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 10064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(304, ng0);
    t1 = (t0 + 4280U);
    t4 = *((char **)t1);
    t1 = (t0 + 10720);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(421, ng0);

LAB3:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    t3 = (31 - 2);
    t4 = (t3 - 27);
    t5 = (t4 * 1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 10784);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 10080);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(436, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10096);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(437, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2040U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2680U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(438, ng0);
    t4 = xsi_get_transient_memory(2U);
    memset(t4, 0, 2U);
    t15 = t4;
    memset(t15, (unsigned char)2, 2U);
    t16 = (t0 + 10848);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 2U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(440, ng0);
    t2 = (t0 + 2520U);
    t5 = *((char **)t2);
    t21 = (31 - 4);
    t22 = (t21 - 27);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t2 = (t5 + t24);
    t9 = (t0 + 10848);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_11(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(451, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 10112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(452, ng0);
    t4 = (t0 + 1720U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 2040U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (!(t13));
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2680U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(453, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t15 = t4;
    memset(t15, (unsigned char)2, 32U);
    t16 = (t0 + 10912);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 32U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(455, ng0);
    t2 = (t0 + 4600U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = (t3 == (unsigned char)2);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(460, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    t5 = (t0 + 3160U);
    t9 = *((char **)t5);
    t1 = *((unsigned char *)t9);
    memset(t4, t1, 32U);
    t5 = (t0 + 10912);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(461, ng0);
    t2 = (t0 + 3640U);
    t4 = *((char **)t2);
    t21 = (0 + 4);
    t22 = (t21 - 0);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t2 = (t4 + t24);
    t5 = (t0 + 10912);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 28U);
    xsi_driver_first_trans_delta(t5, 0U, 28U, 0LL);

LAB17:    goto LAB9;

LAB16:    xsi_set_current_line(457, ng0);
    t2 = (t0 + 3640U);
    t9 = *((char **)t2);
    t2 = (t0 + 10912);
    t12 = (t2 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

}

static void microblaze_v8_20_b_a_3326619568_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(473, ng0);
    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t1 = (t0 + 18173);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t1 = (t0 + 18175);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t1 = (t0 + 18177);
    t4 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t4 = 0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(486, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    t3 = (t0 + 3960U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    memset(t2, t4, 32U);
    t3 = (t0 + 10976);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(487, ng0);
    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    t17 = (0 + 24);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10976);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_delta(t3, 0U, 8U, 0LL);

LAB3:    t1 = (t0 + 10128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(475, ng0);
    t8 = (t0 + 4120U);
    t9 = *((char **)t8);
    t8 = (t0 + 10976);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(478, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 3960U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 10976);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(479, ng0);
    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    t17 = (0 + 8);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10976);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_delta(t3, 0U, 24U, 0LL);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(482, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    t10 = (t0 + 3960U);
    t11 = *((char **)t10);
    t14 = *((unsigned char *)t11);
    memset(t9, t14, 32U);
    t10 = (t0 + 10976);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t8, 32U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(483, ng0);
    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    t17 = (0 + 16);
    t5 = (t17 - 0);
    t18 = (t5 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = (t0 + 10976);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_delta(t3, 0U, 16U, 0LL);
    goto LAB3;

LAB21:    t5 = 0;

LAB24:    if (t5 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t5 = (t5 + 1);
    goto LAB24;

}


extern void microblaze_v8_20_b_a_3326619568_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_0,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_1,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_2,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_3,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_4,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_5,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_6,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_7,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_8,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_9,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_10,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_11,(void *)microblaze_v8_20_b_a_3326619568_3306564128_p_12};
	xsi_register_didat("microblaze_v8_20_b_a_3326619568_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_3326619568_3306564128.didat");
	xsi_register_executes(pe);
}
