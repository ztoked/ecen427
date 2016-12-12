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
static const char *ng0 = "C:/Xilinx/13.4/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_interconnect_v1_05_a/hdl/verilog/ict105_wdata_router.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static int sp_f_decoder(char *t1, char *t2)
{
    char t8[8];
    char t20[8];
    char t37[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;

LAB0:    t0 = 1;
    xsi_set_current_line(99, ng0);

LAB2:    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5440);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 744);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(100, ng0);

LAB6:    xsi_set_current_line(101, ng0);
    t14 = (t1 + 5120);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 5440);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t16 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB10;

LAB7:    if (t32 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t20) = 1;

LAB10:    t36 = (t1 + 5280);
    t38 = (t1 + 5280);
    t39 = (t38 + 72U);
    t40 = *((char **)t39);
    t41 = (t1 + 5440);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_bit_index(t37, t40, 2, t43, 32, 1);
    t44 = (t37 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    if (t46 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(100, ng0);
    t3 = (t1 + 5440);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 5440);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB9:    t35 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB10;

LAB11:    xsi_vlogvar_assign_value(t36, t20, 0, *((unsigned int *)t37), 1);
    goto LAB12;

}

static void Cont_138_0(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4400U);
    t3 = *((char **)t2);
    t2 = (t0 + 6168);
    t4 = (t0 + 1528);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t6 = (t0 + 5120);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);

LAB4:    t7 = (t0 + 6264);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);
    if (t15 != 0)
        goto LAB6;

LAB5:    t8 = (t0 + 6264);
    t16 = *((char **)t8);
    t8 = (t0 + 5280);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    t20 = (t0 + 1528);
    t21 = (t0 + 6168);
    t22 = 0;
    xsi_delete_subprogram_invocation(t20, t16, t0, t21, t22);
    t23 = (t0 + 8080);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 3U;
    t29 = t28;
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t19);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 1);
    t36 = (t0 + 7920);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t7 = (t0 + 6360U);
    *((char **)t7) = &&LAB4;
    goto LAB1;

}

static void Cont_141_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    t2 = (t0 + 8144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 37);
    xsi_driver_vfirst_trans(t2, 0, 36);
    t8 = (t0 + 7936);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_142_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2640U);
    t3 = *((char **)t2);
    t2 = (t0 + 8208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 7952);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_145_3(char *t0)
{
    char t5[8];
    char t38[8];
    char t69[8];
    char t73[8];
    char t111[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4560U);
    t3 = *((char **)t2);
    t2 = (t0 + 2800U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 2640U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t37);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t36 = (t5 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t70 = (t0 + 3600U);
    t71 = *((char **)t70);
    t70 = (t0 + 4240U);
    t72 = *((char **)t70);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t70 = (t71 + 4);
    t77 = (t72 + 4);
    t78 = (t73 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t69, 0, 8);
    t104 = (t73 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t73);
    t108 = (t107 & t106);
    t109 = (t108 & 3U);
    if (t109 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t104) != 0)
        goto LAB15;

LAB16:    t112 = *((unsigned int *)t38);
    t113 = *((unsigned int *)t69);
    t114 = (t112 & t113);
    *((unsigned int *)t111) = t114;
    t115 = (t38 + 4);
    t116 = (t69 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB17;

LAB18:
LAB19:    t143 = (t0 + 8272);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    t146 = (t145 + 56U);
    t147 = *((char **)t146);
    memset(t147, 0, 8);
    t148 = 1U;
    t149 = t148;
    t150 = (t111 + 4);
    t151 = *((unsigned int *)t111);
    t148 = (t148 & t151);
    t152 = *((unsigned int *)t150);
    t149 = (t149 & t152);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t154 | t148);
    t155 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t155 | t149);
    xsi_driver_vfirst_trans(t143, 0, 0);
    t156 = (t0 + 7968);
    *((int *)t156) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t5 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t5);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t63);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    goto LAB9;

LAB10:    t84 = *((unsigned int *)t73);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t73) = (t84 | t85);
    t86 = (t71 + 4);
    t87 = (t72 + 4);
    t88 = *((unsigned int *)t71);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t72);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t96 = (t89 & t91);
    t97 = (t93 & t95);
    t98 = (~(t96));
    t99 = (~(t97));
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t101 & t99);
    t102 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t102 & t98);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    goto LAB12;

LAB13:    *((unsigned int *)t69) = 1;
    goto LAB16;

LAB15:    t110 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB16;

LAB17:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t38 + 4);
    t126 = (t69 + 4);
    t127 = *((unsigned int *)t38);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (~(t129));
    t131 = *((unsigned int *)t69);
    t132 = (~(t131));
    t133 = *((unsigned int *)t126);
    t134 = (~(t133));
    t135 = (t128 & t130);
    t136 = (t132 & t134);
    t137 = (~(t135));
    t138 = (~(t136));
    t139 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t138);
    t141 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t141 & t137);
    t142 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t142 & t138);
    goto LAB19;

}

static void Cont_149_4(char *t0)
{
    char t3[8];
    char t7[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2800U);
    t5 = *((char **)t4);
    t4 = (t0 + 4560U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    xsi_vlog_mul_concat(t3, 2, 1, t2, 1U, t7, 1);
    t38 = (t0 + 4240U);
    t39 = *((char **)t38);
    t41 = *((unsigned int *)t3);
    t42 = *((unsigned int *)t39);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t38 = (t3 + 4);
    t44 = (t39 + 4);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB7;

LAB8:
LAB9:    t71 = (t0 + 8336);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t75, 0, 8);
    t76 = 3U;
    t77 = t76;
    t78 = (t40 + 4);
    t79 = *((unsigned int *)t40);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t78);
    t77 = (t77 & t80);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 | t76);
    t83 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t83 | t77);
    xsi_driver_vfirst_trans(t71, 0, 1);
    t84 = (t0 + 7984);
    *((int *)t84) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

LAB7:    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t40) = (t51 | t52);
    t53 = (t3 + 4);
    t54 = (t39 + 4);
    t55 = *((unsigned int *)t3);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB9;

}

static void Cont_152_5(char *t0)
{
    char t4[8];
    char t7[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4560U);
    t3 = *((char **)t2);
    t2 = (t0 + 3600U);
    t5 = *((char **)t2);
    t2 = (t0 + 4240U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t38 = (t7 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 & 3U);
    if (t43 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t38) != 0)
        goto LAB9;

LAB10:    t46 = *((unsigned int *)t3);
    t47 = *((unsigned int *)t4);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t3 + 4);
    t50 = (t4 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB11;

LAB12:
LAB13:    t77 = (t0 + 8400);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t45 + 4);
    t85 = *((unsigned int *)t45);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t77, 0, 0);
    t90 = (t0 + 8000);
    *((int *)t90) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t44 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB10;

LAB11:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t3 + 4);
    t60 = (t4 + 4);
    t61 = *((unsigned int *)t3);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t4);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB13;

}


extern void axi_interconnect_v1_05_a_m_00000000001214643398_2935256802_init()
{
	static char *pe[] = {(void *)Cont_138_0,(void *)Cont_141_1,(void *)Cont_142_2,(void *)Cont_145_3,(void *)Cont_149_4,(void *)Cont_152_5};
	static char *se[] = {(void *)sp_f_decoder};
	xsi_register_didat("axi_interconnect_v1_05_a_m_00000000001214643398_2935256802", "isim/isim_system.exe.sim/axi_interconnect_v1_05_a/m_00000000001214643398_2935256802.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
