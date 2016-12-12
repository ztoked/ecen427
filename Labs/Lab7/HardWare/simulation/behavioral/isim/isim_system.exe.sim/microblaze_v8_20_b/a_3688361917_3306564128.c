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
static const char *ng0 = "Function int2std ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "_table0Base";
static const char *ng3 = "_table0";
static const char *ng4 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/debug.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1781471956_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


unsigned char microblaze_v8_20_b_a_3688361917_3306564128_sub_1308504215_229454594(char *t1, int t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 == 0);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = (unsigned char)3;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)2;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

char *microblaze_v8_20_b_a_3688361917_3306564128_sub_883744406_229454594(char *t1, char *t2, int t3, int t4)
{
    char t5[736];
    char t6[16];
    char t11[16];
    char t18[16];
    char t24[16];
    char t31[16];
    char t55[8];
    char t61[8];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned char t68;
    int t69;
    int t70;
    int t71;

LAB0:    t7 = ((STD_STANDARD) + 192);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t5 + 4U);
    xsi_create_unconstr_array_type(t9, ng2, t7, 1, t8);
    t10 = (t5 + 4U);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 15;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (15 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 116U);
    xsi_create_subtype(t13, ng3, t10, t11, 2);
    t16 = xsi_get_transient_memory(16U);
    memset(t16, 0, 16U);
    t17 = t16;
    *((unsigned char *)t17) = (unsigned char)48;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)49;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)50;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)51;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)52;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)53;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)54;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)55;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)56;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)57;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)65;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)66;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)67;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)68;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)69;
    t17 = (t17 + 1U);
    *((unsigned char *)t17) = (unsigned char)70;
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 15;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (15 - 0);
    t15 = (t21 * 1);
    t15 = (t15 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t15;
    t20 = (t5 + 228U);
    t22 = (t5 + 116U);
    t23 = (t20 + 88U);
    *((char **)t23) = t22;
    t25 = (t20 + 56U);
    *((char **)t25) = t24;
    memcpy(t24, t16, 16U);
    t26 = (t20 + 64U);
    t27 = (t22 + 80U);
    t28 = *((char **)t27);
    *((char **)t26) = t28;
    t29 = (t20 + 80U);
    *((unsigned int *)t29) = 16U;
    t30 = (t4 - 1);
    t15 = (t30 * 1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = t4;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (t4 - 1);
    t35 = (t34 * 1);
    t35 = (t35 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = (t5 + 348U);
    t36 = ((STD_STANDARD) + 1008);
    t37 = (t33 + 88U);
    *((char **)t37) = t36;
    t38 = xsi_get_memory(t15);
    t39 = (t33 + 56U);
    *((char **)t39) = t38;
    xsi_type_set_default_value(t36, t38, t31);
    t40 = (t33 + 64U);
    *((char **)t40) = t31;
    t41 = (t33 + 80U);
    *((unsigned int *)t41) = t15;
    t42 = (t33 + 136U);
    *((char **)t42) = t38;
    t43 = (t33 + 124U);
    *((int *)t43) = 0;
    t44 = (t33 + 128U);
    t45 = (t31 + 12U);
    t35 = *((unsigned int *)t45);
    t46 = (t35 - 1);
    *((int *)t44) = t46;
    t47 = (t33 + 120U);
    t49 = (t15 > 2147483644);
    if (t49 == 1)
        goto LAB2;

LAB3:    t50 = (t15 + 3);
    t51 = (t50 / 16);
    t48 = t51;

LAB4:    *((unsigned int *)t47) = t48;
    t52 = (t5 + 492U);
    t53 = ((STD_STANDARD) + 832);
    t54 = (t52 + 88U);
    *((char **)t54) = t53;
    t56 = (t52 + 56U);
    *((char **)t56) = t55;
    xsi_type_set_default_value(t53, t55, 0);
    t57 = (t52 + 80U);
    *((unsigned int *)t57) = 4U;
    t58 = (t5 + 612U);
    t59 = ((STD_STANDARD) + 832);
    t60 = (t58 + 88U);
    *((char **)t60) = t59;
    t62 = (t58 + 56U);
    *((char **)t62) = t61;
    xsi_type_set_default_value(t59, t61, 0);
    t63 = (t58 + 80U);
    *((unsigned int *)t63) = 4U;
    t64 = (t6 + 4U);
    *((int *)t64) = t3;
    t65 = (t6 + 8U);
    *((int *)t65) = t4;
    t66 = (t58 + 56U);
    t67 = *((char **)t66);
    t66 = (t67 + 0);
    *((int *)t66) = t3;
    t14 = t4;
    t21 = 1;

LAB5:    if (t14 >= t21)
        goto LAB6;

LAB8:    t7 = (t33 + 56U);
    t8 = *((char **)t7);
    t7 = (t31 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t8, t15);
    t9 = (t31 + 0U);
    t14 = *((int *)t9);
    t10 = (t31 + 4U);
    t21 = *((int *)t10);
    t12 = (t31 + 8U);
    t30 = *((int *)t12);
    t13 = (t2 + 0U);
    t16 = (t13 + 0U);
    *((int *)t16) = t14;
    t16 = (t13 + 4U);
    *((int *)t16) = t21;
    t16 = (t13 + 8U);
    *((int *)t16) = t30;
    t34 = (t21 - t14);
    t35 = (t34 * t30);
    t35 = (t35 + 1);
    t16 = (t13 + 12U);
    *((unsigned int *)t16) = t35;

LAB1:    t7 = (t33 + 80);
    t14 = *((int *)t7);
    t8 = (t33 + 136U);
    t9 = *((char **)t8);
    xsi_put_memory(t14, t9);
    t10 = (t5 + 116U);
    xsi_delete_type(t10, 2);
    return t0;
LAB2:    t48 = 2147483647;
    goto LAB4;

LAB6:    t7 = (t58 + 56U);
    t8 = *((char **)t7);
    t30 = *((int *)t8);
    t34 = xsi_vhdl_mod(t30, 16);
    t7 = (t52 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = t34;
    t7 = (t58 + 56U);
    t8 = *((char **)t7);
    t30 = *((int *)t8);
    t34 = (t30 / 16);
    t7 = (t58 + 56U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    *((int *)t7) = t34;
    t7 = (t20 + 56U);
    t8 = *((char **)t7);
    t7 = (t52 + 56U);
    t9 = *((char **)t7);
    t30 = *((int *)t9);
    t34 = (t30 - 0);
    t15 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t30);
    t35 = (1U * t15);
    t48 = (0 + t35);
    t7 = (t8 + t48);
    t68 = *((unsigned char *)t7);
    t10 = (t33 + 56U);
    t12 = *((char **)t10);
    t10 = (t31 + 0U);
    t46 = *((int *)t10);
    t13 = (t31 + 8U);
    t69 = *((int *)t13);
    t70 = (t14 - t46);
    t49 = (t70 * t69);
    t16 = (t31 + 4U);
    t71 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t46, t71, t69, t14);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t17 = (t12 + t51);
    *((unsigned char *)t17) = t68;

LAB7:    if (t14 == t21)
        goto LAB8;

LAB9:    t30 = (t14 + -1);
    t14 = t30;
    goto LAB5;

LAB10:;
}

int microblaze_v8_20_b_a_3688361917_3306564128_sub_1208652696_229454594(char *t1)
{
    char t2[128];
    char t7[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    unsigned char t14;

LAB0:    t4 = (t2 + 4U);
    t5 = ((STD_STANDARD) + 832);
    t6 = (t4 + 88U);
    *((char **)t6) = t5;
    t8 = (t4 + 56U);
    *((char **)t8) = t7;
    xsi_type_set_default_value(t5, t7, 0);
    t9 = (t4 + 80U);
    *((unsigned int *)t9) = 4U;
    t10 = (1 + 0);
    t11 = (t10 + 0);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = t11;
    t14 = (1 == 0);
    if (t14 != 0)
        goto LAB2;

LAB4:
LAB3:    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t0 = t10;

LAB1:    return t0;
LAB2:    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = *((int *)t6);
    t11 = (t10 + 1);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    *((int *)t5) = t11;
    goto LAB3;

LAB5:;
}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(591, ng4);

LAB3:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    t1 = (t0 + 68880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 67728);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_1(char *t0)
{
    char t11[16];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(603, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 67744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(604, ng4);
    t4 = (t0 + 5632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(607, ng4);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    memset(t4, (unsigned char)2, 8U);
    t5 = (t0 + 68944);
    t8 = (t5 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(605, ng4);
    t4 = (t0 + 26912U);
    t12 = *((char **)t4);
    t4 = (t0 + 123532U);
    t13 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t11, t12, t4, 1);
    t14 = (t0 + 68944);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t13, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(612, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124945);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69008);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67760);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(613, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124953);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69072);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67776);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69072);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(614, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124961);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69136);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67792);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(615, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124969);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69200);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67808);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69200);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(616, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124977);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69264);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67824);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
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
    char *t22;

LAB0:    xsi_set_current_line(617, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124985);
    t8 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 69328);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 67840);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 69328);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(735, ng4);

LAB3:    t1 = (t0 + 69392);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 12U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(736, ng4);

LAB3:    t1 = (t0 + 69456);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    int t44;
    char *t45;
    int t47;
    char *t48;
    char *t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(741, ng4);
    t1 = (t0 + 26912U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 124993);
    t8 = xsi_mem_cmp(t6, t1, 4U);
    if (t8 == 1)
        goto LAB3;

LAB18:    t9 = (t0 + 124997);
    t11 = xsi_mem_cmp(t9, t1, 4U);
    if (t11 == 1)
        goto LAB4;

LAB19:    t12 = (t0 + 125001);
    t14 = xsi_mem_cmp(t12, t1, 4U);
    if (t14 == 1)
        goto LAB5;

LAB20:    t15 = (t0 + 125005);
    t17 = xsi_mem_cmp(t15, t1, 4U);
    if (t17 == 1)
        goto LAB6;

LAB21:    t18 = (t0 + 125009);
    t20 = xsi_mem_cmp(t18, t1, 4U);
    if (t20 == 1)
        goto LAB7;

LAB22:    t21 = (t0 + 125013);
    t23 = xsi_mem_cmp(t21, t1, 4U);
    if (t23 == 1)
        goto LAB8;

LAB23:    t24 = (t0 + 125017);
    t26 = xsi_mem_cmp(t24, t1, 4U);
    if (t26 == 1)
        goto LAB9;

LAB24:    t27 = (t0 + 125021);
    t29 = xsi_mem_cmp(t27, t1, 4U);
    if (t29 == 1)
        goto LAB10;

LAB25:    t30 = (t0 + 125025);
    t32 = xsi_mem_cmp(t30, t1, 4U);
    if (t32 == 1)
        goto LAB11;

LAB26:    t33 = (t0 + 125029);
    t35 = xsi_mem_cmp(t33, t1, 4U);
    if (t35 == 1)
        goto LAB12;

LAB27:    t36 = (t0 + 125033);
    t38 = xsi_mem_cmp(t36, t1, 4U);
    if (t38 == 1)
        goto LAB13;

LAB28:    t39 = (t0 + 125037);
    t41 = xsi_mem_cmp(t39, t1, 4U);
    if (t41 == 1)
        goto LAB14;

LAB29:    t42 = (t0 + 125041);
    t44 = xsi_mem_cmp(t42, t1, 4U);
    if (t44 == 1)
        goto LAB15;

LAB30:    t45 = (t0 + 125045);
    t47 = xsi_mem_cmp(t45, t1, 4U);
    if (t47 == 1)
        goto LAB16;

LAB31:
LAB17:    xsi_set_current_line(756, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (0 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);

LAB2:    t1 = (t0 + 67856);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(742, ng4);
    t48 = (t0 + 29952U);
    t49 = *((char **)t48);
    t50 = (0 - 0);
    t51 = (t50 * 1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t48 = (t49 + t53);
    t54 = *((unsigned char *)t48);
    t55 = (t0 + 69520);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    *((unsigned char *)t59) = t54;
    xsi_driver_first_trans_fast(t55);
    goto LAB2;

LAB4:    xsi_set_current_line(743, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (1 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB5:    xsi_set_current_line(744, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (2 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    xsi_set_current_line(745, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (3 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB7:    xsi_set_current_line(746, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (4 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB8:    xsi_set_current_line(747, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (5 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB9:    xsi_set_current_line(748, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (6 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB10:    xsi_set_current_line(749, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (7 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB11:    xsi_set_current_line(750, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (8 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB12:    xsi_set_current_line(751, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (9 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB13:    xsi_set_current_line(752, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (10 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB14:    xsi_set_current_line(753, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (11 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB15:    xsi_set_current_line(754, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (12 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB16:    xsi_set_current_line(755, ng4);
    t1 = (t0 + 29952U);
    t2 = *((char **)t1);
    t8 = (13 - 0);
    t3 = (t8 * 1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t54 = *((unsigned char *)t1);
    t6 = (t0 + 69520);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t54;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB32:;
}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_11(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(794, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 67872);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(795, ng4);
    t4 = (t0 + 5792U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(813, ng4);
    t2 = (t0 + 25312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47008U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(814, ng4);
    t2 = (t0 + 26272U);
    t4 = *((char **)t2);
    t2 = (t0 + 47128U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 16U);
    xsi_set_current_line(815, ng4);
    t2 = (t0 + 21952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47368U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(816, ng4);
    t2 = (t0 + 29792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47488U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(817, ng4);
    t2 = (t0 + 26752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(820, ng4);
    t2 = (t0 + 47248U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;

LAB15:    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(796, ng4);
    t4 = (t0 + 47008U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t4 = (t0 + 69584);
    t13 = (t4 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_delta(t4, 16U, 1, 0LL);
    xsi_set_current_line(797, ng4);
    t2 = (t0 + 17472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(800, ng4);
    t2 = (t0 + 69584);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 17U, 1, 0LL);

LAB12:    xsi_set_current_line(802, ng4);
    t2 = (t0 + 21472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 18U, 1, 0LL);
    xsi_set_current_line(803, ng4);
    t2 = (t0 + 21792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 19U, 1, 0LL);
    xsi_set_current_line(804, ng4);
    t2 = (t0 + 21632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 20U, 1, 0LL);
    xsi_set_current_line(805, ng4);
    t2 = (t0 + 6752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 21U, 1, 0LL);
    xsi_set_current_line(806, ng4);
    t2 = (t0 + 6912U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 22U, 1, 0LL);
    xsi_set_current_line(807, ng4);
    t2 = (t0 + 47128U);
    t4 = *((char **)t2);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_delta(t2, 0U, 16U, 0LL);
    xsi_set_current_line(808, ng4);
    t2 = (t0 + 47248U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 23U, 1, 0LL);
    xsi_set_current_line(809, ng4);
    t2 = (t0 + 47368U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 24U, 1, 0LL);
    xsi_set_current_line(810, ng4);
    t2 = (t0 + 6592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 25U, 1, 0LL);
    xsi_set_current_line(811, ng4);
    t2 = (t0 + 47488U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 26U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(798, ng4);
    t2 = (t0 + 69584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 17U, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(818, ng4);
    t2 = (t0 + 47248U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    goto LAB15;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(829, ng4);
    t1 = (t0 + 26912U);
    t2 = *((char **)t1);
    t1 = (t0 + 123532U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 27);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(834, ng4);
    t1 = (t0 + 69648);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 67888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(831, ng4);
    t4 = (t0 + 21312U);
    t5 = *((char **)t4);
    t4 = (t0 + 26912U);
    t6 = *((char **)t4);
    t4 = (t0 + 123532U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t4);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 26, 1, t7);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t12 = (t5 + t11);
    t13 = *((unsigned char *)t12);
    t14 = (t0 + 69648);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t13;
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_13(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(844, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 67904);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(845, ng4);
    t4 = (t0 + 23072U);
    t8 = *((char **)t4);
    t9 = (1 - 0);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 69712);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 31U);
    xsi_driver_first_trans_delta(t12, 0U, 31U, 0LL);
    xsi_set_current_line(846, ng4);
    t2 = (t0 + 5152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 69712);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t2, 31U, 1, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_14(char *t0)
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
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(855, ng4);
    t2 = (t0 + 5912U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 67920);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(856, ng4);
    t4 = (t0 + 18272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 5952U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(857, ng4);
    t4 = (t0 + 23072U);
    t11 = *((char **)t4);
    t12 = (31 + 1);
    t13 = (t12 - 9U);
    t14 = (t13 - 0);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t4 = (t11 + t16);
    t17 = (t0 + 69776);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t4, 9U);
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_15(char *t0)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(865, ng4);
    t1 = (t0 + 20512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5912U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 67936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(866, ng4);
    t1 = (t0 + 69840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(868, ng4);
    t2 = (t0 + 18272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(869, ng4);
    t2 = (t0 + 23072U);
    t7 = *((char **)t2);
    t13 = (31 - 9U);
    t14 = (t13 + 1);
    t2 = (t0 + 45208U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t14 + t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t7 + t20);
    t21 = *((unsigned char *)t2);
    t22 = (t0 + 69840);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_16(char *t0)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(877, ng4);
    t1 = (t0 + 20672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5912U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 67952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(878, ng4);
    t1 = (t0 + 69904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(880, ng4);
    t2 = (t0 + 18272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(881, ng4);
    t2 = (t0 + 23072U);
    t7 = *((char **)t2);
    t13 = (31 - 9U);
    t14 = (t13 + 1);
    t2 = (t0 + 45328U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t14 + t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t7 + t20);
    t21 = *((unsigned char *)t2);
    t22 = (t0 + 69904);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_17(char *t0)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(893, ng4);
    t1 = (t0 + 27712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5912U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 67968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(894, ng4);
    t1 = (t0 + 69968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(896, ng4);
    t2 = (t0 + 18272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(897, ng4);
    t2 = (t0 + 23072U);
    t7 = *((char **)t2);
    t13 = (31 - 9U);
    t14 = (t13 + 1);
    t2 = (t0 + 45688U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t14 + t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t7 + t20);
    t21 = *((unsigned char *)t2);
    t22 = (t0 + 69968);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_18(char *t0)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(909, ng4);
    t1 = (t0 + 28192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5912U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 67984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(910, ng4);
    t1 = (t0 + 70032);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(912, ng4);
    t2 = (t0 + 18272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5952U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(913, ng4);
    t2 = (t0 + 23072U);
    t7 = *((char **)t2);
    t13 = (31 - 9U);
    t14 = (t13 + 1);
    t2 = (t0 + 45808U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t14 + t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t2 = (t7 + t20);
    t21 = *((unsigned char *)t2);
    t22 = (t0 + 70032);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_19(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(926, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(927, ng4);
    t4 = (t0 + 18752U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 70096);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(928, ng4);
    t2 = (t0 + 18752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(935, ng4);
    t2 = (t0 + 70160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(929, ng4);
    t2 = (t0 + 26912U);
    t5 = *((char **)t2);
    t14 = (7 - 4);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t5 + t16);
    t8 = (t0 + 125049);
    t6 = 1;
    if (5U == 5U)
        goto LAB14;

LAB15:    t6 = 0;

LAB16:    if (t6 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(932, ng4);
    t2 = (t0 + 70160);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(930, ng4);
    t13 = (t0 + 70160);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB12;

LAB14:    t17 = 0;

LAB17:    if (t17 < 5U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t11 = (t2 + t17);
    t12 = (t8 + t17);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB15;

LAB19:    t17 = (t17 + 1);
    goto LAB17;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_20(char *t0)
{
    char t15[16];
    char t16[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(942, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68016);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(943, ng4);
    t4 = (t0 + 70224);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(944, ng4);
    t2 = (t0 + 23712U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(945, ng4);
    t2 = (t0 + 23072U);
    t5 = *((char **)t2);
    t12 = (1 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t8 = (t0 + 5152U);
    t9 = *((char **)t8);
    t6 = *((unsigned char *)t9);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t16 + 0U);
    t17 = (t11 + 0U);
    *((int *)t17) = 1;
    t17 = (t11 + 4U);
    *((int *)t17) = 31;
    t17 = (t11 + 8U);
    *((int *)t17) = 1;
    t18 = (31 - 1);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t11 + 12U);
    *((unsigned int *)t17) = t19;
    t8 = xsi_base_array_concat(t8, t15, t10, (char)97, t2, t16, (char)99, t6, (char)101);
    t19 = (31U + 1U);
    t7 = (32U != t19);
    if (t7 == 1)
        goto LAB11;

LAB12:    t17 = (t0 + 70288);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 32U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(946, ng4);
    t2 = (t0 + 70224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_size_not_matching(32U, t19, 0);
    goto LAB12;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(951, ng4);

LAB3:    t1 = (t0 + 23552U);
    t2 = *((char **)t1);
    t1 = (t0 + 70352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 68032);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_22(char *t0)
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

LAB0:    xsi_set_current_line(955, ng4);
    t2 = (t0 + 4952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(956, ng4);
    t4 = (t0 + 5792U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4992U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(957, ng4);
    t4 = (t0 + 23392U);
    t11 = *((char **)t4);
    t4 = (t0 + 70416);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 33U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(967, ng4);
    t1 = (t0 + 26912U);
    t2 = *((char **)t1);
    t1 = (t0 + 123532U);
    t3 = ieee_p_1242562249_sub_1781471956_1035706684(IEEE_P_1242562249, t2, t1, 33);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(972, ng4);
    t1 = (t0 + 70480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 68064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(969, ng4);
    t4 = (t0 + 23232U);
    t5 = *((char **)t4);
    t4 = (t0 + 26912U);
    t6 = *((char **)t4);
    t4 = (t0 + 123532U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t4);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 32, 1, t7);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t12 = (t5 + t11);
    t13 = *((unsigned char *)t12);
    t14 = (t0 + 70480);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t13;
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_24(char *t0)
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(982, ng4);
    t1 = (t0 + 22112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5912U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 68080);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(983, ng4);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t5 = t1;
    memset(t5, (unsigned char)2, 2U);
    t6 = (t0 + 70544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(985, ng4);
    t2 = (t0 + 18592U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 5952U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(986, ng4);
    t2 = (t0 + 23072U);
    t7 = *((char **)t2);
    t15 = (31 - 2U);
    t16 = (t15 + 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t7 + t19);
    t8 = (t0 + 70544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t2, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(998, ng4);
    t1 = (t0 + 18432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 19072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 18112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(1005, ng4);
    t1 = (t0 + 70608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 68096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(999, ng4);
    t1 = (t0 + 17632U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 70608);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(1001, ng4);
    t1 = (t0 + 17792U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 70608);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(1003, ng4);
    t1 = (t0 + 17952U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 70608);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_26(char *t0)
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

LAB0:    xsi_set_current_line(1018, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68112);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1019, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1032, ng4);
    t2 = (t0 + 18912U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 71184);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1033, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (0 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70672);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1034, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70736);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1035, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (2 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70800);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1036, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (3 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70864);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1037, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (4 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (4 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70928);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1038, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (5 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (5 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 70992);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1039, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t14 = (6 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t18 = (6 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t5 = (t8 + t21);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t10 = (t0 + 71056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    *((unsigned char *)t22) = t7;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1040, ng4);
    t2 = (t0 + 47728U);
    t4 = *((char **)t2);
    t2 = (t0 + 47848U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t4, 7U);
    xsi_set_current_line(1041, ng4);
    t2 = (t0 + 20032U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(1042, ng4);
    t2 = (t0 + 19872U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(1043, ng4);
    t2 = (t0 + 19552U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(1044, ng4);
    t2 = (t0 + 22272U);
    t4 = *((char **)t2);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t15 = (3 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    memcpy(t2, t4, 2U);
    xsi_set_current_line(1045, ng4);
    t2 = (t0 + 19712U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t14 = (5 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(1046, ng4);
    t2 = (t0 + 23872U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 47728U);
    t5 = *((char **)t2);
    t14 = (6 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t5 + t17);
    *((unsigned char *)t2) = t1;
    xsi_set_current_line(1047, ng4);
    t2 = (t0 + 47848U);
    t4 = *((char **)t2);
    t14 = (6 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 71120);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1020, ng4);
    t4 = (t0 + 70672);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1021, ng4);
    t2 = (t0 + 70736);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1022, ng4);
    t2 = (t0 + 70800);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1023, ng4);
    t2 = (t0 + 70864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1024, ng4);
    t2 = (t0 + 70928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1025, ng4);
    t2 = (t0 + 70992);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1026, ng4);
    t2 = (t0 + 71056);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1027, ng4);
    t2 = xsi_get_transient_memory(7U);
    memset(t2, 0, 7U);
    t4 = t2;
    memset(t4, (unsigned char)2, 7U);
    t5 = (t0 + 47728U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t2, 7U);
    xsi_set_current_line(1028, ng4);
    t2 = xsi_get_transient_memory(7U);
    memset(t2, 0, 7U);
    t4 = t2;
    memset(t4, (unsigned char)2, 7U);
    t5 = (t0 + 47848U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t2, 7U);
    xsi_set_current_line(1029, ng4);
    t2 = (t0 + 71120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1030, ng4);
    t2 = (t0 + 71184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_27(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(1054, ng4);

LAB3:    t1 = (t0 + 19392U);
    t2 = *((char **)t1);
    t1 = (t0 + 45928U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    t11 = (t0 + 71248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 68128);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_28(char *t0)
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

LAB0:    xsi_set_current_line(1055, ng4);

LAB3:    t1 = (t0 + 19392U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 71312);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 68144);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_29(char *t0)
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
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(1056, ng4);

LAB3:    t1 = (t0 + 19392U);
    t2 = *((char **)t1);
    t1 = (t0 + 45448U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    t11 = (t0 + 71376);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 68160);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_30(char *t0)
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
    char *t11;

LAB0:    xsi_set_current_line(1064, ng4);
    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 6072U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 68176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1065, ng4);
    t1 = (t0 + 71440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(1067, ng4);
    t2 = (t0 + 71440);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 6112U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1099, ng4);

LAB3:    t1 = (t0 + 71504);
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

static void microblaze_v8_20_b_a_3688361917_3306564128_p_32(char *t0)
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

LAB0:    xsi_set_current_line(1137, ng4);
    t1 = (t0 + 10272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t8 = (t0 + 71568);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 68192);
    *((int *)t13) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 71568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1138, ng4);

LAB3:    t1 = (t0 + 12672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 71632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 68208);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1139, ng4);

LAB3:    t1 = (t0 + 11712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 71696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 68224);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1140, ng4);

LAB3:    t1 = (t0 + 71760);
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

static void microblaze_v8_20_b_a_3688361917_3306564128_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(1141, ng4);

LAB3:    t1 = (t0 + 71824);
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

static void microblaze_v8_20_b_a_3688361917_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1142, ng4);

LAB3:    t1 = (t0 + 10432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 71888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 68240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1145, ng4);

LAB3:    t1 = (t0 + 27072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 71952);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 68256);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_39(char *t0)
{
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned char t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(1153, ng4);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 72016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(1154, ng4);
    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    t8 = (0 - 0);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t3 = (t0 + 125054);
    t11 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 68272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1155, ng4);
    t7 = (t0 + 45088U);
    t13 = *((char **)t7);
    t14 = *((int *)t13);
    t15 = (t14 - 1);
    t7 = (t0 + 125058);
    *((int *)t7) = 0;
    t16 = (t0 + 125062);
    *((int *)t16) = t15;
    t17 = 0;
    t18 = t15;

LAB11:    if (t17 <= t18)
        goto LAB12;

LAB14:    goto LAB3;

LAB5:    t12 = 0;

LAB8:    if (t12 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t5 = (t1 + t12);
    t6 = (t3 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    xsi_set_current_line(1156, ng4);
    t19 = (t0 + 125058);
    t20 = (t0 + 5472U);
    t21 = *((char **)t20);
    t22 = (4 - 0);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t20 = (t21 + t24);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 4;
    t27 = (t26 + 4U);
    *((int *)t27) = 7;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (7 - 4);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t30 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t20, t25);
    t31 = *((int *)t19);
    t32 = (t31 == t30);
    if (t32 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB13:    t1 = (t0 + 125058);
    t17 = *((int *)t1);
    t2 = (t0 + 125062);
    t18 = *((int *)t2);
    if (t17 == t18)
        goto LAB14;

LAB18:    t14 = (t17 + 1);
    t17 = t14;
    t3 = (t0 + 125058);
    *((int *)t3) = t17;
    goto LAB11;

LAB15:    xsi_set_current_line(1157, ng4);
    t27 = (t0 + 125058);
    t33 = *((int *)t27);
    t34 = (t33 - 0);
    t29 = (t34 * 1);
    t35 = (1 * t29);
    t36 = (0U + t35);
    t37 = (t0 + 72016);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)3;
    xsi_driver_first_trans_delta(t37, t36, 1, 0LL);
    goto LAB16;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_40(char *t0)
{
    unsigned char t1;
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
    int t15;
    int t16;
    int t17;
    unsigned char t18;
    char *t19;
    int t20;
    unsigned char t21;
    int t22;

LAB0:    xsi_set_current_line(1265, ng4);
    t1 = (1 == 0);
    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(1268, ng4);
    t2 = (t0 + 48088U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(1269, ng4);
    t4 = (1 - 1);
    t2 = (t0 + 125066);
    *((int *)t2) = 0;
    t3 = (t0 + 125070);
    *((int *)t3) = t4;
    t5 = 0;
    t15 = t4;

LAB5:    if (t5 <= t15)
        goto LAB6;

LAB8:    xsi_set_current_line(1272, ng4);
    t2 = (t0 + 48088U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (t0 + 72080);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB3:    xsi_set_current_line(1275, ng4);
    t2 = (t0 + 48208U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    xsi_set_current_line(1277, ng4);
    t1 = (0 > 0);
    if (t1 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(1283, ng4);
    t1 = (0 > 0);
    if (t1 != 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(1289, ng4);
    t2 = (t0 + 48208U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (t0 + 72144);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);
    t2 = (t0 + 68288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1266, ng4);
    t2 = (t0 + 26432U);
    t3 = *((char **)t2);
    t4 = (0 + 0);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t2 = (t3 + t8);
    t9 = *((unsigned char *)t2);
    t10 = (t0 + 72080);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB6:    xsi_set_current_line(1270, ng4);
    t10 = (t0 + 48088U);
    t11 = *((char **)t10);
    t1 = *((unsigned char *)t11);
    t10 = (t0 + 26432U);
    t12 = *((char **)t10);
    t10 = (t0 + 125066);
    t16 = *((int *)t10);
    t17 = (t16 - 0);
    t6 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t10));
    t7 = (1U * t6);
    t8 = (0 + t7);
    t13 = (t12 + t8);
    t9 = *((unsigned char *)t13);
    t18 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t1, t9);
    t14 = (t0 + 48088U);
    t19 = *((char **)t14);
    t14 = (t19 + 0);
    *((unsigned char *)t14) = t18;

LAB7:    t2 = (t0 + 125066);
    t5 = *((int *)t2);
    t3 = (t0 + 125070);
    t15 = *((int *)t3);
    if (t5 == t15)
        goto LAB8;

LAB9:    t4 = (t5 + 1);
    t5 = t4;
    t10 = (t0 + 125066);
    *((int *)t10) = t5;
    goto LAB5;

LAB10:    xsi_set_current_line(1278, ng4);
    t4 = (0 - 1);
    t2 = (t0 + 125074);
    *((int *)t2) = 0;
    t3 = (t0 + 125078);
    *((int *)t3) = t4;
    t5 = 0;
    t15 = t4;

LAB13:    if (t5 <= t15)
        goto LAB14;

LAB16:    goto LAB11;

LAB14:    xsi_set_current_line(1279, ng4);
    t10 = (t0 + 48208U);
    t11 = *((char **)t10);
    t9 = *((unsigned char *)t11);
    t10 = (t0 + 26432U);
    t12 = *((char **)t10);
    t10 = (t0 + 125074);
    t16 = *((int *)t10);
    t17 = (t16 + 1);
    t20 = (t17 - 0);
    t6 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, t17);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t13 = (t12 + t8);
    t18 = *((unsigned char *)t13);
    t21 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t18);
    t14 = (t0 + 48208U);
    t19 = *((char **)t14);
    t14 = (t19 + 0);
    *((unsigned char *)t14) = t21;

LAB15:    t2 = (t0 + 125074);
    t5 = *((int *)t2);
    t3 = (t0 + 125078);
    t15 = *((int *)t3);
    if (t5 == t15)
        goto LAB16;

LAB17:    t4 = (t5 + 1);
    t5 = t4;
    t10 = (t0 + 125074);
    *((int *)t10) = t5;
    goto LAB13;

LAB18:    xsi_set_current_line(1284, ng4);
    t4 = (0 - 1);
    t2 = (t0 + 125082);
    *((int *)t2) = 0;
    t3 = (t0 + 125086);
    *((int *)t3) = t4;
    t5 = 0;
    t15 = t4;

LAB21:    if (t5 <= t15)
        goto LAB22;

LAB24:    goto LAB19;

LAB22:    xsi_set_current_line(1285, ng4);
    t10 = (t0 + 48208U);
    t11 = *((char **)t10);
    t9 = *((unsigned char *)t11);
    t10 = (t0 + 26432U);
    t12 = *((char **)t10);
    t10 = (t0 + 125082);
    t16 = *((int *)t10);
    t17 = (t16 + 1);
    t20 = (t17 + 0);
    t22 = (t20 - 0);
    t6 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, t20);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t13 = (t12 + t8);
    t18 = *((unsigned char *)t13);
    t21 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t18);
    t14 = (t0 + 48208U);
    t19 = *((char **)t14);
    t14 = (t19 + 0);
    *((unsigned char *)t14) = t21;

LAB23:    t2 = (t0 + 125082);
    t5 = *((int *)t2);
    t3 = (t0 + 125086);
    t15 = *((int *)t3);
    if (t5 == t15)
        goto LAB24;

LAB25:    t4 = (t5 + 1);
    t5 = t4;
    t10 = (t0 + 125082);
    *((int *)t10) = t5;
    goto LAB21;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_41(char *t0)
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

LAB0:    xsi_set_current_line(1298, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68304);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1299, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1303, ng4);
    t2 = (t0 + 22432U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 72208);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1304, ng4);
    t2 = (t0 + 22752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 72272);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1300, ng4);
    t4 = (t0 + 72208);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1301, ng4);
    t2 = (t0 + 72272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_42(char *t0)
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(1311, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1312, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1316, ng4);
    t2 = (t0 + 72400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1317, ng4);
    t2 = (t0 + 22592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1322, ng4);
    t2 = (t0 + 22912U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(1333, ng4);
    t2 = (t0 + 25312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1313, ng4);
    t4 = xsi_get_transient_memory(33U);
    memset(t4, 0, 33U);
    t10 = t4;
    memset(t10, (unsigned char)2, 33U);
    t11 = (t0 + 72336);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 33U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1314, ng4);
    t2 = (t0 + 72400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1318, ng4);
    t2 = (t0 + 10752U);
    t5 = *((char **)t2);
    t2 = (t0 + 72336);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_delta(t2, 0U, 32U, 0LL);
    xsi_set_current_line(1319, ng4);
    t2 = (t0 + 10912U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 27072U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 72336);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t6;
    xsi_driver_first_trans_delta(t2, 32U, 1, 0LL);
    xsi_set_current_line(1320, ng4);
    t2 = (t0 + 72400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(1323, ng4);
    t2 = xsi_get_transient_memory(33U);
    memset(t2, 0, 33U);
    t5 = t2;
    memset(t5, (unsigned char)2, 33U);
    t8 = (t0 + 72336);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 33U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(1324, ng4);
    t1 = (0 != 0);
    if (t1 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(1328, ng4);
    t2 = (t0 + 11072U);
    t4 = *((char **)t2);
    t2 = (t0 + 72336);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 15U);
    xsi_driver_first_trans_delta(t2, 17U, 15U, 0LL);

LAB18:    xsi_set_current_line(1330, ng4);
    t2 = (t0 + 72400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    xsi_set_current_line(1325, ng4);
    t2 = (t0 + 11072U);
    t4 = *((char **)t2);
    t16 = (21 - 17);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t5 = (t0 + 72336);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 11U);
    xsi_driver_first_trans_delta(t5, 21U, 11U, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(1334, ng4);
    t2 = (t0 + 29632U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    if (t6 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(1335, ng4);
    t2 = (t0 + 10592U);
    t8 = *((char **)t2);
    t2 = (t0 + 72336);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 32U);
    xsi_driver_first_trans_delta(t2, 0U, 32U, 0LL);
    xsi_set_current_line(1336, ng4);
    t2 = (t0 + 72336);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 32U, 1, 0LL);
    goto LAB24;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_43(char *t0)
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

LAB0:    xsi_set_current_line(1346, ng4);

LAB3:    t1 = (t0 + 26112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 72464);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 68336);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_44(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1347, ng4);

LAB3:    t1 = (t0 + 24032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 72528);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 68352);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_45(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(1350, ng4);

LAB3:    t2 = (t0 + 7872U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    t2 = (t0 + 72592);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast(t2);

LAB2:    t11 = (t0 + 68368);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t2 = (t0 + 20192U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_46(char *t0)
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

LAB0:    xsi_set_current_line(1351, ng4);

LAB3:    t1 = (t0 + 28192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6752U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 72656);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 68384);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_47(char *t0)
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

LAB0:    xsi_set_current_line(1352, ng4);

LAB3:    t1 = (t0 + 28192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6912U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 72720);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 68400);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_48(char *t0)
{
    char t18[16];
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
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(1357, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68416);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1358, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1363, ng4);
    t2 = (t0 + 20352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1368, ng4);
    t2 = (t0 + 28992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1359, ng4);
    t4 = (t0 + 72784);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1360, ng4);
    t2 = (t0 + 72848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1361, ng4);
    t2 = (t0 + 125090);
    t5 = (t0 + 72912);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(1364, ng4);
    t2 = (t0 + 72848);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1365, ng4);
    t2 = (t0 + 19392U);
    t4 = *((char **)t2);
    t2 = (t0 + 45568U);
    t5 = *((char **)t2);
    t14 = *((int *)t5);
    t15 = (t14 - 0);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t8 = (t0 + 72912);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB12;

LAB14:    xsi_set_current_line(1369, ng4);
    t2 = (t0 + 21152U);
    t5 = *((char **)t2);
    t2 = (t0 + 123340U);
    t8 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t18, t5, t2, 1);
    t10 = (t0 + 72912);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memcpy(t19, t8, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(1370, ng4);
    t2 = (t0 + 20512U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB20;

LAB21:    t1 = (unsigned char)0;

LAB22:    if (t1 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(1374, ng4);
    t2 = (t0 + 72784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(1371, ng4);
    t12 = (t0 + 72848);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(1372, ng4);
    t2 = (t0 + 72784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB18;

LAB20:    t2 = (t0 + 21152U);
    t5 = *((char **)t2);
    t2 = (t0 + 125092);
    t7 = 1;
    if (2U == 2U)
        goto LAB23;

LAB24:    t7 = 0;

LAB25:    t1 = t7;
    goto LAB22;

LAB23:    t15 = 0;

LAB26:    if (t15 < 2U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t10 = (t5 + t15);
    t11 = (t2 + t15);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB24;

LAB28:    t15 = (t15 + 1);
    goto LAB26;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_49(char *t0)
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

LAB0:    xsi_set_current_line(1387, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68432);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1388, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 29152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1389, ng4);
    t4 = (t0 + 72976);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1390, ng4);
    t2 = (t0 + 73040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1392, ng4);
    t2 = (t0 + 8512U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1395, ng4);
    t2 = (t0 + 72976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    xsi_set_current_line(1397, ng4);
    t2 = (t0 + 29312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(1400, ng4);
    t2 = (t0 + 73040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB17:    goto LAB9;

LAB13:    xsi_set_current_line(1393, ng4);
    t2 = (t0 + 72976);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(1398, ng4);
    t2 = (t0 + 73040);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_50(char *t0)
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

LAB0:    xsi_set_current_line(1408, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68448);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1409, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 29152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1410, ng4);
    t4 = (t0 + 73104);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(1412, ng4);
    t2 = (t0 + 8352U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1415, ng4);
    t2 = (t0 + 73104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(1413, ng4);
    t2 = (t0 + 73104);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_51(char *t0)
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

LAB0:    xsi_set_current_line(1423, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68464);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1424, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1427, ng4);
    t2 = (t0 + 24032U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 73168);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1425, ng4);
    t4 = (t0 + 73168);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_52(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(1711, ng4);

LAB3:    t2 = (t0 + 28512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 28032U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    if (t7 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    t1 = t5;

LAB7:    t2 = (t0 + 73232);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_fast(t2);

LAB2:    t14 = (t0 + 68480);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (t0 + 8032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t5 = t9;
    goto LAB10;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_53(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1713, ng4);

LAB3:    t1 = (t0 + 27872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 73296);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 68496);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_54(char *t0)
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

LAB0:    xsi_set_current_line(1718, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1719, ng4);
    t4 = (t0 + 6272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1724, ng4);
    t2 = (t0 + 27712U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1729, ng4);
    t2 = (t0 + 12672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(1732, ng4);
    t2 = (t0 + 27712U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 48328U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1720, ng4);
    t4 = (t0 + 73360);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1721, ng4);
    t2 = (t0 + 48328U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB9;

LAB11:    xsi_set_current_line(1725, ng4);
    t2 = (t0 + 73360);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t2 = (t0 + 34912U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = (!(t15));
    t1 = t16;
    goto LAB16;

LAB17:    t2 = (t0 + 48328U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB19;

LAB20:    xsi_set_current_line(1730, ng4);
    t2 = (t0 + 73360);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_55(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1737, ng4);

LAB3:    t1 = (t0 + 28352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 73424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 68528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_56(char *t0)
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

LAB0:    xsi_set_current_line(1742, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68544);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1743, ng4);
    t4 = (t0 + 6272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1748, ng4);
    t2 = (t0 + 28192U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1753, ng4);
    t2 = (t0 + 12672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(1756, ng4);
    t2 = (t0 + 28192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 48448U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1744, ng4);
    t4 = (t0 + 73488);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1745, ng4);
    t2 = (t0 + 48448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB9;

LAB11:    xsi_set_current_line(1749, ng4);
    t2 = (t0 + 73488);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t2 = (t0 + 34912U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = (!(t15));
    t1 = t16;
    goto LAB16;

LAB17:    t2 = (t0 + 48448U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB19;

LAB20:    xsi_set_current_line(1754, ng4);
    t2 = (t0 + 73488);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_57(char *t0)
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

LAB0:    xsi_set_current_line(1761, ng4);

LAB3:    t1 = (t0 + 24672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24832U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 24992U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 73552);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 68560);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_58(char *t0)
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

LAB0:    xsi_set_current_line(1771, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1772, ng4);
    t4 = (t0 + 6272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1776, ng4);
    t2 = (t0 + 24832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1780, ng4);
    t2 = (t0 + 11232U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1773, ng4);
    t4 = (t0 + 73616);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1774, ng4);
    t2 = xsi_get_transient_memory(1U);
    memset(t2, 0, 1U);
    t4 = t2;
    memset(t4, (unsigned char)2, 1U);
    t5 = (t0 + 73680);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 1U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(1777, ng4);
    t2 = (t0 + 73616);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1778, ng4);
    t2 = (t0 + 26432U);
    t4 = *((char **)t2);
    t2 = (t0 + 73680);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 1U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    xsi_set_current_line(1781, ng4);
    t2 = (t0 + 73616);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    t2 = (t0 + 12032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t1 = t9;
    goto LAB19;

LAB20:    t2 = (t0 + 35072U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t3 = t7;
    goto LAB22;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_59(char *t0)
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
    char *t14;
    char *t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(1789, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1790, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10272U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1791, ng4);
    t4 = xsi_get_transient_memory(1U);
    memset(t4, 0, 1U);
    t10 = t4;
    memset(t10, (unsigned char)2, 1U);
    t11 = (t0 + 73744);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1792, ng4);
    t2 = (t0 + 73808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1794, ng4);
    t2 = (t0 + 24672U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 24832U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t16 = (t9 == (unsigned char)3);
    t3 = t16;

LAB18:    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(1800, ng4);
    t2 = (t0 + 24992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB24;

LAB26:
LAB25:    xsi_set_current_line(1806, ng4);
    t2 = (t0 + 25792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 73808);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(1795, ng4);
    t2 = xsi_get_transient_memory(1U);
    memset(t2, 0, 1U);
    t10 = t2;
    memset(t10, (unsigned char)2, 1U);
    t11 = (t0 + 73744);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1796, ng4);
    t2 = (t0 + 45088U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t18 = (t17 - 1);
    t2 = (t0 + 125094);
    *((int *)t2) = 0;
    t5 = (t0 + 125098);
    *((int *)t5) = t18;
    t19 = 0;
    t20 = t18;

LAB19:    if (t19 <= t20)
        goto LAB20;

LAB22:    goto LAB14;

LAB16:    t3 = (unsigned char)1;
    goto LAB18;

LAB20:    xsi_set_current_line(1797, ng4);
    t8 = (t0 + 26432U);
    t10 = *((char **)t8);
    t8 = (t0 + 125094);
    t21 = *((int *)t8);
    t22 = (t21 - 0);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t8));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t11 = (t10 + t25);
    t1 = *((unsigned char *)t11);
    t12 = (t0 + 125094);
    t26 = *((int *)t12);
    t27 = (t26 - 0);
    t28 = (t27 * 1);
    t29 = (1 * t28);
    t30 = (0U + t29);
    t13 = (t0 + 73744);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = t1;
    xsi_driver_first_trans_delta(t13, t30, 1, 0LL);

LAB21:    t2 = (t0 + 125094);
    t19 = *((int *)t2);
    t4 = (t0 + 125098);
    t20 = *((int *)t4);
    if (t19 == t20)
        goto LAB22;

LAB23:    t17 = (t19 + 1);
    t19 = t17;
    t5 = (t0 + 125094);
    *((int *)t5) = t19;
    goto LAB19;

LAB24:    xsi_set_current_line(1801, ng4);
    t2 = xsi_get_transient_memory(1U);
    memset(t2, 0, 1U);
    t5 = t2;
    memset(t5, (unsigned char)2, 1U);
    t8 = (t0 + 73744);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 1U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(1802, ng4);
    t2 = (t0 + 45088U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t18 = (t17 - 1);
    t2 = (t0 + 125102);
    *((int *)t2) = 1;
    t5 = (t0 + 125106);
    *((int *)t5) = t18;
    t19 = 1;
    t20 = t18;

LAB27:    if (t19 <= t20)
        goto LAB28;

LAB30:    goto LAB25;

LAB28:    xsi_set_current_line(1803, ng4);
    t8 = (t0 + 26592U);
    t10 = *((char **)t8);
    t8 = (t0 + 125102);
    t21 = *((int *)t8);
    t22 = (t21 - 0);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 0, 1, *((int *)t8));
    t24 = (1U * t23);
    t25 = (0 + t24);
    t11 = (t10 + t25);
    t1 = *((unsigned char *)t11);
    t12 = (t0 + 125102);
    t26 = *((int *)t12);
    t27 = (t26 - 0);
    t28 = (t27 * 1);
    t29 = (1 * t28);
    t30 = (0U + t29);
    t13 = (t0 + 73744);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = t1;
    xsi_driver_first_trans_delta(t13, t30, 1, 0LL);

LAB29:    t2 = (t0 + 125102);
    t19 = *((int *)t2);
    t4 = (t0 + 125106);
    t20 = *((int *)t4);
    if (t19 == t20)
        goto LAB30;

LAB31:    t17 = (t19 + 1);
    t19 = t17;
    t5 = (t0 + 125102);
    *((int *)t5) = t19;
    goto LAB27;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_60(char *t0)
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
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(1813, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68608);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1814, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 11232U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1815, ng4);
    t4 = xsi_get_transient_memory(1U);
    memset(t4, 0, 1U);
    t10 = t4;
    memset(t10, (unsigned char)2, 1U);
    t11 = (t0 + 73872);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1816, ng4);
    t2 = (t0 + 73936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1818, ng4);
    t2 = (t0 + 33952U);
    t5 = *((char **)t2);
    t2 = (t0 + 73872);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 1U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1819, ng4);
    t2 = (t0 + 34432U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 73936);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_61(char *t0)
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
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(1826, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68624);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1827, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 11392U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1828, ng4);
    t4 = xsi_get_transient_memory(1U);
    memset(t4, 0, 1U);
    t10 = t4;
    memset(t10, (unsigned char)2, 1U);
    t11 = (t0 + 74000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 1U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1829, ng4);
    t2 = (t0 + 74064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1831, ng4);
    t2 = (t0 + 34112U);
    t5 = *((char **)t2);
    t2 = (t0 + 74000);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 1U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1832, ng4);
    t2 = (t0 + 34592U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 74064);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_62(char *t0)
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
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(1839, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68640);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1840, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1844, ng4);
    t2 = (t0 + 12672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1841, ng4);
    t4 = xsi_get_transient_memory(16U);
    memset(t4, 0, 16U);
    t10 = t4;
    memset(t10, (unsigned char)2, 16U);
    t11 = (t0 + 74128);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 16U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(1842, ng4);
    t2 = (t0 + 74192);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1845, ng4);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t5 = t2;
    memset(t5, (unsigned char)2, 16U);
    t8 = (t0 + 74128);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(1846, ng4);
    t2 = (t0 + 34272U);
    t4 = *((char **)t2);
    t2 = (t0 + 74128);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 1U);
    xsi_driver_first_trans_delta(t2, 0U, 1U, 0LL);
    xsi_set_current_line(1847, ng4);
    t2 = (t0 + 34752U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 74192);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_63(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
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

LAB0:    xsi_set_current_line(1857, ng4);
    t1 = (t0 + 17472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = (t0 + 74256);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 68656);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 19232U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 20512U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 20672U);
    t10 = *((char **)t1);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t11);
    t1 = (t0 + 74256);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_64(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
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

LAB0:    xsi_set_current_line(1860, ng4);
    t1 = (t0 + 12672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 74320);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 68672);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 25312U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 74320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_65(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(1862, ng4);

LAB3:    t2 = (t0 + 12672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 27232U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;

LAB7:    t2 = (t0 + 74384);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast(t2);

LAB2:    t11 = (t0 + 68688);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_66(char *t0)
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

LAB0:    xsi_set_current_line(1867, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68704);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1868, ng4);
    t4 = (t0 + 6272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(1873, ng4);
    t2 = (t0 + 6432U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(1879, ng4);
    t2 = (t0 + 12672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(1882, ng4);
    t2 = (t0 + 6432U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 48568U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = t1;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1869, ng4);
    t4 = (t0 + 74448);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1870, ng4);
    t2 = (t0 + 48568U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    goto LAB9;

LAB11:    xsi_set_current_line(1875, ng4);
    t2 = (t0 + 74448);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

LAB14:    t2 = (t0 + 34912U);
    t8 = *((char **)t2);
    t15 = *((unsigned char *)t8);
    t16 = (!(t15));
    t1 = t16;
    goto LAB16;

LAB17:    t2 = (t0 + 48568U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB19;

LAB20:    xsi_set_current_line(1880, ng4);
    t2 = (t0 + 74448);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_67(char *t0)
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
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(1889, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1890, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10272U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    if (t3 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 11232U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB31;

LAB32:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1891, ng4);
    t4 = (t0 + 74512);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1892, ng4);
    t2 = (t0 + 74576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1897, ng4);
    t2 = (t0 + 74512);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1898, ng4);
    t2 = (t0 + 20832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    t2 = (t0 + 74576);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 24512U);
    t5 = *((char **)t2);
    t16 = *((unsigned char *)t5);
    t17 = (t16 == (unsigned char)3);
    if (t17 == 1)
        goto LAB28;

LAB29:    t15 = (unsigned char)0;

LAB30:    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 20832U);
    t10 = *((char **)t2);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)2);
    t14 = t21;

LAB27:    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 25152U);
    t11 = *((char **)t2);
    t22 = *((unsigned char *)t11);
    t23 = (t22 == (unsigned char)3);
    t9 = t23;

LAB24:    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 25792U);
    t12 = *((char **)t2);
    t24 = *((unsigned char *)t12);
    t7 = t24;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 27552U);
    t13 = *((char **)t2);
    t25 = *((unsigned char *)t13);
    t6 = t25;

LAB18:    t1 = t6;
    goto LAB15;

LAB16:    t6 = (unsigned char)1;
    goto LAB18;

LAB19:    t7 = (unsigned char)1;
    goto LAB21;

LAB22:    t9 = (unsigned char)1;
    goto LAB24;

LAB25:    t14 = (unsigned char)1;
    goto LAB27;

LAB28:    t2 = (t0 + 25312U);
    t8 = *((char **)t2);
    t18 = *((unsigned char *)t8);
    t19 = (t18 == (unsigned char)2);
    t15 = t19;
    goto LAB30;

LAB31:    xsi_set_current_line(1904, ng4);
    t2 = (t0 + 24352U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(1910, ng4);
    t2 = (t0 + 74512);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB34:    goto LAB9;

LAB33:    xsi_set_current_line(1905, ng4);
    t2 = (t0 + 12032U);
    t8 = *((char **)t2);
    t7 = *((unsigned char *)t8);
    if (t7 == 1)
        goto LAB39;

LAB40:    t6 = (unsigned char)0;

LAB41:    if (t6 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(1906, ng4);
    t2 = (t0 + 74512);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t26 = *((char **)t13);
    *((unsigned char *)t26) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1907, ng4);
    t2 = (t0 + 74576);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB37;

LAB39:    t2 = (t0 + 12192U);
    t10 = *((char **)t2);
    t9 = *((unsigned char *)t10);
    t14 = (!(t9));
    t6 = t14;
    goto LAB41;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_68(char *t0)
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

LAB0:    xsi_set_current_line(1918, ng4);
    t2 = (t0 + 6072U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 68736);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1919, ng4);
    t4 = (t0 + 17472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    if (t9 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 12672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 28832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 20992U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t1 = (unsigned char)0;

LAB19:    if (t1 != 0)
        goto LAB15;

LAB16:
LAB9:    xsi_set_current_line(1937, ng4);
    t2 = (t0 + 19232U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(1940, ng4);
    t2 = (t0 + 20672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB3;

LAB5:    t4 = (t0 + 6112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1920, ng4);
    t4 = (t0 + 74640);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(1921, ng4);
    t2 = (t0 + 74704);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1922, ng4);
    t2 = (t0 + 74768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(1924, ng4);
    t2 = (t0 + 74640);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1925, ng4);
    t2 = (t0 + 74704);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1926, ng4);
    t2 = (t0 + 74768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(1931, ng4);
    t2 = (t0 + 74640);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB15:    xsi_set_current_line(1933, ng4);
    t2 = (t0 + 74704);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1934, ng4);
    t2 = (t0 + 74768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1935, ng4);
    t2 = (t0 + 74640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB17:    t2 = (t0 + 27232U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t1 = t7;
    goto LAB19;

LAB20:    xsi_set_current_line(1938, ng4);
    t2 = (t0 + 74768);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(1941, ng4);
    t2 = (t0 + 74704);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1942, ng4);
    t2 = (t0 + 74768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(1943, ng4);
    t2 = (t0 + 74640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_69(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(1948, ng4);

LAB3:    t1 = (t0 + 35072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 74832);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 68752);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_70(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(1949, ng4);

LAB3:    t2 = (t0 + 27392U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 12672U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;

LAB7:    t2 = (t0 + 74896);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast_port(t2);

LAB2:    t11 = (t0 + 68768);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_71(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(1950, ng4);

LAB3:    t2 = (t0 + 27232U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 12672U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;

LAB7:    t2 = (t0 + 74960);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t1;
    xsi_driver_first_trans_fast_port(t2);

LAB2:    t11 = (t0 + 68784);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

}

static void microblaze_v8_20_b_a_3688361917_3306564128_p_72(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
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

LAB0:    xsi_set_current_line(1951, ng4);
    t2 = (t0 + 27232U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 12672U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t1 = t6;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t11 = (t0 + 75024);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 68800);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 75024);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void microblaze_v8_20_b_a_3688361917_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_0,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_1,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_2,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_3,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_4,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_5,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_6,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_7,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_8,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_9,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_10,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_11,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_12,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_13,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_14,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_15,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_16,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_17,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_18,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_19,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_20,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_21,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_22,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_23,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_24,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_25,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_26,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_27,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_28,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_29,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_30,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_31,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_32,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_33,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_34,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_35,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_36,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_37,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_38,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_39,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_40,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_41,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_42,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_43,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_44,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_45,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_46,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_47,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_48,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_49,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_50,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_51,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_52,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_53,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_54,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_55,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_56,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_57,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_58,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_59,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_60,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_61,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_62,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_63,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_64,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_65,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_66,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_67,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_68,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_69,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_70,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_71,(void *)microblaze_v8_20_b_a_3688361917_3306564128_p_72};
	static char *se[] = {(void *)microblaze_v8_20_b_a_3688361917_3306564128_sub_1308504215_229454594,(void *)microblaze_v8_20_b_a_3688361917_3306564128_sub_883744406_229454594,(void *)microblaze_v8_20_b_a_3688361917_3306564128_sub_1208652696_229454594};
	xsi_register_didat("microblaze_v8_20_b_a_3688361917_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_3688361917_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
