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
static const char *ng1 = "Function calc_nr_of_brams ended without a return statement";
static const char *ng2 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/ram_module.vhd";



unsigned char microblaze_v8_20_b_a_2975356415_3306564128_sub_1305830301_229454594(char *t1, unsigned char t2, unsigned char t3)
{
    char t5[8];
    unsigned char t0;
    char *t6;
    char *t7;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t2;
    t7 = (t5 + 5U);
    *((unsigned char *)t7) = t3;
    if (t2 != 0)
        goto LAB2;

LAB4:    if (t3 != 0)
        goto LAB6;

LAB7:
LAB3:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB2:    t0 = (unsigned char)1;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = (unsigned char)2;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:;
}

int microblaze_v8_20_b_a_2975356415_3306564128_sub_2512798048_229454594(char *t1, int t2, int t3, unsigned char t4)
{
    char t5[128];
    char t6[16];
    char t11[8];
    int t0;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    int t26;

LAB0:    t7 = (t2 + t3);
    t8 = (t5 + 4U);
    t9 = ((STD_STANDARD) + 832);
    t10 = (t8 + 88U);
    *((char **)t10) = t9;
    t12 = (t8 + 56U);
    *((char **)t12) = t11;
    *((int *)t11) = t7;
    t13 = (t8 + 80U);
    *((unsigned int *)t13) = 4U;
    t14 = (t6 + 4U);
    *((int *)t14) = t2;
    t15 = (t6 + 8U);
    *((int *)t15) = t3;
    t16 = (t6 + 12U);
    *((unsigned char *)t16) = t4;
    t18 = (1 == 1);
    if (t18 == 1)
        goto LAB5;

LAB6:    t17 = t4;

LAB7:    if (t17 != 0)
        goto LAB2;

LAB4:    t7 = (32 + t2);
    t21 = (t7 - 1);
    t22 = (t21 / t2);
    t0 = t22;

LAB1:    return t0;
LAB2:    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t21 = *((int *)t20);
    t22 = (32 + t21);
    t23 = (t22 - 1);
    t19 = (t8 + 56U);
    t24 = *((char **)t19);
    t25 = *((int *)t24);
    t26 = (t23 / t25);
    t0 = t26;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    t17 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

void microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, char *t7, unsigned int t8, unsigned int t9, char *t10)
{
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    unsigned char t30;
    int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned char t45;
    char *t46;
    int t47;
    char *t48;
    int t49;
    char *t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    unsigned int t75;

LAB0:    t13 = (t10 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 == 1);
    if (t15 != 0)
        goto LAB2;

LAB4:    t13 = (t10 + 12U);
    t14 = *((unsigned int *)t13);
    t16 = (t6 + 12U);
    t17 = *((unsigned int *)t16);
    t15 = (t14 > t17);
    if (t15 != 0)
        goto LAB14;

LAB15:    t13 = (t6 + 12U);
    t14 = *((unsigned int *)t13);
    t17 = (1 * t14);
    t18 = (0U + t17);
    t16 = xsi_get_transient_memory(t18);
    memset(t16, 0, t18);
    t20 = t16;
    t21 = (t6 + 0U);
    t25 = *((int *)t21);
    t24 = (t6 + 4U);
    t27 = *((int *)t24);
    t26 = (t6 + 8U);
    t29 = *((int *)t26);
    t15 = (t29 == 1);
    if (t15 == 1)
        goto LAB18;

LAB19:    t22 = t27;
    t23 = t25;

LAB20:    t30 = (1 == 1);
    if (t30 == 1)
        goto LAB21;

LAB22:    t31 = t23;

LAB23:    t28 = (t6 + 0U);
    t35 = *((int *)t28);
    t33 = (t6 + 4U);
    t37 = *((int *)t33);
    t34 = (t6 + 8U);
    t39 = *((int *)t34);
    if (t39 == 1)
        goto LAB24;

LAB25:    t19 = t37;

LAB26:    t40 = (t19 - t31);
    t41 = (t40 * 1);
    t42 = (1U * t41);
    t36 = (t20 + t42);
    t38 = (t6 + 12U);
    t43 = *((unsigned int *)t38);
    t52 = (1U * t43);
    memset(t36, (unsigned char)2, t52);
    t54 = (0 + t3);
    t44 = (t5 + 56U);
    t46 = *((char **)t44);
    t48 = (t46 + 56U);
    t50 = *((char **)t48);
    t56 = (t6 + 12U);
    t55 = *((unsigned int *)t56);
    t55 = (t55 * 1U);
    memcpy(t50, t16, t55);
    t57 = (t6 + 12U);
    t58 = *((unsigned int *)t57);
    t59 = (1U * t58);
    xsi_driver_first_trans_delta(t5, t54, t59, 0LL);
    t13 = (t7 + 40U);
    t16 = *((char **)t13);
    t13 = (t16 + t9);
    t16 = (t6 + 0U);
    t22 = *((int *)t16);
    t20 = (t6 + 0U);
    t23 = *((int *)t20);
    t21 = (t10 + 12U);
    t14 = *((unsigned int *)t21);
    t25 = (t23 + t14);
    t27 = (t25 - 1);
    t29 = (t27 - t22);
    t17 = (t29 * 1);
    t17 = (t17 + 1);
    t18 = (1U * t17);
    t24 = (t10 + 12U);
    t19 = *((unsigned int *)t24);
    t19 = (t19 * 1U);
    t15 = (t18 != t19);
    if (t15 == 1)
        goto LAB27;

LAB28:    t26 = (t6 + 0U);
    t31 = *((int *)t26);
    t28 = (t6 + 0U);
    t35 = *((int *)t28);
    t41 = (t35 - t31);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t33 = (t6 + 0U);
    t37 = *((int *)t33);
    t34 = (t6 + 0U);
    t39 = *((int *)t34);
    t52 = (t39 - t37);
    t54 = (1U * t52);
    t55 = (0 + t54);
    t58 = (t55 + t3);
    t36 = (t5 + 56U);
    t38 = *((char **)t36);
    t44 = (t38 + 56U);
    t46 = *((char **)t44);
    t48 = (t6 + 0U);
    t40 = *((int *)t48);
    t50 = (t6 + 0U);
    t47 = *((int *)t50);
    t56 = (t10 + 12U);
    t59 = *((unsigned int *)t56);
    t49 = (t47 + t59);
    t51 = (t49 - 1);
    t53 = (t51 - t40);
    t60 = (t53 * 1);
    t60 = (t60 + 1);
    t66 = (1U * t60);
    memcpy(t46, t13, t66);
    t57 = (t6 + 0U);
    t70 = *((int *)t57);
    t61 = (t6 + 0U);
    t71 = *((int *)t61);
    t62 = (t10 + 12U);
    t68 = *((unsigned int *)t62);
    t72 = (t71 + t68);
    t73 = (t72 - 1);
    t74 = (t73 - t70);
    t69 = (t74 * 1);
    t69 = (t69 + 1);
    t75 = (1U * t69);
    xsi_driver_first_trans_delta(t5, t58, t75, 0LL);

LAB3:
LAB1:    return;
LAB2:    t16 = (t6 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (0U + t18);
    t20 = xsi_get_transient_memory(t19);
    memset(t20, 0, t19);
    t21 = t20;
    t24 = (t6 + 0U);
    t25 = *((int *)t24);
    t26 = (t6 + 4U);
    t27 = *((int *)t26);
    t28 = (t6 + 8U);
    t29 = *((int *)t28);
    t30 = (t29 == 1);
    if (t30 == 1)
        goto LAB5;

LAB6:    t22 = t27;
    t23 = t25;

LAB7:    t32 = (1 == 1);
    if (t32 == 1)
        goto LAB8;

LAB9:    t31 = t23;

LAB10:    t33 = (t7 + 40U);
    t34 = *((char **)t33);
    t33 = (t34 + t9);
    t34 = (t10 + 0U);
    t35 = *((int *)t34);
    t36 = (t10 + 0U);
    t37 = *((int *)t36);
    t38 = (t10 + 8U);
    t39 = *((int *)t38);
    t40 = (t35 - t37);
    t41 = (t40 * t39);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t44 = (t33 + t43);
    t45 = *((unsigned char *)t44);
    t46 = (t6 + 0U);
    t47 = *((int *)t46);
    t48 = (t6 + 4U);
    t49 = *((int *)t48);
    t50 = (t6 + 8U);
    t51 = *((int *)t50);
    if (t51 == 1)
        goto LAB11;

LAB12:    t52 = t49;

LAB13:    t53 = (t52 - t31);
    t54 = (t53 * 1);
    t55 = (1U * t54);
    t56 = (t21 + t55);
    t57 = (t6 + 12U);
    t58 = *((unsigned int *)t57);
    t59 = (1U * t58);
    memset(t56, t45, t59);
    t60 = (0 + t3);
    t61 = (t5 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t6 + 12U);
    t66 = *((unsigned int *)t65);
    t66 = (t66 * 1U);
    memcpy(t64, t20, t66);
    t67 = (t6 + 12U);
    t68 = *((unsigned int *)t67);
    t69 = (1U * t68);
    xsi_driver_first_trans_delta(t5, t60, t69, 0LL);
    goto LAB3;

LAB5:    t22 = t25;
    t23 = t27;
    goto LAB7;

LAB8:    t31 = t22;
    goto LAB10;

LAB11:    t52 = t47;
    goto LAB13;

LAB14:    t20 = (t7 + 40U);
    t21 = *((char **)t20);
    t20 = (t21 + t9);
    t21 = (t10 + 0U);
    t22 = *((int *)t21);
    t24 = (t10 + 0U);
    t23 = *((int *)t24);
    t18 = (t23 - t22);
    t26 = (t10 + 0U);
    t25 = *((int *)t26);
    t28 = (t6 + 12U);
    t19 = *((unsigned int *)t28);
    t27 = (t25 + t19);
    t29 = (t27 - 1);
    t33 = (t10 + 4U);
    t31 = *((int *)t33);
    t34 = (t10 + 8U);
    t35 = *((int *)t34);
    xsi_vhdl_check_range_of_slice(t22, t31, t35, t23, t29, 1);
    t41 = (t18 * 1U);
    t42 = (0 + t41);
    t36 = (t20 + t42);
    t38 = (t6 + 12U);
    t43 = *((unsigned int *)t38);
    t43 = (t43 * 1U);
    t44 = (t10 + 0U);
    t37 = *((int *)t44);
    t46 = (t10 + 0U);
    t39 = *((int *)t46);
    t48 = (t6 + 12U);
    t52 = *((unsigned int *)t48);
    t40 = (t39 + t52);
    t47 = (t40 - 1);
    t49 = (t47 - t37);
    t54 = (t49 * 1);
    t54 = (t54 + 1);
    t55 = (1U * t54);
    t30 = (t43 != t55);
    if (t30 == 1)
        goto LAB16;

LAB17:    t58 = (0 + t3);
    t50 = (t5 + 56U);
    t56 = *((char **)t50);
    t57 = (t56 + 56U);
    t61 = *((char **)t57);
    t62 = (t6 + 12U);
    t59 = *((unsigned int *)t62);
    t59 = (t59 * 1U);
    memcpy(t61, t36, t59);
    t63 = (t6 + 12U);
    t60 = *((unsigned int *)t63);
    t66 = (1U * t60);
    xsi_driver_first_trans_delta(t5, t58, t66, 0LL);
    goto LAB3;

LAB16:    xsi_size_not_matching(t43, t55, 0);
    goto LAB17;

LAB18:    t22 = t25;
    t23 = t27;
    goto LAB20;

LAB21:    t31 = t22;
    goto LAB23;

LAB24:    t19 = t35;
    goto LAB26;

LAB27:    xsi_size_not_matching(t18, t19, 0);
    goto LAB28;

}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    int t5;
    unsigned char t6;
    int t7;
    int t8;
    int t9;
    unsigned char t10;
    unsigned char t11;
    int t12;
    unsigned char t13;
    int t14;
    int t15;
    int t16;
    unsigned char t17;
    char *t18;

LAB0:    xsi_set_current_line(420, ng2);
    t3 = (1 == 1);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (32 / 1);
    t6 = (t5 == 8);
    if (t6 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    t2 = t4;

LAB9:    if (t2 == 1)
        goto LAB4;

LAB5:    t12 = (32 / 1);
    t13 = (t12 == 9);
    if (t13 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    t1 = t11;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:
LAB1:    return;
LAB2:    t18 = (t0 + 29178);
    xsi_report(t18, 62U, (unsigned char)3);
    goto LAB3;

LAB4:    t1 = (unsigned char)1;
    goto LAB6;

LAB7:    t2 = (unsigned char)1;
    goto LAB9;

LAB10:    t7 = (32 / 1);
    t8 = (t7 * 1);
    t9 = (32 - t8);
    t10 = (t9 == 0);
    t4 = t10;
    goto LAB12;

LAB13:    t14 = (32 / 1);
    t15 = (t14 * 1);
    t16 = (32 - t15);
    t17 = (t16 == 0);
    t11 = t17;
    goto LAB15;

}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(485, ng2);
    t1 = xsi_get_transient_memory(11U);
    memset(t1, 0, 11U);
    t2 = t1;
    memset(t2, (unsigned char)2, 11U);
    t3 = (t0 + 14120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 11U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(486, ng2);
    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    t1 = (t0 + 14120);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_delta(t1, 0U, 11U, 0LL);
    xsi_set_current_line(487, ng2);
    t1 = xsi_get_transient_memory(11U);
    memset(t1, 0, 11U);
    t2 = t1;
    memset(t2, (unsigned char)2, 11U);
    t3 = (t0 + 14184);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 11U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(488, ng2);
    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    t1 = (t0 + 14184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_delta(t1, 0U, 11U, 0LL);
    xsi_set_current_line(491, ng2);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 14248);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(492, ng2);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 14312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(494, ng2);
    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    t1 = (t0 + 14376);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(495, ng2);
    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    t1 = (t0 + 14440);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(496, ng2);
    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    t1 = (t0 + 14504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(497, ng2);
    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    t1 = (t0 + 14568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 13848);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(1174, ng2);
    t1 = (t0 + 12592);
    t2 = (t0 + 6096U);
    t3 = (t0 + 14632);
    t4 = (t0 + 27916U);
    t5 = (t0 + 2736U);
    t6 = (t0 + 27532U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    xsi_set_current_line(1175, ng2);
    t1 = (t0 + 12592);
    t2 = (t0 + 6256U);
    t3 = (t0 + 14696);
    t4 = (t0 + 27932U);
    t5 = (t0 + 3696U);
    t6 = (t0 + 27596U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    t1 = (t0 + 13864);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(1174, ng2);
    t1 = (t0 + 12840);
    t2 = (t0 + 6096U);
    t3 = (t0 + 14760);
    t4 = (t0 + 27916U);
    t5 = (t0 + 2736U);
    t6 = (t0 + 27532U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    xsi_set_current_line(1175, ng2);
    t1 = (t0 + 12840);
    t2 = (t0 + 6256U);
    t3 = (t0 + 14824);
    t4 = (t0 + 27932U);
    t5 = (t0 + 3696U);
    t6 = (t0 + 27596U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    t1 = (t0 + 13912);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(1174, ng2);
    t1 = (t0 + 13088);
    t2 = (t0 + 6096U);
    t3 = (t0 + 14888);
    t4 = (t0 + 27916U);
    t5 = (t0 + 2736U);
    t6 = (t0 + 27532U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    xsi_set_current_line(1175, ng2);
    t1 = (t0 + 13088);
    t2 = (t0 + 6256U);
    t3 = (t0 + 14952);
    t4 = (t0 + 27932U);
    t5 = (t0 + 3696U);
    t6 = (t0 + 27596U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    t1 = (t0 + 13960);
    *((int *)t1) = 1;

LAB1:    return;
}

static void microblaze_v8_20_b_a_2975356415_3306564128_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(1174, ng2);
    t1 = (t0 + 13336);
    t2 = (t0 + 6096U);
    t3 = (t0 + 15016);
    t4 = (t0 + 27916U);
    t5 = (t0 + 2736U);
    t6 = (t0 + 27532U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    xsi_set_current_line(1175, ng2);
    t1 = (t0 + 13336);
    t2 = (t0 + 6256U);
    t3 = (t0 + 15080);
    t4 = (t0 + 27932U);
    t5 = (t0 + 3696U);
    t6 = (t0 + 27596U);
    microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594(t0, t1, t2, 0U, 0U, t3, t4, t5, 0U, 0U, t6);
    t1 = (t0 + 14008);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void microblaze_v8_20_b_a_2975356415_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_0,(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_1,(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_2,(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_3,(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_4,(void *)microblaze_v8_20_b_a_2975356415_3306564128_p_5};
	static char *se[] = {(void *)microblaze_v8_20_b_a_2975356415_3306564128_sub_1305830301_229454594,(void *)microblaze_v8_20_b_a_2975356415_3306564128_sub_2512798048_229454594,(void *)microblaze_v8_20_b_a_2975356415_3306564128_sub_581132500_229454594};
	xsi_register_didat("microblaze_v8_20_b_a_2975356415_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_2975356415_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
