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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/microblaze_v8_20_b/hdl/vhdl/count_leading_zero.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void microblaze_v8_20_b_a_1678813521_3306564128_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t11;
    unsigned int t12;
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
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4080U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 19044);
    t11 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB3;

LAB4:
LAB11:    t20 = (t0 + 10776);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t20, 0U, 1, 0LL);

LAB2:    t25 = (t0 + 10440);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 10776);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_delta(t15, 0U, 1, 0LL);
    goto LAB2;

LAB5:    t12 = 0;

LAB8:    if (t12 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned char t72;
    unsigned char t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    unsigned char t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4080U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t6 = (8 * t5);
    t7 = (t6 + 0);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 3144U);
    t15 = *((char **)t14);
    t14 = (t0 + 4080U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (8 * t17);
    t19 = (t18 + 1);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((unsigned char *)t14);
    t25 = (t24 == (unsigned char)3);
    t1 = t25;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t32 = (t0 + 3144U);
    t33 = *((char **)t32);
    t32 = (t0 + 4080U);
    t34 = *((char **)t32);
    t35 = *((int *)t34);
    t36 = (8 * t35);
    t37 = (t36 + 2);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t32 = (t33 + t41);
    t42 = *((unsigned char *)t32);
    t43 = (t42 == (unsigned char)3);
    if (t43 == 1)
        goto LAB10;

LAB11:    t44 = (t0 + 3144U);
    t45 = *((char **)t44);
    t44 = (t0 + 4080U);
    t46 = *((char **)t44);
    t47 = *((int *)t46);
    t48 = (8 * t47);
    t49 = (t48 + 3);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t44 = (t45 + t53);
    t54 = *((unsigned char *)t44);
    t55 = (t54 == (unsigned char)3);
    t31 = t55;

LAB12:    if (t31 != 0)
        goto LAB8;

LAB9:    t62 = (t0 + 3144U);
    t63 = *((char **)t62);
    t62 = (t0 + 4080U);
    t64 = *((char **)t62);
    t65 = *((int *)t64);
    t66 = (8 * t65);
    t67 = (t66 + 4);
    t68 = (t67 - 0);
    t69 = (t68 * 1);
    t70 = (1U * t69);
    t71 = (0 + t70);
    t62 = (t63 + t71);
    t72 = *((unsigned char *)t62);
    t73 = (t72 == (unsigned char)3);
    if (t73 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 3144U);
    t75 = *((char **)t74);
    t74 = (t0 + 4080U);
    t76 = *((char **)t74);
    t77 = *((int *)t76);
    t78 = (8 * t77);
    t79 = (t78 + 5);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t74 = (t75 + t83);
    t84 = *((unsigned char *)t74);
    t85 = (t84 == (unsigned char)3);
    t61 = t85;

LAB17:    if (t61 != 0)
        goto LAB13;

LAB14:
LAB18:    t91 = (t0 + 10840);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((unsigned char *)t95) = (unsigned char)3;
    xsi_driver_first_trans_delta(t91, 1U, 1, 0LL);

LAB2:    t96 = (t0 + 10456);
    *((int *)t96) = 1;

LAB1:    return;
LAB3:    t26 = (t0 + 10840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_delta(t26, 1U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t56 = (t0 + 10840);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)3;
    xsi_driver_first_trans_delta(t56, 1U, 1, 0LL);
    goto LAB2;

LAB10:    t31 = (unsigned char)1;
    goto LAB12;

LAB13:    t86 = (t0 + 10840);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)2;
    xsi_driver_first_trans_delta(t86, 1U, 1, 0LL);
    goto LAB2;

LAB15:    t61 = (unsigned char)1;
    goto LAB17;

LAB19:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_2(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned char t79;
    unsigned char t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned char t113;
    unsigned char t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4080U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 + 0);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 3144U);
    t19 = *((char **)t18);
    t18 = (t0 + 4080U);
    t20 = *((char **)t18);
    t21 = *((int *)t20);
    t22 = (8 * t21);
    t23 = (t22 + 1);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t19 + t27);
    t28 = *((unsigned char *)t18);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB5;

LAB6:    t35 = (t0 + 3144U);
    t36 = *((char **)t35);
    t35 = (t0 + 4080U);
    t37 = *((char **)t35);
    t38 = *((int *)t37);
    t39 = (8 * t38);
    t40 = (t39 + 2);
    t41 = (t40 - 0);
    t42 = (t41 * 1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t35 = (t36 + t44);
    t45 = *((unsigned char *)t35);
    t46 = (t45 == (unsigned char)3);
    if (t46 != 0)
        goto LAB7;

LAB8:    t52 = (t0 + 3144U);
    t53 = *((char **)t52);
    t52 = (t0 + 4080U);
    t54 = *((char **)t52);
    t55 = *((int *)t54);
    t56 = (8 * t55);
    t57 = (t56 + 3);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t52 = (t53 + t61);
    t62 = *((unsigned char *)t52);
    t63 = (t62 == (unsigned char)3);
    if (t63 != 0)
        goto LAB9;

LAB10:    t69 = (t0 + 3144U);
    t70 = *((char **)t69);
    t69 = (t0 + 4080U);
    t71 = *((char **)t69);
    t72 = *((int *)t71);
    t73 = (8 * t72);
    t74 = (t73 + 4);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t69 = (t70 + t78);
    t79 = *((unsigned char *)t69);
    t80 = (t79 == (unsigned char)3);
    if (t80 != 0)
        goto LAB11;

LAB12:    t86 = (t0 + 3144U);
    t87 = *((char **)t86);
    t86 = (t0 + 4080U);
    t88 = *((char **)t86);
    t89 = *((int *)t88);
    t90 = (8 * t89);
    t91 = (t90 + 5);
    t92 = (t91 - 0);
    t93 = (t92 * 1);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t86 = (t87 + t95);
    t96 = *((unsigned char *)t86);
    t97 = (t96 == (unsigned char)3);
    if (t97 != 0)
        goto LAB13;

LAB14:    t103 = (t0 + 3144U);
    t104 = *((char **)t103);
    t103 = (t0 + 4080U);
    t105 = *((char **)t103);
    t106 = *((int *)t105);
    t107 = (8 * t106);
    t108 = (t107 + 6);
    t109 = (t108 - 0);
    t110 = (t109 * 1);
    t111 = (1U * t110);
    t112 = (0 + t111);
    t103 = (t104 + t112);
    t113 = *((unsigned char *)t103);
    t114 = (t113 == (unsigned char)3);
    if (t114 != 0)
        goto LAB15;

LAB16:
LAB17:    t120 = (t0 + 10904);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    *((unsigned char *)t124) = (unsigned char)3;
    xsi_driver_first_trans_delta(t120, 2U, 1, 0LL);

LAB2:    t125 = (t0 + 10472);
    *((int *)t125) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 10904);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t13, 2U, 1, 0LL);
    goto LAB2;

LAB5:    t30 = (t0 + 10904);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_delta(t30, 2U, 1, 0LL);
    goto LAB2;

LAB7:    t47 = (t0 + 10904);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)2;
    xsi_driver_first_trans_delta(t47, 2U, 1, 0LL);
    goto LAB2;

LAB9:    t64 = (t0 + 10904);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    *((unsigned char *)t68) = (unsigned char)3;
    xsi_driver_first_trans_delta(t64, 2U, 1, 0LL);
    goto LAB2;

LAB11:    t81 = (t0 + 10904);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = (unsigned char)2;
    xsi_driver_first_trans_delta(t81, 2U, 1, 0LL);
    goto LAB2;

LAB13:    t98 = (t0 + 10904);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    *((unsigned char *)t102) = (unsigned char)3;
    xsi_driver_first_trans_delta(t98, 2U, 1, 0LL);
    goto LAB2;

LAB15:    t115 = (t0 + 10904);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    *((unsigned char *)t119) = (unsigned char)2;
    xsi_driver_first_trans_delta(t115, 2U, 1, 0LL);
    goto LAB2;

LAB18:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t11;
    unsigned int t12;
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
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 19048);
    t11 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB3;

LAB4:
LAB11:    t20 = (t0 + 10968);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t20, 3U, 1, 0LL);

LAB2:    t25 = (t0 + 10488);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 10968);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_delta(t15, 3U, 1, 0LL);
    goto LAB2;

LAB5:    t12 = 0;

LAB8:    if (t12 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned char t72;
    unsigned char t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    unsigned char t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4200U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t6 = (8 * t5);
    t7 = (t6 + 0);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 3144U);
    t15 = *((char **)t14);
    t14 = (t0 + 4200U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (8 * t17);
    t19 = (t18 + 1);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((unsigned char *)t14);
    t25 = (t24 == (unsigned char)3);
    t1 = t25;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t32 = (t0 + 3144U);
    t33 = *((char **)t32);
    t32 = (t0 + 4200U);
    t34 = *((char **)t32);
    t35 = *((int *)t34);
    t36 = (8 * t35);
    t37 = (t36 + 2);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t32 = (t33 + t41);
    t42 = *((unsigned char *)t32);
    t43 = (t42 == (unsigned char)3);
    if (t43 == 1)
        goto LAB10;

LAB11:    t44 = (t0 + 3144U);
    t45 = *((char **)t44);
    t44 = (t0 + 4200U);
    t46 = *((char **)t44);
    t47 = *((int *)t46);
    t48 = (8 * t47);
    t49 = (t48 + 3);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t44 = (t45 + t53);
    t54 = *((unsigned char *)t44);
    t55 = (t54 == (unsigned char)3);
    t31 = t55;

LAB12:    if (t31 != 0)
        goto LAB8;

LAB9:    t62 = (t0 + 3144U);
    t63 = *((char **)t62);
    t62 = (t0 + 4200U);
    t64 = *((char **)t62);
    t65 = *((int *)t64);
    t66 = (8 * t65);
    t67 = (t66 + 4);
    t68 = (t67 - 0);
    t69 = (t68 * 1);
    t70 = (1U * t69);
    t71 = (0 + t70);
    t62 = (t63 + t71);
    t72 = *((unsigned char *)t62);
    t73 = (t72 == (unsigned char)3);
    if (t73 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 3144U);
    t75 = *((char **)t74);
    t74 = (t0 + 4200U);
    t76 = *((char **)t74);
    t77 = *((int *)t76);
    t78 = (8 * t77);
    t79 = (t78 + 5);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t74 = (t75 + t83);
    t84 = *((unsigned char *)t74);
    t85 = (t84 == (unsigned char)3);
    t61 = t85;

LAB17:    if (t61 != 0)
        goto LAB13;

LAB14:
LAB18:    t91 = (t0 + 11032);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((unsigned char *)t95) = (unsigned char)3;
    xsi_driver_first_trans_delta(t91, 4U, 1, 0LL);

LAB2:    t96 = (t0 + 10504);
    *((int *)t96) = 1;

LAB1:    return;
LAB3:    t26 = (t0 + 11032);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_delta(t26, 4U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t56 = (t0 + 11032);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)3;
    xsi_driver_first_trans_delta(t56, 4U, 1, 0LL);
    goto LAB2;

LAB10:    t31 = (unsigned char)1;
    goto LAB12;

LAB13:    t86 = (t0 + 11032);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)2;
    xsi_driver_first_trans_delta(t86, 4U, 1, 0LL);
    goto LAB2;

LAB15:    t61 = (unsigned char)1;
    goto LAB17;

LAB19:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_5(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned char t79;
    unsigned char t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned char t113;
    unsigned char t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 + 0);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 3144U);
    t19 = *((char **)t18);
    t18 = (t0 + 4200U);
    t20 = *((char **)t18);
    t21 = *((int *)t20);
    t22 = (8 * t21);
    t23 = (t22 + 1);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t19 + t27);
    t28 = *((unsigned char *)t18);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB5;

LAB6:    t35 = (t0 + 3144U);
    t36 = *((char **)t35);
    t35 = (t0 + 4200U);
    t37 = *((char **)t35);
    t38 = *((int *)t37);
    t39 = (8 * t38);
    t40 = (t39 + 2);
    t41 = (t40 - 0);
    t42 = (t41 * 1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t35 = (t36 + t44);
    t45 = *((unsigned char *)t35);
    t46 = (t45 == (unsigned char)3);
    if (t46 != 0)
        goto LAB7;

LAB8:    t52 = (t0 + 3144U);
    t53 = *((char **)t52);
    t52 = (t0 + 4200U);
    t54 = *((char **)t52);
    t55 = *((int *)t54);
    t56 = (8 * t55);
    t57 = (t56 + 3);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t52 = (t53 + t61);
    t62 = *((unsigned char *)t52);
    t63 = (t62 == (unsigned char)3);
    if (t63 != 0)
        goto LAB9;

LAB10:    t69 = (t0 + 3144U);
    t70 = *((char **)t69);
    t69 = (t0 + 4200U);
    t71 = *((char **)t69);
    t72 = *((int *)t71);
    t73 = (8 * t72);
    t74 = (t73 + 4);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t69 = (t70 + t78);
    t79 = *((unsigned char *)t69);
    t80 = (t79 == (unsigned char)3);
    if (t80 != 0)
        goto LAB11;

LAB12:    t86 = (t0 + 3144U);
    t87 = *((char **)t86);
    t86 = (t0 + 4200U);
    t88 = *((char **)t86);
    t89 = *((int *)t88);
    t90 = (8 * t89);
    t91 = (t90 + 5);
    t92 = (t91 - 0);
    t93 = (t92 * 1);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t86 = (t87 + t95);
    t96 = *((unsigned char *)t86);
    t97 = (t96 == (unsigned char)3);
    if (t97 != 0)
        goto LAB13;

LAB14:    t103 = (t0 + 3144U);
    t104 = *((char **)t103);
    t103 = (t0 + 4200U);
    t105 = *((char **)t103);
    t106 = *((int *)t105);
    t107 = (8 * t106);
    t108 = (t107 + 6);
    t109 = (t108 - 0);
    t110 = (t109 * 1);
    t111 = (1U * t110);
    t112 = (0 + t111);
    t103 = (t104 + t112);
    t113 = *((unsigned char *)t103);
    t114 = (t113 == (unsigned char)3);
    if (t114 != 0)
        goto LAB15;

LAB16:
LAB17:    t120 = (t0 + 11096);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    *((unsigned char *)t124) = (unsigned char)3;
    xsi_driver_first_trans_delta(t120, 5U, 1, 0LL);

LAB2:    t125 = (t0 + 10520);
    *((int *)t125) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 11096);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t13, 5U, 1, 0LL);
    goto LAB2;

LAB5:    t30 = (t0 + 11096);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_delta(t30, 5U, 1, 0LL);
    goto LAB2;

LAB7:    t47 = (t0 + 11096);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)2;
    xsi_driver_first_trans_delta(t47, 5U, 1, 0LL);
    goto LAB2;

LAB9:    t64 = (t0 + 11096);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    *((unsigned char *)t68) = (unsigned char)3;
    xsi_driver_first_trans_delta(t64, 5U, 1, 0LL);
    goto LAB2;

LAB11:    t81 = (t0 + 11096);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = (unsigned char)2;
    xsi_driver_first_trans_delta(t81, 5U, 1, 0LL);
    goto LAB2;

LAB13:    t98 = (t0 + 11096);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    *((unsigned char *)t102) = (unsigned char)3;
    xsi_driver_first_trans_delta(t98, 5U, 1, 0LL);
    goto LAB2;

LAB15:    t115 = (t0 + 11096);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    *((unsigned char *)t119) = (unsigned char)2;
    xsi_driver_first_trans_delta(t115, 5U, 1, 0LL);
    goto LAB2;

LAB18:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t11;
    unsigned int t12;
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
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4320U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 19052);
    t11 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB3;

LAB4:
LAB11:    t20 = (t0 + 11160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t20, 6U, 1, 0LL);

LAB2:    t25 = (t0 + 10536);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 11160);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_delta(t15, 6U, 1, 0LL);
    goto LAB2;

LAB5:    t12 = 0;

LAB8:    if (t12 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned char t72;
    unsigned char t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    unsigned char t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4320U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t6 = (8 * t5);
    t7 = (t6 + 0);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 3144U);
    t15 = *((char **)t14);
    t14 = (t0 + 4320U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (8 * t17);
    t19 = (t18 + 1);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((unsigned char *)t14);
    t25 = (t24 == (unsigned char)3);
    t1 = t25;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t32 = (t0 + 3144U);
    t33 = *((char **)t32);
    t32 = (t0 + 4320U);
    t34 = *((char **)t32);
    t35 = *((int *)t34);
    t36 = (8 * t35);
    t37 = (t36 + 2);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t32 = (t33 + t41);
    t42 = *((unsigned char *)t32);
    t43 = (t42 == (unsigned char)3);
    if (t43 == 1)
        goto LAB10;

LAB11:    t44 = (t0 + 3144U);
    t45 = *((char **)t44);
    t44 = (t0 + 4320U);
    t46 = *((char **)t44);
    t47 = *((int *)t46);
    t48 = (8 * t47);
    t49 = (t48 + 3);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t44 = (t45 + t53);
    t54 = *((unsigned char *)t44);
    t55 = (t54 == (unsigned char)3);
    t31 = t55;

LAB12:    if (t31 != 0)
        goto LAB8;

LAB9:    t62 = (t0 + 3144U);
    t63 = *((char **)t62);
    t62 = (t0 + 4320U);
    t64 = *((char **)t62);
    t65 = *((int *)t64);
    t66 = (8 * t65);
    t67 = (t66 + 4);
    t68 = (t67 - 0);
    t69 = (t68 * 1);
    t70 = (1U * t69);
    t71 = (0 + t70);
    t62 = (t63 + t71);
    t72 = *((unsigned char *)t62);
    t73 = (t72 == (unsigned char)3);
    if (t73 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 3144U);
    t75 = *((char **)t74);
    t74 = (t0 + 4320U);
    t76 = *((char **)t74);
    t77 = *((int *)t76);
    t78 = (8 * t77);
    t79 = (t78 + 5);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t74 = (t75 + t83);
    t84 = *((unsigned char *)t74);
    t85 = (t84 == (unsigned char)3);
    t61 = t85;

LAB17:    if (t61 != 0)
        goto LAB13;

LAB14:
LAB18:    t91 = (t0 + 11224);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((unsigned char *)t95) = (unsigned char)3;
    xsi_driver_first_trans_delta(t91, 7U, 1, 0LL);

LAB2:    t96 = (t0 + 10552);
    *((int *)t96) = 1;

LAB1:    return;
LAB3:    t26 = (t0 + 11224);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_delta(t26, 7U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t56 = (t0 + 11224);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)3;
    xsi_driver_first_trans_delta(t56, 7U, 1, 0LL);
    goto LAB2;

LAB10:    t31 = (unsigned char)1;
    goto LAB12;

LAB13:    t86 = (t0 + 11224);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)2;
    xsi_driver_first_trans_delta(t86, 7U, 1, 0LL);
    goto LAB2;

LAB15:    t61 = (unsigned char)1;
    goto LAB17;

LAB19:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_8(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned char t79;
    unsigned char t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned char t113;
    unsigned char t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4320U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 + 0);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 3144U);
    t19 = *((char **)t18);
    t18 = (t0 + 4320U);
    t20 = *((char **)t18);
    t21 = *((int *)t20);
    t22 = (8 * t21);
    t23 = (t22 + 1);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t19 + t27);
    t28 = *((unsigned char *)t18);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB5;

LAB6:    t35 = (t0 + 3144U);
    t36 = *((char **)t35);
    t35 = (t0 + 4320U);
    t37 = *((char **)t35);
    t38 = *((int *)t37);
    t39 = (8 * t38);
    t40 = (t39 + 2);
    t41 = (t40 - 0);
    t42 = (t41 * 1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t35 = (t36 + t44);
    t45 = *((unsigned char *)t35);
    t46 = (t45 == (unsigned char)3);
    if (t46 != 0)
        goto LAB7;

LAB8:    t52 = (t0 + 3144U);
    t53 = *((char **)t52);
    t52 = (t0 + 4320U);
    t54 = *((char **)t52);
    t55 = *((int *)t54);
    t56 = (8 * t55);
    t57 = (t56 + 3);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t52 = (t53 + t61);
    t62 = *((unsigned char *)t52);
    t63 = (t62 == (unsigned char)3);
    if (t63 != 0)
        goto LAB9;

LAB10:    t69 = (t0 + 3144U);
    t70 = *((char **)t69);
    t69 = (t0 + 4320U);
    t71 = *((char **)t69);
    t72 = *((int *)t71);
    t73 = (8 * t72);
    t74 = (t73 + 4);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t69 = (t70 + t78);
    t79 = *((unsigned char *)t69);
    t80 = (t79 == (unsigned char)3);
    if (t80 != 0)
        goto LAB11;

LAB12:    t86 = (t0 + 3144U);
    t87 = *((char **)t86);
    t86 = (t0 + 4320U);
    t88 = *((char **)t86);
    t89 = *((int *)t88);
    t90 = (8 * t89);
    t91 = (t90 + 5);
    t92 = (t91 - 0);
    t93 = (t92 * 1);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t86 = (t87 + t95);
    t96 = *((unsigned char *)t86);
    t97 = (t96 == (unsigned char)3);
    if (t97 != 0)
        goto LAB13;

LAB14:    t103 = (t0 + 3144U);
    t104 = *((char **)t103);
    t103 = (t0 + 4320U);
    t105 = *((char **)t103);
    t106 = *((int *)t105);
    t107 = (8 * t106);
    t108 = (t107 + 6);
    t109 = (t108 - 0);
    t110 = (t109 * 1);
    t111 = (1U * t110);
    t112 = (0 + t111);
    t103 = (t104 + t112);
    t113 = *((unsigned char *)t103);
    t114 = (t113 == (unsigned char)3);
    if (t114 != 0)
        goto LAB15;

LAB16:
LAB17:    t120 = (t0 + 11288);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    *((unsigned char *)t124) = (unsigned char)3;
    xsi_driver_first_trans_delta(t120, 8U, 1, 0LL);

LAB2:    t125 = (t0 + 10568);
    *((int *)t125) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 11288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t13, 8U, 1, 0LL);
    goto LAB2;

LAB5:    t30 = (t0 + 11288);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_delta(t30, 8U, 1, 0LL);
    goto LAB2;

LAB7:    t47 = (t0 + 11288);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)2;
    xsi_driver_first_trans_delta(t47, 8U, 1, 0LL);
    goto LAB2;

LAB9:    t64 = (t0 + 11288);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    *((unsigned char *)t68) = (unsigned char)3;
    xsi_driver_first_trans_delta(t64, 8U, 1, 0LL);
    goto LAB2;

LAB11:    t81 = (t0 + 11288);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = (unsigned char)2;
    xsi_driver_first_trans_delta(t81, 8U, 1, 0LL);
    goto LAB2;

LAB13:    t98 = (t0 + 11288);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    *((unsigned char *)t102) = (unsigned char)3;
    xsi_driver_first_trans_delta(t98, 8U, 1, 0LL);
    goto LAB2;

LAB15:    t115 = (t0 + 11288);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    *((unsigned char *)t119) = (unsigned char)2;
    xsi_driver_first_trans_delta(t115, 8U, 1, 0LL);
    goto LAB2;

LAB18:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t11;
    unsigned int t12;
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
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4440U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 19056);
    t11 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB3;

LAB4:
LAB11:    t20 = (t0 + 11352);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t20, 9U, 1, 0LL);

LAB2:    t25 = (t0 + 10584);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 11352);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_delta(t15, 9U, 1, 0LL);
    goto LAB2;

LAB5:    t12 = 0;

LAB8:    if (t12 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned char t61;
    char *t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned char t72;
    unsigned char t73;
    char *t74;
    char *t75;
    char *t76;
    int t77;
    int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    unsigned char t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4440U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t6 = (8 * t5);
    t7 = (t6 + 0);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t12 = *((unsigned char *)t2);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 3144U);
    t15 = *((char **)t14);
    t14 = (t0 + 4440U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (8 * t17);
    t19 = (t18 + 1);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t14 = (t15 + t23);
    t24 = *((unsigned char *)t14);
    t25 = (t24 == (unsigned char)3);
    t1 = t25;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t32 = (t0 + 3144U);
    t33 = *((char **)t32);
    t32 = (t0 + 4440U);
    t34 = *((char **)t32);
    t35 = *((int *)t34);
    t36 = (8 * t35);
    t37 = (t36 + 2);
    t38 = (t37 - 0);
    t39 = (t38 * 1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t32 = (t33 + t41);
    t42 = *((unsigned char *)t32);
    t43 = (t42 == (unsigned char)3);
    if (t43 == 1)
        goto LAB10;

LAB11:    t44 = (t0 + 3144U);
    t45 = *((char **)t44);
    t44 = (t0 + 4440U);
    t46 = *((char **)t44);
    t47 = *((int *)t46);
    t48 = (8 * t47);
    t49 = (t48 + 3);
    t50 = (t49 - 0);
    t51 = (t50 * 1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t44 = (t45 + t53);
    t54 = *((unsigned char *)t44);
    t55 = (t54 == (unsigned char)3);
    t31 = t55;

LAB12:    if (t31 != 0)
        goto LAB8;

LAB9:    t62 = (t0 + 3144U);
    t63 = *((char **)t62);
    t62 = (t0 + 4440U);
    t64 = *((char **)t62);
    t65 = *((int *)t64);
    t66 = (8 * t65);
    t67 = (t66 + 4);
    t68 = (t67 - 0);
    t69 = (t68 * 1);
    t70 = (1U * t69);
    t71 = (0 + t70);
    t62 = (t63 + t71);
    t72 = *((unsigned char *)t62);
    t73 = (t72 == (unsigned char)3);
    if (t73 == 1)
        goto LAB15;

LAB16:    t74 = (t0 + 3144U);
    t75 = *((char **)t74);
    t74 = (t0 + 4440U);
    t76 = *((char **)t74);
    t77 = *((int *)t76);
    t78 = (8 * t77);
    t79 = (t78 + 5);
    t80 = (t79 - 0);
    t81 = (t80 * 1);
    t82 = (1U * t81);
    t83 = (0 + t82);
    t74 = (t75 + t83);
    t84 = *((unsigned char *)t74);
    t85 = (t84 == (unsigned char)3);
    t61 = t85;

LAB17:    if (t61 != 0)
        goto LAB13;

LAB14:
LAB18:    t91 = (t0 + 11416);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    *((unsigned char *)t95) = (unsigned char)3;
    xsi_driver_first_trans_delta(t91, 10U, 1, 0LL);

LAB2:    t96 = (t0 + 10600);
    *((int *)t96) = 1;

LAB1:    return;
LAB3:    t26 = (t0 + 11416);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_delta(t26, 10U, 1, 0LL);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t56 = (t0 + 11416);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)3;
    xsi_driver_first_trans_delta(t56, 10U, 1, 0LL);
    goto LAB2;

LAB10:    t31 = (unsigned char)1;
    goto LAB12;

LAB13:    t86 = (t0 + 11416);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)2;
    xsi_driver_first_trans_delta(t86, 10U, 1, 0LL);
    goto LAB2;

LAB15:    t61 = (unsigned char)1;
    goto LAB17;

LAB19:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_11(char *t0)
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
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned char t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned char t79;
    unsigned char t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int t89;
    int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned char t96;
    unsigned char t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned char t113;
    unsigned char t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 4440U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 + 0);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 3144U);
    t19 = *((char **)t18);
    t18 = (t0 + 4440U);
    t20 = *((char **)t18);
    t21 = *((int *)t20);
    t22 = (8 * t21);
    t23 = (t22 + 1);
    t24 = (t23 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t19 + t27);
    t28 = *((unsigned char *)t18);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB5;

LAB6:    t35 = (t0 + 3144U);
    t36 = *((char **)t35);
    t35 = (t0 + 4440U);
    t37 = *((char **)t35);
    t38 = *((int *)t37);
    t39 = (8 * t38);
    t40 = (t39 + 2);
    t41 = (t40 - 0);
    t42 = (t41 * 1);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t35 = (t36 + t44);
    t45 = *((unsigned char *)t35);
    t46 = (t45 == (unsigned char)3);
    if (t46 != 0)
        goto LAB7;

LAB8:    t52 = (t0 + 3144U);
    t53 = *((char **)t52);
    t52 = (t0 + 4440U);
    t54 = *((char **)t52);
    t55 = *((int *)t54);
    t56 = (8 * t55);
    t57 = (t56 + 3);
    t58 = (t57 - 0);
    t59 = (t58 * 1);
    t60 = (1U * t59);
    t61 = (0 + t60);
    t52 = (t53 + t61);
    t62 = *((unsigned char *)t52);
    t63 = (t62 == (unsigned char)3);
    if (t63 != 0)
        goto LAB9;

LAB10:    t69 = (t0 + 3144U);
    t70 = *((char **)t69);
    t69 = (t0 + 4440U);
    t71 = *((char **)t69);
    t72 = *((int *)t71);
    t73 = (8 * t72);
    t74 = (t73 + 4);
    t75 = (t74 - 0);
    t76 = (t75 * 1);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t69 = (t70 + t78);
    t79 = *((unsigned char *)t69);
    t80 = (t79 == (unsigned char)3);
    if (t80 != 0)
        goto LAB11;

LAB12:    t86 = (t0 + 3144U);
    t87 = *((char **)t86);
    t86 = (t0 + 4440U);
    t88 = *((char **)t86);
    t89 = *((int *)t88);
    t90 = (8 * t89);
    t91 = (t90 + 5);
    t92 = (t91 - 0);
    t93 = (t92 * 1);
    t94 = (1U * t93);
    t95 = (0 + t94);
    t86 = (t87 + t95);
    t96 = *((unsigned char *)t86);
    t97 = (t96 == (unsigned char)3);
    if (t97 != 0)
        goto LAB13;

LAB14:    t103 = (t0 + 3144U);
    t104 = *((char **)t103);
    t103 = (t0 + 4440U);
    t105 = *((char **)t103);
    t106 = *((int *)t105);
    t107 = (8 * t106);
    t108 = (t107 + 6);
    t109 = (t108 - 0);
    t110 = (t109 * 1);
    t111 = (1U * t110);
    t112 = (0 + t111);
    t103 = (t104 + t112);
    t113 = *((unsigned char *)t103);
    t114 = (t113 == (unsigned char)3);
    if (t114 != 0)
        goto LAB15;

LAB16:
LAB17:    t120 = (t0 + 11480);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    *((unsigned char *)t124) = (unsigned char)3;
    xsi_driver_first_trans_delta(t120, 11U, 1, 0LL);

LAB2:    t125 = (t0 + 10616);
    *((int *)t125) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 11480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t13, 11U, 1, 0LL);
    goto LAB2;

LAB5:    t30 = (t0 + 11480);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_delta(t30, 11U, 1, 0LL);
    goto LAB2;

LAB7:    t47 = (t0 + 11480);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)2;
    xsi_driver_first_trans_delta(t47, 11U, 1, 0LL);
    goto LAB2;

LAB9:    t64 = (t0 + 11480);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    *((unsigned char *)t68) = (unsigned char)3;
    xsi_driver_first_trans_delta(t64, 11U, 1, 0LL);
    goto LAB2;

LAB11:    t81 = (t0 + 11480);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    *((unsigned char *)t85) = (unsigned char)2;
    xsi_driver_first_trans_delta(t81, 11U, 1, 0LL);
    goto LAB2;

LAB13:    t98 = (t0 + 11480);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    *((unsigned char *)t102) = (unsigned char)3;
    xsi_driver_first_trans_delta(t98, 11U, 1, 0LL);
    goto LAB2;

LAB15:    t115 = (t0 + 11480);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    *((unsigned char *)t119) = (unsigned char)2;
    xsi_driver_first_trans_delta(t115, 11U, 1, 0LL);
    goto LAB2;

LAB18:    goto LAB2;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_12(char *t0)
{
    char *t1;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 19060);
    t3 = (6U != 6U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 11544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_delta(t4, 24U, 6U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, 6U, 0);
    goto LAB6;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_13(char *t0)
{
    char t25[16];
    char t38[16];
    char t40[16];
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
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4560U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t26 = (t0 + 4560U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t28, 3);
    t29 = (t0 + 3624U);
    t30 = *((char **)t29);
    t29 = (t0 + 4560U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (3U * t34);
    t36 = (0 + t35);
    t29 = (t30 + t36);
    t39 = ((IEEE_P_2592010699) + 4024);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 2;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (2 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t26, t25, (char)97, t29, t40, (char)101);
    t44 = (3U + 3U);
    t45 = (6U != t44);
    if (t45 == 1)
        goto LAB7;

LAB8:    t42 = (t0 + 11608);
    t46 = (t42 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t37, 6U);
    xsi_driver_first_trans_delta(t42, 18U, 6U, 0LL);

LAB2:    t50 = (t0 + 10632);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4560U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (6U * t17);
    t19 = (0 + t18);
    t11 = (t12 + t19);
    t20 = (t0 + 11608);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 6U);
    xsi_driver_first_trans_delta(t20, 18U, 6U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(6U, t44, 0);
    goto LAB8;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_14(char *t0)
{
    char t25[16];
    char t38[16];
    char t40[16];
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
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4680U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t26 = (t0 + 4680U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t28, 3);
    t29 = (t0 + 3624U);
    t30 = *((char **)t29);
    t29 = (t0 + 4680U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (3U * t34);
    t36 = (0 + t35);
    t29 = (t30 + t36);
    t39 = ((IEEE_P_2592010699) + 4024);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 2;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (2 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t26, t25, (char)97, t29, t40, (char)101);
    t44 = (3U + 3U);
    t45 = (6U != t44);
    if (t45 == 1)
        goto LAB7;

LAB8:    t42 = (t0 + 11672);
    t46 = (t42 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t37, 6U);
    xsi_driver_first_trans_delta(t42, 12U, 6U, 0LL);

LAB2:    t50 = (t0 + 10648);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4680U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (6U * t17);
    t19 = (0 + t18);
    t11 = (t12 + t19);
    t20 = (t0 + 11672);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 6U);
    xsi_driver_first_trans_delta(t20, 12U, 6U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(6U, t44, 0);
    goto LAB8;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_15(char *t0)
{
    char t25[16];
    char t38[16];
    char t40[16];
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
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4800U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t26 = (t0 + 4800U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t28, 3);
    t29 = (t0 + 3624U);
    t30 = *((char **)t29);
    t29 = (t0 + 4800U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (3U * t34);
    t36 = (0 + t35);
    t29 = (t30 + t36);
    t39 = ((IEEE_P_2592010699) + 4024);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 2;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (2 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t26, t25, (char)97, t29, t40, (char)101);
    t44 = (3U + 3U);
    t45 = (6U != t44);
    if (t45 == 1)
        goto LAB7;

LAB8:    t42 = (t0 + 11736);
    t46 = (t42 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t37, 6U);
    xsi_driver_first_trans_delta(t42, 6U, 6U, 0LL);

LAB2:    t50 = (t0 + 10664);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4800U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (6U * t17);
    t19 = (0 + t18);
    t11 = (t12 + t19);
    t20 = (t0 + 11736);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 6U);
    xsi_driver_first_trans_delta(t20, 6U, 6U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(6U, t44, 0);
    goto LAB8;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_16(char *t0)
{
    char t25[16];
    char t38[16];
    char t40[16];
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
    int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    char *t41;
    char *t42;
    int t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 4920U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t26 = (t0 + 4920U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t28, 3);
    t29 = (t0 + 3624U);
    t30 = *((char **)t29);
    t29 = (t0 + 4920U);
    t31 = *((char **)t29);
    t32 = *((int *)t31);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (3U * t34);
    t36 = (0 + t35);
    t29 = (t30 + t36);
    t39 = ((IEEE_P_2592010699) + 4024);
    t41 = (t40 + 0U);
    t42 = (t41 + 0U);
    *((int *)t42) = 0;
    t42 = (t41 + 4U);
    *((int *)t42) = 2;
    t42 = (t41 + 8U);
    *((int *)t42) = 1;
    t43 = (2 - 0);
    t44 = (t43 * 1);
    t44 = (t44 + 1);
    t42 = (t41 + 12U);
    *((unsigned int *)t42) = t44;
    t37 = xsi_base_array_concat(t37, t38, t39, (char)97, t26, t25, (char)97, t29, t40, (char)101);
    t44 = (3U + 3U);
    t45 = (6U != t44);
    if (t45 == 1)
        goto LAB7;

LAB8:    t42 = (t0 + 11800);
    t46 = (t42 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t37, 6U);
    xsi_driver_first_trans_delta(t42, 0U, 6U, 0LL);

LAB2:    t50 = (t0 + 10680);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4920U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    t18 = (6U * t17);
    t19 = (0 + t18);
    t11 = (t12 + t19);
    t20 = (t0 + 11800);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 6U);
    xsi_driver_first_trans_delta(t20, 0U, 6U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(6U, t44, 0);
    goto LAB8;

}

static void microblaze_v8_20_b_a_1678813521_3306564128_p_17(char *t0)
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

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * 1);
    t5 = (6U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 11864);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 6U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 10696);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


void ieee_p_2592010699_sub_3130575329_503743352();

void ieee_p_2592010699_sub_3130575329_503743352();

extern void microblaze_v8_20_b_a_1678813521_3306564128_init()
{
	static char *pe[] = {(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_0,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_1,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_2,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_3,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_4,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_5,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_6,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_7,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_8,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_9,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_10,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_11,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_12,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_13,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_14,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_15,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_16,(void *)microblaze_v8_20_b_a_1678813521_3306564128_p_17};
	xsi_register_didat("microblaze_v8_20_b_a_1678813521_3306564128", "isim/isim_system.exe.sim/microblaze_v8_20_b/a_1678813521_3306564128.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
	xsi_register_resolution_function(4, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 3);
}
