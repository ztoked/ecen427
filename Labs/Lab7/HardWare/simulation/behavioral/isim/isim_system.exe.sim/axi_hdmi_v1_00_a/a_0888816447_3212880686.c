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
static const char *ng0 = "C:/EE427/Atlys_BSB_Support_v_3_4/Atlys_AXI_BSB_Support/lib/Digilent/pcores/axi_hdmi_v1_00_a/hdl/vhdl/twi_slave.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = (3 - 2);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 2;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 2);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t3, t13, (char)99, t10, (char)101);
    t17 = (3U + 1U);
    t18 = (4U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 10352);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t5 = (3 - 2);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t2 = *((unsigned char *)t8);
    t9 = ((IEEE_P_2592010699) + 4024);
    t12 = (t13 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 2;
    t14 = (t12 + 4U);
    *((int *)t14) = 0;
    t14 = (t12 + 8U);
    *((int *)t14) = -1;
    t16 = (0 - 2);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t17;
    t4 = xsi_base_array_concat(t4, t11, t9, (char)97, t1, t13, (char)99, t2, (char)101);
    t17 = (3U + 1U);
    t10 = (4U != t17);
    if (t10 == 1)
        goto LAB7;

LAB8:    t14 = (t0 + 10416);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t4, 4U);
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

LAB5:    xsi_size_not_matching(4U, t17, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(4U, t17, 0);
    goto LAB8;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
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

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 18464U);
    t3 = (t0 + 18581);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 10480);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 10048);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 10480);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
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

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 18464U);
    t3 = (t0 + 18585);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 10544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 10064);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 10544);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_3(char *t0)
{
    char t6[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 18464U);
    t4 = (t0 + 18589);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t24 = (t0 + 10608);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 10080);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 10608);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB5:    t8 = (t0 + 3112U);
    t12 = *((char **)t8);
    t8 = (t0 + 18464U);
    t13 = (t0 + 18593);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 3;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (3 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_4(char *t0)
{
    char t6[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 18464U);
    t4 = (t0 + 18597);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t24 = (t0 + 10672);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 10096);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 10672);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB5:    t8 = (t0 + 3112U);
    t12 = *((char **)t8);
    t8 = (t0 + 18464U);
    t13 = (t0 + 18601);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 3;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (3 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_5(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 10736);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 10736);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_6(char *t0)
{
    char t16[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB62;

LAB64:
LAB63:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB65;

LAB67:
LAB66:    t1 = (t0 + 10128);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB15;

LAB16:    t8 = (unsigned char)0;

LAB17:    if (t8 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB4:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB5:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB2;

LAB6:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB2;

LAB7:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t8 = (t3 == (unsigned char)3);
    if (t8 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB2;

LAB8:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB2;

LAB9:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB48;

LAB49:    t3 = (unsigned char)0;

LAB50:    if (t3 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB2;

LAB10:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB54;

LAB55:    t3 = (unsigned char)0;

LAB56:    if (t3 != 0)
        goto LAB51;

LAB53:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB59;

LAB60:    t3 = (unsigned char)0;

LAB61:    if (t3 != 0)
        goto LAB57;

LAB58:
LAB52:    goto LAB2;

LAB11:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 10800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 10800);
    t7 = (t4 + 56U);
    t13 = *((char **)t7);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

LAB15:    t4 = (t0 + 3272U);
    t6 = *((char **)t4);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    t8 = t12;
    goto LAB17;

LAB18:    xsi_set_current_line(134, ng0);
    t13 = (t0 + 10800);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB19;

LAB21:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t1 = (t0 + 18480U);
    t5 = (t0 + 18605);
    t7 = (t16 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 0;
    t13 = (t7 + 4U);
    *((int *)t13) = 3;
    t13 = (t7 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t18;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t16);
    t3 = t10;
    goto LAB23;

LAB24:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 10800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4552U);
    t4 = *((char **)t1);
    t18 = (7 - 7);
    t21 = (t18 * 1U);
    t22 = (0 + t21);
    t1 = (t4 + t22);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t17 = (1 - 7);
    t23 = (t17 * -1);
    t23 = (t23 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t23;
    t6 = (t0 + 18609);
    t23 = (7 - 7);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t13 = (t6 + t25);
    t14 = (t26 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 7;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t27 = (1 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t28;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t16, t13, t26);
    if (t9 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 10800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB28;

LAB30:    xsi_set_current_line(143, ng0);
    t15 = (t0 + 3912U);
    t19 = *((char **)t15);
    t10 = *((unsigned char *)t19);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 10800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB31;

LAB33:    xsi_set_current_line(144, ng0);
    t15 = (t0 + 10800);
    t20 = (t15 + 56U);
    t29 = *((char **)t20);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)6;
    xsi_driver_first_trans_fast(t15);
    goto LAB34;

LAB36:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 10800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

LAB39:    xsi_set_current_line(158, ng0);
    t13 = (t0 + 10800);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)4;
    xsi_driver_first_trans_fast(t13);
    goto LAB40;

LAB42:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t1 = (t0 + 18480U);
    t5 = (t0 + 18617);
    t7 = (t16 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 0;
    t13 = (t7 + 4U);
    *((int *)t13) = 3;
    t13 = (t7 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t18;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t16);
    t3 = t10;
    goto LAB44;

LAB45:    xsi_set_current_line(162, ng0);
    t13 = (t0 + 10800);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)7;
    xsi_driver_first_trans_fast(t13);
    goto LAB46;

LAB48:    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t1 = (t0 + 18480U);
    t5 = (t0 + 18621);
    t7 = (t16 + 0U);
    t13 = (t7 + 0U);
    *((int *)t13) = 0;
    t13 = (t7 + 4U);
    *((int *)t13) = 3;
    t13 = (t7 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t7 + 12U);
    *((unsigned int *)t13) = t18;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t16);
    t3 = t10;
    goto LAB50;

LAB51:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 10800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    *((unsigned char *)t13) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

LAB54:    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB56;

LAB57:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 10800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    *((unsigned char *)t13) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB52;

LAB59:    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB61;

LAB62:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 10800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB65:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 10800);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB66;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_7(char *t0)
{
    char t14[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)1);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)5);
    t3 = t10;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(195, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t4 = t1;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 10864);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 3752U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 4232U);
    t15 = *((char **)t4);
    t4 = (t0 + 18480U);
    t16 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t14, t15, t4, (unsigned char)3);
    t17 = (t14 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    t20 = (4U != t19);
    if (t20 == 1)
        goto LAB14;

LAB15:    t21 = (t0 + 10864);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 4U);
    xsi_driver_first_trans_fast(t21);
    goto LAB12;

LAB14:    xsi_size_not_matching(4U, t19, 0);
    goto LAB15;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_8(char *t0)
{
    char t14[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(206, ng0);
    t4 = (t0 + 2632U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)6);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t2 = *((unsigned char *)t4);
    t3 = (t2 == (unsigned char)7);
    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(213, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t4 = t1;
    memset(t4, (unsigned char)2, 4U);
    t5 = (t0 + 10928);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(207, ng0);
    t4 = (t0 + 3592U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(208, ng0);
    t4 = (t0 + 4392U);
    t15 = *((char **)t4);
    t4 = (t0 + 18480U);
    t16 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t14, t15, t4, (unsigned char)3);
    t17 = (t14 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    t20 = (4U != t19);
    if (t20 == 1)
        goto LAB14;

LAB15:    t21 = (t0 + 10928);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 4U);
    xsi_driver_first_trans_fast(t21);
    goto LAB12;

LAB14:    xsi_size_not_matching(4U, t19, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 18625);
    t8 = (t0 + 10928);
    t11 = (t8 + 56U);
    t15 = *((char **)t11);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_9(char *t0)
{
    char t29[16];
    char t31[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(224, ng0);
    t6 = (t0 + 2632U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)1);
    if (t9 == 1)
        goto LAB14;

LAB15:    t6 = (t0 + 2632U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)5);
    t5 = t12;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t6 = (t0 + 2632U);
    t13 = *((char **)t6);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t4 = t15;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 2632U);
    t16 = *((char **)t6);
    t17 = *((unsigned char *)t16);
    t18 = (t17 == (unsigned char)7);
    t3 = t18;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(226, ng0);
    t6 = (t0 + 3752U);
    t19 = *((char **)t6);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    t5 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_set_current_line(227, ng0);
    t6 = (t0 + 4552U);
    t22 = *((char **)t6);
    t23 = (7 - 6);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t6 = (t22 + t25);
    t26 = (t0 + 2152U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t30 = ((IEEE_P_2592010699) + 4024);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 6;
    t33 = (t32 + 4U);
    *((int *)t33) = 0;
    t33 = (t32 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 6);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t26 = xsi_base_array_concat(t26, t29, t30, (char)97, t6, t31, (char)99, t28, (char)101);
    t35 = (7U + 1U);
    t36 = (8U != t35);
    if (t36 == 1)
        goto LAB20;

LAB21:    t33 = (t0 + 10992);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t26, 8U);
    xsi_driver_first_trans_fast(t33);
    goto LAB18;

LAB20:    xsi_size_not_matching(8U, t35, 0);
    goto LAB21;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_10(char *t0)
{
    char t29[16];
    char t30[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t31;

LAB0:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(239, ng0);
    t5 = (t0 + 2632U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)6);
    if (t8 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 2632U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t4 = t11;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 2632U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)7);
    t3 = t14;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 11056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(241, ng0);
    t5 = (t0 + 3592U);
    t15 = *((char **)t5);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)3);
    if (t17 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t2 = *((unsigned char *)t5);
    t3 = (t2 == (unsigned char)7);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(242, ng0);
    t5 = (t0 + 4712U);
    t18 = *((char **)t5);
    t19 = (7 - 7);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t5 = (t18 + t22);
    t23 = *((unsigned char *)t5);
    t24 = (t0 + 11056);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast_port(t24);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 4712U);
    t5 = *((char **)t1);
    t20 = (7 - 6);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t1 = (t5 + t22);
    t9 = ((IEEE_P_2592010699) + 4024);
    t12 = (t30 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 6;
    t15 = (t12 + 4U);
    *((int *)t15) = 0;
    t15 = (t12 + 8U);
    *((int *)t15) = -1;
    t19 = (0 - 6);
    t31 = (t19 * -1);
    t31 = (t31 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t31;
    t6 = xsi_base_array_concat(t6, t29, t9, (char)97, t1, t30, (char)99, (unsigned char)2, (char)101);
    t31 = (7U + 1U);
    t2 = (8U != t31);
    if (t2 == 1)
        goto LAB17;

LAB18:    t15 = (t0 + 11120);
    t18 = (t15 + 56U);
    t24 = *((char **)t18);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t6, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t31, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 3752U);
    t6 = *((char **)t1);
    t4 = *((unsigned char *)t6);
    t7 = (t4 == (unsigned char)3);
    if (t7 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(247, ng0);
    t1 = (t0 + 1832U);
    t9 = *((char **)t1);
    t1 = (t0 + 11120);
    t12 = (t1 + 56U);
    t15 = *((char **)t12);
    t18 = (t15 + 56U);
    t24 = *((char **)t18);
    memcpy(t24, t9, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_11(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(261, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(262, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(263, ng0);
    t3 = (t0 + 4552U);
    t7 = *((char **)t3);
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t3 = (t7 + t11);
    t12 = *((unsigned char *)t3);
    t13 = (t0 + 11184);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t12;
    xsi_driver_first_trans_fast(t13);
    goto LAB6;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_12(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10224);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(271, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)7);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(272, ng0);
    t3 = (t0 + 3752U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(273, ng0);
    t3 = (t0 + 2152U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t11);
    t3 = (t0 + 11248);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t3);
    goto LAB9;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_13(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
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

LAB0:    xsi_set_current_line(280, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 2632U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)4);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 2632U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)6);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 11312);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t22 = (t0 + 10240);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 11312);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_14(char *t0)
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

LAB0:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)6);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t13 = (t0 + 11376);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 10256);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 11376);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)7);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_hdmi_v1_00_a_a_0888816447_3212880686_p_15(char *t0)
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

LAB0:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 11440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 10272);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 11440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void axi_hdmi_v1_00_a_a_0888816447_3212880686_init()
{
	static char *pe[] = {(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_0,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_1,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_2,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_3,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_4,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_5,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_6,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_7,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_8,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_9,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_10,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_11,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_12,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_13,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_14,(void *)axi_hdmi_v1_00_a_a_0888816447_3212880686_p_15};
	xsi_register_didat("axi_hdmi_v1_00_a_a_0888816447_3212880686", "isim/isim_system.exe.sim/axi_hdmi_v1_00_a/a_0888816447_3212880686.didat");
	xsi_register_executes(pe);
}
