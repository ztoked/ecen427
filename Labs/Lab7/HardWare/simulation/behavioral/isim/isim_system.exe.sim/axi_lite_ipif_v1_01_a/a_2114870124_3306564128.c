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
extern char *STD_STANDARD;
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_lite_ipif_v1_01_a/hdl/vhdl/slave_attachment.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


int axi_lite_ipif_v1_01_a_a_2114870124_3306564128_sub_3098720132_229454594(char *t1, char *t2)
{
    char t3[128];
    char t4[24];
    char t5[16];
    char t12[8];
    int t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    int t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 31;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 31);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((STD_STANDARD) + 384);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    *((int *)t12) = 0;
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 4U;
    t15 = (t4 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t4 + 12U);
    *((char **)t17) = t5;
    t18 = 31;
    t19 = 0;

LAB4:    if (t18 >= t19)
        goto LAB5;

LAB7:    t8 = (-(1));
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB5:    t20 = (t5 + 0U);
    t21 = *((int *)t20);
    t22 = (t5 + 8U);
    t23 = *((int *)t22);
    t24 = (t18 - t21);
    t9 = (t24 * t23);
    t25 = (t5 + 4U);
    t26 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t21, t26, t23, t18);
    t27 = (1U * t9);
    t28 = (0 + t27);
    t29 = (t2 + t28);
    t30 = *((unsigned char *)t29);
    t31 = (t30 == (unsigned char)3);
    if (t31 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t18 == t19)
        goto LAB7;

LAB12:    t8 = (t18 + -1);
    t18 = t8;
    goto LAB4;

LAB8:    t0 = t18;
    goto LAB1;

LAB11:    goto LAB9;

LAB13:;
}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(295, ng1);

LAB3:    t1 = (t0 + 1296U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 19368);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 18856);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(296, ng1);

LAB3:    t1 = (t0 + 1456U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 19432);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 18872);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_2(char *t0)
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

LAB0:    xsi_set_current_line(297, ng1);
    t1 = (t0 + 3376U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 19496);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 18888);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(300, ng1);

LAB3:    t1 = (t0 + 8336U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 19560);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 18904);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_4(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
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
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(301, ng1);
    t2 = (0 == 1);
    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t12 = xsi_get_transient_memory(4U);
    memset(t12, 0, 4U);
    t13 = t12;
    memset(t13, (unsigned char)3, 4U);
    t14 = (t0 + 19624);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 4U);
    xsi_driver_first_trans_fast_port(t14);

LAB2:    t19 = (t0 + 18920);
    *((int *)t19) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 2256U);
    t7 = *((char **)t3);
    t3 = (t0 + 19624);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t3 = (t0 + 8336U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    t1 = t6;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(304, ng1);

LAB3:    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t1 = (t0 + 19688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 18936);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(305, ng1);

LAB3:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    t1 = (t0 + 19752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 18952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_7(char *t0)
{
    char t13[16];
    char t16[16];
    char t35[16];
    char t38[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(310, ng1);
    t1 = (t0 + 3376U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t26 = (t0 + 10592U);
    t27 = *((char **)t26);
    t26 = (t0 + 1616U);
    t28 = *((char **)t26);
    t26 = (t0 + 10352U);
    t29 = *((char **)t26);
    t30 = *((int *)t29);
    t31 = (31 - t30);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t26 = (t28 + t33);
    t36 = ((IEEE_P_2592010699) + 4024);
    t37 = (t0 + 35020U);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 3;
    t40 = (t39 + 4U);
    *((int *)t40) = 0;
    t40 = (t39 + 8U);
    *((int *)t40) = -1;
    t41 = (0 - 3);
    t42 = (t41 * -1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t34 = xsi_base_array_concat(t34, t35, t36, (char)97, t27, t37, (char)97, t26, t38, (char)101);
    t42 = (28U + 4U);
    t43 = (32U != t42);
    if (t43 == 1)
        goto LAB9;

LAB10:    t40 = (t0 + 19816);
    t44 = (t40 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t34, 32U);
    xsi_driver_first_trans_fast(t40);

LAB2:    t48 = (t0 + 18968);
    *((int *)t48) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 10592U);
    t5 = *((char **)t1);
    t1 = (t0 + 3216U);
    t6 = *((char **)t1);
    t1 = (t0 + 10352U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (31 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t6 + t11);
    t14 = ((IEEE_P_2592010699) + 4024);
    t15 = (t0 + 35020U);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 3;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 3);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t12 = xsi_base_array_concat(t12, t13, t14, (char)97, t5, t15, (char)97, t1, t16, (char)101);
    t20 = (28U + 4U);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 19816);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t12, 32U);
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t20, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(32U, t42, 0);
    goto LAB10;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
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

LAB0:    xsi_set_current_line(318, ng1);
    t1 = (t0 + 8016U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = (t0 + 19880);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 18984);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3376U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 1776U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t1 = (t0 + 2416U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t8, t10);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t11);
    t1 = (t0 + 19880);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_9(char *t0)
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

LAB0:    xsi_set_current_line(326, ng1);

LAB3:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7216U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 19944);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19000);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_10(char *t0)
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

LAB0:    xsi_set_current_line(327, ng1);

LAB3:    t1 = (t0 + 5936U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7216U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 20008);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19016);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_11(char *t0)
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

LAB0:    xsi_set_current_line(329, ng1);

LAB3:    t1 = (t0 + 7376U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7536U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 20072);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 19032);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_12(char *t0)
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

LAB0:    xsi_set_current_line(368, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(369, ng1);
    t4 = (t0 + 1456U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 20136);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_13(char *t0)
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
    char *t17;
    static char *nl0[] = {&&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(380, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19064);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(381, ng1);
    t4 = (t0 + 7696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(384, ng1);
    t2 = (t0 + 8016U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(382, ng1);
    t4 = (t0 + 20200);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);

LAB9:    goto LAB3;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(385, ng1);
    t5 = (t0 + 3376U);
    t8 = *((char **)t5);
    t3 = *((unsigned char *)t8);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB17;

LAB19:    t2 = (t0 + 1776U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB22;

LAB23:    t1 = (unsigned char)0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(390, ng1);
    t2 = (t0 + 20200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB11;

LAB13:    xsi_set_current_line(393, ng1);
    t2 = (t0 + 7376U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(396, ng1);
    t2 = (t0 + 20200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);

LAB26:    goto LAB11;

LAB14:    xsi_set_current_line(399, ng1);
    t2 = (t0 + 7536U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(402, ng1);
    t2 = (t0 + 20200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB29:    goto LAB11;

LAB15:    xsi_set_current_line(405, ng1);
    t2 = (t0 + 6416U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3056U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 6736U);
    t8 = *((char **)t2);
    t7 = *((unsigned char *)t8);
    t2 = (t0 + 4176U);
    t11 = *((char **)t2);
    t9 = *((unsigned char *)t11);
    t10 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t9);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t10);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(409, ng1);
    t2 = (t0 + 20200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB32:    goto LAB11;

LAB16:    xsi_set_current_line(412, ng1);
    t2 = (t0 + 20200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB17:    xsi_set_current_line(386, ng1);
    t5 = (t0 + 20200);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB18;

LAB20:    xsi_set_current_line(388, ng1);
    t2 = (t0 + 20200);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB18;

LAB22:    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB24;

LAB25:    xsi_set_current_line(394, ng1);
    t2 = (t0 + 20200);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB26;

LAB28:    xsi_set_current_line(400, ng1);
    t2 = (t0 + 20200);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

LAB31:    xsi_set_current_line(407, ng1);
    t2 = (t0 + 20200);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB32;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_14(char *t0)
{
    char t17[16];
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
    unsigned int t18;

LAB0:    xsi_set_current_line(426, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19080);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(427, ng1);
    t4 = (t0 + 7696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8016U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)1);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(428, ng1);
    t4 = xsi_get_transient_memory(2U);
    memset(t4, 0, 2U);
    t11 = t4;
    memset(t11, (unsigned char)2, 2U);
    t12 = (t0 + 20264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 2U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(429, ng1);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 20328);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(431, ng1);
    t2 = (t0 + 6256U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_base_array_concat(t2, t17, t8, (char)99, t6, (char)99, (unsigned char)2, (char)101);
    t18 = (1U + 1U);
    t7 = (2U != t18);
    if (t7 == 1)
        goto LAB13;

LAB14:    t11 = (t0 + 20264);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 2U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(432, ng1);
    t2 = (t0 + 5776U);
    t4 = *((char **)t2);
    t2 = (t0 + 20328);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_size_not_matching(2U, t18, 0);
    goto LAB14;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(437, ng1);

LAB3:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    t1 = (t0 + 20392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 19096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(438, ng1);

LAB3:    t1 = (t0 + 8816U);
    t2 = *((char **)t1);
    t1 = (t0 + 20456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 19112);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_17(char *t0)
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

LAB0:    xsi_set_current_line(445, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19128);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(446, ng1);
    t4 = (t0 + 7696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8016U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)1);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 4176U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(447, ng1);
    t4 = (t0 + 20520);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(449, ng1);
    t2 = (t0 + 20520);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 7376U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

LAB16:    xsi_set_current_line(451, ng1);
    t2 = (t0 + 20520);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_18(char *t0)
{
    char t17[16];
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
    unsigned int t18;

LAB0:    xsi_set_current_line(460, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19144);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(461, ng1);
    t4 = (t0 + 7696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8016U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(462, ng1);
    t4 = xsi_get_transient_memory(2U);
    memset(t4, 0, 2U);
    t11 = t4;
    memset(t11, (unsigned char)2, 2U);
    t12 = (t0 + 20584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 2U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_set_current_line(464, ng1);
    t2 = (t0 + 6256U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_base_array_concat(t2, t17, t8, (char)99, t6, (char)99, (unsigned char)2, (char)101);
    t18 = (1U + 1U);
    t7 = (2U != t18);
    if (t7 == 1)
        goto LAB13;

LAB14:    t11 = (t0 + 20584);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 2U);
    xsi_driver_first_trans_fast(t11);
    goto LAB9;

LAB13:    xsi_size_not_matching(2U, t18, 0);
    goto LAB14;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(469, ng1);

LAB3:    t1 = (t0 + 8496U);
    t2 = *((char **)t1);
    t1 = (t0 + 20648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 19160);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_20(char *t0)
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

LAB0:    xsi_set_current_line(474, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19176);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(475, ng1);
    t4 = (t0 + 7696U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8016U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3056U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(476, ng1);
    t4 = (t0 + 20712);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(478, ng1);
    t2 = (t0 + 20712);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 7536U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t1 = t9;
    goto LAB15;

LAB16:    xsi_set_current_line(480, ng1);
    t2 = (t0 + 20712);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_21(char *t0)
{
    char t21[16];
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
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(498, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 19192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(499, ng1);
    t4 = (t0 + 8016U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)0);
    if (t11 == 1)
        goto LAB11;

LAB12:    t4 = (t0 + 8016U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(502, ng1);
    t2 = (t0 + 8976U);
    t4 = *((char **)t2);
    t2 = (t0 + 35100U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t21, t4, t2, 1);
    t9 = (t21 + 12U);
    t22 = *((unsigned int *)t9);
    t23 = (1U * t22);
    t1 = (3U != t23);
    if (t1 == 1)
        goto LAB14;

LAB15:    t12 = (t0 + 20776);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 3U);
    xsi_driver_first_trans_fast(t12);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(500, ng1);
    t4 = xsi_get_transient_memory(3U);
    memset(t4, 0, 3U);
    t15 = t4;
    memset(t15, (unsigned char)2, 3U);
    t16 = (t0 + 20776);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 3U);
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_size_not_matching(3U, t23, 0);
    goto LAB15;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(507, ng1);

LAB3:    t1 = (t0 + 8976U);
    t2 = *((char **)t1);
    t1 = (t0 + 10712U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 2);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 20840);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 19208);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(516, ng1);

LAB3:    t1 = (t0 + 6416U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20904);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19224);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(517, ng1);

LAB3:    t1 = (t0 + 6736U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20968);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(519, ng1);

LAB3:    t1 = (t0 + 7376U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19256);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_26(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(520, ng1);

LAB3:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19272);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_27(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(521, ng1);

LAB3:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 19288);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_lite_ipif_v1_01_a_a_2114870124_3306564128_init()
{
	static char *pe[] = {(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_0,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_1,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_2,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_3,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_4,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_5,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_6,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_7,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_8,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_9,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_10,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_11,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_12,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_13,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_14,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_15,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_16,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_17,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_18,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_19,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_20,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_21,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_22,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_23,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_24,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_25,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_26,(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_p_27};
	static char *se[] = {(void *)axi_lite_ipif_v1_01_a_a_2114870124_3306564128_sub_3098720132_229454594};
	xsi_register_didat("axi_lite_ipif_v1_01_a_a_2114870124_3306564128", "isim/isim_system.exe.sim/axi_lite_ipif_v1_01_a/a_2114870124_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
