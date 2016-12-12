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
static const char *ng0 = "E:/427/Lab7/HardWare/pcores/pit_v1_00_a/hdl/vhdl/user_logic.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1781543830_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void pit_v1_00_a_a_2077933976_3306564128_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    char *t12;

LAB0:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9088);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t1 = (t0 + 9344);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 9408);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t2 = (t0 + 9344);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    memcpy(t12, t6, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_1(char *t0)
{
    char t4[16];
    char t19[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
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
    char *t56;

LAB0:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 14748U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t4, 1, 32);
    t6 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2792U);
    t9 = *((char **)t8);
    t8 = (t0 + 14748U);
    t10 = ieee_p_1242562249_sub_1781543830_1035706684(IEEE_P_1242562249, t9, t8, 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    t1 = t7;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t33 = (t0 + 3432U);
    t34 = *((char **)t33);
    t35 = (2 - 31);
    t36 = (t35 * -1);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t33 = (t34 + t38);
    t39 = *((unsigned char *)t33);
    t40 = (t39 == (unsigned char)3);
    if (t40 == 1)
        goto LAB15;

LAB16:    t32 = (unsigned char)0;

LAB17:    if (t32 != 0)
        goto LAB13;

LAB14:
LAB18:    t50 = (t0 + 2792U);
    t51 = *((char **)t50);
    t50 = (t0 + 9472);
    t52 = (t50 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memcpy(t55, t51, 32U);
    xsi_driver_first_trans_fast(t50);

LAB2:    t56 = (t0 + 9104);
    *((int *)t56) = 1;

LAB1:    return;
LAB3:    t20 = (t0 + 2792U);
    t21 = *((char **)t20);
    t20 = (t0 + 14748U);
    t22 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t19, t21, t20, 1);
    t23 = (t19 + 12U);
    t24 = *((unsigned int *)t23);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB11;

LAB12:    t27 = (t0 + 9472);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 32U);
    xsi_driver_first_trans_fast(t27);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t11 = (t0 + 3432U);
    t12 = *((char **)t11);
    t13 = (0 - 31);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t17 == (unsigned char)3);
    t7 = t18;
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, t25, 0);
    goto LAB12;

LAB13:    t44 = (t0 + 3272U);
    t45 = *((char **)t44);
    t44 = (t0 + 9472);
    t46 = (t44 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t45, 32U);
    xsi_driver_first_trans_fast(t44);
    goto LAB2;

LAB15:    t41 = (t0 + 2792U);
    t42 = *((char **)t41);
    t41 = (t0 + 14748U);
    t43 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t42, t41, 0);
    t32 = t43;
    goto LAB17;

LAB19:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;

LAB0:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 14748U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, 1);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t18 = (t0 + 9536);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 9120);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 9536);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t5 = (t0 + 3432U);
    t6 = *((char **)t5);
    t7 = (1 - 31);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t5 = (t6 + t10);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB9:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(189, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 9136);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(190, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 9152);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_5(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(191, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t10 = (1 - 2);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1992U);
    t17 = *((char **)t16);
    t18 = (2 - 2);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 9728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 9168);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_6(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = (1 - 2);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 1832U);
    t17 = *((char **)t16);
    t18 = (2 - 2);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t16 = (t17 + t21);
    t22 = *((unsigned char *)t16);
    t23 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t15, t22);
    t24 = (t0 + 9792);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t23;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 9184);
    *((int *)t29) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_7(char *t0)
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
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    char *t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    int t44;
    int t45;
    int t46;
    char *t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    int t54;
    int t55;
    int t56;
    char *t57;
    int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    int t76;
    int t77;
    int t78;
    char *t79;
    int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    int t86;
    int t87;
    int t88;
    char *t89;
    int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;

LAB0:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9200);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(199, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 15137);
    t17 = xsi_mem_cmp(t2, t4, 3U);
    if (t17 == 1)
        goto LAB12;

LAB16:    t8 = (t0 + 15140);
    t18 = xsi_mem_cmp(t8, t4, 3U);
    if (t18 == 1)
        goto LAB13;

LAB17:    t12 = (t0 + 15143);
    t19 = xsi_mem_cmp(t12, t4, 3U);
    if (t19 == 1)
        goto LAB14;

LAB18:
LAB15:    xsi_set_current_line(223, ng0);

LAB11:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(200, ng0);
    t4 = xsi_get_transient_memory(32U);
    memset(t4, 0, 32U);
    t11 = t4;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 9856);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 32U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(201, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 9920);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(202, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 9984);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB12:    xsi_set_current_line(206, ng0);
    t20 = (32 / 8);
    t21 = (t20 - 1);
    t14 = (t0 + 15146);
    *((int *)t14) = 0;
    t15 = (t0 + 15150);
    *((int *)t15) = t21;
    t22 = 0;
    t23 = t21;

LAB20:    if (t22 <= t23)
        goto LAB21;

LAB23:    goto LAB11;

LAB13:    xsi_set_current_line(212, ng0);
    t17 = (32 / 8);
    t18 = (t17 - 1);
    t2 = (t0 + 15154);
    *((int *)t2) = 0;
    t4 = (t0 + 15158);
    *((int *)t4) = t18;
    t19 = 0;
    t20 = t18;

LAB30:    if (t19 <= t20)
        goto LAB31;

LAB33:    goto LAB11;

LAB14:    xsi_set_current_line(218, ng0);
    t17 = (32 / 8);
    t18 = (t17 - 1);
    t2 = (t0 + 15162);
    *((int *)t2) = 0;
    t4 = (t0 + 15166);
    *((int *)t4) = t18;
    t19 = 0;
    t20 = t18;

LAB40:    if (t19 <= t20)
        goto LAB41;

LAB43:    goto LAB11;

LAB19:;
LAB21:    xsi_set_current_line(207, ng0);
    t16 = (t0 + 1672U);
    t24 = *((char **)t16);
    t16 = (t0 + 15146);
    t25 = *((int *)t16);
    t26 = (t25 - 3);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t16));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t30 = (t24 + t29);
    t1 = *((unsigned char *)t30);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB24;

LAB26:
LAB25:
LAB22:    t2 = (t0 + 15146);
    t22 = *((int *)t2);
    t4 = (t0 + 15150);
    t23 = *((int *)t4);
    if (t22 == t23)
        goto LAB23;

LAB29:    t17 = (t22 + 1);
    t22 = t17;
    t5 = (t0 + 15146);
    *((int *)t5) = t22;
    goto LAB20;

LAB24:    xsi_set_current_line(208, ng0);
    t31 = (t0 + 1512U);
    t32 = *((char **)t31);
    t31 = (t0 + 15146);
    t33 = *((int *)t31);
    t34 = (t33 * 8);
    t35 = (t34 + 7);
    t36 = (31 - t35);
    t37 = (t0 + 15146);
    t38 = *((int *)t37);
    t39 = (t38 * 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t35, t39, -1);
    t40 = (t36 * 1U);
    t41 = (0 + t40);
    t42 = (t32 + t41);
    t43 = (t0 + 15146);
    t44 = *((int *)t43);
    t45 = (t44 * 8);
    t46 = (t45 + 7);
    t47 = (t0 + 15146);
    t48 = *((int *)t47);
    t49 = (t48 * 8);
    t50 = (t49 - t46);
    t51 = (t50 * -1);
    t51 = (t51 + 1);
    t52 = (1U * t51);
    t53 = (t0 + 15146);
    t54 = *((int *)t53);
    t55 = (t54 * 8);
    t56 = (t55 + 7);
    t57 = (t0 + 15146);
    t58 = *((int *)t57);
    t59 = (t58 * 8);
    t60 = (t59 - t56);
    t61 = (t60 * -1);
    t61 = (t61 + 1);
    t62 = (1U * t61);
    t6 = (t52 != t62);
    if (t6 == 1)
        goto LAB27;

LAB28:    t63 = (t0 + 15146);
    t64 = *((int *)t63);
    t65 = (t64 * 8);
    t66 = (t65 + 7);
    t67 = (31 - t66);
    t68 = (1U * t67);
    t69 = (0U + t68);
    t70 = (t0 + 9856);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t0 + 15146);
    t76 = *((int *)t75);
    t77 = (t76 * 8);
    t78 = (t77 + 7);
    t79 = (t0 + 15146);
    t80 = *((int *)t79);
    t81 = (t80 * 8);
    t82 = (t81 - t78);
    t83 = (t82 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t74, t42, t84);
    t85 = (t0 + 15146);
    t86 = *((int *)t85);
    t87 = (t86 * 8);
    t88 = (t87 + 7);
    t89 = (t0 + 15146);
    t90 = *((int *)t89);
    t91 = (t90 * 8);
    t92 = (t91 - t88);
    t93 = (t92 * -1);
    t93 = (t93 + 1);
    t94 = (1U * t93);
    xsi_driver_first_trans_delta(t70, t69, t94, 0LL);
    goto LAB25;

LAB27:    xsi_size_not_matching(t52, t62, 0);
    goto LAB28;

LAB31:    xsi_set_current_line(213, ng0);
    t5 = (t0 + 1672U);
    t8 = *((char **)t5);
    t5 = (t0 + 15154);
    t21 = *((int *)t5);
    t22 = (t21 - 3);
    t27 = (t22 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t5));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t11 = (t8 + t29);
    t1 = *((unsigned char *)t11);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB34;

LAB36:
LAB35:
LAB32:    t2 = (t0 + 15154);
    t19 = *((int *)t2);
    t4 = (t0 + 15158);
    t20 = *((int *)t4);
    if (t19 == t20)
        goto LAB33;

LAB39:    t17 = (t19 + 1);
    t19 = t17;
    t5 = (t0 + 15154);
    *((int *)t5) = t19;
    goto LAB30;

LAB34:    xsi_set_current_line(214, ng0);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t12 = (t0 + 15154);
    t23 = *((int *)t12);
    t25 = (t23 * 8);
    t26 = (t25 + 7);
    t36 = (31 - t26);
    t14 = (t0 + 15154);
    t33 = *((int *)t14);
    t34 = (t33 * 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t26, t34, -1);
    t40 = (t36 * 1U);
    t41 = (0 + t40);
    t15 = (t13 + t41);
    t16 = (t0 + 15154);
    t35 = *((int *)t16);
    t38 = (t35 * 8);
    t39 = (t38 + 7);
    t24 = (t0 + 15154);
    t44 = *((int *)t24);
    t45 = (t44 * 8);
    t46 = (t45 - t39);
    t51 = (t46 * -1);
    t51 = (t51 + 1);
    t52 = (1U * t51);
    t30 = (t0 + 15154);
    t48 = *((int *)t30);
    t49 = (t48 * 8);
    t50 = (t49 + 7);
    t31 = (t0 + 15154);
    t54 = *((int *)t31);
    t55 = (t54 * 8);
    t56 = (t55 - t50);
    t61 = (t56 * -1);
    t61 = (t61 + 1);
    t62 = (1U * t61);
    t6 = (t52 != t62);
    if (t6 == 1)
        goto LAB37;

LAB38:    t32 = (t0 + 15154);
    t58 = *((int *)t32);
    t59 = (t58 * 8);
    t60 = (t59 + 7);
    t67 = (31 - t60);
    t68 = (1U * t67);
    t69 = (0U + t68);
    t37 = (t0 + 9920);
    t42 = (t37 + 56U);
    t43 = *((char **)t42);
    t47 = (t43 + 56U);
    t53 = *((char **)t47);
    t57 = (t0 + 15154);
    t64 = *((int *)t57);
    t65 = (t64 * 8);
    t66 = (t65 + 7);
    t63 = (t0 + 15154);
    t76 = *((int *)t63);
    t77 = (t76 * 8);
    t78 = (t77 - t66);
    t83 = (t78 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t53, t15, t84);
    t70 = (t0 + 15154);
    t80 = *((int *)t70);
    t81 = (t80 * 8);
    t82 = (t81 + 7);
    t71 = (t0 + 15154);
    t86 = *((int *)t71);
    t87 = (t86 * 8);
    t88 = (t87 - t82);
    t93 = (t88 * -1);
    t93 = (t93 + 1);
    t94 = (1U * t93);
    xsi_driver_first_trans_delta(t37, t69, t94, 0LL);
    goto LAB35;

LAB37:    xsi_size_not_matching(t52, t62, 0);
    goto LAB38;

LAB41:    xsi_set_current_line(219, ng0);
    t5 = (t0 + 1672U);
    t8 = *((char **)t5);
    t5 = (t0 + 15162);
    t21 = *((int *)t5);
    t22 = (t21 - 3);
    t27 = (t22 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t5));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t11 = (t8 + t29);
    t1 = *((unsigned char *)t11);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB44;

LAB46:
LAB45:
LAB42:    t2 = (t0 + 15162);
    t19 = *((int *)t2);
    t4 = (t0 + 15166);
    t20 = *((int *)t4);
    if (t19 == t20)
        goto LAB43;

LAB49:    t17 = (t19 + 1);
    t19 = t17;
    t5 = (t0 + 15162);
    *((int *)t5) = t19;
    goto LAB40;

LAB44:    xsi_set_current_line(220, ng0);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t12 = (t0 + 15162);
    t23 = *((int *)t12);
    t25 = (t23 * 8);
    t26 = (t25 + 7);
    t36 = (31 - t26);
    t14 = (t0 + 15162);
    t33 = *((int *)t14);
    t34 = (t33 * 8);
    xsi_vhdl_check_range_of_slice(31, 0, -1, t26, t34, -1);
    t40 = (t36 * 1U);
    t41 = (0 + t40);
    t15 = (t13 + t41);
    t16 = (t0 + 15162);
    t35 = *((int *)t16);
    t38 = (t35 * 8);
    t39 = (t38 + 7);
    t24 = (t0 + 15162);
    t44 = *((int *)t24);
    t45 = (t44 * 8);
    t46 = (t45 - t39);
    t51 = (t46 * -1);
    t51 = (t51 + 1);
    t52 = (1U * t51);
    t30 = (t0 + 15162);
    t48 = *((int *)t30);
    t49 = (t48 * 8);
    t50 = (t49 + 7);
    t31 = (t0 + 15162);
    t54 = *((int *)t31);
    t55 = (t54 * 8);
    t56 = (t55 - t50);
    t61 = (t56 * -1);
    t61 = (t61 + 1);
    t62 = (1U * t61);
    t6 = (t52 != t62);
    if (t6 == 1)
        goto LAB47;

LAB48:    t32 = (t0 + 15162);
    t58 = *((int *)t32);
    t59 = (t58 * 8);
    t60 = (t59 + 7);
    t67 = (31 - t60);
    t68 = (1U * t67);
    t69 = (0U + t68);
    t37 = (t0 + 9984);
    t42 = (t37 + 56U);
    t43 = *((char **)t42);
    t47 = (t43 + 56U);
    t53 = *((char **)t47);
    t57 = (t0 + 15162);
    t64 = *((int *)t57);
    t65 = (t64 * 8);
    t66 = (t65 + 7);
    t63 = (t0 + 15162);
    t76 = *((int *)t63);
    t77 = (t76 * 8);
    t78 = (t77 - t66);
    t83 = (t78 * -1);
    t83 = (t83 + 1);
    t84 = (1U * t83);
    memcpy(t53, t15, t84);
    t70 = (t0 + 15162);
    t80 = *((int *)t70);
    t81 = (t80 * 8);
    t82 = (t81 + 7);
    t71 = (t0 + 15162);
    t86 = *((int *)t71);
    t87 = (t86 * 8);
    t88 = (t87 - t82);
    t93 = (t88 * -1);
    t93 = (t93 + 1);
    t94 = (1U * t93);
    xsi_driver_first_trans_delta(t37, t69, t94, 0LL);
    goto LAB45;

LAB47:    xsi_size_not_matching(t52, t62, 0);
    goto LAB48;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 15170);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 15173);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 15176);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(238, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 10048);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 9216);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(235, ng0);
    t11 = (t0 + 3272U);
    t12 = *((char **)t11);
    t11 = (t0 + 10048);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 32U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB4:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10048);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 10048);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:;
}

static void pit_v1_00_a_a_2077933976_3306564128_p_9(char *t0)
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
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(32U);
    memset(t10, 0, 32U);
    t11 = t10;
    memset(t11, (unsigned char)2, 32U);
    t12 = (t0 + 10112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 9232);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t1 = (t0 + 10112);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(249, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10176);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9248);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(250, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10240);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9264);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void pit_v1_00_a_a_2077933976_3306564128_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(251, ng0);

LAB3:    t1 = (t0 + 10304);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void pit_v1_00_a_a_2077933976_3306564128_init()
{
	static char *pe[] = {(void *)pit_v1_00_a_a_2077933976_3306564128_p_0,(void *)pit_v1_00_a_a_2077933976_3306564128_p_1,(void *)pit_v1_00_a_a_2077933976_3306564128_p_2,(void *)pit_v1_00_a_a_2077933976_3306564128_p_3,(void *)pit_v1_00_a_a_2077933976_3306564128_p_4,(void *)pit_v1_00_a_a_2077933976_3306564128_p_5,(void *)pit_v1_00_a_a_2077933976_3306564128_p_6,(void *)pit_v1_00_a_a_2077933976_3306564128_p_7,(void *)pit_v1_00_a_a_2077933976_3306564128_p_8,(void *)pit_v1_00_a_a_2077933976_3306564128_p_9,(void *)pit_v1_00_a_a_2077933976_3306564128_p_10,(void *)pit_v1_00_a_a_2077933976_3306564128_p_11,(void *)pit_v1_00_a_a_2077933976_3306564128_p_12};
	xsi_register_didat("pit_v1_00_a_a_2077933976_3306564128", "isim/isim_system.exe.sim/pit_v1_00_a/a_2077933976_3306564128.didat");
	xsi_register_executes(pe);
}
