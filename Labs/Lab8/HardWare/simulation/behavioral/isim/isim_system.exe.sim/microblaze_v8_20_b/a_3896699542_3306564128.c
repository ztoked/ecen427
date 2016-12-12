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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/cache_valid_bit_detect.vhd";



static void microblaze_v8_20_b_a_3896699542_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(218, ng0);

LAB3:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = (30 - 2);
    t4 = (t3 - 0);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 5856);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 5744);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void microblaze_v8_20_b_a_3896699542_3306564128_p_1(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;

LAB0:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = (0 - 0);
    t5 = (t4 * 1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 2728U);
    t13 = *((char **)t12);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB11;

LAB12:    t11 = (unsigned char)0;

LAB13:    if (t11 == 1)
        goto LAB8;

LAB9:    t29 = (t0 + 2728U);
    t30 = *((char **)t29);
    t31 = (1 - 0);
    t32 = (t31 * 1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t35 = *((unsigned char *)t29);
    t36 = (t35 == (unsigned char)2);
    if (t36 == 1)
        goto LAB14;

LAB15:    t28 = (unsigned char)0;

LAB16:    t10 = t28;

LAB10:    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t50 = (t0 + 5920);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)2;
    xsi_driver_first_trans_delta(t50, 0U, 1, 0LL);

LAB2:    t55 = (t0 + 5760);
    *((int *)t55) = 1;

LAB1:    return;
LAB3:    t45 = (t0 + 5920);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = (unsigned char)3;
    xsi_driver_first_trans_delta(t45, 0U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t10 = (unsigned char)1;
    goto LAB10;

LAB11:    t20 = (t0 + 2248U);
    t21 = *((char **)t20);
    t22 = (3 - 0);
    t23 = (t22 * 1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t20 = (t21 + t25);
    t26 = *((unsigned char *)t20);
    t27 = (t26 == (unsigned char)3);
    t11 = t27;
    goto LAB13;

LAB14:    t37 = (t0 + 2248U);
    t38 = *((char **)t37);
    t39 = (2 - 0);
    t40 = (t39 * 1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t37 = (t38 + t42);
    t43 = *((unsigned char *)t37);
    t44 = (t43 == (unsigned char)3);
    t28 = t44;
    goto LAB16;

LAB18:    goto LAB2;

}

static void microblaze_v8_20_b_a_3896699542_3306564128_p_2(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned char t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;

LAB0:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 2728U);
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

LAB6:    t12 = (t0 + 2728U);
    t13 = *((char **)t12);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    t18 = *((unsigned char *)t12);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB11;

LAB12:    t11 = (unsigned char)0;

LAB13:    if (t11 == 1)
        goto LAB8;

LAB9:    t29 = (t0 + 2728U);
    t30 = *((char **)t29);
    t31 = (1 - 0);
    t32 = (t31 * 1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t29 = (t30 + t34);
    t35 = *((unsigned char *)t29);
    t36 = (t35 == (unsigned char)2);
    if (t36 == 1)
        goto LAB14;

LAB15:    t28 = (unsigned char)0;

LAB16:    t10 = t28;

LAB10:    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t50 = (t0 + 5984);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)2;
    xsi_driver_first_trans_delta(t50, 1U, 1, 0LL);

LAB2:    t55 = (t0 + 5776);
    *((int *)t55) = 1;

LAB1:    return;
LAB3:    t45 = (t0 + 5984);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = (unsigned char)3;
    xsi_driver_first_trans_delta(t45, 1U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t10 = (unsigned char)1;
    goto LAB10;

LAB11:    t20 = (t0 + 2248U);
    t21 = *((char **)t20);
    t22 = (1 - 0);
    t23 = (t22 * 1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t20 = (t21 + t25);
    t26 = *((unsigned char *)t20);
    t27 = (t26 == (unsigned char)3);
    t11 = t27;
    goto LAB13;

LAB14:    t37 = (t0 + 2248U);
    t38 = *((char **)t37);
    t39 = (0 - 0);
    t40 = (t39 * 1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t37 = (t38 + t42);
    t43 = *((unsigned char *)t37);
    t44 = (t43 == (unsigned char)3);
    t28 = t44;
    goto LAB16;

LAB18:    goto LAB2;

}


extern void microblaze_v8_20_b_a_3896699542_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_3896699542_3306564128_p_0,(void *)microblaze_v8_20_b_a_3896699542_3306564128_p_1,(void *)microblaze_v8_20_b_a_3896699542_3306564128_p_2};
	xsi_register_didat("microblaze_v8_20_b_a_3896699542_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_3896699542_3306564128.didat");
	xsi_register_executes(pe);
}
