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
static const char *ng0 = "C:/EE427/Atlys_BSB_Support_v_3_4/Atlys_AXI_BSB_Support/lib/Digilent/pcores/axi_hdmi_v1_00_a/hdl/vhdl/LocalRst.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 6032);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2208U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6096);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568U);
    t5 = *((char **)t2);
    t2 = (t0 + 2984U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t10 = (t9 - 1);
    t11 = (t10 - 4);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t4 = *((unsigned char *)t2);
    t7 = (t0 + 6096);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t4;
    xsi_driver_first_trans_delta(t7, 3U, 1, 0LL);
    goto LAB3;

}

static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2208U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5904);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6160);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568U);
    t5 = *((char **)t2);
    t2 = (t0 + 3104U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t10 = (t9 - 1);
    t11 = (t10 - 4);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t4 = *((unsigned char *)t2);
    t7 = (t0 + 6160);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t4;
    xsi_driver_first_trans_delta(t7, 2U, 1, 0LL);
    goto LAB3;

}

static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2208U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5920);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6224);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568U);
    t5 = *((char **)t2);
    t2 = (t0 + 3224U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t10 = (t9 - 1);
    t11 = (t10 - 4);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t4 = *((unsigned char *)t2);
    t7 = (t0 + 6224);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t4;
    xsi_driver_first_trans_delta(t7, 1U, 1, 0LL);
    goto LAB3;

}

static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2208U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2568U);
    t5 = *((char **)t2);
    t2 = (t0 + 3344U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t10 = (t9 - 1);
    t11 = (t10 - 4);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t4 = *((unsigned char *)t2);
    t7 = (t0 + 6288);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t4;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    goto LAB3;

}

static void axi_hdmi_v1_00_a_a_2164547660_3212880686_p_5(char *t0)
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

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6352);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5952);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_hdmi_v1_00_a_a_2164547660_3212880686_init()
{
	static char *pe[] = {(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_0,(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_1,(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_2,(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_3,(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_4,(void *)axi_hdmi_v1_00_a_a_2164547660_3212880686_p_5};
	xsi_register_didat("axi_hdmi_v1_00_a_a_2164547660_3212880686", "isim/isim_system.exe.sim/axi_hdmi_v1_00_a/a_2164547660_3212880686.didat");
	xsi_register_executes(pe);
}
