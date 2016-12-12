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
static const char *ng0 = "Function lowercase_char ended without a return statement";
extern char *STD_STANDARD;
static const char *ng2 = "Function log2 ended without a return statement";
static const char *ng3 = "Function tolowercasechar ended without a return statement";
static const char *ng4 = "Function what_srl16 ended without a return statement";
static const char *ng5 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/fit_timer_v1_01_b/hdl/vhdl/fit_timer.vhd";



unsigned char fit_timer_v1_01_b_a_0914523833_0090727531_sub_1393826549_1724905902(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    static char *nl0[] = {&&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t7 = (t2 < (unsigned char)65);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t2 > (unsigned char)90);
    t6 = t8;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t9 = (char *)((nl0) + t2);
    goto **((char **)t9);

LAB2:    t0 = t2;

LAB1:    return t0;
LAB5:    t6 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB10:    t0 = (unsigned char)97;
    goto LAB1;

LAB11:    t0 = (unsigned char)98;
    goto LAB1;

LAB12:    t0 = (unsigned char)99;
    goto LAB1;

LAB13:    t0 = (unsigned char)100;
    goto LAB1;

LAB14:    t0 = (unsigned char)101;
    goto LAB1;

LAB15:    t0 = (unsigned char)102;
    goto LAB1;

LAB16:    t0 = (unsigned char)103;
    goto LAB1;

LAB17:    t0 = (unsigned char)104;
    goto LAB1;

LAB18:    t0 = (unsigned char)105;
    goto LAB1;

LAB19:    t0 = (unsigned char)106;
    goto LAB1;

LAB20:    t0 = (unsigned char)107;
    goto LAB1;

LAB21:    t0 = (unsigned char)108;
    goto LAB1;

LAB22:    t0 = (unsigned char)109;
    goto LAB1;

LAB23:    t0 = (unsigned char)110;
    goto LAB1;

LAB24:    t0 = (unsigned char)111;
    goto LAB1;

LAB25:    t0 = (unsigned char)112;
    goto LAB1;

LAB26:    t0 = (unsigned char)113;
    goto LAB1;

LAB27:    t0 = (unsigned char)114;
    goto LAB1;

LAB28:    t0 = (unsigned char)115;
    goto LAB1;

LAB29:    t0 = (unsigned char)116;
    goto LAB1;

LAB30:    t0 = (unsigned char)117;
    goto LAB1;

LAB31:    t0 = (unsigned char)118;
    goto LAB1;

LAB32:    t0 = (unsigned char)119;
    goto LAB1;

LAB33:    t0 = (unsigned char)120;
    goto LAB1;

LAB34:    t0 = (unsigned char)121;
    goto LAB1;

LAB35:    t0 = (unsigned char)122;
    goto LAB1;

LAB36:    t0 = t2;
    goto LAB1;

LAB37:    goto LAB9;

LAB38:    goto LAB9;

LAB39:    goto LAB9;

LAB40:    goto LAB9;

LAB41:    goto LAB9;

LAB42:    goto LAB9;

LAB43:    goto LAB9;

LAB44:    goto LAB9;

LAB45:    goto LAB9;

LAB46:    goto LAB9;

LAB47:    goto LAB9;

LAB48:    goto LAB9;

LAB49:    goto LAB9;

LAB50:    goto LAB9;

LAB51:    goto LAB9;

LAB52:    goto LAB9;

LAB53:    goto LAB9;

LAB54:    goto LAB9;

LAB55:    goto LAB9;

LAB56:    goto LAB9;

LAB57:    goto LAB9;

LAB58:    goto LAB9;

LAB59:    goto LAB9;

LAB60:    goto LAB9;

LAB61:    goto LAB9;

LAB62:    goto LAB9;

LAB63:    goto LAB9;

}

char *fit_timer_v1_01_b_a_0914523833_0090727531_sub_4083363267_1724905902(char *t1, char *t2, char *t3, char *t4)
{
    char t5[152];
    char t6[24];
    char t9[16];
    char *t0;
    char *t7;
    unsigned int t8;
    char *t10;
    int t11;
    char *t12;
    int t13;
    char *t14;
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
    char *t29;
    int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned char t58;
    unsigned char t59;
    char *t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    unsigned int t66;
    char *t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t10 = (t4 + 0U);
    t11 = *((int *)t10);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    t14 = (t4 + 8U);
    t15 = *((int *)t14);
    t16 = (t9 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t11;
    t17 = (t16 + 4U);
    *((int *)t17) = t13;
    t17 = (t16 + 8U);
    *((int *)t17) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = ((STD_STANDARD) + 1008);
    t21 = (t17 + 88U);
    *((char **)t21) = t20;
    t22 = xsi_get_memory(t8);
    t23 = (t17 + 56U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t9);
    t24 = (t17 + 64U);
    *((char **)t24) = t9;
    t25 = (t17 + 80U);
    *((unsigned int *)t25) = t8;
    t26 = (t17 + 136U);
    *((char **)t26) = t22;
    t27 = (t17 + 124U);
    *((int *)t27) = 0;
    t28 = (t17 + 128U);
    t29 = (t9 + 12U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 - 1);
    *((int *)t28) = t30;
    t31 = (t17 + 120U);
    t33 = (t8 > 2147483644);
    if (t33 == 1)
        goto LAB2;

LAB3:    t34 = (t8 + 3);
    t35 = (t34 / 16);
    t32 = t35;

LAB4:    *((unsigned int *)t31) = t32;
    t36 = (t6 + 4U);
    t37 = (t3 != 0);
    if (t37 == 1)
        goto LAB6;

LAB5:    t38 = (t6 + 12U);
    *((char **)t38) = t4;
    t39 = (t4 + 8U);
    t40 = *((int *)t39);
    t41 = (t4 + 4U);
    t42 = *((int *)t41);
    t43 = (t4 + 0U);
    t44 = *((int *)t43);
    t45 = t44;
    t46 = t42;

LAB7:    t47 = (t46 * t40);
    t48 = (t45 * t40);
    if (t48 <= t47)
        goto LAB8;

LAB10:    t7 = (t17 + 56U);
    t10 = *((char **)t7);
    t7 = (t9 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t10, t8);
    t12 = (t9 + 0U);
    t11 = *((int *)t12);
    t14 = (t9 + 4U);
    t13 = *((int *)t14);
    t16 = (t9 + 8U);
    t15 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t11;
    t21 = (t20 + 4U);
    *((int *)t21) = t13;
    t21 = (t20 + 8U);
    *((int *)t21) = t15;
    t18 = (t13 - t11);
    t19 = (t18 * t15);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    t7 = (t17 + 80);
    t11 = *((int *)t7);
    t10 = (t17 + 136U);
    t12 = *((char **)t10);
    xsi_put_memory(t11, t12);
    return t0;
LAB2:    t32 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t36) = t3;
    goto LAB5;

LAB8:    t49 = (t4 + 0U);
    t50 = *((int *)t49);
    t51 = (t4 + 8U);
    t52 = *((int *)t51);
    t53 = (t45 - t50);
    t54 = (t53 * t52);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t57 = (t3 + t56);
    t58 = *((unsigned char *)t57);
    t59 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1393826549_1724905902(t1, t58);
    t60 = (t17 + 56U);
    t61 = *((char **)t60);
    t60 = (t9 + 0U);
    t62 = *((int *)t60);
    t63 = (t9 + 8U);
    t64 = *((int *)t63);
    t65 = (t45 - t62);
    t66 = (t65 * t64);
    t67 = (t9 + 4U);
    t68 = *((int *)t67);
    xsi_vhdl_check_range_of_index(t62, t68, t64, t45);
    t69 = (1U * t66);
    t70 = (0 + t69);
    t71 = (t61 + t70);
    *((unsigned char *)t71) = t59;

LAB9:    if (t45 == t46)
        goto LAB10;

LAB11:    t11 = (t45 + t40);
    t45 = t11;
    goto LAB7;

LAB12:;
}

int fit_timer_v1_01_b_a_0914523833_0090727531_sub_2604412845_1724905902(char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    int t13;
    int t14;
    int t15;
    int t16;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = 0;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t2 == 0);
    if (t12 != 0)
        goto LAB2;

LAB4:
LAB6:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = *((int *)t7);
    t14 = xsi_vhdl_pow(2, t13);
    t12 = (t14 < t2);
    if (t12 != 0)
        goto LAB7;

LAB9:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = *((int *)t7);
    t0 = t13;

LAB1:    return t0;
LAB2:    t0 = 0;
    goto LAB1;

LAB3:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB7:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t15 = *((int *)t9);
    t16 = (t15 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t16;
    goto LAB6;

LAB8:;
LAB10:    goto LAB3;

}

unsigned char fit_timer_v1_01_b_a_0914523833_0090727531_sub_1905495129_1724905902(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    static char *nl0[] = {&&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36, &&LAB36};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t7 = (t2 < (unsigned char)65);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t2 > (unsigned char)90);
    t6 = t8;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t9 = (char *)((nl0) + t2);
    goto **((char **)t9);

LAB2:    t0 = t2;

LAB1:    return t0;
LAB5:    t6 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB10:    t0 = (unsigned char)97;
    goto LAB1;

LAB11:    t0 = (unsigned char)98;
    goto LAB1;

LAB12:    t0 = (unsigned char)99;
    goto LAB1;

LAB13:    t0 = (unsigned char)100;
    goto LAB1;

LAB14:    t0 = (unsigned char)101;
    goto LAB1;

LAB15:    t0 = (unsigned char)102;
    goto LAB1;

LAB16:    t0 = (unsigned char)103;
    goto LAB1;

LAB17:    t0 = (unsigned char)104;
    goto LAB1;

LAB18:    t0 = (unsigned char)105;
    goto LAB1;

LAB19:    t0 = (unsigned char)106;
    goto LAB1;

LAB20:    t0 = (unsigned char)107;
    goto LAB1;

LAB21:    t0 = (unsigned char)108;
    goto LAB1;

LAB22:    t0 = (unsigned char)109;
    goto LAB1;

LAB23:    t0 = (unsigned char)110;
    goto LAB1;

LAB24:    t0 = (unsigned char)111;
    goto LAB1;

LAB25:    t0 = (unsigned char)112;
    goto LAB1;

LAB26:    t0 = (unsigned char)113;
    goto LAB1;

LAB27:    t0 = (unsigned char)114;
    goto LAB1;

LAB28:    t0 = (unsigned char)115;
    goto LAB1;

LAB29:    t0 = (unsigned char)116;
    goto LAB1;

LAB30:    t0 = (unsigned char)117;
    goto LAB1;

LAB31:    t0 = (unsigned char)118;
    goto LAB1;

LAB32:    t0 = (unsigned char)119;
    goto LAB1;

LAB33:    t0 = (unsigned char)120;
    goto LAB1;

LAB34:    t0 = (unsigned char)121;
    goto LAB1;

LAB35:    t0 = (unsigned char)122;
    goto LAB1;

LAB36:    t0 = t2;
    goto LAB1;

LAB37:    goto LAB9;

LAB38:    goto LAB9;

LAB39:    goto LAB9;

LAB40:    goto LAB9;

LAB41:    goto LAB9;

LAB42:    goto LAB9;

LAB43:    goto LAB9;

LAB44:    goto LAB9;

LAB45:    goto LAB9;

LAB46:    goto LAB9;

LAB47:    goto LAB9;

LAB48:    goto LAB9;

LAB49:    goto LAB9;

LAB50:    goto LAB9;

LAB51:    goto LAB9;

LAB52:    goto LAB9;

LAB53:    goto LAB9;

LAB54:    goto LAB9;

LAB55:    goto LAB9;

LAB56:    goto LAB9;

LAB57:    goto LAB9;

LAB58:    goto LAB9;

LAB59:    goto LAB9;

LAB60:    goto LAB9;

LAB61:    goto LAB9;

LAB62:    goto LAB9;

LAB63:    goto LAB9;

}

unsigned char fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t6[368];
    char t7[40];
    char t13[8];
    char t21[8];
    char t27[8];
    unsigned char t0;
    char *t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    int t54;
    int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned char t60;
    unsigned char t61;

LAB0:    t8 = (t3 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (t6 + 4U);
    t11 = ((STD_STANDARD) + 384);
    t12 = (t10 + 88U);
    *((char **)t12) = t11;
    t14 = (t10 + 56U);
    *((char **)t14) = t13;
    *((unsigned int *)t13) = t9;
    t15 = (t10 + 80U);
    *((unsigned int *)t15) = 4U;
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (t6 + 124U);
    t19 = ((STD_STANDARD) + 384);
    t20 = (t18 + 88U);
    *((char **)t20) = t19;
    t22 = (t18 + 56U);
    *((char **)t22) = t21;
    *((unsigned int *)t21) = t17;
    t23 = (t18 + 80U);
    *((unsigned int *)t23) = 4U;
    t24 = (t6 + 244U);
    t25 = ((STD_STANDARD) + 0);
    t26 = (t24 + 88U);
    *((char **)t26) = t25;
    t28 = (t24 + 56U);
    *((char **)t28) = t27;
    *((unsigned char *)t27) = (unsigned char)1;
    t29 = (t24 + 80U);
    *((unsigned int *)t29) = 1U;
    t30 = (t7 + 4U);
    t31 = (t2 != 0);
    if (t31 == 1)
        goto LAB3;

LAB2:    t32 = (t7 + 12U);
    *((char **)t32) = t3;
    t33 = (t7 + 20U);
    t34 = (t4 != 0);
    if (t34 == 1)
        goto LAB5;

LAB4:    t35 = (t7 + 28U);
    *((char **)t35) = t5;
    t36 = (t10 + 56U);
    t37 = *((char **)t36);
    t38 = *((int *)t37);
    t36 = (t18 + 56U);
    t39 = *((char **)t36);
    t40 = *((int *)t39);
    t41 = (t38 == t40);
    t42 = (!(t41));
    if (t42 != 0)
        goto LAB6;

LAB8:    t8 = (t3 + 8U);
    t38 = *((int *)t8);
    t11 = (t3 + 4U);
    t40 = *((int *)t11);
    t12 = (t3 + 0U);
    t44 = *((int *)t12);
    t45 = t44;
    t46 = t40;

LAB9:    t47 = (t46 * t38);
    t48 = (t45 * t38);
    if (t48 <= t47)
        goto LAB10;

LAB12:
LAB7:    t8 = (t24 + 56U);
    t11 = *((char **)t8);
    t31 = *((unsigned char *)t11);
    t0 = t31;

LAB1:    return t0;
LAB3:    *((char **)t30) = t2;
    goto LAB2;

LAB5:    *((char **)t33) = t4;
    goto LAB4;

LAB6:    t36 = (t24 + 56U);
    t43 = *((char **)t36);
    t36 = (t43 + 0);
    *((unsigned char *)t36) = (unsigned char)0;
    goto LAB7;

LAB10:    t14 = (t3 + 0U);
    t49 = *((int *)t14);
    t15 = (t3 + 8U);
    t50 = *((int *)t15);
    t51 = (t45 - t49);
    t9 = (t51 * t50);
    t17 = (1U * t9);
    t52 = (0 + t17);
    t16 = (t2 + t52);
    t31 = *((unsigned char *)t16);
    t34 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1905495129_1724905902(t1, t31);
    t19 = (t5 + 0U);
    t53 = *((int *)t19);
    t20 = (t5 + 8U);
    t54 = *((int *)t20);
    t55 = (t45 - t53);
    t56 = (t55 * t54);
    t22 = (t5 + 4U);
    t57 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t53, t57, t54, t45);
    t58 = (1U * t56);
    t59 = (0 + t58);
    t23 = (t4 + t59);
    t41 = *((unsigned char *)t23);
    t42 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1905495129_1724905902(t1, t41);
    t60 = (t34 == t42);
    t61 = (!(t60));
    if (t61 != 0)
        goto LAB13;

LAB15:
LAB14:
LAB11:    if (t45 == t46)
        goto LAB12;

LAB16:    t40 = (t45 + t38);
    t45 = t40;
    goto LAB9;

LAB13:    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    *((unsigned char *)t25) = (unsigned char)0;
    goto LAB14;

LAB17:;
}

int fit_timer_v1_01_b_a_0914523833_0090727531_sub_784192562_1724905902(char *t1)
{
    char t2[152];
    char t7[16];
    char t37[16];
    char t52[16];
    char t54[16];
    char t56[16];
    char t58[16];
    char t60[16];
    int t0;
    char *t4;
    char *t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
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
    int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    unsigned char t49;
    unsigned char t50;
    unsigned char t51;
    unsigned char t53;
    unsigned char t55;
    unsigned char t57;
    unsigned char t59;
    int t61;
    unsigned char t62;

LAB0:    t4 = (t1 + 14656U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t8 = (t1 + 14656U);
    t9 = (t8 + 0U);
    t10 = *((int *)t9);
    t11 = (t1 + 14656U);
    t12 = (t11 + 4U);
    t13 = *((int *)t12);
    t14 = (t1 + 14656U);
    t15 = (t14 + 8U);
    t16 = *((int *)t15);
    t17 = (t7 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t10;
    t18 = (t17 + 4U);
    *((int *)t18) = t13;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t13 - t10);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = (t2 + 4U);
    t21 = ((STD_STANDARD) + 1008);
    t22 = (t18 + 88U);
    *((char **)t22) = t21;
    t23 = xsi_get_memory(t6);
    t24 = (t18 + 56U);
    *((char **)t24) = t23;
    xsi_type_set_default_value(t21, t23, t7);
    t25 = (t18 + 64U);
    *((char **)t25) = t7;
    t26 = (t18 + 80U);
    *((unsigned int *)t26) = t6;
    t27 = (t18 + 136U);
    *((char **)t27) = t23;
    t28 = (t18 + 124U);
    *((int *)t28) = 0;
    t29 = (t18 + 128U);
    t30 = (t7 + 12U);
    t20 = *((unsigned int *)t30);
    t31 = (t20 - 1);
    *((int *)t29) = t31;
    t32 = (t18 + 120U);
    t34 = (t6 > 2147483644);
    if (t34 == 1)
        goto LAB2;

LAB3:    t35 = (t6 + 3);
    t36 = (t35 / 16);
    t33 = t36;

LAB4:    *((unsigned int *)t32) = t33;
    t38 = (t1 + 14872);
    t40 = (t1 + 14656U);
    t41 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_4083363267_1724905902(t1, t37, t38, t40);
    t42 = (t18 + 56U);
    t43 = *((char **)t42);
    t42 = (t43 + 0);
    t44 = (t37 + 12U);
    t45 = *((unsigned int *)t44);
    t45 = (t45 * 1U);
    memcpy(t42, t41, t45);
    t4 = (t18 + 56U);
    t5 = *((char **)t4);
    t4 = (t1 + 14880);
    t9 = (t37 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 1;
    t11 = (t9 + 4U);
    *((int *)t11) = 7;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t10 = (7 - 1);
    t6 = (t10 * 1);
    t6 = (t6 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t6;
    t51 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t5, t7, t4, t37);
    if (t51 == 1)
        goto LAB20;

LAB21:    t11 = (t18 + 56U);
    t12 = *((char **)t11);
    t11 = (t1 + 14887);
    t15 = (t52 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 1;
    t17 = (t15 + 4U);
    *((int *)t17) = 8;
    t17 = (t15 + 8U);
    *((int *)t17) = 1;
    t13 = (8 - 1);
    t6 = (t13 * 1);
    t6 = (t6 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t6;
    t53 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t12, t7, t11, t52);
    t50 = t53;

LAB22:    if (t50 == 1)
        goto LAB17;

LAB18:    t17 = (t18 + 56U);
    t21 = *((char **)t17);
    t17 = (t1 + 14895);
    t23 = (t54 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 1;
    t24 = (t23 + 4U);
    *((int *)t24) = 8;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t16 = (8 - 1);
    t6 = (t16 * 1);
    t6 = (t6 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t6;
    t55 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t21, t7, t17, t54);
    t49 = t55;

LAB19:    if (t49 == 1)
        goto LAB14;

LAB15:    t24 = (t18 + 56U);
    t25 = *((char **)t24);
    t24 = (t1 + 14903);
    t27 = (t56 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 9;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t19 = (9 - 1);
    t6 = (t19 * 1);
    t6 = (t6 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t6;
    t57 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t25, t7, t24, t56);
    t48 = t57;

LAB16:    if (t48 == 1)
        goto LAB11;

LAB12:    t28 = (t18 + 56U);
    t29 = *((char **)t28);
    t28 = (t1 + 14912);
    t32 = (t58 + 0U);
    t38 = (t32 + 0U);
    *((int *)t38) = 1;
    t38 = (t32 + 4U);
    *((int *)t38) = 7;
    t38 = (t32 + 8U);
    *((int *)t38) = 1;
    t31 = (7 - 1);
    t6 = (t31 * 1);
    t6 = (t6 + 1);
    t38 = (t32 + 12U);
    *((unsigned int *)t38) = t6;
    t59 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t29, t7, t28, t58);
    t47 = t59;

LAB13:    if (t47 == 1)
        goto LAB8;

LAB9:    t38 = (t18 + 56U);
    t39 = *((char **)t38);
    t38 = (t1 + 14919);
    t41 = (t60 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 1;
    t42 = (t41 + 4U);
    *((int *)t42) = 8;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t61 = (8 - 1);
    t6 = (t61 * 1);
    t6 = (t6 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t6;
    t62 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902(t1, t39, t7, t38, t60);
    t46 = t62;

LAB10:    if (t46 != 0)
        goto LAB5;

LAB7:    t0 = 16;

LAB1:    t4 = (t18 + 80);
    t10 = *((int *)t4);
    t5 = (t18 + 136U);
    t8 = *((char **)t5);
    xsi_put_memory(t10, t8);
    return t0;
LAB2:    t33 = 2147483647;
    goto LAB4;

LAB5:    t0 = 128;
    goto LAB1;

LAB6:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB8:    t46 = (unsigned char)1;
    goto LAB10;

LAB11:    t47 = (unsigned char)1;
    goto LAB13;

LAB14:    t48 = (unsigned char)1;
    goto LAB16;

LAB17:    t49 = (unsigned char)1;
    goto LAB19;

LAB20:    t50 = (unsigned char)1;
    goto LAB22;

LAB23:    goto LAB6;

LAB24:    goto LAB6;

}

char *fit_timer_v1_01_b_a_0914523833_0090727531_sub_773722353_1724905902(char *t1, int t2)
{
    char t3[488];
    char t4[8];
    char t8[8];
    char t14[72];
    char t20[8];
    char t26[8];
    char *t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    unsigned char t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    int t42;
    unsigned char t43;
    unsigned char t44;
    int t45;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 832);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = t2;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = (t1 + 8560);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, 0);
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 72U;
    t17 = (t3 + 244U);
    t18 = ((STD_STANDARD) + 832);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    *((int *)t20) = 1;
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 4U;
    t23 = (t3 + 364U);
    t24 = ((STD_STANDARD) + 0);
    t25 = (t23 + 88U);
    *((char **)t25) = t24;
    t27 = (t23 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t23 + 80U);
    *((unsigned int *)t28) = 1U;
    t29 = (t4 + 4U);
    *((int *)t29) = t2;
    t30 = (t11 + 56U);
    t31 = *((char **)t30);
    t32 = (0 + 4U);
    t30 = (t31 + t32);
    *((int *)t30) = 0;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 68U);
    t6 = (t7 + t32);
    *((int *)t6) = 0;
    t6 = xsi_get_transient_memory(60U);
    memset(t6, 0, 60U);
    t7 = t6;
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t7 = (t7 + 4U);
    *((int *)t7) = 2;
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t32 = (0 + 8U);
    t9 = (t10 + t32);
    memcpy(t9, t6, 60U);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t33 = *((int *)t7);
    t34 = (t33 < 16);
    if (t34 != 0)
        goto LAB2;

LAB4:
LAB3:
LAB6:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t33 = *((int *)t7);
    t34 = (t33 != 1);
    if (t34 != 0)
        goto LAB7;

LAB9:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t34 = *((unsigned char *)t7);
    if (t34 != 0)
        goto LAB35;

LAB37:
LAB36:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t7, 72U);

LAB1:    return t0;
LAB2:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t35 = *((int *)t9);
    t6 = (t11 + 56U);
    t10 = *((char **)t6);
    t36 = (1 - 1);
    t32 = (t36 * 1);
    t37 = (4U * t32);
    t38 = (0 + 8U);
    t39 = (t38 + t37);
    t6 = (t10 + t39);
    *((int *)t6) = t35;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 4U);
    t6 = (t7 + t32);
    *((int *)t6) = 1;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 0U);
    t6 = (t7 + t32);
    *((unsigned char *)t6) = (unsigned char)1;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 68U);
    t6 = (t7 + t32);
    *((int *)t6) = 1;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t7, 72U);
    goto LAB1;

LAB5:    goto LAB3;

LAB7:    t6 = (t23 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((unsigned char *)t6) = (unsigned char)0;
    t33 = 16;
    t35 = 2;

LAB10:    if (t33 >= t35)
        goto LAB11;

LAB13:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t34 = *((unsigned char *)t7);
    t43 = (!(t34));
    if (t43 != 0)
        goto LAB19;

LAB21:
LAB20:    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t34 = *((unsigned char *)t7);
    t43 = (!(t34));
    if (t43 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB6;

LAB8:;
LAB11:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t36 = *((int *)t7);
    t40 = xsi_vhdl_mod(t36, t33);
    t34 = (t40 == 0);
    if (t34 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB12:    if (t33 == t35)
        goto LAB13;

LAB18:    t36 = (t33 + -1);
    t33 = t36;
    goto LAB10;

LAB14:    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t17 + 56U);
    t10 = *((char **)t6);
    t41 = *((int *)t10);
    t42 = (t41 - 1);
    t32 = (t42 * 1);
    xsi_vhdl_check_range_of_index(1, 15, 1, t41);
    t37 = (4U * t32);
    t38 = (0 + 8U);
    t39 = (t38 + t37);
    t6 = (t9 + t39);
    *((int *)t6) = t33;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 68U);
    t6 = (t7 + t32);
    t36 = *((int *)t6);
    t40 = (t36 + 1);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t37 = (0 + 68U);
    t9 = (t10 + t37);
    *((int *)t9) = t40;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t36 = *((int *)t7);
    t40 = (t36 / t33);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t40;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t36 = *((int *)t7);
    t40 = (t36 + 1);
    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t40;
    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)1;
    goto LAB13;

LAB17:    goto LAB15;

LAB19:    t6 = (t1 + 4824U);
    t9 = *((char **)t6);
    t33 = *((int *)t9);
    t35 = 17;
    t36 = t33;

LAB22:    if (t35 <= t36)
        goto LAB23;

LAB25:    goto LAB20;

LAB23:    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t40 = *((int *)t10);
    t41 = xsi_vhdl_mod(t40, t35);
    t44 = (t41 == 0);
    if (t44 != 0)
        goto LAB26;

LAB28:
LAB27:
LAB24:    if (t35 == t36)
        goto LAB25;

LAB30:    t33 = (t35 + 1);
    t35 = t33;
    goto LAB22;

LAB26:    t6 = (t11 + 56U);
    t12 = *((char **)t6);
    t6 = (t17 + 56U);
    t13 = *((char **)t6);
    t42 = *((int *)t13);
    t45 = (t42 - 1);
    t32 = (t45 * 1);
    xsi_vhdl_check_range_of_index(1, 15, 1, t42);
    t37 = (4U * t32);
    t38 = (0 + 8U);
    t39 = (t38 + t37);
    t6 = (t12 + t39);
    *((int *)t6) = t35;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t32 = (0 + 68U);
    t6 = (t7 + t32);
    t33 = *((int *)t6);
    t40 = (t35 - 1);
    t41 = (t40 / 16);
    t42 = (1 + t41);
    t45 = (t33 + t42);
    t9 = (t11 + 56U);
    t10 = *((char **)t9);
    t37 = (0 + 68U);
    t9 = (t10 + t37);
    *((int *)t9) = t45;
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t33 = *((int *)t7);
    t40 = (t33 / t35);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t40;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t33 = *((int *)t7);
    t40 = (t33 + 1);
    t6 = (t17 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t40;
    t6 = (t23 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)1;
    goto LAB25;

LAB29:    goto LAB27;

LAB31:    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t32 = (0 + 0U);
    t6 = (t9 + t32);
    *((unsigned char *)t6) = (unsigned char)0;
    goto LAB9;

LAB34:    goto LAB32;

LAB35:    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t32 = (0 + 0U);
    t6 = (t9 + t32);
    *((unsigned char *)t6) = (unsigned char)1;
    t6 = (t17 + 56U);
    t7 = *((char **)t6);
    t33 = *((int *)t7);
    t35 = (t33 - 1);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t32 = (0 + 4U);
    t6 = (t9 + t32);
    *((int *)t6) = t35;
    goto LAB36;

LAB38:;
}

char *fit_timer_v1_01_b_a_0914523833_0090727531_sub_1110259624_1724905902(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t10[8];
    char t16[72];
    char *t0;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    int t25;
    int t26;
    int t27;

LAB0:    t5 = (t2 * 0);
    t6 = (t5 / 1000);
    t7 = (t3 + 4U);
    t8 = ((STD_STANDARD) + 832);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    *((int *)t10) = t6;
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t3 + 124U);
    t14 = (t1 + 8560);
    t15 = (t13 + 88U);
    *((char **)t15) = t14;
    t17 = (t13 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t13 + 80U);
    *((unsigned int *)t18) = 72U;
    t19 = (t4 + 4U);
    *((int *)t19) = t2;
    t20 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_773722353_1724905902(t1, t2);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t21 = (t22 + 0);
    memcpy(t21, t20, 72U);
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t23 = (0 + 0U);
    t8 = (t9 + t23);
    t24 = *((unsigned char *)t8);
    if (t24 != 0)
        goto LAB2;

LAB4:
LAB3:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t5 = *((int *)t9);
    t24 = (t5 > 0);
    if (t24 != 0)
        goto LAB6;

LAB8:
LAB7:    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t23 = (0 + 0U);
    t8 = (t9 + t23);
    *((unsigned char *)t8) = (unsigned char)0;
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t9, 72U);

LAB1:    return t0;
LAB2:    t11 = (t13 + 56U);
    t12 = *((char **)t11);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t12, 72U);
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t6 = *((int *)t11);
    t25 = 1;
    t26 = t6;

LAB9:    if (t25 <= t26)
        goto LAB10;

LAB12:    goto LAB7;

LAB10:    t27 = (t2 + t25);
    t8 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_773722353_1724905902(t1, t27);
    t12 = (t13 + 56U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    memcpy(t12, t8, 72U);
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t23 = (0 + 0U);
    t8 = (t9 + t23);
    t24 = *((unsigned char *)t8);
    if (t24 != 0)
        goto LAB13;

LAB15:
LAB14:    t5 = (t2 - t25);
    t8 = fit_timer_v1_01_b_a_0914523833_0090727531_sub_773722353_1724905902(t1, t5);
    t9 = (t13 + 56U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t8, 72U);
    t8 = (t13 + 56U);
    t9 = *((char **)t8);
    t23 = (0 + 0U);
    t8 = (t9 + t23);
    t24 = *((unsigned char *)t8);
    if (t24 != 0)
        goto LAB17;

LAB19:
LAB18:
LAB11:    if (t25 == t26)
        goto LAB12;

LAB21:    t5 = (t25 + 1);
    t25 = t5;
    goto LAB9;

LAB13:    t11 = (t13 + 56U);
    t12 = *((char **)t11);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t12, 72U);
    goto LAB1;

LAB16:    goto LAB14;

LAB17:    t11 = (t13 + 56U);
    t12 = *((char **)t11);
    t0 = xsi_get_transient_memory(72U);
    memcpy(t0, t12, 72U);
    goto LAB1;

LAB20:    goto LAB18;

LAB22:;
}

static void fit_timer_v1_01_b_a_0914523833_0090727531_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(392, ng5);

LAB3:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7824);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7728);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void fit_timer_v1_01_b_a_0914523833_0090727531_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(413, ng5);

LAB3:    t1 = (t0 + 7888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void fit_timer_v1_01_b_a_0914523833_0090727531_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(429, ng5);

LAB3:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 4944U);
    t3 = *((char **)t1);
    t4 = (0 + 4U);
    t1 = (t3 + t4);
    t5 = *((int *)t1);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t10 = (t2 + t9);
    t11 = *((unsigned char *)t10);
    t12 = (t0 + 7952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 7744);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void fit_timer_v1_01_b_a_0914523833_0090727531_init()
{
	static char *pe[] = {(void *)fit_timer_v1_01_b_a_0914523833_0090727531_p_0,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_p_1,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_p_2};
	static char *se[] = {(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_1393826549_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_4083363267_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_2604412845_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_1905495129_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_1038119962_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_784192562_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_773722353_1724905902,(void *)fit_timer_v1_01_b_a_0914523833_0090727531_sub_1110259624_1724905902};
	xsi_register_didat("fit_timer_v1_01_b_a_0914523833_0090727531", "isim/isim_system.exe.sim/fit_timer_v1_01_b/a_0914523833_0090727531.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
