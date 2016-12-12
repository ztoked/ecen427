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
static const char *ng0 = "E:/427/Lab7/HardWare/pcores/axi_ac97_v1_00_a/hdl/vhdl/ac97_fifo.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(289, ng0);

LAB3:    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t3 = (27 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 28072);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 27368);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(298, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 28136);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(299, ng0);
    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    t1 = (t0 + 15296U);
    t3 = *((char **)t1);
    t8 = xsi_mem_cmp(t3, t2, 3U);
    if (t8 == 1)
        goto LAB3;

LAB7:    t1 = (t0 + 15536U);
    t4 = *((char **)t1);
    t9 = xsi_mem_cmp(t4, t2, 3U);
    if (t9 == 1)
        goto LAB4;

LAB8:    t1 = (t0 + 15896U);
    t5 = *((char **)t1);
    t10 = xsi_mem_cmp(t5, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    t1 = (t0 + 28136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 27384);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(301, ng0);
    t1 = (t0 + 7640U);
    t6 = *((char **)t1);
    t1 = (t0 + 28136);
    t7 = (t1 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(303, ng0);
    t1 = (t0 + 8600U);
    t2 = *((char **)t1);
    t1 = (t0 + 28136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 16U, 16U, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(305, ng0);
    t1 = (t0 + 13400U);
    t2 = *((char **)t1);
    t1 = (t0 + 28136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_delta(t1, 16U, 16U, 0LL);
    goto LAB2;

LAB10:;
}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(316, ng0);
    t2 = (t0 + 2520U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t16 = (t0 + 28200);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 27400);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 28200);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    t2 = (t0 + 3800U);
    t6 = *((char **)t2);
    t2 = (t0 + 15056U);
    t7 = *((char **)t2);
    t8 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t8 = 0;

LAB10:    t1 = t8;
    goto LAB7;

LAB8:    t9 = 0;

LAB11:    if (t9 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t6 + t9);
    t10 = (t7 + t9);
    if (*((unsigned char *)t2) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t9 = (t9 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(320, ng0);
    t2 = (t0 + 2360U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t16 = (t0 + 28264);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 27416);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 28264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB5:    t2 = (t0 + 3800U);
    t6 = *((char **)t2);
    t2 = (t0 + 15176U);
    t7 = *((char **)t2);
    t8 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t8 = 0;

LAB10:    t1 = t8;
    goto LAB7;

LAB8:    t9 = 0;

LAB11:    if (t9 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t6 + t9);
    t10 = (t7 + t9);
    if (*((unsigned char *)t2) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t9 = (t9 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(327, ng0);
    t2 = (t0 + 2520U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(331, ng0);
    t2 = (t0 + 28328);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(332, ng0);
    t2 = (t0 + 28392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB3:    t2 = (t0 + 27432);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(328, ng0);
    t11 = (t0 + 2040U);
    t12 = *((char **)t11);
    t13 = (31 - 0);
    t14 = (t13 * 1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t0 + 28328);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    t13 = (30 - 0);
    t9 = (t13 * 1);
    t14 = (1U * t9);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 28392);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    t2 = (t0 + 3800U);
    t6 = *((char **)t2);
    t2 = (t0 + 15416U);
    t7 = *((char **)t2);
    t8 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t8 = 0;

LAB10:    t1 = t8;
    goto LAB7;

LAB8:    t9 = 0;

LAB11:    if (t9 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t2 = (t6 + t9);
    t10 = (t7 + t9);
    if (*((unsigned char *)t2) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t9 = (t9 + 1);
    goto LAB11;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_5(char *t0)
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
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27448);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(342, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2520U);
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

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(343, ng0);
    t4 = (t0 + 28456);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(344, ng0);
    t2 = (t0 + 28520);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(346, ng0);
    t12 = (t0 + 2040U);
    t13 = *((char **)t12);
    t16 = (29 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t12 = (t13 + t19);
    t9 = *((unsigned char *)t12);
    t14 = (t0 + 28456);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t9;
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(347, ng0);
    t2 = (t0 + 2040U);
    t4 = *((char **)t2);
    t16 = (28 - 0);
    t15 = (t16 * 1);
    t17 = (1U * t15);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 28520);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB13:    t2 = (t0 + 3800U);
    t5 = *((char **)t2);
    t2 = (t0 + 15416U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB16;

LAB17:    t7 = 0;

LAB18:    t1 = t7;
    goto LAB15;

LAB16:    t15 = 0;

LAB19:    if (t15 < 3U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t2 = (t5 + t15);
    t11 = (t8 + t15);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB17;

LAB21:    t15 = (t15 + 1);
    goto LAB19;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_6(char *t0)
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
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(357, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27464);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(358, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2520U);
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

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(359, ng0);
    t4 = (t0 + 28584);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(361, ng0);
    t12 = (t0 + 2040U);
    t13 = *((char **)t12);
    t16 = (27 - 0);
    t17 = (t16 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t12 = (t13 + t19);
    t9 = *((unsigned char *)t12);
    t14 = (t0 + 28584);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t9;
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB13:    t2 = (t0 + 3800U);
    t5 = *((char **)t2);
    t2 = (t0 + 15416U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB16;

LAB17:    t7 = 0;

LAB18:    t1 = t7;
    goto LAB15;

LAB16:    t15 = 0;

LAB19:    if (t15 < 3U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t2 = (t5 + t15);
    t11 = (t8 + t15);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB17;

LAB21:    t15 = (t15 + 1);
    goto LAB19;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_7(char *t0)
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

LAB0:    xsi_set_current_line(365, ng0);

LAB3:    t1 = (t0 + 12920U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 28648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 27480);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_8(char *t0)
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

LAB0:    xsi_set_current_line(369, ng0);

LAB3:    t1 = (t0 + 12920U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1720U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 28712);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 27496);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_9(char *t0)
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
    unsigned char t15;
    unsigned char t16;

LAB0:    xsi_set_current_line(376, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(377, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(381, ng0);
    t2 = (t0 + 7000U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 4600U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB14;

LAB15:
LAB12:    xsi_set_current_line(386, ng0);
    t2 = (t0 + 7160U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB21:    t2 = (t0 + 5880U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB27;

LAB28:    t3 = (unsigned char)0;

LAB29:    if (t3 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB22;

LAB23:
LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(378, ng0);
    t4 = (t0 + 28776);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 28840);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(382, ng0);
    t2 = (t0 + 28840);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 28840);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB16:    t2 = (t0 + 4120U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB18;

LAB19:    xsi_set_current_line(387, ng0);
    t2 = (t0 + 28776);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB20;

LAB22:    xsi_set_current_line(390, ng0);
    t2 = (t0 + 28776);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB20;

LAB24:    t2 = (t0 + 5400U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = (t15 == (unsigned char)2);
    t1 = t16;
    goto LAB26;

LAB27:    t2 = (t0 + 5240U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB29;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(398, ng0);

LAB3:    t1 = (t0 + 9560U);
    t2 = *((char **)t1);
    t1 = (t0 + 28904);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_delta(t1, 0U, 10U, 0LL);

LAB2:    t7 = (t0 + 27528);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(399, ng0);

LAB3:    t1 = (t0 + 9400U);
    t2 = *((char **)t1);
    t1 = (t0 + 28968);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_delta(t1, 10U, 10U, 0LL);

LAB2:    t7 = (t0 + 27544);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(402, ng0);

LAB3:    t1 = (t0 + 7480U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 21U, 1, 0LL);

LAB2:    t8 = (t0 + 27560);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(403, ng0);

LAB3:    t1 = (t0 + 7320U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 22U, 1, 0LL);

LAB2:    t8 = (t0 + 27576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(405, ng0);

LAB3:    t1 = (t0 + 11960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 23U, 1, 0LL);

LAB2:    t8 = (t0 + 27592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(407, ng0);

LAB3:    t1 = (t0 + 6680U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29224);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 24U, 1, 0LL);

LAB2:    t8 = (t0 + 27608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(408, ng0);

LAB3:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29288);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 25U, 1, 0LL);

LAB2:    t8 = (t0 + 27624);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(409, ng0);

LAB3:    t1 = (t0 + 8440U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29352);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 26U, 1, 0LL);

LAB2:    t8 = (t0 + 27640);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(410, ng0);

LAB3:    t1 = (t0 + 13080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29416);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 27U, 1, 0LL);

LAB2:    t8 = (t0 + 27656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(411, ng0);

LAB3:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29480);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 28U, 1, 0LL);

LAB2:    t8 = (t0 + 27672);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(412, ng0);

LAB3:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29544);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 29U, 1, 0LL);

LAB2:    t8 = (t0 + 27688);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(413, ng0);

LAB3:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 30U, 1, 0LL);

LAB2:    t8 = (t0 + 27704);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(414, ng0);

LAB3:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 29672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);

LAB2:    t8 = (t0 + 27720);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_23(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(418, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27736);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(419, ng0);
    t4 = (t0 + 8280U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 29736);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 11480U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 29800);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(421, ng0);
    t2 = (t0 + 11800U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 29864);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_24(char *t0)
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;

LAB0:    xsi_set_current_line(434, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27752);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(435, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(439, ng0);
    t2 = (t0 + 2520U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(436, ng0);
    t4 = xsi_get_transient_memory(7U);
    memset(t4, 0, 7U);
    t11 = t4;
    memset(t11, (unsigned char)2, 7U);
    t12 = (t0 + 29928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 7U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(437, ng0);
    t2 = (t0 + 29992);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(440, ng0);
    t12 = (t0 + 2040U);
    t13 = *((char **)t12);
    t18 = (25 - 0);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t14 = (t0 + 29928);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 7U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(441, ng0);
    t2 = (t0 + 2040U);
    t4 = *((char **)t2);
    t23 = (24 - 0);
    t17 = (t23 * 1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 29992);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB14:    t2 = (t0 + 15776U);
    t5 = *((char **)t2);
    t2 = (t0 + 3800U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB17;

LAB18:    t7 = 0;

LAB19:    t1 = t7;
    goto LAB16;

LAB17:    t17 = 0;

LAB20:    if (t17 < 3U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t2 = (t5 + t17);
    t11 = (t8 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB18;

LAB22:    t17 = (t17 + 1);
    goto LAB20;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_25(char *t0)
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(460, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27768);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(461, ng0);
    t4 = (t0 + 1720U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(464, ng0);
    t2 = (t0 + 2520U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(462, ng0);
    t4 = xsi_get_transient_memory(16U);
    memset(t4, 0, 16U);
    t11 = t4;
    memset(t11, (unsigned char)2, 16U);
    t12 = (t0 + 30056);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(465, ng0);
    t12 = (t0 + 2040U);
    t13 = *((char **)t12);
    t18 = (16 - 0);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t14 = (t0 + 30056);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 16U);
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    t2 = (t0 + 3800U);
    t5 = *((char **)t2);
    t2 = (t0 + 15656U);
    t8 = *((char **)t2);
    t7 = 1;
    if (3U == 3U)
        goto LAB17;

LAB18:    t7 = 0;

LAB19:    t1 = t7;
    goto LAB16;

LAB17:    t17 = 0;

LAB20:    if (t17 < 3U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t2 = (t5 + t17);
    t11 = (t8 + t17);
    if (*((unsigned char *)t2) != *((unsigned char *)t11))
        goto LAB18;

LAB22:    t17 = (t17 + 1);
    goto LAB20;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_26(char *t0)
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
    char *t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(482, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27784);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(483, ng0);
    t4 = (t0 + 2520U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(486, ng0);
    t2 = (t0 + 30120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(484, ng0);
    t17 = (t0 + 30120);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

LAB11:    t4 = (t0 + 3800U);
    t12 = *((char **)t4);
    t4 = (t0 + 15776U);
    t13 = *((char **)t4);
    t14 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t14 = 0;

LAB16:    t8 = t14;
    goto LAB13;

LAB14:    t15 = 0;

LAB17:    if (t15 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t4 = (t12 + t15);
    t16 = (t13 + t15);
    if (*((unsigned char *)t4) != *((unsigned char *)t16))
        goto LAB15;

LAB19:    t15 = (t15 + 1);
    goto LAB17;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_27(char *t0)
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
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(495, ng0);
    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1520U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 27800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(496, ng0);
    t1 = (t0 + 30184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(500, ng0);
    t2 = (t0 + 13240U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1560U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(503, ng0);
    t7 = (t0 + 8760U);
    t8 = *((char **)t7);
    t12 = *((unsigned char *)t8);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB10;

LAB12:    xsi_set_current_line(509, ng0);
    t1 = (t0 + 11640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB10;

LAB13:    xsi_set_current_line(514, ng0);
    t1 = (t0 + 11640U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB10;

LAB14:    xsi_set_current_line(504, ng0);
    t7 = (t0 + 30184);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB15;

LAB17:    xsi_set_current_line(510, ng0);
    t1 = (t0 + 30184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(515, ng0);
    t1 = (t0 + 30184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_28(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(522, ng0);
    t2 = (t0 + 13240U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 13240U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 30248);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 27816);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 30248);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_29(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(544, ng0);
    t2 = (t0 + 2960U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27832);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(545, ng0);
    t4 = (t0 + 12120U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 30312);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 2U, 1, 0LL);
    xsi_set_current_line(546, ng0);
    t2 = (t0 + 8920U);
    t4 = *((char **)t2);
    t14 = (0 - 2);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 30312);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(547, ng0);
    t2 = (t0 + 8920U);
    t4 = *((char **)t2);
    t14 = (0 - 2);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 8920U);
    t8 = *((char **)t5);
    t18 = (1 - 2);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 30376);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t4 = (t0 + 3000U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_30(char *t0)
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

LAB0:    xsi_set_current_line(551, ng0);

LAB3:    t1 = (t0 + 9080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8120U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 30440);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 27848);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_31(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(553, ng0);

LAB3:    t1 = (t0 + 9080U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8120U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 30504);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 27864);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(557, ng0);

LAB3:    t1 = (t0 + 30568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(558, ng0);

LAB3:    t1 = (t0 + 30632);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_34(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(568, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(572, ng0);
    t2 = (t0 + 12280U);
    t4 = *((char **)t2);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 12280U);
    t8 = *((char **)t5);
    t18 = (1 - 1);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 30760);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    t2 = (t0 + 27880);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(569, ng0);
    t4 = (t0 + 10520U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 30696);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    xsi_set_current_line(570, ng0);
    t2 = (t0 + 12280U);
    t4 = *((char **)t2);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 30696);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_35(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(578, ng0);
    t2 = (t0 + 1520U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 27896);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(579, ng0);
    t4 = (t0 + 10200U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 30824);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);
    xsi_set_current_line(580, ng0);
    t2 = (t0 + 12600U);
    t4 = *((char **)t2);
    t14 = (0 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 30824);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1560U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_36(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(583, ng0);

LAB3:    t1 = (t0 + 12600U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 12600U);
    t9 = *((char **)t8);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t14);
    t16 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t15);
    t17 = (t0 + 30888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t16;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 27912);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(586, ng0);

LAB3:    t1 = (t0 + 12440U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 30952);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 27928);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(587, ng0);

LAB3:    t1 = (t0 + 12760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 31016);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 27944);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_39(char *t0)
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

LAB0:    xsi_set_current_line(641, ng0);

LAB3:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 31080);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 27960);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_40(char *t0)
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

LAB0:    xsi_set_current_line(705, ng0);

LAB3:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 31144);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 27976);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_ac97_v1_00_a_a_3241830656_3306564128_p_41(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(768, ng0);
    t1 = (1 == 1);
    if (t1 != 0)
        goto LAB2;

LAB4:    t1 = (1 == 2);
    if (t1 != 0)
        goto LAB5;

LAB6:    t1 = (1 == 3);
    if (t1 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(779, ng0);
    t2 = (t0 + 31208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB3:    t2 = (t0 + 27992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(769, ng0);
    t2 = (t0 + 7320U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5080U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t2 = (t0 + 7480U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 6520U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t12);
    t2 = (t0 + 31208);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    xsi_set_current_line(772, ng0);
    t2 = (t0 + 7320U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 4440U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t2 = (t0 + 7480U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 6200U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t12);
    t2 = (t0 + 31208);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB7:    xsi_set_current_line(775, ng0);
    t2 = (t0 + 7320U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 4920U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t4, t6);
    t2 = (t0 + 7480U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 6360U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t12);
    t2 = (t0 + 31208);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

}


extern void axi_ac97_v1_00_a_a_3241830656_3306564128_init()
{
	static char *pe[] = {(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_0,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_1,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_2,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_3,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_4,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_5,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_6,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_7,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_8,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_9,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_10,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_11,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_12,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_13,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_14,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_15,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_16,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_17,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_18,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_19,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_20,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_21,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_22,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_23,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_24,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_25,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_26,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_27,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_28,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_29,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_30,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_31,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_32,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_33,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_34,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_35,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_36,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_37,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_38,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_39,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_40,(void *)axi_ac97_v1_00_a_a_3241830656_3306564128_p_41};
	xsi_register_didat("axi_ac97_v1_00_a_a_3241830656_3306564128", "isim/isim_system.exe.sim/axi_ac97_v1_00_a/a_3241830656_3306564128.didat");
	xsi_register_executes(pe);
}
