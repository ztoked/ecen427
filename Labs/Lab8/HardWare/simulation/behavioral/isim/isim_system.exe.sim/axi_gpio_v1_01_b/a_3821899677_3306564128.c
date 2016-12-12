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
extern char *PROC_COMMON_V3_00_A_P_1541446978;
extern char *IEEE_P_2592010699;
static const char *ng3 = "Function max_width ended without a return statement";
static const char *ng4 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_gpio_v1_01_b/hdl/vhdl/axi_gpio.vhd";
extern char *IEEE_P_0017514958;

unsigned char ieee_p_0017514958_sub_1739486367_1861681735(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


unsigned char axi_gpio_v1_01_b_a_3821899677_3306564128_sub_3765301861_229454594(char *t1, unsigned char t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    unsigned char t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB3, &&LAB4, &&LAB5, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 192);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 1U;
    t11 = (t4 + 4U);
    *((unsigned char *)t11) = t2;
    t12 = (char *)((nl0) + t2);
    goto **((char **)t12);

LAB2:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((unsigned char *)t7);
    t0 = t15;

LAB1:    return t0;
LAB3:    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((unsigned char *)t13) = (unsigned char)48;
    goto LAB2;

LAB4:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)49;
    goto LAB2;

LAB5:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)90;
    goto LAB2;

LAB6:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)85;
    goto LAB2;

LAB7:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)88;
    goto LAB2;

LAB8:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)87;
    goto LAB2;

LAB9:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)76;
    goto LAB2;

LAB10:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)72;
    goto LAB2;

LAB11:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)45;
    goto LAB2;

LAB12:;
}

char *axi_gpio_v1_01_b_a_3821899677_3306564128_sub_4109476219_229454594(char *t1, char *t2, char *t3, char *t4)
{
    char t5[272];
    char t6[24];
    char t11[16];
    char t37[8];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    unsigned int t10;
    char *t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    unsigned char t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t11 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((unsigned int *)t15) = t13;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (t13 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((STD_STANDARD) + 1008);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t20 = xsi_get_memory(t10);
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t11);
    t22 = (t15 + 64U);
    *((char **)t22) = t11;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = t10;
    t24 = (t15 + 136U);
    *((char **)t24) = t20;
    t25 = (t15 + 124U);
    *((int *)t25) = 0;
    t26 = (t15 + 128U);
    t27 = (t11 + 12U);
    t17 = *((unsigned int *)t27);
    t28 = (t17 - 1);
    *((int *)t26) = t28;
    t29 = (t15 + 120U);
    t31 = (t10 > 2147483644);
    if (t31 == 1)
        goto LAB2;

LAB3:    t32 = (t10 + 3);
    t33 = (t32 / 16);
    t30 = t33;

LAB4:    *((unsigned int *)t29) = t30;
    t34 = (t5 + 148U);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t34 + 88U);
    *((char **)t36) = t35;
    t38 = (t34 + 56U);
    *((char **)t38) = t37;
    xsi_type_set_default_value(t35, t37, 0);
    t39 = (t34 + 80U);
    *((unsigned int *)t39) = 4U;
    t40 = (t6 + 4U);
    t41 = (t3 != 0);
    if (t41 == 1)
        goto LAB6;

LAB5:    t42 = (t6 + 12U);
    *((char **)t42) = t4;
    t43 = (t34 + 56U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((int *)t43) = 1;
    t7 = (t4 + 8U);
    t9 = *((int *)t7);
    t12 = (t4 + 4U);
    t16 = *((int *)t12);
    t14 = (t4 + 0U);
    t28 = *((int *)t14);
    t45 = t28;
    t46 = t16;

LAB7:    t47 = (t46 * t9);
    t48 = (t45 * t9);
    if (t48 <= t47)
        goto LAB8;

LAB10:    t7 = (t15 + 56U);
    t12 = *((char **)t7);
    t7 = (t11 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t12, t8);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t18 = (t11 + 4U);
    t16 = *((int *)t18);
    t19 = (t11 + 8U);
    t28 = *((int *)t19);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t9;
    t21 = (t20 + 4U);
    *((int *)t21) = t16;
    t21 = (t20 + 8U);
    *((int *)t21) = t28;
    t45 = (t16 - t9);
    t10 = (t45 * t28);
    t10 = (t10 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t10;

LAB1:    t7 = (t15 + 80);
    t9 = *((int *)t7);
    t12 = (t15 + 136U);
    t14 = *((char **)t12);
    xsi_put_memory(t9, t14);
    return t0;
LAB2:    t30 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t40) = t3;
    goto LAB5;

LAB8:    t18 = (t4 + 0U);
    t49 = *((int *)t18);
    t19 = (t4 + 8U);
    t50 = *((int *)t19);
    t51 = (t45 - t49);
    t8 = (t51 * t50);
    t10 = (1U * t8);
    t13 = (0 + t10);
    t20 = (t3 + t13);
    t41 = *((unsigned char *)t20);
    t52 = axi_gpio_v1_01_b_a_3821899677_3306564128_sub_3765301861_229454594(t1, t41);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    t21 = (t34 + 56U);
    t23 = *((char **)t21);
    t53 = *((int *)t23);
    t21 = (t11 + 0U);
    t54 = *((int *)t21);
    t24 = (t11 + 8U);
    t55 = *((int *)t24);
    t56 = (t53 - t54);
    t17 = (t56 * t55);
    t25 = (t11 + 4U);
    t57 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t54, t57, t55, t53);
    t30 = (1U * t17);
    t31 = (0 + t30);
    t26 = (t22 + t31);
    *((unsigned char *)t26) = t52;
    t7 = (t34 + 56U);
    t12 = *((char **)t7);
    t16 = *((int *)t12);
    t28 = (t16 + 1);
    t7 = (t34 + 56U);
    t14 = *((char **)t7);
    t7 = (t14 + 0);
    *((int *)t7) = t28;

LAB9:    if (t45 == t46)
        goto LAB10;

LAB11:    t16 = (t45 + t9);
    t45 = t16;
    goto LAB7;

LAB12:;
}

int axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned char t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    int t43;
    int t44;
    char *t45;
    char *t46;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 832);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 8U);
    t16 = *((int *)t15);
    t17 = (t3 + 4U);
    t18 = *((int *)t17);
    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = t20;
    t22 = t18;

LAB4:    t23 = (t22 * t16);
    t24 = (t21 * t16);
    if (t24 <= t23)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t16 = *((int *)t8);
    t0 = t16;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = *((int *)t26);
    t25 = (t1 + 23120U);
    t28 = *((char **)t25);
    t25 = (t3 + 0U);
    t29 = *((int *)t25);
    t30 = (t3 + 8U);
    t31 = *((int *)t30);
    t32 = (t21 - t29);
    t33 = (t32 * t31);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t36 = (t2 + t35);
    t37 = *((unsigned char *)t36);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    t40 = (4U * t39);
    t41 = (0 + t40);
    t42 = (t28 + t41);
    t43 = *((int *)t42);
    t44 = (t27 + t43);
    t45 = (t6 + 56U);
    t46 = *((char **)t45);
    t45 = (t46 + 0);
    *((int *)t45) = t44;

LAB6:    if (t21 == t22)
        goto LAB7;

LAB8:    t18 = (t21 + t16);
    t21 = t18;
    goto LAB4;

LAB9:;
}

char *axi_gpio_v1_01_b_a_3821899677_3306564128_sub_315654337_229454594(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t13[16];
    char t29[8];
    char t37[8];
    char *t0;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    int t48;
    unsigned char t49;
    char *t50;
    char *t51;
    int t52;
    int t53;
    char *t54;
    int t55;
    int t56;
    unsigned int t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    char *t66;
    int t67;
    int t68;
    char *t69;
    unsigned int t70;

LAB0:    t9 = axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594(t1, t3, t4);
    t10 = (t9 - 1);
    t11 = (0 - t10);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 4U);
    t14 = axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594(t1, t3, t4);
    t15 = (t14 - 1);
    t16 = (t13 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t7 + 4U);
    t20 = ((PROC_COMMON_V3_00_A_P_1541446978) + 11704);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t12);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t13);
    t24 = (t17 + 64U);
    *((char **)t24) = t13;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t12;
    t26 = (t7 + 124U);
    t27 = ((STD_STANDARD) + 832);
    t28 = (t26 + 88U);
    *((char **)t28) = t27;
    t30 = (t26 + 56U);
    *((char **)t30) = t29;
    *((int *)t29) = 0;
    t31 = (t26 + 80U);
    *((unsigned int *)t31) = 4U;
    t32 = (t4 + 0U);
    t33 = *((int *)t32);
    t34 = (t7 + 244U);
    t35 = ((STD_STANDARD) + 832);
    t36 = (t34 + 88U);
    *((char **)t36) = t35;
    t38 = (t34 + 56U);
    *((char **)t38) = t37;
    *((int *)t37) = t33;
    t39 = (t34 + 80U);
    *((unsigned int *)t39) = 4U;
    t40 = (t8 + 4U);
    t41 = (t3 != 0);
    if (t41 == 1)
        goto LAB3;

LAB2:    t42 = (t8 + 12U);
    *((char **)t42) = t4;
    t43 = (t8 + 20U);
    t44 = (t5 != 0);
    if (t44 == 1)
        goto LAB5;

LAB4:    t45 = (t8 + 28U);
    *((char **)t45) = t6;

LAB6:    t46 = (t26 + 56U);
    t47 = *((char **)t46);
    t48 = *((int *)t47);
    t46 = (t13 + 12U);
    t19 = *((unsigned int *)t46);
    t49 = (t48 != t19);
    if (t49 != 0)
        goto LAB7;

LAB9:    t16 = (t17 + 56U);
    t20 = *((char **)t16);
    t16 = (t13 + 12U);
    t12 = *((unsigned int *)t16);
    t12 = (t12 * 4U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t20, t12);
    t21 = (t13 + 0U);
    t9 = *((int *)t21);
    t23 = (t13 + 4U);
    t10 = *((int *)t23);
    t24 = (t13 + 8U);
    t11 = *((int *)t24);
    t25 = (t2 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = t9;
    t27 = (t25 + 4U);
    *((int *)t27) = t10;
    t27 = (t25 + 8U);
    *((int *)t27) = t11;
    t14 = (t10 - t9);
    t19 = (t14 * t11);
    t19 = (t19 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t19;

LAB1:    return t0;
LAB3:    *((char **)t40) = t3;
    goto LAB2;

LAB5:    *((char **)t43) = t5;
    goto LAB4;

LAB7:
LAB10:    t50 = (t34 + 56U);
    t51 = *((char **)t50);
    t52 = *((int *)t51);
    t50 = (t4 + 0U);
    t53 = *((int *)t50);
    t54 = (t4 + 8U);
    t55 = *((int *)t54);
    t56 = (t52 - t53);
    t57 = (t56 * t55);
    t58 = (t4 + 4U);
    t59 = *((int *)t58);
    xsi_vhdl_check_range_of_index(t53, t59, t55, t52);
    t60 = (1U * t57);
    t61 = (0 + t60);
    t62 = (t3 + t61);
    t63 = *((unsigned char *)t62);
    t64 = (t63 == (unsigned char)0);
    if (t64 != 0)
        goto LAB11;

LAB13:    t16 = (t34 + 56U);
    t20 = *((char **)t16);
    t9 = *((int *)t20);
    t16 = (t6 + 0U);
    t10 = *((int *)t16);
    t21 = (t6 + 8U);
    t11 = *((int *)t21);
    t14 = (t9 - t10);
    t12 = (t14 * t11);
    t23 = (t6 + 4U);
    t15 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t10, t15, t11, t9);
    t19 = (4U * t12);
    t57 = (0 + t19);
    t24 = (t5 + t57);
    t18 = *((int *)t24);
    t25 = (t17 + 56U);
    t27 = *((char **)t25);
    t25 = (t26 + 56U);
    t28 = *((char **)t25);
    t33 = *((int *)t28);
    t25 = (t13 + 0U);
    t48 = *((int *)t25);
    t30 = (t13 + 8U);
    t52 = *((int *)t30);
    t53 = (t33 - t48);
    t60 = (t53 * t52);
    t31 = (t13 + 4U);
    t55 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t48, t55, t52, t33);
    t61 = (4U * t60);
    t70 = (0 + t61);
    t32 = (t27 + t70);
    *((int *)t32) = t18;
    t16 = (t26 + 56U);
    t20 = *((char **)t16);
    t9 = *((int *)t20);
    t10 = (t9 + 1);
    t16 = (t26 + 56U);
    t21 = *((char **)t16);
    t16 = (t21 + 0);
    *((int *)t16) = t10;
    t16 = (t34 + 56U);
    t20 = *((char **)t16);
    t9 = *((int *)t20);
    t10 = (t9 + 1);
    t16 = (t34 + 56U);
    t21 = *((char **)t16);
    t16 = (t21 + 0);
    *((int *)t16) = t10;
    goto LAB6;

LAB8:;
LAB11:    t65 = (t34 + 56U);
    t66 = *((char **)t65);
    t67 = *((int *)t66);
    t68 = (t67 + 1);
    t65 = (t34 + 56U);
    t69 = *((char **)t65);
    t65 = (t69 + 0);
    *((int *)t65) = t68;
    goto LAB10;

LAB12:;
LAB14:;
}

char *axi_gpio_v1_01_b_a_3821899677_3306564128_sub_2684039509_229454594(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[368];
    char t8[40];
    char t14[16];
    char t31[8];
    char t39[8];
    char *t0;
    int t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    int t15;
    int t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    char *t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    unsigned char t51;
    char *t52;
    char *t53;
    int t54;
    int t55;
    char *t56;
    int t57;
    int t58;
    unsigned int t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t67;
    char *t68;
    int t69;
    int t70;
    char *t71;
    unsigned int t72;

LAB0:    t9 = axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594(t1, t3, t4);
    t10 = (2 * t9);
    t11 = (t10 - 1);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t13 = (t13 * 64U);
    t15 = axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594(t1, t3, t4);
    t16 = (2 * t15);
    t17 = (t16 - 1);
    t18 = (t14 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = t17;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (t17 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t7 + 4U);
    t22 = ((PROC_COMMON_V3_00_A_P_1541446978) + 11592);
    t23 = (t19 + 88U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t13);
    t25 = (t19 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t14);
    t26 = (t19 + 64U);
    *((char **)t26) = t14;
    t27 = (t19 + 80U);
    *((unsigned int *)t27) = t13;
    t28 = (t7 + 124U);
    t29 = ((STD_STANDARD) + 832);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    *((int *)t31) = 0;
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 4U;
    t34 = (t4 + 0U);
    t35 = *((int *)t34);
    t36 = (t7 + 244U);
    t37 = ((STD_STANDARD) + 832);
    t38 = (t36 + 88U);
    *((char **)t38) = t37;
    t40 = (t36 + 56U);
    *((char **)t40) = t39;
    *((int *)t39) = t35;
    t41 = (t36 + 80U);
    *((unsigned int *)t41) = 4U;
    t42 = (t8 + 4U);
    t43 = (t3 != 0);
    if (t43 == 1)
        goto LAB3;

LAB2:    t44 = (t8 + 12U);
    *((char **)t44) = t4;
    t45 = (t8 + 20U);
    t46 = (t5 != 0);
    if (t46 == 1)
        goto LAB5;

LAB4:    t47 = (t8 + 28U);
    *((char **)t47) = t6;

LAB6:    t48 = (t28 + 56U);
    t49 = *((char **)t48);
    t50 = *((int *)t49);
    t48 = (t14 + 12U);
    t21 = *((unsigned int *)t48);
    t51 = (t50 != t21);
    if (t51 != 0)
        goto LAB7;

LAB9:    t18 = (t19 + 56U);
    t22 = *((char **)t18);
    t18 = (t14 + 12U);
    t13 = *((unsigned int *)t18);
    t13 = (t13 * 64U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t22, t13);
    t23 = (t14 + 0U);
    t9 = *((int *)t23);
    t25 = (t14 + 4U);
    t10 = *((int *)t25);
    t26 = (t14 + 8U);
    t11 = *((int *)t26);
    t27 = (t2 + 0U);
    t29 = (t27 + 0U);
    *((int *)t29) = t9;
    t29 = (t27 + 4U);
    *((int *)t29) = t10;
    t29 = (t27 + 8U);
    *((int *)t29) = t11;
    t12 = (t10 - t9);
    t21 = (t12 * t11);
    t21 = (t21 + 1);
    t29 = (t27 + 12U);
    *((unsigned int *)t29) = t21;

LAB1:    return t0;
LAB3:    *((char **)t42) = t3;
    goto LAB2;

LAB5:    *((char **)t45) = t5;
    goto LAB4;

LAB7:
LAB10:    t52 = (t36 + 56U);
    t53 = *((char **)t52);
    t54 = *((int *)t53);
    t52 = (t4 + 0U);
    t55 = *((int *)t52);
    t56 = (t4 + 8U);
    t57 = *((int *)t56);
    t58 = (t54 - t55);
    t59 = (t58 * t57);
    t60 = (t4 + 4U);
    t61 = *((int *)t60);
    xsi_vhdl_check_range_of_index(t55, t61, t57, t54);
    t62 = (1U * t59);
    t63 = (0 + t62);
    t64 = (t3 + t63);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)0);
    if (t66 != 0)
        goto LAB11;

LAB13:    t18 = (t36 + 56U);
    t22 = *((char **)t18);
    t9 = *((int *)t22);
    t10 = (2 * t9);
    t18 = (t6 + 0U);
    t11 = *((int *)t18);
    t23 = (t6 + 8U);
    t12 = *((int *)t23);
    t15 = (t10 - t11);
    t13 = (t15 * t12);
    t25 = (t6 + 4U);
    t16 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t11, t16, t12, t10);
    t21 = (64U * t13);
    t59 = (0 + t21);
    t26 = (t5 + t59);
    t27 = (t19 + 56U);
    t29 = *((char **)t27);
    t27 = (t28 + 56U);
    t30 = *((char **)t27);
    t17 = *((int *)t30);
    t27 = (t14 + 0U);
    t20 = *((int *)t27);
    t32 = (t14 + 8U);
    t35 = *((int *)t32);
    t50 = (t17 - t20);
    t62 = (t50 * t35);
    t33 = (t14 + 4U);
    t54 = *((int *)t33);
    xsi_vhdl_check_range_of_index(t20, t54, t35, t17);
    t63 = (64U * t62);
    t72 = (0 + t63);
    t34 = (t29 + t72);
    memcpy(t34, t26, 64U);
    t18 = (t36 + 56U);
    t22 = *((char **)t18);
    t9 = *((int *)t22);
    t10 = (2 * t9);
    t11 = (t10 + 1);
    t18 = (t6 + 0U);
    t12 = *((int *)t18);
    t23 = (t6 + 8U);
    t15 = *((int *)t23);
    t16 = (t11 - t12);
    t13 = (t16 * t15);
    t25 = (t6 + 4U);
    t17 = *((int *)t25);
    xsi_vhdl_check_range_of_index(t12, t17, t15, t11);
    t21 = (64U * t13);
    t59 = (0 + t21);
    t26 = (t5 + t59);
    t27 = (t19 + 56U);
    t29 = *((char **)t27);
    t27 = (t28 + 56U);
    t30 = *((char **)t27);
    t20 = *((int *)t30);
    t35 = (t20 + 1);
    t27 = (t14 + 0U);
    t50 = *((int *)t27);
    t32 = (t14 + 8U);
    t54 = *((int *)t32);
    t55 = (t35 - t50);
    t62 = (t55 * t54);
    t33 = (t14 + 4U);
    t57 = *((int *)t33);
    xsi_vhdl_check_range_of_index(t50, t57, t54, t35);
    t63 = (64U * t62);
    t72 = (0 + t63);
    t34 = (t29 + t72);
    memcpy(t34, t26, 64U);
    t18 = (t28 + 56U);
    t22 = *((char **)t18);
    t9 = *((int *)t22);
    t10 = (t9 + 2);
    t18 = (t28 + 56U);
    t23 = *((char **)t18);
    t18 = (t23 + 0);
    *((int *)t18) = t10;
    t18 = (t36 + 56U);
    t22 = *((char **)t18);
    t9 = *((int *)t22);
    t10 = (t9 + 1);
    t18 = (t36 + 56U);
    t23 = *((char **)t18);
    t18 = (t23 + 0);
    *((int *)t18) = t10;
    goto LAB6;

LAB8:;
LAB11:    t67 = (t36 + 56U);
    t68 = *((char **)t67);
    t69 = *((int *)t68);
    t70 = (t69 + 1);
    t67 = (t36 + 56U);
    t71 = *((char **)t67);
    t67 = (t71 + 0);
    *((int *)t67) = t70;
    goto LAB10;

LAB12:;
LAB14:;
}

char *axi_gpio_v1_01_b_a_3821899677_3306564128_sub_2290823345_229454594(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t7[16];
    char t14[32];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 31;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (31 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((IEEE_P_2592010699) + 4024);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 64U);
    *((char **)t16) = t7;
    t17 = (t9 + 80U);
    *((unsigned int *)t17) = 32U;
    t18 = (t6 + 4U);
    t19 = (t3 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t6 + 12U);
    *((char **)t20) = t4;
    t21 = (t7 + 12U);
    t11 = *((unsigned int *)t21);
    t11 = (t11 * 1U);
    t22 = xsi_get_transient_memory(t11);
    memset(t22, 0, t11);
    t23 = t22;
    memset(t23, (unsigned char)2, t11);
    t24 = (t9 + 56U);
    t25 = *((char **)t24);
    t24 = (t25 + 0);
    t26 = (t7 + 12U);
    t27 = *((unsigned int *)t26);
    t27 = (t27 * 1U);
    memcpy(t24, t22, t27);
    t8 = (t4 + 4U);
    t10 = *((int *)t8);
    t12 = (t4 + 0U);
    t28 = *((int *)t12);
    t13 = (t4 + 8U);
    t29 = *((int *)t13);
    t30 = (t10 - t28);
    t11 = (t30 * t29);
    t27 = (1U * t11);
    t31 = (0 + t27);
    t15 = (t3 + t31);
    t19 = *((unsigned char *)t15);
    if (t19 != 0)
        goto LAB4;

LAB6:    t8 = (t1 + 79232);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    t13 = (t7 + 0U);
    t10 = *((int *)t13);
    t11 = (0 - t10);
    t27 = (t11 * 1U);
    t31 = (0 + t27);
    t16 = (t15 + t31);
    memcpy(t16, t8, 4U);

LAB5:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t12, t11);
    t13 = (t7 + 0U);
    t10 = *((int *)t13);
    t15 = (t7 + 4U);
    t28 = *((int *)t15);
    t16 = (t7 + 8U);
    t29 = *((int *)t16);
    t17 = (t2 + 0U);
    t21 = (t17 + 0U);
    *((int *)t21) = t10;
    t21 = (t17 + 4U);
    *((int *)t21) = t28;
    t21 = (t17 + 8U);
    *((int *)t21) = t29;
    t30 = (t28 - t10);
    t27 = (t30 * t29);
    t27 = (t27 + 1);
    t21 = (t17 + 12U);
    *((unsigned int *)t21) = t27;

LAB1:    return t0;
LAB3:    *((char **)t18) = t3;
    goto LAB2;

LAB4:    t16 = (t1 + 79228);
    t21 = (t9 + 56U);
    t22 = *((char **)t21);
    t21 = (t7 + 0U);
    t32 = *((int *)t21);
    t33 = (0 - t32);
    t34 = (t33 * 1U);
    t35 = (0 + t34);
    t23 = (t22 + t35);
    memcpy(t23, t16, 4U);
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 0U);
    t10 = *((int *)t8);
    t13 = (t7 + 8U);
    t28 = *((int *)t13);
    t29 = (12 - t10);
    t11 = (t29 * t28);
    t27 = (1U * t11);
    t31 = (0 + t27);
    t15 = (t12 + t31);
    *((unsigned char *)t15) = (unsigned char)3;
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 0U);
    t10 = *((int *)t8);
    t13 = (t7 + 8U);
    t28 = *((int *)t13);
    t29 = (13 - t10);
    t11 = (t29 * t28);
    t27 = (1U * t11);
    t31 = (0 + t27);
    t15 = (t12 + t31);
    *((unsigned char *)t15) = (unsigned char)3;
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 0U);
    t10 = *((int *)t8);
    t13 = (t7 + 8U);
    t28 = *((int *)t13);
    t29 = (15 - t10);
    t11 = (t29 * t28);
    t27 = (1U * t11);
    t31 = (0 + t27);
    t15 = (t12 + t31);
    *((unsigned char *)t15) = (unsigned char)3;
    goto LAB5;

LAB7:;
}

int axi_gpio_v1_01_b_a_3821899677_3306564128_sub_187020989_229454594(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 == 0);
    if (t10 != 0)
        goto LAB2;

LAB4:    t10 = (t3 > t4);
    if (t10 != 0)
        goto LAB6;

LAB8:    t0 = t4;

LAB1:    return t0;
LAB2:    t0 = t3;
    goto LAB1;

LAB3:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = t3;
    goto LAB1;

LAB7:    goto LAB3;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(612, ng4);

LAB3:    t2 = (t0 + 19064U);
    t3 = *((char **)t2);
    t2 = (t0 + 77372U);
    t4 = (t0 + 16024U);
    t5 = *((char **)t4);
    t4 = (t0 + 77228U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 44728);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 43848);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(614, ng4);

LAB3:    t1 = (t0 + 19224U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 15384U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 16504U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t7);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t5, t8);
    t10 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t9);
    t1 = (t0 + 18104U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t12);
    t1 = (t0 + 44792);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast(t1);

LAB2:    t18 = (t0 + 43864);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
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

LAB0:    xsi_set_current_line(618, ng4);

LAB3:    t1 = (t0 + 19384U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 15384U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 16504U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t5, t7);
    t9 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 17784U);
    t10 = *((char **)t1);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t9, t11);
    t1 = (t0 + 44856);
    t13 = (t1 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t1);

LAB2:    t17 = (t0 + 43880);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_3(char *t0)
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

LAB0:    xsi_set_current_line(625, ng4);
    t2 = (t0 + 18544U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 43896);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(626, ng4);
    t4 = (t0 + 18744U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(631, ng4);
    t2 = (t0 + 20024U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 44920);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(632, ng4);
    t2 = (t0 + 20344U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 44984);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(633, ng4);
    t2 = (t0 + 19704U);
    t4 = *((char **)t2);
    t2 = (t0 + 45048);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 32U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18584U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(627, ng4);
    t4 = (t0 + 44920);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(628, ng4);
    t2 = (t0 + 44984);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(629, ng4);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 45048);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(639, ng4);

LAB3:    t1 = (t0 + 19544U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 45112);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 43912);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_5(char *t0)
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

LAB0:    xsi_set_current_line(647, ng4);
    t2 = (t0 + 11024U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 43928);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(648, ng4);
    t4 = (t0 + 18904U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 45176);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 11064U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(664, ng4);

LAB3:    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)2, 1U);
    t3 = (t0 + 45240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 1U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(665, ng4);

LAB3:    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t2 = t1;
    memset(t2, (unsigned char)2, 2U);
    t3 = (t0 + 45304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 2U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_8(char *t0)
{
    char t11[16];
    char t13[16];
    char t24[16];
    char t27[16];
    char t37[16];
    char t42[16];
    char t44[16];
    char *t1;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(670, ng4);

LAB3:    t1 = (t0 + 79236);
    t3 = (t0 + 16824U);
    t4 = *((char **)t3);
    t5 = (11 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 6;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (6 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t1, t13, (char)99, t9, (char)101);
    t15 = (t0 + 16824U);
    t18 = *((char **)t15);
    t19 = (12 - 0);
    t17 = (t19 * 1);
    t20 = (1U * t17);
    t21 = (0 + t20);
    t15 = (t18 + t21);
    t22 = *((unsigned char *)t15);
    t25 = ((IEEE_P_2592010699) + 4024);
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t10, t11, (char)99, t22, (char)101);
    t28 = ((IEEE_P_2592010699) + 4024);
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t23, t24, (char)99, (unsigned char)2, (char)101);
    t29 = (t0 + 16824U);
    t30 = *((char **)t29);
    t31 = (14 - 0);
    t32 = (t31 * 1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t35 = *((unsigned char *)t29);
    t38 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t26, t27, (char)99, t35, (char)101);
    t39 = (t0 + 79243);
    t43 = ((IEEE_P_2592010699) + 4024);
    t45 = (t44 + 0U);
    t46 = (t45 + 0U);
    *((int *)t46) = 0;
    t46 = (t45 + 4U);
    *((int *)t46) = 4;
    t46 = (t45 + 8U);
    *((int *)t46) = 1;
    t47 = (4 - 0);
    t48 = (t47 * 1);
    t48 = (t48 + 1);
    t46 = (t45 + 12U);
    *((unsigned int *)t46) = t48;
    t41 = xsi_base_array_concat(t41, t42, t43, (char)97, t36, t37, (char)97, t39, t44, (char)101);
    t48 = (7U + 1U);
    t49 = (t48 + 1U);
    t50 = (t49 + 1U);
    t51 = (t50 + 1U);
    t52 = (t51 + 5U);
    t53 = (16U != t52);
    if (t53 == 1)
        goto LAB5;

LAB6:    t46 = (t0 + 45368);
    t54 = (t46 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t57, t41, 16U);
    xsi_driver_first_trans_fast(t46);

LAB2:    t58 = (t0 + 43944);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t52, 0);
    goto LAB6;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_9(char *t0)
{
    char t11[16];
    char t13[16];
    char t24[16];
    char t27[16];
    char t37[16];
    char t42[16];
    char t44[16];
    char *t1;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t38;
    char *t39;
    char *t41;
    char *t43;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned char t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(673, ng4);

LAB3:    t1 = (t0 + 79248);
    t3 = (t0 + 16984U);
    t4 = *((char **)t3);
    t5 = (11 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 6;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (6 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t1, t13, (char)99, t9, (char)101);
    t15 = (t0 + 16984U);
    t18 = *((char **)t15);
    t19 = (12 - 0);
    t17 = (t19 * 1);
    t20 = (1U * t17);
    t21 = (0 + t20);
    t15 = (t18 + t21);
    t22 = *((unsigned char *)t15);
    t25 = ((IEEE_P_2592010699) + 4024);
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t10, t11, (char)99, t22, (char)101);
    t28 = ((IEEE_P_2592010699) + 4024);
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t23, t24, (char)99, (unsigned char)2, (char)101);
    t29 = (t0 + 16984U);
    t30 = *((char **)t29);
    t31 = (14 - 0);
    t32 = (t31 * 1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t35 = *((unsigned char *)t29);
    t38 = ((IEEE_P_2592010699) + 4024);
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t26, t27, (char)99, t35, (char)101);
    t39 = (t0 + 79255);
    t43 = ((IEEE_P_2592010699) + 4024);
    t45 = (t44 + 0U);
    t46 = (t45 + 0U);
    *((int *)t46) = 0;
    t46 = (t45 + 4U);
    *((int *)t46) = 4;
    t46 = (t45 + 8U);
    *((int *)t46) = 1;
    t47 = (4 - 0);
    t48 = (t47 * 1);
    t48 = (t48 + 1);
    t46 = (t45 + 12U);
    *((unsigned int *)t46) = t48;
    t41 = xsi_base_array_concat(t41, t42, t43, (char)97, t36, t37, (char)97, t39, t44, (char)101);
    t48 = (7U + 1U);
    t49 = (t48 + 1U);
    t50 = (t49 + 1U);
    t51 = (t50 + 1U);
    t52 = (t51 + 5U);
    t53 = (16U != t52);
    if (t53 == 1)
        goto LAB5;

LAB6:    t46 = (t0 + 45432);
    t54 = (t46 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memcpy(t57, t41, 16U);
    xsi_driver_first_trans_fast(t46);

LAB2:    t58 = (t0 + 43960);
    *((int *)t58) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t52, 0);
    goto LAB6;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_10(char *t0)
{
    char t6[16];
    char t23[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(677, ng4);

LAB3:    t1 = (t0 + 16824U);
    t2 = *((char **)t1);
    t3 = (4 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 4;
    t8 = (t7 + 4U);
    *((int *)t8) = 10;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (10 - 4);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t1, t6);
    t8 = (t0 + 16824U);
    t12 = *((char **)t8);
    t13 = (13 - 0);
    t10 = (t13 * 1);
    t14 = (1U * t10);
    t15 = (0 + t14);
    t8 = (t12 + t15);
    t16 = *((unsigned char *)t8);
    t17 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t11, t16);
    t18 = (t0 + 16824U);
    t19 = *((char **)t18);
    t20 = (15 - 0);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 15;
    t25 = (t24 + 4U);
    *((int *)t25) = 19;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (19 - 15);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t28 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t18, t23);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t17, t28);
    t25 = (t0 + 45496);
    t30 = (t25 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t29;
    xsi_driver_first_trans_fast(t25);

LAB2:    t34 = (t0 + 43976);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_11(char *t0)
{
    char t6[16];
    char t23[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(681, ng4);

LAB3:    t1 = (t0 + 16984U);
    t2 = *((char **)t1);
    t3 = (4 - 0);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 4;
    t8 = (t7 + 4U);
    *((int *)t8) = 10;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (10 - 4);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t1, t6);
    t8 = (t0 + 16984U);
    t12 = *((char **)t8);
    t13 = (13 - 0);
    t10 = (t13 * 1);
    t14 = (1U * t10);
    t15 = (0 + t14);
    t8 = (t12 + t15);
    t16 = *((unsigned char *)t8);
    t17 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t11, t16);
    t18 = (t0 + 16984U);
    t19 = *((char **)t18);
    t20 = (15 - 0);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 15;
    t25 = (t24 + 4U);
    *((int *)t25) = 19;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (19 - 15);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t28 = ieee_p_0017514958_sub_1739486367_1861681735(IEEE_P_0017514958, t18, t23);
    t29 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t17, t28);
    t25 = (t0 + 45560);
    t30 = (t25 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t29;
    xsi_driver_first_trans_fast(t25);

LAB2:    t34 = (t0 + 43992);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_12(char *t0)
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

LAB0:    xsi_set_current_line(687, ng4);
    t2 = (t0 + 18544U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 44008);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(688, ng4);
    t4 = (t0 + 18744U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(692, ng4);
    t2 = (t0 + 17624U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 45688);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(693, ng4);
    t2 = (t0 + 17624U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 17944U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 45624);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t7;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18584U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(689, ng4);
    t4 = (t0 + 45624);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(690, ng4);
    t2 = (t0 + 45688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_13(char *t0)
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

LAB0:    xsi_set_current_line(703, ng4);
    t2 = (t0 + 18544U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 44024);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(704, ng4);
    t4 = (t0 + 18744U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(708, ng4);
    t2 = (t0 + 17464U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 45816);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(709, ng4);
    t2 = (t0 + 17464U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 18264U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 45752);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t7;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18584U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(705, ng4);
    t4 = (t0 + 45752);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(706, ng4);
    t2 = (t0 + 45816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_14(char *t0)
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

LAB0:    xsi_set_current_line(761, ng4);
    t2 = (t0 + 18544U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 44040);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(762, ng4);
    t4 = (t0 + 18744U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(765, ng4);
    t2 = (t0 + 20824U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 45880);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 18584U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(763, ng4);
    t4 = (t0 + 45880);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_15(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
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
    char *t30;

LAB0:    xsi_set_current_line(827, ng4);
    t2 = (t0 + 16664U);
    t3 = *((char **)t2);
    t4 = (0 - 0);
    t5 = (t4 * 1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t24 = (t0 + 15864U);
    t25 = *((char **)t24);
    t24 = (t0 + 45944);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 32U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t30 = (t0 + 44056);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 15704U);
    t19 = *((char **)t18);
    t18 = (t0 + 45944);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 32U);
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t10 = (t0 + 16184U);
    t11 = *((char **)t10);
    t12 = (28 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t10 = (t11 + t15);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)2);
    t1 = t17;
    goto LAB7;

LAB9:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(833, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25040U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 0U, 1, 0LL);

LAB2:    t17 = (t0 + 44072);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(833, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25160U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46072);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 1U, 1, 0LL);

LAB2:    t17 = (t0 + 44088);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(833, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25280U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 2U, 1, 0LL);

LAB2:    t17 = (t0 + 44104);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(833, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25400U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46200);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 3U, 1, 0LL);

LAB2:    t17 = (t0 + 44120);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(833, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25520U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 5);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 4U, 1, 0LL);

LAB2:    t17 = (t0 + 44136);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25640U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46328);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 0U, 1, 0LL);

LAB2:    t17 = (t0 + 44152);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25760U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46392);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 1U, 1, 0LL);

LAB2:    t17 = (t0 + 44168);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 25880U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46456);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 2U, 1, 0LL);

LAB2:    t17 = (t0 + 44184);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26000U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46520);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 3U, 1, 0LL);

LAB2:    t17 = (t0 + 44200);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26120U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 4U, 1, 0LL);

LAB2:    t17 = (t0 + 44216);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_26(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26240U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46648);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 5U, 1, 0LL);

LAB2:    t17 = (t0 + 44232);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26360U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46712);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 6U, 1, 0LL);

LAB2:    t17 = (t0 + 44248);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_28(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26480U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 7U, 1, 0LL);

LAB2:    t17 = (t0 + 44264);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_29(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26600U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46840);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 8U, 1, 0LL);

LAB2:    t17 = (t0 + 44280);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26720U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46904);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 9U, 1, 0LL);

LAB2:    t17 = (t0 + 44296);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26840U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 46968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 10U, 1, 0LL);

LAB2:    t17 = (t0 + 44312);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 26960U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47032);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 11U, 1, 0LL);

LAB2:    t17 = (t0 + 44328);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27080U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47096);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 12U, 1, 0LL);

LAB2:    t17 = (t0 + 44344);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27200U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47160);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 13U, 1, 0LL);

LAB2:    t17 = (t0 + 44360);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27320U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47224);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 14U, 1, 0LL);

LAB2:    t17 = (t0 + 44376);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27440U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47288);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 15U, 1, 0LL);

LAB2:    t17 = (t0 + 44392);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_37(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27560U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 16U, 1, 0LL);

LAB2:    t17 = (t0 + 44408);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27680U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47416);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 17U, 1, 0LL);

LAB2:    t17 = (t0 + 44424);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_39(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27800U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47480);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 18U, 1, 0LL);

LAB2:    t17 = (t0 + 44440);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 27920U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47544);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 19U, 1, 0LL);

LAB2:    t17 = (t0 + 44456);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_41(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28040U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47608);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 20U, 1, 0LL);

LAB2:    t17 = (t0 + 44472);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_42(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28160U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 21U, 1, 0LL);

LAB2:    t17 = (t0 + 44488);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28280U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47736);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 22U, 1, 0LL);

LAB2:    t17 = (t0 + 44504);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_44(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28400U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47800);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 23U, 1, 0LL);

LAB2:    t17 = (t0 + 44520);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_45(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28520U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47864);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 24U, 1, 0LL);

LAB2:    t17 = (t0 + 44536);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_46(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28640U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 25U, 1, 0LL);

LAB2:    t17 = (t0 + 44552);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_47(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28760U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 47992);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 26U, 1, 0LL);

LAB2:    t17 = (t0 + 44568);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_48(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 28880U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 48056);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 27U, 1, 0LL);

LAB2:    t17 = (t0 + 44584);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 29000U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 48120);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 28U, 1, 0LL);

LAB2:    t17 = (t0 + 44600);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_50(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 29120U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 48184);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 29U, 1, 0LL);

LAB2:    t17 = (t0 + 44616);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_51(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 29240U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 48248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 30U, 1, 0LL);

LAB2:    t17 = (t0 + 44632);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_gpio_v1_01_b_a_3821899677_3306564128_p_52(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(840, ng4);

LAB3:    t1 = (t0 + 16344U);
    t2 = *((char **)t1);
    t1 = (t0 + 29360U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 + 32);
    t6 = (t5 - 32);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 48312);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t12, 31U, 1, 0LL);

LAB2:    t17 = (t0 + 44648);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_gpio_v1_01_b_a_3821899677_3306564128_init()
{
	static char *pe[] = {(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_0,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_1,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_2,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_3,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_4,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_5,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_6,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_7,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_8,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_9,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_10,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_11,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_12,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_13,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_14,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_15,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_16,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_17,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_18,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_19,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_20,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_21,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_22,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_23,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_24,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_25,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_26,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_27,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_28,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_29,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_30,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_31,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_32,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_33,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_34,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_35,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_36,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_37,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_38,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_39,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_40,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_41,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_42,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_43,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_44,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_45,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_46,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_47,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_48,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_49,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_50,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_51,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_p_52};
	static char *se[] = {(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_3765301861_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_4109476219_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_387337112_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_315654337_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_2684039509_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_2290823345_229454594,(void *)axi_gpio_v1_01_b_a_3821899677_3306564128_sub_187020989_229454594};
	xsi_register_didat("axi_gpio_v1_01_b_a_3821899677_3306564128", "isim/isim_system.exe.sim/axi_gpio_v1_01_b/a_3821899677_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
