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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_vdma_v5_00_a/hdl/vhdl/axi_vdma_reg_if.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *AXI_VDMA_V5_00_A_P_3854302438;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(385, ng0);

LAB3:    t1 = (t0 + 27792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 99208);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 98936);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(386, ng0);

LAB3:    t1 = (t0 + 28592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 99272);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 98952);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_2(char *t0)
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

LAB0:    xsi_set_current_line(626, ng0);
    t2 = (t0 + 18152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 98968);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(627, ng0);
    t4 = (t0 + 18352U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 29232U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 27312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(629, ng0);
    t4 = (t0 + 99336);
    t15 = (t4 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(631, ng0);
    t2 = (t0 + 99336);
    t5 = (t2 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(848, ng0);

LAB3:    t1 = xsi_get_transient_memory(59U);
    memset(t1, 0, 59U);
    t2 = t1;
    memset(t2, (unsigned char)2, 59U);
    t3 = (t0 + 99400);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 59U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(849, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 99464);
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

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(850, ng0);

LAB3:    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 99528);
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

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(851, ng0);

LAB3:    t1 = (t0 + 99592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(852, ng0);

LAB3:    t1 = (t0 + 99656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(853, ng0);

LAB3:    t1 = (t0 + 99720);
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

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(854, ng0);

LAB3:    t1 = (t0 + 99784);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_10(char *t0)
{
    char t4[16];
    char t10[16];
    char t15[16];
    char t20[16];
    char t25[16];
    char t30[16];
    char t35[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(863, ng0);

LAB3:    t1 = (t0 + 85448U);
    t2 = *((char **)t1);
    t1 = (t0 + 28432U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 202252U);
    t7 = (t0 + 202492U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 85448U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t0 + 202252U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t4, (char)97, t9, t12, (char)101);
    t13 = (t0 + 27632U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 202444U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t8, t10, (char)97, t14, t17, (char)101);
    t18 = (t0 + 85448U);
    t19 = *((char **)t18);
    t21 = ((IEEE_P_2592010699) + 4024);
    t22 = (t0 + 202252U);
    t18 = xsi_base_array_concat(t18, t20, t21, (char)97, t13, t15, (char)97, t19, t22, (char)101);
    t23 = (t0 + 28272U);
    t24 = *((char **)t23);
    t26 = ((IEEE_P_2592010699) + 4024);
    t27 = (t0 + 202476U);
    t23 = xsi_base_array_concat(t23, t25, t26, (char)97, t18, t20, (char)97, t24, t27, (char)101);
    t28 = (t0 + 85448U);
    t29 = *((char **)t28);
    t31 = ((IEEE_P_2592010699) + 4024);
    t32 = (t0 + 202252U);
    t28 = xsi_base_array_concat(t28, t30, t31, (char)97, t23, t25, (char)97, t29, t32, (char)101);
    t33 = (t0 + 27472U);
    t34 = *((char **)t33);
    t36 = ((IEEE_P_2592010699) + 4024);
    t37 = (t0 + 202428U);
    t33 = xsi_base_array_concat(t33, t35, t36, (char)97, t28, t30, (char)97, t34, t37, (char)101);
    t38 = (3U + 5U);
    t39 = (t38 + 3U);
    t40 = (t39 + 5U);
    t41 = (t40 + 3U);
    t42 = (t41 + 5U);
    t43 = (t42 + 3U);
    t44 = (t43 + 5U);
    t45 = (32U != t44);
    if (t45 == 1)
        goto LAB5;

LAB6:    t46 = (t0 + 99848);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t33, 32U);
    xsi_driver_first_trans_fast(t46);

LAB2:    t51 = (t0 + 98984);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t44, 0);
    goto LAB6;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_11(char *t0)
{
    char t6[16];
    char t13[16];
    char *t1;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(877, ng0);

LAB3:    t1 = (t0 + 206244);
    t3 = (t0 + 206248);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 201884U);
    t9 = (t0 + 201900U);
    t5 = xsi_base_array_concat(t5, t6, t7, (char)97, t1, t8, (char)97, t3, t9, (char)101);
    t10 = (t0 + 206256);
    t14 = ((IEEE_P_2592010699) + 4024);
    t15 = (t0 + 201916U);
    t12 = xsi_base_array_concat(t12, t13, t14, (char)97, t5, t6, (char)97, t10, t15, (char)101);
    t16 = (4U + 8U);
    t17 = (t16 + 4U);
    t18 = (16U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 99912);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 16U);
    xsi_driver_first_trans_delta(t19, 0U, 16U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t17, 0);
    goto LAB6;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_12(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(878, ng0);

LAB3:    t2 = (t0 + 26672U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 16);
    t5 = (t0 + 99976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);

LAB2:    t10 = (t0 + 99000);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_13(char *t0)
{
    char t6[16];
    char t18[16];
    char t30[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(884, ng0);

LAB3:    t1 = (t0 + 30192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 30352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 25552U);
    t9 = *((char **)t8);
    t8 = ((AXI_VDMA_V5_00_A_P_3854302438) + 6448U);
    t10 = *((char **)t8);
    t11 = *((int *)t10);
    t12 = (t11 - 58);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t8 = (t9 + t15);
    t16 = *((unsigned char *)t8);
    t19 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t1, t6, (char)99, t16, (char)101);
    t20 = (t0 + 25552U);
    t21 = *((char **)t20);
    t20 = ((AXI_VDMA_V5_00_A_P_3854302438) + 6568U);
    t22 = *((char **)t20);
    t23 = *((int *)t22);
    t24 = (t23 - 58);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t20 = (t21 + t27);
    t28 = *((unsigned char *)t20);
    t31 = ((IEEE_P_2592010699) + 4024);
    t29 = xsi_base_array_concat(t29, t30, t31, (char)97, t17, t18, (char)99, t28, (char)101);
    t32 = (1U + 1U);
    t33 = (t32 + 1U);
    t34 = (t33 + 1U);
    t35 = (4U != t34);
    if (t35 == 1)
        goto LAB5;

LAB6:    t36 = (t0 + 100040);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t29, 4U);
    xsi_driver_first_trans_fast(t36);

LAB2:    t41 = (t0 + 99016);
    *((int *)t41) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t34, 0);
    goto LAB6;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;

LAB0:    xsi_set_current_line(897, ng0);
    t1 = (t0 + 26192U);
    t2 = *((char **)t1);
    t1 = (t0 + 206260);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 206264);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 206268);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 206272);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(916, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 100104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(917, ng0);
    t1 = (t0 + 29232U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 100168);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 99032);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(900, ng0);
    t14 = (t0 + 27152U);
    t15 = *((char **)t14);
    t14 = (t0 + 100104);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 32U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(901, ng0);
    t1 = (t0 + 29232U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 100168);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(904, ng0);
    t1 = (t0 + 27952U);
    t2 = *((char **)t1);
    t1 = (t0 + 100104);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(905, ng0);
    t1 = (t0 + 29232U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 100168);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(908, ng0);
    t1 = (t0 + 26992U);
    t2 = *((char **)t1);
    t1 = (t0 + 100104);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(909, ng0);
    t1 = (t0 + 29232U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 100168);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(912, ng0);
    t1 = (t0 + 26832U);
    t2 = *((char **)t1);
    t1 = (t0 + 100104);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(913, ng0);
    t1 = (t0 + 29232U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 100168);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:;
}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_15(char *t0)
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

LAB0:    xsi_set_current_line(1124, ng0);
    t2 = (t0 + 21032U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 99048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1125, ng0);
    t4 = (t0 + 21232U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1128, ng0);
    t2 = (t0 + 27792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 100232);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 21072U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1126, ng0);
    t4 = (t0 + 100232);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1133, ng0);

LAB3:    t1 = (t0 + 24912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 100296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 99064);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_17(char *t0)
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

LAB0:    xsi_set_current_line(1159, ng0);
    t2 = (t0 + 18152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 99080);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1160, ng0);
    t4 = (t0 + 18352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1163, ng0);
    t2 = (t0 + 28912U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 100360);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1161, ng0);
    t4 = (t0 + 100360);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_18(char *t0)
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

LAB0:    xsi_set_current_line(1195, ng0);
    t2 = (t0 + 21032U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 99096);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1196, ng0);
    t4 = (t0 + 21232U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1199, ng0);
    t2 = (t0 + 29552U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 100424);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 21072U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1197, ng0);
    t4 = (t0 + 100424);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_19(char *t0)
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

LAB0:    xsi_set_current_line(1230, ng0);
    t2 = (t0 + 18152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 99112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1231, ng0);
    t4 = (t0 + 18352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1234, ng0);
    t2 = (t0 + 30832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 100488);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1232, ng0);
    t4 = (t0 + 100488);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void axi_vdma_v5_00_a_a_2706918730_3640575771_p_20(char *t0)
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

LAB0:    xsi_set_current_line(1379, ng0);
    t2 = (t0 + 18152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 99128);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1380, ng0);
    t4 = (t0 + 18352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 29712U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(1385, ng0);
    t2 = (t0 + 100552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1381, ng0);
    t4 = (t0 + 100552);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1383, ng0);
    t2 = (t0 + 100552);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}


extern void axi_vdma_v5_00_a_a_2706918730_3640575771_init()
{
	static char *pe[] = {(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_0,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_1,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_2,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_3,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_4,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_5,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_6,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_7,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_8,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_9,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_10,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_11,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_12,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_13,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_14,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_15,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_16,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_17,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_18,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_19,(void *)axi_vdma_v5_00_a_a_2706918730_3640575771_p_20};
	xsi_register_didat("axi_vdma_v5_00_a_a_2706918730_3640575771", "isim/isim_system.exe.sim/axi_vdma_v5_00_a/a_2706918730_3640575771.didat");
	xsi_register_executes(pe);
}
