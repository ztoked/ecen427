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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/lmb_bram_if_cntlr_v3_00_b/hdl/vhdl/lmb_bram_if_cntlr.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_0(char *t0)
{
    char t7[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(411, ng0);
    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    t1 = (t0 + 32656);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(413, ng0);
    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    t1 = (t0 + 59960U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t2, t1, (unsigned char)0);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t3, t8);
    t5 = (t7 + 12U);
    t9 = *((unsigned int *)t5);
    t9 = (t9 * 1U);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB2;

LAB3:    t6 = (t0 + 32656);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 32U);
    xsi_driver_first_trans_fast(t6);
    t1 = (t0 + 32384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(32U, t9, 0);
    goto LAB3;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(418, ng0);

LAB3:    t1 = (t0 + 32720);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(419, ng0);

LAB3:    t1 = (t0 + 1824U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 32784);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 32400);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(421, ng0);

LAB3:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2784U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 14624U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 32848);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);

LAB2:    t19 = (t0 + 32416);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_4(char *t0)
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

LAB0:    xsi_set_current_line(422, ng0);

LAB3:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    t3 = (1 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2784U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 14624U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 32912);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);

LAB2:    t19 = (t0 + 32432);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(423, ng0);

LAB3:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    t3 = (2 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2784U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 14624U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 32976);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 2U, 1, 0LL);

LAB2:    t19 = (t0 + 32448);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(424, ng0);

LAB3:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    t3 = (3 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2784U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t10);
    t8 = (t0 + 14624U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t11, t13);
    t8 = (t0 + 33040);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_delta(t8, 3U, 1, 0LL);

LAB2:    t19 = (t0 + 32464);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(429, ng0);

LAB3:    t1 = (t0 + 33104);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(444, ng0);

LAB3:    t1 = (t0 + 2464U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 33168);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 32480);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(445, ng0);

LAB3:    t1 = (t0 + 14944U);
    t2 = *((char **)t1);
    t1 = (t0 + 33232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 32496);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(446, ng0);

LAB3:    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    t1 = (t0 + 33296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 32512);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(447, ng0);

LAB3:    t1 = (t0 + 15424U);
    t2 = *((char **)t1);
    t1 = (t0 + 33360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 32528);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(448, ng0);

LAB3:    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t1 = (t0 + 33424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 32544);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(451, ng0);

LAB3:    t1 = (t0 + 33488);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(452, ng0);

LAB3:    t1 = (t0 + 33552);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(453, ng0);

LAB3:    t1 = (t0 + 33616);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(454, ng0);

LAB3:    t1 = (t0 + 33680);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_17(char *t0)
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

LAB0:    xsi_set_current_line(461, ng0);
    t2 = (t0 + 1784U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 32560);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(462, ng0);
    t4 = (t0 + 1984U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(466, ng0);
    t2 = (t0 + 14624U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 33744);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(467, ng0);
    t2 = (t0 + 2464U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 33808);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(463, ng0);
    t4 = (t0 + 33744);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(464, ng0);
    t2 = (t0 + 33808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_18(char *t0)
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

LAB0:    xsi_set_current_line(472, ng0);

LAB3:    t1 = (t0 + 15104U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 14784U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 33872);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 32576);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1153, ng0);

LAB3:    t1 = (t0 + 33936);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_20(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1154, ng0);

LAB3:    t1 = (t0 + 61136);
    t3 = (t0 + 34000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1155, ng0);

LAB3:    t1 = (t0 + 34064);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1156, ng0);

LAB3:    t1 = (t0 + 34128);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1157, ng0);

LAB3:    t1 = (t0 + 34192);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1158, ng0);

LAB3:    t1 = (t0 + 34256);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1159, ng0);

LAB3:    t1 = (t0 + 34320);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1160, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 34384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1161, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 34448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1162, ng0);

LAB3:    t1 = (t0 + 34512);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1163, ng0);

LAB3:    t1 = (t0 + 34576);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1164, ng0);

LAB3:    t1 = (t0 + 34640);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1165, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 34704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1166, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 34768);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1167, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 34832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1168, ng0);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 34896);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1173, ng0);

LAB3:    t1 = (t0 + 34960);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1174, ng0);

LAB3:    t1 = (t0 + 35024);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1175, ng0);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 35088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1176, ng0);

LAB3:    t1 = (t0 + 35152);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_39(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1177, ng0);

LAB3:    t1 = (t0 + 35216);
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

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1178, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 35280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(1179, ng0);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 35344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1180, ng0);

LAB3:    t1 = (t0 + 35408);
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


extern void lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_init()
{
	static char *pe[] = {(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_0,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_1,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_2,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_3,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_4,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_5,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_6,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_7,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_8,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_9,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_10,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_11,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_12,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_13,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_14,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_15,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_16,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_17,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_18,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_19,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_20,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_21,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_22,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_23,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_24,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_25,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_26,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_27,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_28,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_29,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_30,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_31,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_32,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_33,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_34,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_35,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_36,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_37,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_38,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_39,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_40,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_41,(void *)lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128_p_42};
	xsi_register_didat("lmb_bram_if_cntlr_v3_00_b_a_2717852468_3306564128", "isim/isim_system.exe.sim/lmb_bram_if_cntlr_v3_00_b/a_2717852468_3306564128.didat");
	xsi_register_executes(pe);
}
