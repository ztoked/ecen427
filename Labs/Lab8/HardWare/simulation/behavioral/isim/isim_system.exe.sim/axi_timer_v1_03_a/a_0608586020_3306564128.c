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
static const char *ng1 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_timer_v1_03_a/hdl/vhdl/axi_timer.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


unsigned char axi_timer_v1_03_a_a_0608586020_3306564128_sub_3765301861_229454594(char *t1, unsigned char t2)
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

char *axi_timer_v1_03_a_a_0608586020_3306564128_sub_4109476219_229454594(char *t1, char *t2, char *t3, char *t4)
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
    t52 = axi_timer_v1_03_a_a_0608586020_3306564128_sub_3765301861_229454594(t1, t41);
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

static void axi_timer_v1_03_a_a_0608586020_3306564128_p_0(char *t0)
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

LAB0:    xsi_set_current_line(400, ng1);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 10720);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 10640);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_timer_v1_03_a_a_0608586020_3306564128_init()
{
	static char *pe[] = {(void *)axi_timer_v1_03_a_a_0608586020_3306564128_p_0};
	static char *se[] = {(void *)axi_timer_v1_03_a_a_0608586020_3306564128_sub_3765301861_229454594,(void *)axi_timer_v1_03_a_a_0608586020_3306564128_sub_4109476219_229454594};
	xsi_register_didat("axi_timer_v1_03_a_a_0608586020_3306564128", "isim/isim_system.exe.sim/axi_timer_v1_03_a/a_0608586020_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
