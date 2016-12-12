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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/comparator.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void microblaze_v8_20_b_a_0476519131_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(134, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t2 = t1;
    memset(t2, (unsigned char)2, 15U);
    t3 = (t0 + 9544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 15U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    t1 = (t0 + 9544);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_delta(t1, 0U, 15U, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t2 = t1;
    memset(t2, (unsigned char)2, 15U);
    t3 = (t0 + 9608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 15U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    t1 = (t0 + 9608);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_delta(t1, 0U, 15U, 0LL);
    t1 = (t0 + 9368);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 5616U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17321);
    *((int *)t1) = t4;
    t5 = (t0 + 17325);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 5616U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 9672);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t1 = (t0 + 9384);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(164, ng0);
    t8 = (t0 + 5616U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    t12 = (14 + 1);
    t8 = (t0 + 5136U);
    t13 = *((char **)t8);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t8 = (t0 + 5136U);
    t16 = *((char **)t8);
    t17 = *((int *)t16);
    t8 = (t0 + 5496U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 * t19);
    t21 = (t15 - t20);
    t8 = (t0 + 17321);
    t22 = *((int *)t8);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t11 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 4160U);
    t31 = *((char **)t30);
    t32 = (14 + 1);
    t30 = (t0 + 5136U);
    t33 = *((char **)t30);
    t34 = *((int *)t33);
    t35 = (t32 - t34);
    t30 = (t0 + 5136U);
    t36 = *((char **)t30);
    t37 = *((int *)t36);
    t30 = (t0 + 5496U);
    t38 = *((char **)t30);
    t39 = *((int *)t38);
    t40 = (t37 * t39);
    t41 = (t35 - t40);
    t30 = (t0 + 17321);
    t42 = *((int *)t30);
    t43 = (t41 + t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t31 + t47);
    t49 = *((unsigned char *)t48);
    t50 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t29, t49);
    t51 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t50);
    t52 = (t0 + 5616U);
    t53 = *((char **)t52);
    t52 = (t53 + 0);
    *((unsigned char *)t52) = t51;

LAB4:    t1 = (t0 + 17321);
    t6 = *((int *)t1);
    t2 = (t0 + 17325);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17321);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 5856U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17329);
    *((int *)t1) = t4;
    t5 = (t0 + 17333);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 5856U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 9736);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    t1 = (t0 + 9400);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(164, ng0);
    t8 = (t0 + 5856U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    t12 = (14 + 1);
    t8 = (t0 + 5136U);
    t13 = *((char **)t8);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t8 = (t0 + 5136U);
    t16 = *((char **)t8);
    t17 = *((int *)t16);
    t8 = (t0 + 5736U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 * t19);
    t21 = (t15 - t20);
    t8 = (t0 + 17329);
    t22 = *((int *)t8);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t11 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 4160U);
    t31 = *((char **)t30);
    t32 = (14 + 1);
    t30 = (t0 + 5136U);
    t33 = *((char **)t30);
    t34 = *((int *)t33);
    t35 = (t32 - t34);
    t30 = (t0 + 5136U);
    t36 = *((char **)t30);
    t37 = *((int *)t36);
    t30 = (t0 + 5736U);
    t38 = *((char **)t30);
    t39 = *((int *)t38);
    t40 = (t37 * t39);
    t41 = (t35 - t40);
    t30 = (t0 + 17329);
    t42 = *((int *)t30);
    t43 = (t41 + t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t31 + t47);
    t49 = *((unsigned char *)t48);
    t50 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t29, t49);
    t51 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t50);
    t52 = (t0 + 5856U);
    t53 = *((char **)t52);
    t52 = (t53 + 0);
    *((unsigned char *)t52) = t51;

LAB4:    t1 = (t0 + 17329);
    t6 = *((int *)t1);
    t2 = (t0 + 17333);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17329);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17337);
    *((int *)t1) = t4;
    t5 = (t0 + 17341);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 9800);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    t1 = (t0 + 9416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(164, ng0);
    t8 = (t0 + 6096U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    t12 = (14 + 1);
    t8 = (t0 + 5136U);
    t13 = *((char **)t8);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t8 = (t0 + 5136U);
    t16 = *((char **)t8);
    t17 = *((int *)t16);
    t8 = (t0 + 5976U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 * t19);
    t21 = (t15 - t20);
    t8 = (t0 + 17337);
    t22 = *((int *)t8);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t11 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 4160U);
    t31 = *((char **)t30);
    t32 = (14 + 1);
    t30 = (t0 + 5136U);
    t33 = *((char **)t30);
    t34 = *((int *)t33);
    t35 = (t32 - t34);
    t30 = (t0 + 5136U);
    t36 = *((char **)t30);
    t37 = *((int *)t36);
    t30 = (t0 + 5976U);
    t38 = *((char **)t30);
    t39 = *((int *)t38);
    t40 = (t37 * t39);
    t41 = (t35 - t40);
    t30 = (t0 + 17337);
    t42 = *((int *)t30);
    t43 = (t41 + t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t31 + t47);
    t49 = *((unsigned char *)t48);
    t50 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t29, t49);
    t51 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t50);
    t52 = (t0 + 6096U);
    t53 = *((char **)t52);
    t52 = (t53 + 0);
    *((unsigned char *)t52) = t51;

LAB4:    t1 = (t0 + 17337);
    t6 = *((int *)t1);
    t2 = (t0 + 17341);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17337);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 6336U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17345);
    *((int *)t1) = t4;
    t5 = (t0 + 17349);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6336U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 9864);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    t1 = (t0 + 9432);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(164, ng0);
    t8 = (t0 + 6336U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    t12 = (14 + 1);
    t8 = (t0 + 5136U);
    t13 = *((char **)t8);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t8 = (t0 + 5136U);
    t16 = *((char **)t8);
    t17 = *((int *)t16);
    t8 = (t0 + 6216U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 * t19);
    t21 = (t15 - t20);
    t8 = (t0 + 17345);
    t22 = *((int *)t8);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t11 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 4160U);
    t31 = *((char **)t30);
    t32 = (14 + 1);
    t30 = (t0 + 5136U);
    t33 = *((char **)t30);
    t34 = *((int *)t33);
    t35 = (t32 - t34);
    t30 = (t0 + 5136U);
    t36 = *((char **)t30);
    t37 = *((int *)t36);
    t30 = (t0 + 6216U);
    t38 = *((char **)t30);
    t39 = *((int *)t38);
    t40 = (t37 * t39);
    t41 = (t35 - t40);
    t30 = (t0 + 17345);
    t42 = *((int *)t30);
    t43 = (t41 + t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t31 + t47);
    t49 = *((unsigned char *)t48);
    t50 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t29, t49);
    t51 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t50);
    t52 = (t0 + 6336U);
    t53 = *((char **)t52);
    t52 = (t53 + 0);
    *((unsigned char *)t52) = t51;

LAB4:    t1 = (t0 + 17345);
    t6 = *((int *)t1);
    t2 = (t0 + 17349);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17345);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 1);
    t1 = (t0 + 17353);
    *((int *)t1) = t4;
    t5 = (t0 + 17357);
    *((int *)t5) = 0;
    t6 = t4;
    t7 = 0;

LAB2:    if (t6 >= t7)
        goto LAB3;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 9928);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    t1 = (t0 + 9448);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(164, ng0);
    t8 = (t0 + 6576U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 4000U);
    t11 = *((char **)t8);
    t12 = (14 + 1);
    t8 = (t0 + 5136U);
    t13 = *((char **)t8);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t8 = (t0 + 5136U);
    t16 = *((char **)t8);
    t17 = *((int *)t16);
    t8 = (t0 + 6456U);
    t18 = *((char **)t8);
    t19 = *((int *)t18);
    t20 = (t17 * t19);
    t21 = (t15 - t20);
    t8 = (t0 + 17353);
    t22 = *((int *)t8);
    t23 = (t21 + t22);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t23);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t11 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 4160U);
    t31 = *((char **)t30);
    t32 = (14 + 1);
    t30 = (t0 + 5136U);
    t33 = *((char **)t30);
    t34 = *((int *)t33);
    t35 = (t32 - t34);
    t30 = (t0 + 5136U);
    t36 = *((char **)t30);
    t37 = *((int *)t36);
    t30 = (t0 + 6456U);
    t38 = *((char **)t30);
    t39 = *((int *)t38);
    t40 = (t37 * t39);
    t41 = (t35 - t40);
    t30 = (t0 + 17353);
    t42 = *((int *)t30);
    t43 = (t41 + t42);
    t44 = (t43 - 0);
    t45 = (t44 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, t43);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t48 = (t31 + t47);
    t49 = *((unsigned char *)t48);
    t50 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t29, t49);
    t51 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t50);
    t52 = (t0 + 6576U);
    t53 = *((char **)t52);
    t52 = (t53 + 0);
    *((unsigned char *)t52) = t51;

LAB4:    t1 = (t0 + 17353);
    t6 = *((int *)t1);
    t2 = (t0 + 17357);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB5;

LAB6:    t3 = (t6 + -1);
    t6 = t3;
    t5 = (t0 + 17353);
    *((int *)t5) = t6;
    goto LAB2;

}

static void microblaze_v8_20_b_a_0476519131_3306564128_p_6(char *t0)
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

LAB0:    xsi_set_current_line(179, ng0);

LAB3:    t1 = (t0 + 3840U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 9992);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 9464);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void microblaze_v8_20_b_a_0476519131_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_0,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_1,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_2,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_3,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_4,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_5,(void *)microblaze_v8_20_b_a_0476519131_3306564128_p_6};
	xsi_register_didat("microblaze_v8_20_b_a_0476519131_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_0476519131_3306564128.didat");
	xsi_register_executes(pe);
}
